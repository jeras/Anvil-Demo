// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemExample.h"

VL_ATTR_COLD void VTop_MemExample___eval_initial__TOP__Top__mem_inst(VTop_MemExample* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_MemExample___eval_initial__TOP__Top__mem_inst\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    __PVT__unnamedblk1__DOT__i = 0;
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __PVT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80000U, __PVT__unnamedblk1__DOT__i)) {
        vlSelf->mem[(0x7ffffU & __PVT__unnamedblk1__DOT__i)] = 0U;
        __PVT__unnamedblk1__DOT__i = ((IData)(1U) + __PVT__unnamedblk1__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x2f6d656dU;
    __Vtemp_2[2U] = 0x66616365U;
    __Vtemp_2[3U] = 0x6e746572U;
    __Vtemp_2[4U] = 0x72652f49U;
    __Vtemp_2[5U] = 0x436fU;
    VL_READMEM_N(true, 32, 524288, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_2)
                 ,  &(vlSelf->mem), 0, ~0ULL);
}

VL_ATTR_COLD void VTop_MemExample___ctor_var_reset(VTop_MemExample* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_MemExample___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__storeData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__byteEnable = VL_RAND_RESET_I(4);
    vlSelf->__PVT__storeValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__loadData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__loadDataValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__storeComplete = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__storeValid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vstrobe0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__word = VL_RAND_RESET_I(32);
}
