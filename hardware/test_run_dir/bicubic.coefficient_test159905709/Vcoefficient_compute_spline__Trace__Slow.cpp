// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcoefficient_compute_spline__Syms.h"


//======================

void Vcoefficient_compute_spline::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vcoefficient_compute_spline::traceInit, &Vcoefficient_compute_spline::traceFull, &Vcoefficient_compute_spline::traceChg, this);
}
void Vcoefficient_compute_spline::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vcoefficient_compute_spline* t=(Vcoefficient_compute_spline*)userthis;
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vcoefficient_compute_spline::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcoefficient_compute_spline* t=(Vcoefficient_compute_spline*)userthis;
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vcoefficient_compute_spline::traceInitThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vcoefficient_compute_spline::traceFullThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcoefficient_compute_spline::traceInitThis__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_pix_0",-1,7,0);
	vcdp->declBus  (c+4,"io_pix_1",-1,7,0);
	vcdp->declBus  (c+5,"io_pix_2",-1,7,0);
	vcdp->declBus  (c+6,"io_pix_3",-1,7,0);
	vcdp->declBus  (c+7,"io_pix_4",-1,7,0);
	vcdp->declBus  (c+8,"io_pix_5",-1,7,0);
	vcdp->declBus  (c+9,"io_pix_6",-1,7,0);
	vcdp->declBus  (c+10,"io_pix_7",-1,7,0);
	vcdp->declBus  (c+11,"io_pix_8",-1,7,0);
	vcdp->declBus  (c+12,"io_pix_9",-1,7,0);
	vcdp->declBus  (c+13,"io_pix_10",-1,7,0);
	vcdp->declBus  (c+14,"io_pix_11",-1,7,0);
	vcdp->declBus  (c+15,"io_pix_12",-1,7,0);
	vcdp->declBus  (c+16,"io_pix_13",-1,7,0);
	vcdp->declBus  (c+17,"io_pix_14",-1,7,0);
	vcdp->declBus  (c+18,"io_pix_15",-1,7,0);
	vcdp->declBus  (c+19,"io_coefficient_0",-1,31,0);
	vcdp->declBus  (c+20,"io_coefficient_1",-1,31,0);
	vcdp->declBus  (c+21,"io_coefficient_2",-1,31,0);
	vcdp->declBus  (c+22,"io_coefficient_3",-1,31,0);
	vcdp->declBus  (c+23,"io_coefficient_4",-1,31,0);
	vcdp->declBus  (c+24,"io_coefficient_5",-1,31,0);
	vcdp->declBus  (c+25,"io_coefficient_6",-1,31,0);
	vcdp->declBus  (c+26,"io_coefficient_7",-1,31,0);
	vcdp->declBus  (c+27,"io_coefficient_8",-1,31,0);
	vcdp->declBus  (c+28,"io_coefficient_9",-1,31,0);
	vcdp->declBus  (c+29,"io_coefficient_10",-1,31,0);
	vcdp->declBus  (c+30,"io_coefficient_11",-1,31,0);
	vcdp->declBus  (c+31,"io_coefficient_12",-1,31,0);
	vcdp->declBus  (c+32,"io_coefficient_13",-1,31,0);
	vcdp->declBus  (c+33,"io_coefficient_14",-1,31,0);
	vcdp->declBus  (c+34,"io_coefficient_15",-1,31,0);
	vcdp->declBit  (c+1,"coefficient_compute_spline clock",-1);
	vcdp->declBit  (c+2,"coefficient_compute_spline reset",-1);
	vcdp->declBus  (c+3,"coefficient_compute_spline io_pix_0",-1,7,0);
	vcdp->declBus  (c+4,"coefficient_compute_spline io_pix_1",-1,7,0);
	vcdp->declBus  (c+5,"coefficient_compute_spline io_pix_2",-1,7,0);
	vcdp->declBus  (c+6,"coefficient_compute_spline io_pix_3",-1,7,0);
	vcdp->declBus  (c+7,"coefficient_compute_spline io_pix_4",-1,7,0);
	vcdp->declBus  (c+8,"coefficient_compute_spline io_pix_5",-1,7,0);
	vcdp->declBus  (c+9,"coefficient_compute_spline io_pix_6",-1,7,0);
	vcdp->declBus  (c+10,"coefficient_compute_spline io_pix_7",-1,7,0);
	vcdp->declBus  (c+11,"coefficient_compute_spline io_pix_8",-1,7,0);
	vcdp->declBus  (c+12,"coefficient_compute_spline io_pix_9",-1,7,0);
	vcdp->declBus  (c+13,"coefficient_compute_spline io_pix_10",-1,7,0);
	vcdp->declBus  (c+14,"coefficient_compute_spline io_pix_11",-1,7,0);
	vcdp->declBus  (c+15,"coefficient_compute_spline io_pix_12",-1,7,0);
	vcdp->declBus  (c+16,"coefficient_compute_spline io_pix_13",-1,7,0);
	vcdp->declBus  (c+17,"coefficient_compute_spline io_pix_14",-1,7,0);
	vcdp->declBus  (c+18,"coefficient_compute_spline io_pix_15",-1,7,0);
	vcdp->declBus  (c+19,"coefficient_compute_spline io_coefficient_0",-1,31,0);
	vcdp->declBus  (c+20,"coefficient_compute_spline io_coefficient_1",-1,31,0);
	vcdp->declBus  (c+21,"coefficient_compute_spline io_coefficient_2",-1,31,0);
	vcdp->declBus  (c+22,"coefficient_compute_spline io_coefficient_3",-1,31,0);
	vcdp->declBus  (c+23,"coefficient_compute_spline io_coefficient_4",-1,31,0);
	vcdp->declBus  (c+24,"coefficient_compute_spline io_coefficient_5",-1,31,0);
	vcdp->declBus  (c+25,"coefficient_compute_spline io_coefficient_6",-1,31,0);
	vcdp->declBus  (c+26,"coefficient_compute_spline io_coefficient_7",-1,31,0);
	vcdp->declBus  (c+27,"coefficient_compute_spline io_coefficient_8",-1,31,0);
	vcdp->declBus  (c+28,"coefficient_compute_spline io_coefficient_9",-1,31,0);
	vcdp->declBus  (c+29,"coefficient_compute_spline io_coefficient_10",-1,31,0);
	vcdp->declBus  (c+30,"coefficient_compute_spline io_coefficient_11",-1,31,0);
	vcdp->declBus  (c+31,"coefficient_compute_spline io_coefficient_12",-1,31,0);
	vcdp->declBus  (c+32,"coefficient_compute_spline io_coefficient_13",-1,31,0);
	vcdp->declBus  (c+33,"coefficient_compute_spline io_coefficient_14",-1,31,0);
	vcdp->declBus  (c+34,"coefficient_compute_spline io_coefficient_15",-1,31,0);
	// Tracing: coefficient_compute_spline _T_1 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:37
	// Tracing: coefficient_compute_spline _T_2 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:38
	// Tracing: coefficient_compute_spline _T_3 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:39
	// Tracing: coefficient_compute_spline _T_6 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:40
	// Tracing: coefficient_compute_spline _T_7 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:41
	// Tracing: coefficient_compute_spline _T_8 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:42
	// Tracing: coefficient_compute_spline _GEN_0 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:43
	// Tracing: coefficient_compute_spline _T_10 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:44
	// Tracing: coefficient_compute_spline _T_11 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:45
	// Tracing: coefficient_compute_spline _T_13 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:46
	// Tracing: coefficient_compute_spline _T_14 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:47
	// Tracing: coefficient_compute_spline _GEN_1 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:48
	// Tracing: coefficient_compute_spline _T_17 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:49
	// Tracing: coefficient_compute_spline _T_18 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:50
	// Tracing: coefficient_compute_spline _T_19 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:51
	// Tracing: coefficient_compute_spline _T_21 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:52
	// Tracing: coefficient_compute_spline _GEN_2 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:53
	// Tracing: coefficient_compute_spline _T_24 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:54
	// Tracing: coefficient_compute_spline _GEN_3 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:55
	// Tracing: coefficient_compute_spline _T_28 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:56
	// Tracing: coefficient_compute_spline _T_29 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:57
	// Tracing: coefficient_compute_spline _T_30 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:58
	// Tracing: coefficient_compute_spline _T_33 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:59
	// Tracing: coefficient_compute_spline _T_34 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:60
	// Tracing: coefficient_compute_spline _T_35 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:61
	// Tracing: coefficient_compute_spline _T_37 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:62
	// Tracing: coefficient_compute_spline _T_38 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:63
	// Tracing: coefficient_compute_spline _T_40 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:64
	// Tracing: coefficient_compute_spline _T_41 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:65
	// Tracing: coefficient_compute_spline _T_44 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:66
	// Tracing: coefficient_compute_spline _T_45 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:67
	// Tracing: coefficient_compute_spline _T_46 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:68
	// Tracing: coefficient_compute_spline _GEN_4 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:69
	// Tracing: coefficient_compute_spline _T_48 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:70
	// Tracing: coefficient_compute_spline _GEN_5 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:71
	// Tracing: coefficient_compute_spline _T_51 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:72
	// Tracing: coefficient_compute_spline _GEN_6 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:73
	// Tracing: coefficient_compute_spline _T_54 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:74
	// Tracing: coefficient_compute_spline _T_55 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:75
	// Tracing: coefficient_compute_spline _GEN_7 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:76
	// Tracing: coefficient_compute_spline _T_57 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:77
	// Tracing: coefficient_compute_spline _T_58 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:78
	// Tracing: coefficient_compute_spline _GEN_8 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:79
	// Tracing: coefficient_compute_spline _T_60 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:80
	// Tracing: coefficient_compute_spline _T_61 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:81
	// Tracing: coefficient_compute_spline _GEN_9 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:82
	// Tracing: coefficient_compute_spline _T_63 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:83
	// Tracing: coefficient_compute_spline _T_64 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:84
	// Tracing: coefficient_compute_spline _GEN_10 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:85
	// Tracing: coefficient_compute_spline _T_67 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:86
	// Tracing: coefficient_compute_spline _T_68 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:87
	// Tracing: coefficient_compute_spline _GEN_11 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:88
	// Tracing: coefficient_compute_spline _T_71 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:89
	// Tracing: coefficient_compute_spline _GEN_12 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:90
	// Tracing: coefficient_compute_spline _T_74 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:91
	// Tracing: coefficient_compute_spline _T_75 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:92
	// Tracing: coefficient_compute_spline _GEN_13 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:93
	// Tracing: coefficient_compute_spline _T_77 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:94
	// Tracing: coefficient_compute_spline _T_78 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:95
	// Tracing: coefficient_compute_spline _GEN_14 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:96
	// Tracing: coefficient_compute_spline _T_80 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:97
	// Tracing: coefficient_compute_spline _GEN_15 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:98
	// Tracing: coefficient_compute_spline _T_83 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:99
	// Tracing: coefficient_compute_spline _T_84 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:100
	// Tracing: coefficient_compute_spline _T_87 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:101
	// Tracing: coefficient_compute_spline _T_88 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:102
	// Tracing: coefficient_compute_spline _T_89 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:103
	// Tracing: coefficient_compute_spline _GEN_16 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:104
	// Tracing: coefficient_compute_spline _T_91 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:105
	// Tracing: coefficient_compute_spline _T_92 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:106
	// Tracing: coefficient_compute_spline _GEN_17 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:107
	// Tracing: coefficient_compute_spline _T_94 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:108
	// Tracing: coefficient_compute_spline _T_98 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:109
	// Tracing: coefficient_compute_spline _T_100 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:110
	// Tracing: coefficient_compute_spline _GEN_18 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:111
	// Tracing: coefficient_compute_spline _T_102 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:112
	// Tracing: coefficient_compute_spline _T_105 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:113
	// Tracing: coefficient_compute_spline _GEN_20 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:114
	// Tracing: coefficient_compute_spline _T_108 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:115
	// Tracing: coefficient_compute_spline _T_109 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:116
	// Tracing: coefficient_compute_spline _GEN_21 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:117
	// Tracing: coefficient_compute_spline _T_111 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:118
	// Tracing: coefficient_compute_spline _T_112 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:119
	// Tracing: coefficient_compute_spline _GEN_22 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:120
	// Tracing: coefficient_compute_spline _T_114 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:121
	// Tracing: coefficient_compute_spline _T_117 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:122
	// Tracing: coefficient_compute_spline _T_118 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:123
	// Tracing: coefficient_compute_spline _GEN_24 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:124
	// Tracing: coefficient_compute_spline _T_121 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:125
	// Tracing: coefficient_compute_spline _T_122 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:126
	// Tracing: coefficient_compute_spline _T_123 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:127
	// Tracing: coefficient_compute_spline _GEN_25 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:128
	// Tracing: coefficient_compute_spline _T_125 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:129
	// Tracing: coefficient_compute_spline _T_126 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:130
	// Tracing: coefficient_compute_spline _T_128 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:131
	// Tracing: coefficient_compute_spline _T_129 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:132
	// Tracing: coefficient_compute_spline _T_131 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:133
	// Tracing: coefficient_compute_spline _T_132 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:134
	// Tracing: coefficient_compute_spline _T_134 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:135
	// Tracing: coefficient_compute_spline _T_135 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:136
	// Tracing: coefficient_compute_spline _GEN_26 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:137
	// Tracing: coefficient_compute_spline _T_137 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:138
	// Tracing: coefficient_compute_spline _T_138 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:139
	// Tracing: coefficient_compute_spline _GEN_27 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:140
	// Tracing: coefficient_compute_spline _T_140 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:141
	// Tracing: coefficient_compute_spline _T_141 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:142
	// Tracing: coefficient_compute_spline _T_143 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:143
	// Tracing: coefficient_compute_spline _T_144 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:144
	// Tracing: coefficient_compute_spline _T_146 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:145
	// Tracing: coefficient_compute_spline _T_147 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:146
	// Tracing: coefficient_compute_spline _GEN_28 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:147
	// Tracing: coefficient_compute_spline _T_149 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:148
	// Tracing: coefficient_compute_spline _T_150 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:149
	// Tracing: coefficient_compute_spline _GEN_29 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:150
	// Tracing: coefficient_compute_spline _T_152 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:151
	// Tracing: coefficient_compute_spline _T_153 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:152
	// Tracing: coefficient_compute_spline _GEN_30 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:153
	// Tracing: coefficient_compute_spline _T_155 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:154
	// Tracing: coefficient_compute_spline _T_156 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:155
	// Tracing: coefficient_compute_spline _GEN_31 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:156
	// Tracing: coefficient_compute_spline _T_159 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:157
	// Tracing: coefficient_compute_spline _T_160 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:158
	// Tracing: coefficient_compute_spline _T_161 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:159
	// Tracing: coefficient_compute_spline _GEN_32 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:160
	// Tracing: coefficient_compute_spline _T_163 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:161
	// Tracing: coefficient_compute_spline _T_166 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:162
	// Tracing: coefficient_compute_spline _T_167 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:163
	// Tracing: coefficient_compute_spline _T_169 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:164
	// Tracing: coefficient_compute_spline _T_170 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:165
	// Tracing: coefficient_compute_spline _T_172 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:166
	// Tracing: coefficient_compute_spline _GEN_33 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:167
	// Tracing: coefficient_compute_spline _T_175 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:168
	// Tracing: coefficient_compute_spline _T_178 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:169
	// Tracing: coefficient_compute_spline _T_179 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:170
	// Tracing: coefficient_compute_spline _T_181 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:171
	// Tracing: coefficient_compute_spline _T_182 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:172
	// Tracing: coefficient_compute_spline _T_184 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:173
	// Tracing: coefficient_compute_spline _GEN_35 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:174
	// Tracing: coefficient_compute_spline _T_187 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:175
	// Tracing: coefficient_compute_spline _T_188 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:176
	// Tracing: coefficient_compute_spline _GEN_36 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:177
	// Tracing: coefficient_compute_spline _T_190 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:178
	// Tracing: coefficient_compute_spline _T_191 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:179
	// Tracing: coefficient_compute_spline _GEN_37 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:180
	// Tracing: coefficient_compute_spline _T_193 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:181
	// Tracing: coefficient_compute_spline _GEN_38 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:182
	// Tracing: coefficient_compute_spline _T_197 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:183
	// Tracing: coefficient_compute_spline _T_201 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:184
	// Tracing: coefficient_compute_spline _GEN_39 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:185
	// Tracing: coefficient_compute_spline _T_204 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:186
	// Tracing: coefficient_compute_spline _GEN_40 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:187
	// Tracing: coefficient_compute_spline _T_208 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:188
	// Tracing: coefficient_compute_spline _T_209 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:189
	// Tracing: coefficient_compute_spline _T_210 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:190
	// Tracing: coefficient_compute_spline _GEN_41 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:191
	// Tracing: coefficient_compute_spline _T_212 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:192
	// Tracing: coefficient_compute_spline _GEN_42 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:193
	// Tracing: coefficient_compute_spline _T_215 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:194
	// Tracing: coefficient_compute_spline _T_218 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:195
	// Tracing: coefficient_compute_spline _GEN_44 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:196
	// Tracing: coefficient_compute_spline _T_221 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:197
	// Tracing: coefficient_compute_spline _GEN_45 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:198
	// Tracing: coefficient_compute_spline _T_224 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:199
	// Tracing: coefficient_compute_spline _T_225 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:200
	// Tracing: coefficient_compute_spline _T_228 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:201
	// Tracing: coefficient_compute_spline _T_233 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:202
	// Tracing: coefficient_compute_spline _T_235 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:203
	// Tracing: coefficient_compute_spline _T_238 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:204
	// Tracing: coefficient_compute_spline _T_239 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:205
	// Tracing: coefficient_compute_spline _T_241 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:206
	// Tracing: coefficient_compute_spline _T_242 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:207
	// Tracing: coefficient_compute_spline _GEN_47 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:208
	// Tracing: coefficient_compute_spline _T_244 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:209
	// Tracing: coefficient_compute_spline _T_245 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:210
	// Tracing: coefficient_compute_spline _GEN_48 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:211
	// Tracing: coefficient_compute_spline _T_247 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:212
	// Tracing: coefficient_compute_spline _T_248 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:213
	// Tracing: coefficient_compute_spline _T_250 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:214
	// Tracing: coefficient_compute_spline _T_253 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:215
	// Tracing: coefficient_compute_spline _T_254 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:216
	// Tracing: coefficient_compute_spline _GEN_49 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:217
	// Tracing: coefficient_compute_spline _T_256 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:218
	// Tracing: coefficient_compute_spline _GEN_50 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:219
	// Tracing: coefficient_compute_spline _T_259 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:220
	// Tracing: coefficient_compute_spline _GEN_51 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:221
	// Tracing: coefficient_compute_spline _T_262 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:222
	// Tracing: coefficient_compute_spline _T_266 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:223
	// Tracing: coefficient_compute_spline _T_267 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:224
	// Tracing: coefficient_compute_spline _T_269 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:225
	// Tracing: coefficient_compute_spline _GEN_53 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:226
	// Tracing: coefficient_compute_spline _T_272 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:227
	// Tracing: coefficient_compute_spline _GEN_54 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:228
	// Tracing: coefficient_compute_spline _T_275 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:229
	// Tracing: coefficient_compute_spline _T_276 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:230
	// Tracing: coefficient_compute_spline _GEN_55 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:231
	// Tracing: coefficient_compute_spline _T_278 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:232
	// Tracing: coefficient_compute_spline _T_279 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:233
	// Tracing: coefficient_compute_spline _GEN_56 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:234
	// Tracing: coefficient_compute_spline _T_281 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:235
	// Tracing: coefficient_compute_spline _T_282 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:236
	// Tracing: coefficient_compute_spline _T_284 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:237
	// Tracing: coefficient_compute_spline _T_285 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:238
	// Tracing: coefficient_compute_spline _GEN_57 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:239
	// Tracing: coefficient_compute_spline _T_287 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:240
	// Tracing: coefficient_compute_spline _T_288 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:241
	// Tracing: coefficient_compute_spline _GEN_58 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:242
	// Tracing: coefficient_compute_spline _T_290 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:243
	// Tracing: coefficient_compute_spline _T_291 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:244
	// Tracing: coefficient_compute_spline _T_293 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:245
	// Tracing: coefficient_compute_spline _T_294 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:246
	// Tracing: coefficient_compute_spline _GEN_59 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:247
	// Tracing: coefficient_compute_spline _T_296 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:248
	// Tracing: coefficient_compute_spline _T_297 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:249
	// Tracing: coefficient_compute_spline _GEN_60 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:250
	// Tracing: coefficient_compute_spline _T_299 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:251
	// Tracing: coefficient_compute_spline _T_300 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:252
	// Tracing: coefficient_compute_spline _GEN_61 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:253
	// Tracing: coefficient_compute_spline _T_302 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:254
	// Tracing: coefficient_compute_spline _T_303 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:255
	// Tracing: coefficient_compute_spline _GEN_62 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:256
	// Tracing: coefficient_compute_spline _T_306 // Ignored: Inlined leading underscore at coefficient_compute_spline.v:257
    }
}

