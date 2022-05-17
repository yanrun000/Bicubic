// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoefficient_compute_spline.h for the primary calling header

#include "Vcoefficient_compute_spline.h" // For This
#include "Vcoefficient_compute_spline__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcoefficient_compute_spline) {
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = __VlSymsp = new Vcoefficient_compute_spline__Syms(this, name());
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcoefficient_compute_spline::__Vconfigure(Vcoefficient_compute_spline__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcoefficient_compute_spline::~Vcoefficient_compute_spline() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcoefficient_compute_spline::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcoefficient_compute_spline::eval\n"); );
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vcoefficient_compute_spline::_eval_initial_loop(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcoefficient_compute_spline::_combo__TOP__1(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_combo__TOP__1\n"); );
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_coefficient_0 = ((0xffffe000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->io_pix_5) 
									>> 8U)))) 
						<< 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->io_pix_5) 
					      << 4U)));
    vlTOPp->coefficient_compute_spline__DOT___T_6 = 
	(0xfffU & (((IData)(vlTOPp->io_pix_6) << 3U) 
		   - ((IData)(vlTOPp->io_pix_4) << 3U)));
    vlTOPp->coefficient_compute_spline__DOT___T_33 
	= (0xfffU & (((IData)(vlTOPp->io_pix_9) << 3U) 
		     - ((IData)(vlTOPp->io_pix_1) << 3U)));
    vlTOPp->coefficient_compute_spline__DOT___T_17 
	= (0x3fffU & ((((0x1fffU & ((IData)(vlTOPp->io_pix_4) 
				    << 4U)) - ((IData)(0x28U) 
					       * (IData)(vlTOPp->io_pix_5))) 
		       + ((IData)(vlTOPp->io_pix_6) 
			  << 5U)) - (0xfffU & ((IData)(vlTOPp->io_pix_7) 
					       << 3U))));
    vlTOPp->coefficient_compute_spline__DOT___T_28 
	= (0x1fffU & (((((IData)(0x18U) * (IData)(vlTOPp->io_pix_5)) 
			- ((IData)(0x18U) * (IData)(vlTOPp->io_pix_6))) 
		       + (0xfffU & ((IData)(vlTOPp->io_pix_7) 
				    << 3U))) - (0xfffU 
						& ((IData)(vlTOPp->io_pix_4) 
						   << 3U))));
    vlTOPp->coefficient_compute_spline__DOT___T_44 
	= (0x7ffU & (((((IData)(vlTOPp->io_pix_5) << 2U) 
		       + ((IData)(vlTOPp->io_pix_10) 
			  << 2U)) - ((IData)(vlTOPp->io_pix_1) 
				     << 2U)) - ((IData)(vlTOPp->io_pix_4) 
						<< 2U)));
    vlTOPp->coefficient_compute_spline__DOT___T_98 
	= (0x3fffU & (((((IData)(vlTOPp->io_pix_9) 
			 << 5U) - (0xfffU & ((IData)(vlTOPp->io_pix_13) 
					     << 3U))) 
		       + (0x1fffU & ((IData)(vlTOPp->io_pix_1) 
				     << 4U))) - ((IData)(0x28U) 
						 * (IData)(vlTOPp->io_pix_5))));
    vlTOPp->coefficient_compute_spline__DOT___T_208 
	= (0x1fffU & (((((IData)(0x18U) * (IData)(vlTOPp->io_pix_5)) 
			- ((IData)(0x18U) * (IData)(vlTOPp->io_pix_9))) 
		       + (0xfffU & ((IData)(vlTOPp->io_pix_13) 
				    << 3U))) - (0xfffU 
						& ((IData)(vlTOPp->io_pix_1) 
						   << 3U))));
    vlTOPp->coefficient_compute_spline__DOT___T_87 
	= (0x1fffU & (((((0xfffU & ((((IData)(0xcU) 
				      * (IData)(vlTOPp->io_pix_2)) 
				     - (0x7ffU & ((IData)(vlTOPp->io_pix_4) 
						  << 2U))) 
				    + (0x7ffU & ((IData)(vlTOPp->io_pix_6) 
						 << 2U)))) 
			 + ((IData)(vlTOPp->io_pix_9) 
			    << 4U)) - (0xfffU & ((IData)(0xcU) 
						 * (IData)(vlTOPp->io_pix_10)))) 
		       + (0x7ffU & ((IData)(vlTOPp->io_pix_11) 
				    << 2U))) - ((IData)(0x14U) 
						* (IData)(vlTOPp->io_pix_1))));
    vlTOPp->coefficient_compute_spline__DOT___T_228 
	= (0x1fffU & ((((((((IData)(vlTOPp->io_pix_6) 
			    << 4U) + (0xfffU & ((IData)(0xcU) 
						* (IData)(vlTOPp->io_pix_8)))) 
			  + (0x7ffU & ((IData)(vlTOPp->io_pix_9) 
				       << 2U))) - (0xfffU 
						   & ((IData)(0xcU) 
						      * (IData)(vlTOPp->io_pix_10)))) 
			+ (0x7ffU & ((IData)(vlTOPp->io_pix_14) 
				     << 2U))) - (0x7ffU 
						 & ((IData)(vlTOPp->io_pix_1) 
						    << 2U))) 
		      - ((IData)(0x14U) * (IData)(vlTOPp->io_pix_4))));
    vlTOPp->coefficient_compute_spline__DOT___T_121 
	= (0x3fffU & ((((((((0xfffU & ((IData)(vlTOPp->io_pix_1) 
				       << 3U)) + ((IData)(vlTOPp->io_pix_4) 
						  << 5U)) 
			   - (0x7ffU & ((IData)(vlTOPp->io_pix_5) 
					<< 2U))) - 
			  (0x1fffU & ((IData)(0x18U) 
				      * (IData)(vlTOPp->io_pix_6)))) 
			 - (0x1fffU & ((IData)(0x14U) 
				       * (IData)(vlTOPp->io_pix_8)))) 
			- (0x7ffU & ((IData)(vlTOPp->io_pix_9) 
				     << 2U))) + (0x1fffU 
						 & ((IData)(vlTOPp->io_pix_10) 
						    << 4U))) 
		      - (0x7ffU & ((IData)(vlTOPp->io_pix_14) 
				   << 2U))));
    vlTOPp->coefficient_compute_spline__DOT___T_159 
	= (0x7fffU & (((((((((((((0x3fffU & ((IData)(0x28U) 
					     * (IData)(vlTOPp->io_pix_2))) 
				 - ((IData)(vlTOPp->io_pix_1) 
				    << 6U)) - ((IData)(vlTOPp->io_pix_4) 
					       << 6U)) 
			       + ((IData)(0x60U) * (IData)(vlTOPp->io_pix_5))) 
			      - ((IData)(0x44U) * (IData)(vlTOPp->io_pix_6))) 
			     + (0x1fffU & ((IData)(0x18U) 
					   * (IData)(vlTOPp->io_pix_7)))) 
			    + (0x3fffU & ((IData)(0x28U) 
					  * (IData)(vlTOPp->io_pix_8)))) 
			   - ((IData)(0x44U) * (IData)(vlTOPp->io_pix_9))) 
			  + ((IData)(0x44U) * (IData)(vlTOPp->io_pix_10))) 
			 - (0x1fffU & ((IData)(vlTOPp->io_pix_11) 
				       << 4U))) + (0x1fffU 
						   & ((IData)(0x18U) 
						      * (IData)(vlTOPp->io_pix_13)))) 
		       - (0x1fffU & ((IData)(vlTOPp->io_pix_14) 
				     << 4U))) + (0x7ffU 
						 & ((IData)(vlTOPp->io_pix_15) 
						    << 2U))));
    vlTOPp->coefficient_compute_spline__DOT___T_197 
	= (0x3fffU & ((((((((((((((IData)(0x28U) * (IData)(vlTOPp->io_pix_1)) 
				 - (0x1fffU & ((IData)(0x18U) 
					       * (IData)(vlTOPp->io_pix_2)))) 
				+ ((IData)(vlTOPp->io_pix_4) 
				   << 5U)) - ((IData)(0x34U) 
					      * (IData)(vlTOPp->io_pix_5))) 
			      + ((IData)(0x34U) * (IData)(vlTOPp->io_pix_6))) 
			     - (0x1fffU & ((IData)(0x18U) 
					   * (IData)(vlTOPp->io_pix_7)))) 
			    - (0x1fffU & ((IData)(0x14U) 
					  * (IData)(vlTOPp->io_pix_8)))) 
			   + ((IData)(0x28U) * (IData)(vlTOPp->io_pix_9))) 
			  - ((IData)(0x34U) * (IData)(vlTOPp->io_pix_10))) 
			 + (0x1fffU & ((IData)(vlTOPp->io_pix_11) 
				       << 4U))) - (0x1fffU 
						   & ((IData)(vlTOPp->io_pix_13) 
						      << 4U))) 
		       + (0xfffU & ((IData)(0xcU) * (IData)(vlTOPp->io_pix_14)))) 
		      - (0x7ffU & ((IData)(vlTOPp->io_pix_15) 
				   << 2U))));
    vlTOPp->coefficient_compute_spline__DOT___T_306 
	= (0x3fffU & ((((((((((((VL_NEGATE_I(((IData)(vlTOPp->io_pix_9) 
					      << 5U)) 
				 + (0xfffU & ((IData)(0xcU) 
					      * (IData)(vlTOPp->io_pix_2)))) 
				- (0x1fffU & ((IData)(0x14U) 
					      * (IData)(vlTOPp->io_pix_1)))) 
			       - (0x1fffU & ((IData)(0x14U) 
					     * (IData)(vlTOPp->io_pix_4)))) 
			      + (0x1fffU & ((IData)(0x1cU) 
					    * (IData)(vlTOPp->io_pix_5)))) 
			     - ((IData)(vlTOPp->io_pix_6) 
				<< 5U)) + (0x1fffU 
					   & ((IData)(vlTOPp->io_pix_7) 
					      << 4U))) 
			   + (0xfffU & ((IData)(0xcU) 
					* (IData)(vlTOPp->io_pix_8)))) 
			  + ((IData)(0x28U) * (IData)(vlTOPp->io_pix_10))) 
			 - (0xfffU & ((IData)(0xcU) 
				      * (IData)(vlTOPp->io_pix_11)))) 
			+ (0x1fffU & ((IData)(vlTOPp->io_pix_13) 
				      << 4U))) - (0xfffU 
						  & ((IData)(0xcU) 
						     * (IData)(vlTOPp->io_pix_14)))) 
		      + (0x7ffU & ((IData)(vlTOPp->io_pix_15) 
				   << 2U))));
    vlTOPp->coefficient_compute_spline__DOT___T_48 
	= (0x3fffU & (((IData)(vlTOPp->io_pix_1) << 5U) 
		      - (0x1fffU & ((IData)(0x14U) 
				    * (IData)(vlTOPp->io_pix_2)))));
    vlTOPp->io_coefficient_1 = ((0xfffff000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_6) 
									>> 0xbU)))) 
						<< 0xcU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_6));
    vlTOPp->io_coefficient_4 = ((0xfffff000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_33) 
									>> 0xbU)))) 
						<< 0xcU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_33));
    vlTOPp->io_coefficient_2 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_17) 
									>> 0xdU)))) 
						<< 0xeU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_17));
    vlTOPp->io_coefficient_3 = ((0xffffe000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_28) 
									>> 0xcU)))) 
						<< 0xdU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_28));
    vlTOPp->io_coefficient_5 = ((0xfffff800U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_44) 
									>> 0xaU)))) 
						<< 0xbU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_44));
    vlTOPp->io_coefficient_8 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_98) 
									>> 0xdU)))) 
						<< 0xeU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_98));
    vlTOPp->io_coefficient_12 = ((0xffffe000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_208) 
									 >> 0xcU)))) 
						 << 0xdU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_208));
    vlTOPp->io_coefficient_7 = ((0xffffe000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_87) 
									>> 0xcU)))) 
						<< 0xdU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_87));
    vlTOPp->io_coefficient_13 = ((0xffffe000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_228) 
									 >> 0xcU)))) 
						 << 0xdU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_228));
    vlTOPp->io_coefficient_9 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_121) 
									>> 0xdU)))) 
						<< 0xeU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_121));
    vlTOPp->io_coefficient_10 = ((0xffff8000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_159) 
									 >> 0xeU)))) 
						 << 0xfU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_159));
    vlTOPp->io_coefficient_11 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_197) 
									 >> 0xdU)))) 
						 << 0xeU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_197));
    vlTOPp->io_coefficient_15 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_306) 
									 >> 0xdU)))) 
						 << 0xeU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_306));
    vlTOPp->coefficient_compute_spline__DOT___T_67 
	= (0x3fffU & (((((((IData)(vlTOPp->coefficient_compute_spline__DOT___T_48) 
			   + (0xfffU & ((IData)(vlTOPp->io_pix_4) 
					<< 3U))) - 
			  (0x7ffU & ((IData)(vlTOPp->io_pix_5) 
				     << 2U))) - (0x7ffU 
						 & ((IData)(vlTOPp->io_pix_6) 
						    << 2U))) 
			- (0x1fffU & ((IData)(0x18U) 
				      * (IData)(vlTOPp->io_pix_9)))) 
		       + (0x1fffU & ((IData)(vlTOPp->io_pix_10) 
				     << 4U))) - (0x7ffU 
						 & ((IData)(vlTOPp->io_pix_11) 
						    << 2U))));
    vlTOPp->coefficient_compute_spline__DOT___T_266 
	= (0x3fffU & ((((((((((((IData)(vlTOPp->coefficient_compute_spline__DOT___T_48) 
				+ ((IData)(0x28U) * (IData)(vlTOPp->io_pix_4))) 
			       - ((IData)(0x34U) * (IData)(vlTOPp->io_pix_5))) 
			      + ((IData)(0x28U) * (IData)(vlTOPp->io_pix_6))) 
			     - (0x1fffU & ((IData)(vlTOPp->io_pix_7) 
					   << 4U))) 
			    - (0x1fffU & ((IData)(0x18U) 
					  * (IData)(vlTOPp->io_pix_8)))) 
			   + ((IData)(0x34U) * (IData)(vlTOPp->io_pix_9))) 
			  - ((IData)(0x34U) * (IData)(vlTOPp->io_pix_10))) 
			 + (0xfffU & ((IData)(0xcU) 
				      * (IData)(vlTOPp->io_pix_11)))) 
			- (0x1fffU & ((IData)(0x18U) 
				      * (IData)(vlTOPp->io_pix_13)))) 
		       + (0x1fffU & ((IData)(vlTOPp->io_pix_14) 
				     << 4U))) - (0x7ffU 
						 & ((IData)(vlTOPp->io_pix_15) 
						    << 2U))));
    vlTOPp->io_coefficient_6 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_67) 
									>> 0xdU)))) 
						<< 0xeU)) 
				| (IData)(vlTOPp->coefficient_compute_spline__DOT___T_67));
    vlTOPp->io_coefficient_14 = ((0xffffc000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->coefficient_compute_spline__DOT___T_266) 
									 >> 0xdU)))) 
						 << 0xeU)) 
				 | (IData)(vlTOPp->coefficient_compute_spline__DOT___T_266));
}

