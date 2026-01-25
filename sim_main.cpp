#include "Verilator/VTop.h"
#include "Verilator/VTop___024root.h"
#include "Verilator/VTop_Top.h"
#include "Verilator/VTop_MemExample.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    std::string signature_file;
    uint32_t begin_signature = 0;
    uint32_t end_signature = 0;
    uint32_t tohost_addr = 0;
    
    // Parse arguments
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--signature" && i + 1 < argc) {
            signature_file = argv[++i];
        } else if (arg == "--begin-signature" && i + 1 < argc) {
            begin_signature = std::stoul(argv[++i], nullptr, 0);
        } else if (arg == "--end-signature" && i + 1 < argc) {
            end_signature = std::stoul(argv[++i], nullptr, 0);
        } else if (arg == "--tohost" && i + 1 < argc) {
            tohost_addr = std::stoul(argv[++i], nullptr, 0);
        }
    }

    VTop top;
    
    // Reset sequence
    top.reset = 1;
    for (int i = 0; i < 5; i++) {
        top.clock = 0; top.eval();
        top.clock = 1; top.eval();
    }
    top.reset = 0;

    printf("SIM: starting execution\n");
    printf("SIM: tohost=0x%08x begin=0x%08x end=0x%08x sig=%s\n", 
           tohost_addr, begin_signature, end_signature, signature_file.c_str());

    bool done = false;
    int max_cycles = 500000; // Safety limit
    
    for (int i = 0; i < max_cycles; i++) {
        top.clock = 0; top.eval();
        top.clock = 1; top.eval();
        
        // Monitor tohost
        if (tohost_addr != 0) {
            uint32_t word_idx = tohost_addr / 4;
            if (word_idx < 524288) {
                 uint32_t val = top.rootp->Top->mem_inst->mem[word_idx];
                 if (val != 0) {
                     printf("SIM: tohost triggered with value 0x%08x at cycle %d\n", val, i);
                     done = true;
                     break;
                 }
            }
        }
    }

    // Always dump signature if we have the parameters (even on timeout)
    if (!signature_file.empty() && begin_signature != 0 && end_signature != 0) {
        std::ofstream sig(signature_file);
        uint32_t start_idx = begin_signature / 4;
        uint32_t end_idx = end_signature / 4;
        
        for (uint32_t idx = start_idx; idx < end_idx; ++idx) {
            if (idx < 524288) {
                sig << std::setfill('0') << std::setw(8) << std::hex << top.rootp->Top->mem_inst->mem[idx] << std::endl;
            }
        }
        printf("Signature dumped to %s (done=%d)\n", signature_file.c_str(), done);
    }
    
    if (!done) {
        printf("SIM: Timeout or tohost not triggered\n");
    }

    return 0;
}