void Vcoefficient_compute_spline::traceFullThis__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_pix_0),8);
	vcdp->fullBus  (c+4,(vlTOPp->io_pix_1),8);
	vcdp->fullBus  (c+5,(vlTOPp->io_pix_2),8);
	vcdp->fullBus  (c+6,(vlTOPp->io_pix_3),8);
	vcdp->fullBus  (c+7,(vlTOPp->io_pix_4),8);
	vcdp->fullBus  (c+8,(vlTOPp->io_pix_5),8);
	vcdp->fullBus  (c+9,(vlTOPp->io_pix_6),8);
	vcdp->fullBus  (c+10,(vlTOPp->io_pix_7),8);
	vcdp->fullBus  (c+11,(vlTOPp->io_pix_8),8);
	vcdp->fullBus  (c+12,(vlTOPp->io_pix_9),8);
	vcdp->fullBus  (c+13,(vlTOPp->io_pix_10),8);
	vcdp->fullBus  (c+14,(vlTOPp->io_pix_11),8);
	vcdp->fullBus  (c+15,(vlTOPp->io_pix_12),8);
	vcdp->fullBus  (c+16,(vlTOPp->io_pix_13),8);
	vcdp->fullBus  (c+17,(vlTOPp->io_pix_14),8);
	vcdp->fullBus  (c+18,(vlTOPp->io_pix_15),8);
	vcdp->fullBus  (c+19,(vlTOPp->io_coefficient_0),32);
	vcdp->fullBus  (c+20,(vlTOPp->io_coefficient_1),32);
	vcdp->fullBus  (c+21,(vlTOPp->io_coefficient_2),32);
	vcdp->fullBus  (c+22,(vlTOPp->io_coefficient_3),32);
	vcdp->fullBus  (c+23,(vlTOPp->io_coefficient_4),32);
	vcdp->fullBus  (c+24,(vlTOPp->io_coefficient_5),32);
	vcdp->fullBus  (c+25,(vlTOPp->io_coefficient_6),32);
	vcdp->fullBus  (c+26,(vlTOPp->io_coefficient_7),32);
	vcdp->fullBus  (c+27,(vlTOPp->io_coefficient_8),32);
	vcdp->fullBus  (c+28,(vlTOPp->io_coefficient_9),32);
	vcdp->fullBus  (c+29,(vlTOPp->io_coefficient_10),32);
	vcdp->fullBus  (c+30,(vlTOPp->io_coefficient_11),32);
	vcdp->fullBus  (c+31,(vlTOPp->io_coefficient_12),32);
	vcdp->fullBus  (c+32,(vlTOPp->io_coefficient_13),32);
	vcdp->fullBus  (c+33,(vlTOPp->io_coefficient_14),32);
	vcdp->fullBus  (c+34,(vlTOPp->io_coefficient_15),32);
    }
}
