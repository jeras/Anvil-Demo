// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMEXAMPLE_H_
#define VERILATED_VTOP_MEMEXAMPLE_H_  // guard

#include "verilated.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_MemExample final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__i_valid,0,0);
    VL_IN8(__PVT__byteEnable,3,0);
    VL_IN8(__PVT__storeValid,0,0);
    VL_OUT8(__PVT__loadDataValid,0,0);
    VL_OUT8(__PVT__storeComplete,0,0);
    CData/*0:0*/ __PVT__storeValid_q;
    CData/*0:0*/ __Vstrobe0;
    VL_IN(__PVT__i_address,31,0);
    VL_OUT(__PVT__i_data,31,0);
    VL_IN(__PVT__d_address,31,0);
    VL_IN(__PVT__storeData,31,0);
    VL_OUT(__PVT__loadData,31,0);
    IData/*31:0*/ __PVT__unnamedblk2__DOT__word;
    VlUnpacked<IData/*31:0*/, 524288> mem;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_MemExample(VTop__Syms* symsp, const char* v__name);
    ~VTop_MemExample();
    VL_UNCOPYABLE(VTop_MemExample);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
