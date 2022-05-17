// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vcoefficient_compute_spline__Syms_H_
#define _Vcoefficient_compute_spline__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcoefficient_compute_spline.h"

// SYMS CLASS
class Vcoefficient_compute_spline__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcoefficient_compute_spline*   TOPp;
    
    // CREATORS
    Vcoefficient_compute_spline__Syms(Vcoefficient_compute_spline* topp, const char* namep);
    ~Vcoefficient_compute_spline__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