void Vcoefficient_compute_spline::_eval(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_eval\n"); );
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vcoefficient_compute_spline::_eval_initial(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_eval_initial\n"); );
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcoefficient_compute_spline::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::final\n"); );
    // Variables
    Vcoefficient_compute_spline__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcoefficient_compute_spline::_eval_settle(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_eval_settle\n"); );
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vcoefficient_compute_spline::_change_request(Vcoefficient_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_change_request\n"); );
    Vcoefficient_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcoefficient_compute_spline::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void Vcoefficient_compute_spline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoefficient_compute_spline::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_pix_0 = VL_RAND_RESET_I(8);
    io_pix_1 = VL_RAND_RESET_I(8);
    io_pix_2 = VL_RAND_RESET_I(8);
    io_pix_3 = VL_RAND_RESET_I(8);
    io_pix_4 = VL_RAND_RESET_I(8);
    io_pix_5 = VL_RAND_RESET_I(8);
    io_pix_6 = VL_RAND_RESET_I(8);
    io_pix_7 = VL_RAND_RESET_I(8);
    io_pix_8 = VL_RAND_RESET_I(8);
    io_pix_9 = VL_RAND_RESET_I(8);
    io_pix_10 = VL_RAND_RESET_I(8);
    io_pix_11 = VL_RAND_RESET_I(8);
    io_pix_12 = VL_RAND_RESET_I(8);
    io_pix_13 = VL_RAND_RESET_I(8);
    io_pix_14 = VL_RAND_RESET_I(8);
    io_pix_15 = VL_RAND_RESET_I(8);
    io_coefficient_0 = VL_RAND_RESET_I(32);
    io_coefficient_1 = VL_RAND_RESET_I(32);
    io_coefficient_2 = VL_RAND_RESET_I(32);
    io_coefficient_3 = VL_RAND_RESET_I(32);
    io_coefficient_4 = VL_RAND_RESET_I(32);
    io_coefficient_5 = VL_RAND_RESET_I(32);
    io_coefficient_6 = VL_RAND_RESET_I(32);
    io_coefficient_7 = VL_RAND_RESET_I(32);
    io_coefficient_8 = VL_RAND_RESET_I(32);
    io_coefficient_9 = VL_RAND_RESET_I(32);
    io_coefficient_10 = VL_RAND_RESET_I(32);
    io_coefficient_11 = VL_RAND_RESET_I(32);
    io_coefficient_12 = VL_RAND_RESET_I(32);
    io_coefficient_13 = VL_RAND_RESET_I(32);
    io_coefficient_14 = VL_RAND_RESET_I(32);
    io_coefficient_15 = VL_RAND_RESET_I(32);
    coefficient_compute_spline__DOT___T_6 = VL_RAND_RESET_I(12);
    coefficient_compute_spline__DOT___T_17 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_28 = VL_RAND_RESET_I(13);
    coefficient_compute_spline__DOT___T_33 = VL_RAND_RESET_I(12);
    coefficient_compute_spline__DOT___T_44 = VL_RAND_RESET_I(11);
    coefficient_compute_spline__DOT___T_48 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_67 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_87 = VL_RAND_RESET_I(13);
    coefficient_compute_spline__DOT___T_98 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_121 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_159 = VL_RAND_RESET_I(15);
    coefficient_compute_spline__DOT___T_197 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_208 = VL_RAND_RESET_I(13);
    coefficient_compute_spline__DOT___T_228 = VL_RAND_RESET_I(13);
    coefficient_compute_spline__DOT___T_266 = VL_RAND_RESET_I(14);
    coefficient_compute_spline__DOT___T_306 = VL_RAND_RESET_I(14);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
