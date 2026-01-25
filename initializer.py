from elftools.elf.elffile import ELFFile
import sys
import argparse

# SoftCPU Memory Configuration
# Unified memory space (Harvard interface but shared physical memory in MemExample.sv)
# Unified memory space (Harvard interface but shared physical memory in MemExample.sv)
# 2MB size (524288 words to match RTL)
MEM_SIZE_WORDS = 524288
ADDR_MASK = (MEM_SIZE_WORDS * 4) - 1 

def main():
    parser = argparse.ArgumentParser(description="Convert ELF to mem.hex for SoftCPU")
    parser.add_argument("elf", help="Input ELF file")
    parser.add_argument("hex", help="Output HEX file", default="mem.hex", nargs="?")
    args = parser.parse_args()

    mem = {}

    with open(args.elf, "rb") as f:
        elf = ELFFile(f)

        for sec in elf.iter_sections():
            if sec['sh_flags'] & 0x2: # SHF_ALLOC
                addr = sec['sh_addr']
                data = sec.data()
                
                # Handle NOBITS (BSS)
                if sec['sh_type'] == 'SHT_NOBITS':
                    data = b'\x00' * sec['sh_size']

                if len(data) == 0:
                    continue

                # Map content to memory
                for i in range(0, len(data), 4):
                    chunk = data[i:i+4]
                    if len(chunk) < 4:
                        chunk += b'\x00' * (4 - len(chunk))
                    
                    word_val = int.from_bytes(chunk, byteorder='little')
                    
                    current_addr = addr + i
                    word_idx = current_addr >> 2
                    
                    mem[word_idx] = word_val

    # Write hex file
    # Format: 8-digit hex string per line, index 0 to max_idx
    max_idx = max(mem.keys()) if mem else 0
    
    with open(args.hex, "w") as f:
        for i in range(max_idx + 1):
             val = mem.get(i, 0)
             f.write(f"{val:08x}\n")
    
    print(f"Written {args.hex} with max word index {max_idx}")

if __name__ == "__main__":
    main()
