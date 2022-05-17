// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vinterpolation_compute_spline_H_
#define _Vinterpolation_compute_spline_H_

#include "verilated.h"

class Vinterpolation_compute_spline__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vinterpolation_compute_spline) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_in,7,0);
    VL_IN8(io_j_in,7,0);
    VL_IN8(io_x_in,7,0);
    VL_IN8(io_y_in,7,0);
    VL_OUT8(io_interpolation_compute_spline,7,0);
    VL_OUT8(io_i_out,7,0);
    VL_OUT8(io_j_out,7,0);
    VL_OUT8(io_x_out,7,0);
    VL_OUT8(io_y_out,7,0);
    VL_IN(io_coefficient_0,31,0);
    VL_IN(io_coefficient_1,31,0);
    VL_IN(io_coefficient_2,31,0);
    VL_IN(io_coefficient_3,31,0);
    VL_IN(io_coefficient_4,31,0);
    VL_IN(io_coefficient_5,31,0);
    VL_IN(io_coefficient_6,31,0);
    VL_IN(io_coefficient_7,31,0);
    VL_IN(io_coefficient_8,31,0);
    VL_IN(io_coefficient_9,31,0);
    VL_IN(io_coefficient_10,31,0);
    VL_IN(io_coefficient_11,31,0);
    VL_IN(io_coefficient_12,31,0);
    VL_IN(io_coefficient_13,31,0);
    VL_IN(io_coefficient_14,31,0);
    VL_IN(io_coefficient_15,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(interpolation_compute_spline__DOT__i_1,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__j_1,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__x_1,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__y_1,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__i_2,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__j_2,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__x_2,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__y_2,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__i_3,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__j_3,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__x_3,7,0);
    VL_SIG8(interpolation_compute_spline__DOT__y_3,7,0);
    VL_SIG(interpolation_compute_spline__DOT__temp_1,31,0);
    VL_SIGW(interpolation_compute_spline__DOT___T_87,64,0,3);
    VL_SIGW(interpolation_compute_spline__DOT___GEN_51,64,0,3);
    VL_SIGW(interpolation_compute_spline__DOT___T_96,72,0,3);
    VL_SIG(interpolation_compute_spline__DOT__temp_2,31,0);
    VL_SIG(interpolation_compute_spline__DOT__temp_3,31,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_2,32,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_4,40,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_5,40,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_10,48,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_9,48,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_11,32,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_19,40,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_14,40,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_25,48,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_35,56,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_22,56,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_46,48,0);
    VL_SIG64(interpolation_compute_spline__DOT___GEN_29,48,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_53,56,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_76,56,0);
    VL_SIG64(interpolation_compute_spline__DOT___T_111,32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vinterpolation_compute_spline__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vinterpolation_compute_spline& operator= (const Vinterpolation_compute_spline&);  ///< Copying not allowed
    Vinterpolation_compute_spline(const Vinterpolation_compute_spline&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vinterpolation_compute_spline(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vinterpolation_compute_spline();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vinterpolation_compute_spline__Syms* symsp, bool first);
  private:
    static QData _change_request(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
    static void _eval_settle(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vinterpolation_compute_spline__Syms* __restrict vlSymsp);
    static void traceChgThis(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
