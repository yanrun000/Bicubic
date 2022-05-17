// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinterpolation_compute_spline__Syms.h"


//======================

void Vinterpolation_compute_spline::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vinterpolation_compute_spline::traceInit, &Vinterpolation_compute_spline::traceFull, &Vinterpolation_compute_spline::traceChg, this);
}
void Vinterpolation_compute_spline::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vinterpolation_compute_spline* t=(Vinterpolation_compute_spline*)userthis;
    Vinterpolation_compute_spline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vinterpolation_compute_spline::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vinterpolation_compute_spline* t=(Vinterpolation_compute_spline*)userthis;
    Vinterpolation_compute_spline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vinterpolation_compute_spline::traceInitThis(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vinterpolation_compute_spline::traceFullThis(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vinterpolation_compute_spline::traceInitThis__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+16,"clock",-1);
	vcdp->declBit  (c+17,"reset",-1);
	vcdp->declBus  (c+18,"io_i_in",-1,7,0);
	vcdp->declBus  (c+19,"io_j_in",-1,7,0);
	vcdp->declBus  (c+20,"io_x_in",-1,7,0);
	vcdp->declBus  (c+21,"io_y_in",-1,7,0);
	vcdp->declBus  (c+22,"io_coefficient_0",-1,31,0);
	vcdp->declBus  (c+23,"io_coefficient_1",-1,31,0);
	vcdp->declBus  (c+24,"io_coefficient_2",-1,31,0);
	vcdp->declBus  (c+25,"io_coefficient_3",-1,31,0);
	vcdp->declBus  (c+26,"io_coefficient_4",-1,31,0);
	vcdp->declBus  (c+27,"io_coefficient_5",-1,31,0);
	vcdp->declBus  (c+28,"io_coefficient_6",-1,31,0);
	vcdp->declBus  (c+29,"io_coefficient_7",-1,31,0);
	vcdp->declBus  (c+30,"io_coefficient_8",-1,31,0);
	vcdp->declBus  (c+31,"io_coefficient_9",-1,31,0);
	vcdp->declBus  (c+32,"io_coefficient_10",-1,31,0);
	vcdp->declBus  (c+33,"io_coefficient_11",-1,31,0);
	vcdp->declBus  (c+34,"io_coefficient_12",-1,31,0);
	vcdp->declBus  (c+35,"io_coefficient_13",-1,31,0);
	vcdp->declBus  (c+36,"io_coefficient_14",-1,31,0);
	vcdp->declBus  (c+37,"io_coefficient_15",-1,31,0);
	vcdp->declBus  (c+38,"io_interpolation_compute_spline",-1,7,0);
	vcdp->declBus  (c+39,"io_i_out",-1,7,0);
	vcdp->declBus  (c+40,"io_j_out",-1,7,0);
	vcdp->declBus  (c+41,"io_x_out",-1,7,0);
	vcdp->declBus  (c+42,"io_y_out",-1,7,0);
	vcdp->declBit  (c+16,"interpolation_compute_spline clock",-1);
	vcdp->declBit  (c+17,"interpolation_compute_spline reset",-1);
	vcdp->declBus  (c+18,"interpolation_compute_spline io_i_in",-1,7,0);
	vcdp->declBus  (c+19,"interpolation_compute_spline io_j_in",-1,7,0);
	vcdp->declBus  (c+20,"interpolation_compute_spline io_x_in",-1,7,0);
	vcdp->declBus  (c+21,"interpolation_compute_spline io_y_in",-1,7,0);
	vcdp->declBus  (c+22,"interpolation_compute_spline io_coefficient_0",-1,31,0);
	vcdp->declBus  (c+23,"interpolation_compute_spline io_coefficient_1",-1,31,0);
	vcdp->declBus  (c+24,"interpolation_compute_spline io_coefficient_2",-1,31,0);
	vcdp->declBus  (c+25,"interpolation_compute_spline io_coefficient_3",-1,31,0);
	vcdp->declBus  (c+26,"interpolation_compute_spline io_coefficient_4",-1,31,0);
	vcdp->declBus  (c+27,"interpolation_compute_spline io_coefficient_5",-1,31,0);
	vcdp->declBus  (c+28,"interpolation_compute_spline io_coefficient_6",-1,31,0);
	vcdp->declBus  (c+29,"interpolation_compute_spline io_coefficient_7",-1,31,0);
	vcdp->declBus  (c+30,"interpolation_compute_spline io_coefficient_8",-1,31,0);
	vcdp->declBus  (c+31,"interpolation_compute_spline io_coefficient_9",-1,31,0);
	vcdp->declBus  (c+32,"interpolation_compute_spline io_coefficient_10",-1,31,0);
	vcdp->declBus  (c+33,"interpolation_compute_spline io_coefficient_11",-1,31,0);
	vcdp->declBus  (c+34,"interpolation_compute_spline io_coefficient_12",-1,31,0);
	vcdp->declBus  (c+35,"interpolation_compute_spline io_coefficient_13",-1,31,0);
	vcdp->declBus  (c+36,"interpolation_compute_spline io_coefficient_14",-1,31,0);
	vcdp->declBus  (c+37,"interpolation_compute_spline io_coefficient_15",-1,31,0);
	vcdp->declBus  (c+38,"interpolation_compute_spline io_interpolation_compute_spline",-1,7,0);
	vcdp->declBus  (c+39,"interpolation_compute_spline io_i_out",-1,7,0);
	vcdp->declBus  (c+40,"interpolation_compute_spline io_j_out",-1,7,0);
	vcdp->declBus  (c+41,"interpolation_compute_spline io_x_out",-1,7,0);
	vcdp->declBus  (c+42,"interpolation_compute_spline io_y_out",-1,7,0);
	vcdp->declBus  (c+1,"interpolation_compute_spline temp_1",-1,31,0);
	vcdp->declBus  (c+2,"interpolation_compute_spline i_1",-1,7,0);
	vcdp->declBus  (c+3,"interpolation_compute_spline j_1",-1,7,0);
	vcdp->declBus  (c+4,"interpolation_compute_spline x_1",-1,7,0);
	vcdp->declBus  (c+5,"interpolation_compute_spline y_1",-1,7,0);
	// Tracing: interpolation_compute_spline _T // Ignored: Inlined leading underscore at interpolation_compute_spline.v:52
	// Tracing: interpolation_compute_spline _GEN_2 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:53
	// Tracing: interpolation_compute_spline _T_1 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:54
	// Tracing: interpolation_compute_spline _GEN_3 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:55
	// Tracing: interpolation_compute_spline _T_4 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:56
	// Tracing: interpolation_compute_spline _T_5 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:57
	// Tracing: interpolation_compute_spline _T_6 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:58
	// Tracing: interpolation_compute_spline _GEN_5 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:59
	// Tracing: interpolation_compute_spline _T_7 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:60
	// Tracing: interpolation_compute_spline _GEN_6 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:61
	// Tracing: interpolation_compute_spline _T_10 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:62
	// Tracing: interpolation_compute_spline _T_11 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:63
	// Tracing: interpolation_compute_spline _T_12 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:64
	// Tracing: interpolation_compute_spline _T_13 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:65
	// Tracing: interpolation_compute_spline _GEN_9 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:66
	// Tracing: interpolation_compute_spline _T_14 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:67
	// Tracing: interpolation_compute_spline _GEN_10 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:68
	// Tracing: interpolation_compute_spline _T_17 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:69
	// Tracing: interpolation_compute_spline _T_18 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:70
	// Tracing: interpolation_compute_spline _GEN_11 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:71
	// Tracing: interpolation_compute_spline _T_19 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:72
	// Tracing: interpolation_compute_spline _GEN_12 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:73
	// Tracing: interpolation_compute_spline _T_22 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:74
	// Tracing: interpolation_compute_spline _T_23 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:75
	// Tracing: interpolation_compute_spline _T_24 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:76
	// Tracing: interpolation_compute_spline _GEN_14 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:77
	// Tracing: interpolation_compute_spline _T_25 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:78
	// Tracing: interpolation_compute_spline _GEN_15 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:79
	// Tracing: interpolation_compute_spline _T_28 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:80
	// Tracing: interpolation_compute_spline _T_29 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:81
	// Tracing: interpolation_compute_spline _T_30 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:82
	// Tracing: interpolation_compute_spline _T_31 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:83
	// Tracing: interpolation_compute_spline _T_32 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:84
	// Tracing: interpolation_compute_spline _T_35 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:85
	// Tracing: interpolation_compute_spline _T_36 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:86
	// Tracing: interpolation_compute_spline _T_37 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:87
	// Tracing: interpolation_compute_spline _T_38 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:88
	// Tracing: interpolation_compute_spline _T_39 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:89
	// Tracing: interpolation_compute_spline _GEN_22 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:90
	// Tracing: interpolation_compute_spline _T_40 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:91
	// Tracing: interpolation_compute_spline _GEN_23 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:92
	// Tracing: interpolation_compute_spline _T_43 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:93
	// Tracing: interpolation_compute_spline _T_44 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:94
	// Tracing: interpolation_compute_spline _T_45 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:95
	// Tracing: interpolation_compute_spline _T_46 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:96
	// Tracing: interpolation_compute_spline _GEN_26 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:97
	// Tracing: interpolation_compute_spline _T_49 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:98
	// Tracing: interpolation_compute_spline _T_50 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:99
	// Tracing: interpolation_compute_spline _T_51 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:100
	// Tracing: interpolation_compute_spline _T_52 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:101
	// Tracing: interpolation_compute_spline _GEN_29 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:102
	// Tracing: interpolation_compute_spline _T_53 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:103
	// Tracing: interpolation_compute_spline _GEN_30 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:104
	// Tracing: interpolation_compute_spline _T_56 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:105
	// Tracing: interpolation_compute_spline _T_57 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:106
	// Tracing: interpolation_compute_spline _T_58 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:107
	// Tracing: interpolation_compute_spline _T_59 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:108
	// Tracing: interpolation_compute_spline _T_60 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:109
	// Tracing: interpolation_compute_spline _T_61 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:110
	// Tracing: interpolation_compute_spline _T_64 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:111
	// Tracing: interpolation_compute_spline _T_65 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:112
	// Tracing: interpolation_compute_spline _T_66 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:113
	// Tracing: interpolation_compute_spline _T_67 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:114
	// Tracing: interpolation_compute_spline _T_68 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:115
	// Tracing: interpolation_compute_spline _T_69 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:116
	// Tracing: interpolation_compute_spline _T_72 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:117
	// Tracing: interpolation_compute_spline _T_73 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:118
	// Tracing: interpolation_compute_spline _T_74 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:119
	// Tracing: interpolation_compute_spline _T_75 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:120
	// Tracing: interpolation_compute_spline _T_76 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:121
	// Tracing: interpolation_compute_spline _GEN_42 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:122
	// Tracing: interpolation_compute_spline _T_79 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:123
	// Tracing: interpolation_compute_spline _T_80 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:124
	// Tracing: interpolation_compute_spline _T_81 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:125
	// Tracing: interpolation_compute_spline _T_82 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:126
	// Tracing: interpolation_compute_spline _T_83 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:127
	// Tracing: interpolation_compute_spline _T_84 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:128
	// Tracing: interpolation_compute_spline _T_87 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:129
	// Tracing: interpolation_compute_spline _T_88 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:130
	// Tracing: interpolation_compute_spline _T_89 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:131
	// Tracing: interpolation_compute_spline _T_90 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:132
	// Tracing: interpolation_compute_spline _T_91 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:133
	// Tracing: interpolation_compute_spline _T_92 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:134
	// Tracing: interpolation_compute_spline _GEN_51 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:135
	// Tracing: interpolation_compute_spline _T_93 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:136
	// Tracing: interpolation_compute_spline _GEN_52 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:137
	// Tracing: interpolation_compute_spline _T_96 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:138
	// Tracing: interpolation_compute_spline _T_97 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:139
	// Tracing: interpolation_compute_spline _T_98 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:140
	// Tracing: interpolation_compute_spline _T_99 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:141
	// Tracing: interpolation_compute_spline _T_100 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:142
	// Tracing: interpolation_compute_spline _T_101 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:143
	// Tracing: interpolation_compute_spline _T_102 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:144
	// Tracing: interpolation_compute_spline _GEN_58 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:145
	// Tracing: interpolation_compute_spline _T_103 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:146
	// Tracing: interpolation_compute_spline _GEN_59 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:147
	// Tracing: interpolation_compute_spline _T_106 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:148
	vcdp->declBus  (c+6,"interpolation_compute_spline temp_2",-1,31,0);
	vcdp->declBus  (c+7,"interpolation_compute_spline i_2",-1,7,0);
	vcdp->declBus  (c+8,"interpolation_compute_spline j_2",-1,7,0);
	vcdp->declBus  (c+9,"interpolation_compute_spline x_2",-1,7,0);
	vcdp->declBus  (c+10,"interpolation_compute_spline y_2",-1,7,0);
	// Tracing: interpolation_compute_spline _T_111 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:154
	vcdp->declBus  (c+11,"interpolation_compute_spline temp_3",-1,31,0);
	vcdp->declBus  (c+12,"interpolation_compute_spline i_3",-1,7,0);
	vcdp->declBus  (c+13,"interpolation_compute_spline j_3",-1,7,0);
	vcdp->declBus  (c+14,"interpolation_compute_spline x_3",-1,7,0);
	vcdp->declBus  (c+15,"interpolation_compute_spline y_3",-1,7,0);
	// Tracing: interpolation_compute_spline _T_115 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:160
	// Tracing: interpolation_compute_spline _GEN_1 // Ignored: Inlined leading underscore at interpolation_compute_spline.v:161
    }
}

