// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemExample.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_MemExample___ico_sequent__TOP__Top__mem_inst__0(VTop_MemExample* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_MemExample___ico_sequent__TOP__Top__mem_inst__0\n"); );
    // Body
    vlSelf->__PVT__loadData = ((IData)(vlSymsp->TOP.reset)
                                ? 0U : vlSelf->mem[
                               (0x7ffffU & ((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[4U] 
                                             << 0xfU) 
                                            | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                               >> 0x11U)))]);
    vlSelf->__PVT__i_valid = 0U;
    vlSelf->__PVT__i_data = 0x13U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((0U == (3U & vlSymsp->TOP__Top.__PVT__fetch__DOT__programCounter))) {
            vlSelf->__PVT__i_valid = 1U;
            vlSelf->__PVT__i_data = vlSelf->mem[(0x7ffffU 
                                                 & (vlSymsp->TOP__Top.__PVT__fetch__DOT__programCounter 
                                                    >> 2U))];
        }
    }
}

VL_INLINE_OPT void VTop_MemExample___nba_sequent__TOP__Top__mem_inst__0(VTop_MemExample* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_MemExample___nba_sequent__TOP__Top__mem_inst__0\n"); );
    // Init
    IData/*18:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    __Vdlyvval__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__storeComplete = 0U;
    } else {
        vlSelf->__PVT__storeComplete = 0U;
        if (((IData)(vlSymsp->TOP__Top.__PVT__storeValid) 
             & (~ (IData)(vlSelf->__PVT__storeValid_q)))) {
            vlSelf->__PVT__unnamedblk2__DOT__word = 
                vlSelf->mem[(0x7ffffU & ((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[4U] 
                                          << 0xfU) 
                                         | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                            >> 0x11U)))];
            vlSelf->__Vstrobe0 = 1U;
            if ((1U & ((IData)(vlSymsp->TOP__Top.__PVT__memory__DOT__storeByteEnable) 
                       << (3U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                 >> 0xfU))))) {
                vlSelf->__PVT__unnamedblk2__DOT__word 
                    = ((0xffffff00U & vlSelf->__PVT__unnamedblk2__DOT__word) 
                       | (0xffU & (((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                     << 0x11U) | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[2U] 
                                                  >> 0xfU)) 
                                   << (0x18U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                                >> 0xcU)))));
            }
            vlSelf->__PVT__storeComplete = 1U;
            if ((2U & ((IData)(vlSymsp->TOP__Top.__PVT__memory__DOT__storeByteEnable) 
                       << (3U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                 >> 0xfU))))) {
                vlSelf->__PVT__unnamedblk2__DOT__word 
                    = ((0xffff00ffU & vlSelf->__PVT__unnamedblk2__DOT__word) 
                       | (0xff00U & (((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                       << 0x11U) | 
                                      (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[2U] 
                                       >> 0xfU)) << 
                                     (0x18U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                               >> 0xcU)))));
            }
            if ((4U & ((IData)(vlSymsp->TOP__Top.__PVT__memory__DOT__storeByteEnable) 
                       << (3U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                 >> 0xfU))))) {
                vlSelf->__PVT__unnamedblk2__DOT__word 
                    = ((0xff00ffffU & vlSelf->__PVT__unnamedblk2__DOT__word) 
                       | (0xff0000U & (((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[2U] 
                                           >> 0xfU)) 
                                       << (0x18U & 
                                           (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                            >> 0xcU)))));
            }
            if ((8U & ((IData)(vlSymsp->TOP__Top.__PVT__memory__DOT__storeByteEnable) 
                       << (3U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                 >> 0xfU))))) {
                vlSelf->__PVT__unnamedblk2__DOT__word 
                    = ((0xffffffU & vlSelf->__PVT__unnamedblk2__DOT__word) 
                       | (0xff000000U & (((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                           << 0x11U) 
                                          | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[2U] 
                                             >> 0xfU)) 
                                         << (0x18U 
                                             & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                                >> 0xcU)))));
            }
            __Vdlyvval__mem__v0 = vlSelf->__PVT__unnamedblk2__DOT__word;
            __Vdlyvset__mem__v0 = 1U;
            __Vdlyvdim0__mem__v0 = (0x7ffffU & ((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[4U] 
                                                 << 0xfU) 
                                                | (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[3U] 
                                                   >> 0x11U)));
        }
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
    vlSelf->__PVT__storeValid_q = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && (IData)(vlSymsp->TOP__Top.__PVT__storeValid));
}
