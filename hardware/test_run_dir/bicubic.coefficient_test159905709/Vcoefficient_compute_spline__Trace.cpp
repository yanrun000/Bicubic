// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcoefficient_compute_spline__Syms.h"


//======================

void Vcoefficient_compute_spline::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcoefficient_compute_spline* t=(Vcoefficient_compute_spline*)userthis;
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vcoefficient_compute_spline::traceChgThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcoefficient_compute_spline::traceChgThis__2(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_pix_0),8);
	vcdp->chgBus  (c+4,(vlTOPp->io_pix_1),8);
	vcdp->chgBus  (c+5,(vlTOPp->io_pix_2),8);
	vcdp->chgBus  (c+6,(vlTOPp->io_pix_3),8);
	vcdp->chgBus  (c+7,(vlTOPp->io_pix_4),8);
	vcdp->chgBus  (c+8,(vlTOPp->io_pix_5),8);
	vcdp->chgBus  (c+9,(vlTOPp->io_pix_6),8);
	vcdp->chgBus  (c+10,(vlTOPp->io_pix_7),8);
	vcdp->chgBus  (c+11,(vlTOPp->io_pix_8),8);
	vcdp->chgBus  (c+12,(vlTOPp->io_pix_9),8);
	vcdp->chgBus  (c+13,(vlTOPp->io_pix_10),8);
	vcdp->chgBus  (c+14,(vlTOPp->io_pix_11),8);
	vcdp->chgBus  (c+15,(vlTOPp->io_pix_12),8);
	vcdp->chgBus  (c+16,(vlTOPp->io_pix_13),8);
	vcdp->chgBus  (c+17,(vlTOPp->io_pix_14),8);
	vcdp->chgBus  (c+18,(vlTOPp->io_pix_15),8);
	vcdp->chgBus  (c+19,(vlTOPp->io_coefficient_0),32);
	vcdp->chgBus  (c+20,(vlTOPp->io_coefficient_1),32);
	vcdp->chgBus  (c+21,(vlTOPp->io_coefficient_2),32);
	vcdp->chgBus  (c+22,(vlTOPp->io_coefficient_3),32);
	vcdp->chgBus  (c+23,(vlTOPp->io_coefficient_4),32);
	vcdp->chgBus  (c+24,(vlTOPp->io_coefficient_5),32);
	vcdp->chgBus  (c+25,(vlTOPp->io_coefficient_6),32);
	vcdp->chgBus  (c+26,(vlTOPp->io_coefficient_7),32);
	vcdp->chgBus  (c+27,(vlTOPp->io_coefficient_8),32);
	vcdp->chgBus  (c+28,(vlTOPp->io_coefficient_9),32);
	vcdp->chgBus  (c+29,(vlTOPp->io_coefficient_10),32);
	vcdp->chgBus  (c+30,(vlTOPp->io_coefficient_11),32);
	vcdp->chgBus  (c+31,(vlTOPp->io_coefficient_12),32);
	vcdp->chgBus  (c+32,(vlTOPp->io_coefficient_13),32);
	vcdp->chgBus  (c+33,(vlTOPp->io_coefficient_14),32);
	vcdp->chgBus  (c+34,(vlTOPp->io_coefficient_15),32);
    }
}
