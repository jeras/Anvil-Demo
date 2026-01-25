OUTPUT_ARCH("riscv")
ENTRY(rvtest_entry_point)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 0x00200000  /* 2 MiB */
}

SECTIONS
{
  . = ORIGIN(RAM);

  .text.init : { *(.text.init) } > RAM
  .text      : { *(.text*)     } > RAM

  . = ALIGN(16);
  .rodata : { *(.rodata*) } > RAM

  . = ALIGN(16);
  .data : { *(.data*) } > RAM
  .data.string : { *(.data.string*) } > RAM

  . = ALIGN(16);
  .bss : { *(.bss*) *(COMMON) } > RAM

  . = ALIGN(16);
  .tohost   : { *(.tohost) } > RAM
  .fromhost : { *(.fromhost) } > RAM

  _end = .;

  /* Put stack at top of RAM (startup code must use this) */
  __stack_top = ORIGIN(RAM) + LENGTH(RAM);
}
