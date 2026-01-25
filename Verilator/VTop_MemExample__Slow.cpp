// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemExample.h"
#include "VTop__Syms.h"

void VTop_MemExample___ctor_var_reset(VTop_MemExample* vlSelf);

VTop_MemExample::VTop_MemExample(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_MemExample___ctor_var_reset(this);
}

void VTop_MemExample::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_MemExample::~VTop_MemExample() {
}
