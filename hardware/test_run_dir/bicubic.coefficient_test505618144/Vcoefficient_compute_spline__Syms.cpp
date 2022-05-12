// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcoefficient_compute_spline__Syms.h"
#include "Vcoefficient_compute_spline.h"

// FUNCTIONS
Vcoefficient_compute_spline__Syms::Vcoefficient_compute_spline__Syms(Vcoefficient_compute_spline* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