void Vinterpolation_compute_spline::traceFullThis__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->interpolation_compute_spline__DOT__temp_1),32);
	vcdp->fullBus  (c+2,(vlTOPp->interpolation_compute_spline__DOT__i_1),8);
	vcdp->fullBus  (c+3,(vlTOPp->interpolation_compute_spline__DOT__j_1),8);
	vcdp->fullBus  (c+4,(vlTOPp->interpolation_compute_spline__DOT__x_1),8);
	vcdp->fullBus  (c+5,(vlTOPp->interpolation_compute_spline__DOT__y_1),8);
	vcdp->fullBus  (c+6,(vlTOPp->interpolation_compute_spline__DOT__temp_2),32);
	vcdp->fullBus  (c+7,(vlTOPp->interpolation_compute_spline__DOT__i_2),8);
	vcdp->fullBus  (c+8,(vlTOPp->interpolation_compute_spline__DOT__j_2),8);
	vcdp->fullBus  (c+9,(vlTOPp->interpolation_compute_spline__DOT__x_2),8);
	vcdp->fullBus  (c+10,(vlTOPp->interpolation_compute_spline__DOT__y_2),8);
	vcdp->fullBus  (c+11,(vlTOPp->interpolation_compute_spline__DOT__temp_3),32);
	vcdp->fullBus  (c+12,(vlTOPp->interpolation_compute_spline__DOT__i_3),8);
	vcdp->fullBus  (c+13,(vlTOPp->interpolation_compute_spline__DOT__j_3),8);
	vcdp->fullBus  (c+14,(vlTOPp->interpolation_compute_spline__DOT__x_3),8);
	vcdp->fullBus  (c+15,(vlTOPp->interpolation_compute_spline__DOT__y_3),8);
	vcdp->fullBit  (c+16,(vlTOPp->clock));
	vcdp->fullBit  (c+17,(vlTOPp->reset));
	vcdp->fullBus  (c+18,(vlTOPp->io_i_in),8);
	vcdp->fullBus  (c+19,(vlTOPp->io_j_in),8);
	vcdp->fullBus  (c+20,(vlTOPp->io_x_in),8);
	vcdp->fullBus  (c+21,(vlTOPp->io_y_in),8);
	vcdp->fullBus  (c+22,(vlTOPp->io_coefficient_0),32);
	vcdp->fullBus  (c+23,(vlTOPp->io_coefficient_1),32);
	vcdp->fullBus  (c+24,(vlTOPp->io_coefficient_2),32);
	vcdp->fullBus  (c+25,(vlTOPp->io_coefficient_3),32);
	vcdp->fullBus  (c+26,(vlTOPp->io_coefficient_4),32);
	vcdp->fullBus  (c+27,(vlTOPp->io_coefficient_5),32);
	vcdp->fullBus  (c+28,(vlTOPp->io_coefficient_6),32);
	vcdp->fullBus  (c+29,(vlTOPp->io_coefficient_7),32);
	vcdp->fullBus  (c+30,(vlTOPp->io_coefficient_8),32);
	vcdp->fullBus  (c+31,(vlTOPp->io_coefficient_9),32);
	vcdp->fullBus  (c+32,(vlTOPp->io_coefficient_10),32);
	vcdp->fullBus  (c+33,(vlTOPp->io_coefficient_11),32);
	vcdp->fullBus  (c+34,(vlTOPp->io_coefficient_12),32);
	vcdp->fullBus  (c+35,(vlTOPp->io_coefficient_13),32);
	vcdp->fullBus  (c+36,(vlTOPp->io_coefficient_14),32);
	vcdp->fullBus  (c+37,(vlTOPp->io_coefficient_15),32);
	vcdp->fullBus  (c+38,(vlTOPp->io_interpolation_compute_spline),8);
	vcdp->fullBus  (c+39,(vlTOPp->io_i_out),8);
	vcdp->fullBus  (c+40,(vlTOPp->io_j_out),8);
	vcdp->fullBus  (c+41,(vlTOPp->io_x_out),8);
	vcdp->fullBus  (c+42,(vlTOPp->io_y_out),8);
    }
}
