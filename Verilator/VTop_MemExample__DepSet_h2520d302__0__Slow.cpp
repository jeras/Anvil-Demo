// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemExample.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_MemExample___eval_postponed__TOP__Top__mem_inst(VTop_MemExample* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_MemExample___eval_postponed__TOP__Top__mem_inst\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->__Vstrobe0)) {
        VL_WRITEF("Stored %08x at %08x\n",32,vlSelf->__PVT__unnamedblk2__DOT__word,
                  32,((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)));
        vlSelf->__Vstrobe0 = 0U;
    }
}
