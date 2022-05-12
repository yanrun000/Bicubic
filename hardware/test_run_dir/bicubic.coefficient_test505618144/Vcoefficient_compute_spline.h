// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcoefficient_compute_spline_H_
#define _Vcoefficient_compute_spline_H_

#include "verilated.h"

class Vcoefficient_compute_spline__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vcoefficient_compute_spline) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_pix_0,7,0);
    VL_IN8(io_pix_1,7,0);
    VL_IN8(io_pix_2,7,0);
    VL_IN8(io_pix_3,7,0);
    VL_IN8(io_pix_4,7,0);
    VL_IN8(io_pix_5,7,0);
    VL_IN8(io_pix_6,7,0);
    VL_IN8(io_pix_7,7,0);
    VL_IN8(io_pix_8,7,0);
    VL_IN8(io_pix_9,7,0);
    VL_IN8(io_pix_10,7,0);
    VL_IN8(io_pix_11,7,0);
    VL_IN8(io_pix_12,7,0);
    VL_IN8(io_pix_13,7,0);
    VL_IN8(io_pix_14,7,0);
    VL_IN8(io_pix_15,7,0);
    VL_OUT(io_coefficient_0,31,0);
    VL_OUT(io_coefficient_1,31,0);
    VL_OUT(io_coefficient_2,31,0);
    VL_OUT(io_coefficient_3,31,0);
    VL_OUT(io_coefficient_4,31,0);
    VL_OUT(io_coefficient_5,31,0);
    VL_OUT(io_coefficient_6,31,0);
    VL_OUT(io_coefficient_7,31,0);
    VL_OUT(io_coefficient_8,31,0);
    VL_OUT(io_coefficient_9,31,0);
    VL_OUT(io_coefficient_10,31,0);
    VL_OUT(io_coefficient_11,31,0);
    VL_OUT(io_coefficient_12,31,0);
    VL_OUT(io_coefficient_13,31,0);
    VL_OUT(io_coefficient_14,31,0);
    VL_OUT(io_coefficient_15,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG16(coefficient_compute_spline__DOT___T_6,11,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_17,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_28,12,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_33,11,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_44,10,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_48,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_67,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_87,12,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_98,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_121,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_159,14,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_197,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_208,12,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_228,12,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_266,13,0);
    VL_SIG16(coefficient_compute_spline__DOT___T_304,13,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcoefficient_compute_spline__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vcoefficient_compute_spline& operator= (const Vcoefficient_compute_spline&);  ///< Copying not allowed
    Vcoefficient_compute_spline(const Vcoefficient_compute_spline&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vcoefficient_compute_spline(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcoefficient_compute_spline();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcoefficient_compute_spline__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
    static void _eval_settle(Vcoefficient_compute_spline__Syms* __restrict vlSymsp);
    static void traceChgThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
