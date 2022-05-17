// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterpolation_compute_spline.h for the primary calling header

#include "Vinterpolation_compute_spline.h" // For This
#include "Vinterpolation_compute_spline__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vinterpolation_compute_spline) {
    Vinterpolation_compute_spline__Syms* __restrict vlSymsp = __VlSymsp = new Vinterpolation_compute_spline__Syms(this, name());
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vinterpolation_compute_spline::__Vconfigure(Vinterpolation_compute_spline__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vinterpolation_compute_spline::~Vinterpolation_compute_spline() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vinterpolation_compute_spline::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinterpolation_compute_spline::eval\n"); );
    Vinterpolation_compute_spline__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vinterpolation_compute_spline::_eval_initial_loop(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vinterpolation_compute_spline::_combo__TOP__1(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_combo__TOP__1\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->interpolation_compute_spline__DOT___GEN_29 
	= ((VL_ULL(0x1ffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								   (1U 
								    & ((IData)(vlTOPp->io_y_in) 
								       >> 7U))))) 
				       << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_11 
	= (((QData)((IData)((0x1ffffffU & VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->io_y_in) 
								  >> 7U))))))) 
	    << 8U) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_14 
	= ((VL_ULL(0x1ffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & ((IData)(vlTOPp->io_y_in) 
								     >> 7U))))) 
				     << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___T_19 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QQ(41,33, 
								(VL_ULL(0x1ffffffff) 
								 & VL_DIVS_QQQ(33, 
									       (VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_4)), VL_ULL(4))))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11))));
    vlTOPp->interpolation_compute_spline__DOT___T_46 
	= (VL_ULL(0x1ffffffffffff) & VL_MULS_QQQ(49,49,49, 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, 
								  (VL_ULL(0x1ffffffffff) 
								   & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_8)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14))));
    vlTOPp->interpolation_compute_spline__DOT___T_76 
	= (VL_ULL(0x1ffffffffffffff) & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_12)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29))));
}

void Vinterpolation_compute_spline::_settle__TOP__2(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_settle__TOP__2\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp9,95,0,3);
    VL_SIGW(__Vtemp10,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp12,95,0,3);
    VL_SIGW(__Vtemp13,95,0,3);
    VL_SIGW(__Vtemp14,95,0,3);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp17,95,0,3);
    VL_SIGW(__Vtemp18,95,0,3);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp21,95,0,3);
    VL_SIGW(__Vtemp22,95,0,3);
    VL_SIGW(__Vtemp23,95,0,3);
    VL_SIGW(__Vtemp25,95,0,3);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp29,95,0,3);
    VL_SIGW(__Vtemp30,95,0,3);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    VL_SIGW(__Vtemp33,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp36,95,0,3);
    VL_SIGW(__Vtemp38,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp44,95,0,3);
    VL_SIGW(__Vtemp48,95,0,3);
    VL_SIGW(__Vtemp49,95,0,3);
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp56,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp59,95,0,3);
    VL_SIGW(__Vtemp60,95,0,3);
    VL_SIGW(__Vtemp61,95,0,3);
    // Body
    vlTOPp->interpolation_compute_spline__DOT___GEN_29 
	= ((VL_ULL(0x1ffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								   (1U 
								    & ((IData)(vlTOPp->io_y_in) 
								       >> 7U))))) 
				       << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_11 
	= (((QData)((IData)((0x1ffffffU & VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->io_y_in) 
								  >> 7U))))))) 
	    << 8U) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_14 
	= ((VL_ULL(0x1ffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & ((IData)(vlTOPp->io_y_in) 
								     >> 7U))))) 
				     << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[0U] 
	= ((0xffffff00U & ((IData)((VL_ULL(0x1ffffffffffffff) 
				    & VL_NEGATE_Q((QData)((IData)(
								  (1U 
								   & ((IData)(vlTOPp->io_y_in) 
								      >> 7U))))))) 
			   << 8U)) | (IData)(vlTOPp->io_y_in));
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[1U] 
	= ((0xffU & ((IData)((VL_ULL(0x1ffffffffffffff) 
			      & VL_NEGATE_Q((QData)((IData)(
							    (1U 
							     & ((IData)(vlTOPp->io_y_in) 
								>> 7U))))))) 
		     >> 0x18U)) | (0xffffff00U & ((IData)(
							  ((VL_ULL(0x1ffffffffffffff) 
							    & VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->io_y_in) 
										>> 7U)))))) 
							   >> 0x20U)) 
						  << 8U)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[2U] 
	= (0xffU & ((IData)(((VL_ULL(0x1ffffffffffffff) 
			      & VL_NEGATE_Q((QData)((IData)(
							    (1U 
							     & ((IData)(vlTOPp->io_y_in) 
								>> 7U)))))) 
			     >> 0x20U)) >> 0x18U));
    vlTOPp->interpolation_compute_spline__DOT___GEN_22 
	= ((VL_ULL(0x1ffffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								     (1U 
								      & ((IData)(vlTOPp->io_y_in) 
									 >> 7U))))) 
					 << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_9 
	= ((VL_ULL(0x1ffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								   (1U 
								    & ((IData)(vlTOPp->io_x_in) 
								       >> 7U))))) 
				       << 8U)) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_5 
	= ((VL_ULL(0x1ffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & ((IData)(vlTOPp->io_x_in) 
								     >> 7U))))) 
				     << 8U)) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_2 
	= (((QData)((IData)((0x1ffffffU & VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->io_x_in) 
								  >> 7U))))))) 
	    << 8U) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___T_111 
	= (VL_ULL(0x1ffffffff) & VL_DIVS_QQQ(33, (VL_ULL(0x1ffffffff) 
						  & VL_EXTENDS_QI(33,32, vlTOPp->interpolation_compute_spline__DOT__temp_1)), VL_ULL(0x10)));
    vlTOPp->io_interpolation_compute_spline = (0xffU 
					       & ((0x80000000U 
						   & vlTOPp->interpolation_compute_spline__DOT__temp_3)
						   ? 0U
						   : vlTOPp->interpolation_compute_spline__DOT__temp_3));
    vlTOPp->io_i_out = vlTOPp->interpolation_compute_spline__DOT__i_3;
    vlTOPp->io_j_out = vlTOPp->interpolation_compute_spline__DOT__j_3;
    vlTOPp->io_x_out = vlTOPp->interpolation_compute_spline__DOT__x_3;
    vlTOPp->io_y_out = vlTOPp->interpolation_compute_spline__DOT__y_3;
    vlTOPp->interpolation_compute_spline__DOT___T_19 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QQ(41,33, 
								(VL_ULL(0x1ffffffff) 
								 & VL_DIVS_QQQ(33, 
									       (VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_4)), VL_ULL(4))))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11))));
    vlTOPp->interpolation_compute_spline__DOT___T_46 
	= (VL_ULL(0x1ffffffffffff) & VL_MULS_QQQ(49,49,49, 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, 
								  (VL_ULL(0x1ffffffffff) 
								   & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_8)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14))));
    vlTOPp->interpolation_compute_spline__DOT___T_76 
	= (VL_ULL(0x1ffffffffffffff) & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_12)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29))));
    vlTOPp->interpolation_compute_spline__DOT___T_53 
	= (VL_ULL(0x1ffffffffffffff) & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_9)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29))));
    vlTOPp->interpolation_compute_spline__DOT___T_25 
	= (VL_ULL(0x1ffffffffffff) & VL_MULS_QQQ(49,49,49, 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, 
								  (VL_ULL(0x1ffffffffff) 
								   & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_5)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14))));
    vlTOPp->interpolation_compute_spline__DOT___T_4 
	= (VL_ULL(0x1ffffffffff) & ((((QData)((IData)(
						      (0x1ffU 
						       & VL_NEGATE_I((IData)(
									     (1U 
									      & (vlTOPp->io_coefficient_0 
										>> 0x1fU))))))) 
				      << 0x20U) | (QData)((IData)(vlTOPp->io_coefficient_0))) 
				    + VL_MULS_QQQ(41,41,41, 
						  (VL_ULL(0x1ffffffffff) 
						   & VL_EXTENDS_QQ(41,33, 
								   (VL_ULL(0x1ffffffff) 
								    & VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_1)), VL_ULL(4))))), 
						  (VL_ULL(0x1ffffffffff) 
						   & VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))));
    vlTOPp->interpolation_compute_spline__DOT___T_10 
	= (VL_ULL(0x1ffffffffffff) & ((((QData)((IData)(
							(0xffU 
							 & VL_NEGATE_I((IData)(
									       (1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_4 
										>> 0x28U)))))))) 
					<< 0x29U) | vlTOPp->interpolation_compute_spline__DOT___T_4) 
				      + VL_MULS_QQQ(49,49,49, 
						    (VL_ULL(0x1ffffffffffff) 
						     & VL_EXTENDS_QQ(49,41, 
								     (VL_ULL(0x1ffffffffff) 
								      & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_2)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
						    (VL_ULL(0x1ffffffffffff) 
						     & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))));
    vlTOPp->interpolation_compute_spline__DOT___T_35 
	= (VL_ULL(0x1ffffffffffffff) & (((((((QData)((IData)(
							     (0xffU 
							      & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_10 
										>> 0x30U)))))))) 
					     << 0x31U) 
					    | vlTOPp->interpolation_compute_spline__DOT___T_10) 
					   + VL_MULS_QQQ(57,57,57, 
							 (VL_ULL(0x1ffffffffffffff) 
							  & VL_EXTENDS_QQ(57,49, 
									  (VL_ULL(0x1ffffffffffff) 
									   & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_3)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
							 (VL_ULL(0x1ffffffffffffff) 
							  & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))) 
					  + (((QData)((IData)(
							      (0xffffU 
							       & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_19 
										>> 0x28U)))))))) 
					      << 0x29U) 
					     | vlTOPp->interpolation_compute_spline__DOT___T_19)) 
					 + (((QData)((IData)(
							     (0xffU 
							      & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_25 
										>> 0x30U)))))))) 
					     << 0x31U) 
					    | vlTOPp->interpolation_compute_spline__DOT___T_25)) 
					+ VL_MULS_QQQ(57,57,57, 
						      (VL_ULL(0x1ffffffffffffff) 
						       & VL_EXTENDS_QQ(57,49, 
								       (VL_ULL(0x1ffffffffffff) 
									& VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_6)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						      (VL_ULL(0x1ffffffffffffff) 
						       & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp3[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_35);
    __Vtemp3[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							(1U 
							 & (IData)(
								   (vlTOPp->interpolation_compute_spline__DOT___T_35 
								    >> 0x38U))))) 
				    << 0x19U)) | (IData)(
							 (vlTOPp->interpolation_compute_spline__DOT___T_35 
							  >> 0x20U)));
    __Vtemp3[2U] = (1U & (VL_NEGATE_I((IData)((1U & (IData)(
							    (vlTOPp->interpolation_compute_spline__DOT___T_35 
							     >> 0x38U))))) 
			  >> 7U));
    VL_EXTENDS_WQ(65,57, __Vtemp5, (VL_ULL(0x1ffffffffffffff) 
				    & VL_MULS_QQQ(57,57,57, 
						  (VL_ULL(0x1ffffffffffffff) 
						   & VL_EXTENDS_QQ(57,49, 
								   (VL_ULL(0x1ffffffffffff) 
								    & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_7)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						  (VL_ULL(0x1ffffffffffffff) 
						   & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp6[0U] = __Vtemp5[0U];
    __Vtemp6[1U] = __Vtemp5[1U];
    __Vtemp6[2U] = (1U & __Vtemp5[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp8, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp9[0U] = __Vtemp8[0U];
    __Vtemp9[1U] = __Vtemp8[1U];
    __Vtemp9[2U] = (1U & __Vtemp8[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp10, __Vtemp6, __Vtemp9);
    VL_ADD_W(3, __Vtemp11, __Vtemp3, __Vtemp10);
    __Vtemp12[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_46);
    __Vtemp12[1U] = ((0xfffe0000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->interpolation_compute_spline__DOT___T_46 
								     >> 0x30U))))) 
				     << 0x11U)) | (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_46 
							   >> 0x20U)));
    __Vtemp12[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						& (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_46 
							   >> 0x30U))))) 
			   >> 0xfU));
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    __Vtemp14[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_53);
    __Vtemp14[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->interpolation_compute_spline__DOT___T_53 
								     >> 0x38U))))) 
				     << 0x19U)) | (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_53 
							   >> 0x20U)));
    __Vtemp14[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						& (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_53 
							   >> 0x38U))))) 
			   >> 7U));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    VL_EXTENDS_WQ(65,57, __Vtemp17, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_10)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp18[0U] = __Vtemp17[0U];
    __Vtemp18[1U] = __Vtemp17[1U];
    __Vtemp18[2U] = (1U & __Vtemp17[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp20, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp21[0U] = __Vtemp20[0U];
    __Vtemp21[1U] = __Vtemp20[1U];
    __Vtemp21[2U] = (1U & __Vtemp20[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp22, __Vtemp18, __Vtemp21);
    VL_ADD_W(3, __Vtemp23, __Vtemp15, __Vtemp22);
    VL_EXTENDS_WQ(65,57, __Vtemp25, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_11)), VL_ULL(0x400))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp26[0U] = __Vtemp25[0U];
    __Vtemp26[1U] = __Vtemp25[1U];
    __Vtemp26[2U] = (1U & __Vtemp25[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp28, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp29[0U] = __Vtemp28[0U];
    __Vtemp29[1U] = __Vtemp28[1U];
    __Vtemp29[2U] = (1U & __Vtemp28[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp30, __Vtemp26, __Vtemp29);
    VL_ADD_W(3, __Vtemp31, __Vtemp23, __Vtemp30);
    __Vtemp32[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_76);
    __Vtemp32[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->interpolation_compute_spline__DOT___T_76 
								     >> 0x38U))))) 
				     << 0x19U)) | (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_76 
							   >> 0x20U)));
    __Vtemp32[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						& (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_76 
							   >> 0x38U))))) 
			   >> 7U));
    VL_ADD_W(3, __Vtemp33, __Vtemp31, __Vtemp32);
    VL_EXTENDS_WQ(65,57, __Vtemp35, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_13)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp36[0U] = __Vtemp35[0U];
    __Vtemp36[1U] = __Vtemp35[1U];
    __Vtemp36[2U] = (1U & __Vtemp35[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp38, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp39[0U] = __Vtemp38[0U];
    __Vtemp39[1U] = __Vtemp38[1U];
    __Vtemp39[2U] = (1U & __Vtemp38[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp40, __Vtemp36, __Vtemp39);
    VL_ADD_W(3, __Vtemp41, __Vtemp33, __Vtemp40);
    vlTOPp->interpolation_compute_spline__DOT___T_87[0U] 
	= __Vtemp41[0U];
    vlTOPp->interpolation_compute_spline__DOT___T_87[1U] 
	= __Vtemp41[1U];
    vlTOPp->interpolation_compute_spline__DOT___T_87[2U] 
	= (1U & __Vtemp41[2U]);
    __Vtemp44[0U] = vlTOPp->interpolation_compute_spline__DOT___T_87[0U];
    __Vtemp44[1U] = vlTOPp->interpolation_compute_spline__DOT___T_87[1U];
    __Vtemp44[2U] = ((0x1feU & (VL_NEGATE_I((IData)(
						    (1U 
						     & vlTOPp->interpolation_compute_spline__DOT___T_87[2U]))) 
				<< 1U)) | vlTOPp->interpolation_compute_spline__DOT___T_87[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp48, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_14)), VL_ULL(0x400))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp49[0U] = __Vtemp48[0U];
    __Vtemp49[1U] = __Vtemp48[1U];
    __Vtemp49[2U] = (1U & __Vtemp48[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp51, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp52[0U] = __Vtemp51[0U];
    __Vtemp52[1U] = __Vtemp51[1U];
    __Vtemp52[2U] = (1U & __Vtemp51[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp53, __Vtemp49, __Vtemp52);
    __Vtemp54[0U] = __Vtemp53[0U];
    __Vtemp54[1U] = __Vtemp53[1U];
    __Vtemp54[2U] = (1U & __Vtemp53[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp55, __Vtemp54);
    __Vtemp56[0U] = __Vtemp55[0U];
    __Vtemp56[1U] = __Vtemp55[1U];
    __Vtemp56[2U] = (0x1ffU & __Vtemp55[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp58, vlTOPp->interpolation_compute_spline__DOT___GEN_51);
    __Vtemp59[0U] = __Vtemp58[0U];
    __Vtemp59[1U] = __Vtemp58[1U];
    __Vtemp59[2U] = (0x1ffU & __Vtemp58[2U]);
    VL_MULS_WWW(73,73,73, __Vtemp60, __Vtemp56, __Vtemp59);
    VL_ADD_W(3, __Vtemp61, __Vtemp44, __Vtemp60);
    vlTOPp->interpolation_compute_spline__DOT___T_96[0U] 
	= __Vtemp61[0U];
    vlTOPp->interpolation_compute_spline__DOT___T_96[1U] 
	= __Vtemp61[1U];
    vlTOPp->interpolation_compute_spline__DOT___T_96[2U] 
	= (0x1ffU & __Vtemp61[2U]);
}

VL_INLINE_OPT void Vinterpolation_compute_spline::_sequent__TOP__3(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_sequent__TOP__3\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__i_1,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__j_1,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__x_1,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__y_1,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__i_2,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__j_2,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__x_2,7,0);
    VL_SIG8(__Vdly__interpolation_compute_spline__DOT__y_2,7,0);
    VL_SIG(__Vdly__interpolation_compute_spline__DOT__temp_2,31,0);
    VL_SIGW(__Vtemp69,95,0,3);
    VL_SIGW(__Vtemp70,95,0,3);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp73,95,0,3);
    VL_SIGW(__Vtemp74,95,0,3);
    VL_SIGW(__Vtemp75,95,0,3);
    VL_SIGW(__Vtemp76,95,0,3);
    VL_SIGW(__Vtemp77,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp81,95,0,3);
    VL_SIGW(__Vtemp82,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp89,95,0,3);
    VL_SIGW(__Vtemp90,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    // Body
    __Vdly__interpolation_compute_spline__DOT__i_1 
	= vlTOPp->interpolation_compute_spline__DOT__i_1;
    __Vdly__interpolation_compute_spline__DOT__j_1 
	= vlTOPp->interpolation_compute_spline__DOT__j_1;
    __Vdly__interpolation_compute_spline__DOT__x_1 
	= vlTOPp->interpolation_compute_spline__DOT__x_1;
    __Vdly__interpolation_compute_spline__DOT__y_1 
	= vlTOPp->interpolation_compute_spline__DOT__y_1;
    __Vdly__interpolation_compute_spline__DOT__temp_2 
	= vlTOPp->interpolation_compute_spline__DOT__temp_2;
    __Vdly__interpolation_compute_spline__DOT__i_2 
	= vlTOPp->interpolation_compute_spline__DOT__i_2;
    __Vdly__interpolation_compute_spline__DOT__j_2 
	= vlTOPp->interpolation_compute_spline__DOT__j_2;
    __Vdly__interpolation_compute_spline__DOT__x_2 
	= vlTOPp->interpolation_compute_spline__DOT__x_2;
    __Vdly__interpolation_compute_spline__DOT__y_2 
	= vlTOPp->interpolation_compute_spline__DOT__y_2;
    // ALWAYS at interpolation_compute_spline.v:167
    VL_EXTENDS_WQ(65,57, __Vtemp69, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_15)), VL_ULL(0x1000))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp70[0U] = __Vtemp69[0U];
    __Vtemp70[1U] = __Vtemp69[1U];
    __Vtemp70[2U] = (1U & __Vtemp69[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp72, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp73[0U] = __Vtemp72[0U];
    __Vtemp73[1U] = __Vtemp72[1U];
    __Vtemp73[2U] = (1U & __Vtemp72[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp74, __Vtemp70, __Vtemp73);
    __Vtemp75[0U] = __Vtemp74[0U];
    __Vtemp75[1U] = __Vtemp74[1U];
    __Vtemp75[2U] = (1U & __Vtemp74[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp76, __Vtemp75);
    __Vtemp77[0U] = __Vtemp76[0U];
    __Vtemp77[1U] = __Vtemp76[1U];
    __Vtemp77[2U] = (0x1ffU & __Vtemp76[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp79, vlTOPp->interpolation_compute_spline__DOT___GEN_51);
    __Vtemp80[0U] = __Vtemp79[0U];
    __Vtemp80[1U] = __Vtemp79[1U];
    __Vtemp80[2U] = (0x1ffU & __Vtemp79[2U]);
    VL_MULS_WWW(73,73,73, __Vtemp81, __Vtemp77, __Vtemp80);
    __Vtemp82[0U] = __Vtemp81[0U];
    __Vtemp82[1U] = __Vtemp81[1U];
    __Vtemp82[2U] = (0x1ffU & __Vtemp81[2U]);
    VL_EXTENDS_WW(81,73, __Vtemp83, __Vtemp82);
    __Vtemp84[0U] = __Vtemp83[0U];
    __Vtemp84[1U] = __Vtemp83[1U];
    __Vtemp84[2U] = (0x1ffffU & __Vtemp83[2U]);
    __Vtemp89[0U] = ((0xffffff00U & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->io_y_in) 
							     >> 7U)))) 
				     << 8U)) | (IData)(vlTOPp->io_y_in));
    __Vtemp89[1U] = ((0xffU & (VL_NEGATE_I((IData)(
						   (1U 
						    & ((IData)(vlTOPp->io_y_in) 
						       >> 7U)))) 
			       >> 0x18U)) | (0xffffff00U 
					     & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->io_y_in) 
									>> 7U)))) 
						<< 8U)));
    __Vtemp89[2U] = ((0xffU & (VL_NEGATE_I((IData)(
						   (1U 
						    & ((IData)(vlTOPp->io_y_in) 
						       >> 7U)))) 
			       >> 0x18U)) | (0x100U 
					     & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->io_y_in) 
									>> 7U)))) 
						<< 8U)));
    VL_EXTENDS_WW(81,73, __Vtemp90, __Vtemp89);
    __Vtemp91[0U] = __Vtemp90[0U];
    __Vtemp91[1U] = __Vtemp90[1U];
    __Vtemp91[2U] = (0x1ffffU & __Vtemp90[2U]);
    VL_MULS_WWW(81,81,81, __Vtemp92, __Vtemp84, __Vtemp91);
    vlTOPp->interpolation_compute_spline__DOT__temp_1 
	= ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->interpolation_compute_spline__DOT___T_96[0U] 
					  + __Vtemp92[0U]));
    __Vdly__interpolation_compute_spline__DOT__i_1 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->io_i_in));
    __Vdly__interpolation_compute_spline__DOT__j_1 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->io_j_in));
    __Vdly__interpolation_compute_spline__DOT__x_1 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->io_x_in));
    __Vdly__interpolation_compute_spline__DOT__y_1 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->io_y_in));
    __Vdly__interpolation_compute_spline__DOT__temp_2 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT___T_111));
    __Vdly__interpolation_compute_spline__DOT__i_2 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__i_1));
    __Vdly__interpolation_compute_spline__DOT__j_2 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__j_1));
    __Vdly__interpolation_compute_spline__DOT__x_2 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__x_1));
    __Vdly__interpolation_compute_spline__DOT__y_2 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__y_1));
    vlTOPp->interpolation_compute_spline__DOT__temp_3 
	= ((IData)(vlTOPp->reset) ? 0U : (VL_LTES_III(1,32,32, 0xffU, vlTOPp->interpolation_compute_spline__DOT__temp_2)
					   ? 0xffU : vlTOPp->interpolation_compute_spline__DOT__temp_2));
    vlTOPp->interpolation_compute_spline__DOT__i_3 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__i_2));
    vlTOPp->interpolation_compute_spline__DOT__j_3 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__j_2));
    vlTOPp->interpolation_compute_spline__DOT__x_3 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__x_2));
    vlTOPp->interpolation_compute_spline__DOT__y_3 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->interpolation_compute_spline__DOT__y_2));
    vlTOPp->interpolation_compute_spline__DOT__i_1 
	= __Vdly__interpolation_compute_spline__DOT__i_1;
    vlTOPp->interpolation_compute_spline__DOT__j_1 
	= __Vdly__interpolation_compute_spline__DOT__j_1;
    vlTOPp->interpolation_compute_spline__DOT__x_1 
	= __Vdly__interpolation_compute_spline__DOT__x_1;
    vlTOPp->interpolation_compute_spline__DOT__y_1 
	= __Vdly__interpolation_compute_spline__DOT__y_1;
    vlTOPp->interpolation_compute_spline__DOT__temp_2 
	= __Vdly__interpolation_compute_spline__DOT__temp_2;
    vlTOPp->interpolation_compute_spline__DOT__i_2 
	= __Vdly__interpolation_compute_spline__DOT__i_2;
    vlTOPp->interpolation_compute_spline__DOT__j_2 
	= __Vdly__interpolation_compute_spline__DOT__j_2;
    vlTOPp->interpolation_compute_spline__DOT__x_2 
	= __Vdly__interpolation_compute_spline__DOT__x_2;
    vlTOPp->interpolation_compute_spline__DOT__y_2 
	= __Vdly__interpolation_compute_spline__DOT__y_2;
    vlTOPp->interpolation_compute_spline__DOT___T_111 
	= (VL_ULL(0x1ffffffff) & VL_DIVS_QQQ(33, (VL_ULL(0x1ffffffff) 
						  & VL_EXTENDS_QI(33,32, vlTOPp->interpolation_compute_spline__DOT__temp_1)), VL_ULL(0x10)));
    vlTOPp->io_interpolation_compute_spline = (0xffU 
					       & ((0x80000000U 
						   & vlTOPp->interpolation_compute_spline__DOT__temp_3)
						   ? 0U
						   : vlTOPp->interpolation_compute_spline__DOT__temp_3));
    vlTOPp->io_i_out = vlTOPp->interpolation_compute_spline__DOT__i_3;
    vlTOPp->io_j_out = vlTOPp->interpolation_compute_spline__DOT__j_3;
    vlTOPp->io_x_out = vlTOPp->interpolation_compute_spline__DOT__x_3;
    vlTOPp->io_y_out = vlTOPp->interpolation_compute_spline__DOT__y_3;
}

VL_INLINE_OPT void Vinterpolation_compute_spline::_combo__TOP__4(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_combo__TOP__4\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp96,95,0,3);
    VL_SIGW(__Vtemp98,95,0,3);
    VL_SIGW(__Vtemp99,95,0,3);
    VL_SIGW(__Vtemp101,95,0,3);
    VL_SIGW(__Vtemp102,95,0,3);
    VL_SIGW(__Vtemp103,95,0,3);
    VL_SIGW(__Vtemp104,95,0,3);
    VL_SIGW(__Vtemp105,95,0,3);
    VL_SIGW(__Vtemp106,95,0,3);
    VL_SIGW(__Vtemp107,95,0,3);
    VL_SIGW(__Vtemp108,95,0,3);
    VL_SIGW(__Vtemp110,95,0,3);
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp113,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    VL_SIGW(__Vtemp118,95,0,3);
    VL_SIGW(__Vtemp119,95,0,3);
    VL_SIGW(__Vtemp121,95,0,3);
    VL_SIGW(__Vtemp122,95,0,3);
    VL_SIGW(__Vtemp123,95,0,3);
    VL_SIGW(__Vtemp124,95,0,3);
    VL_SIGW(__Vtemp125,95,0,3);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp128,95,0,3);
    VL_SIGW(__Vtemp129,95,0,3);
    VL_SIGW(__Vtemp131,95,0,3);
    VL_SIGW(__Vtemp132,95,0,3);
    VL_SIGW(__Vtemp133,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp141,95,0,3);
    VL_SIGW(__Vtemp142,95,0,3);
    VL_SIGW(__Vtemp144,95,0,3);
    VL_SIGW(__Vtemp145,95,0,3);
    VL_SIGW(__Vtemp146,95,0,3);
    VL_SIGW(__Vtemp147,95,0,3);
    VL_SIGW(__Vtemp148,95,0,3);
    VL_SIGW(__Vtemp149,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp152,95,0,3);
    VL_SIGW(__Vtemp153,95,0,3);
    VL_SIGW(__Vtemp154,95,0,3);
    // Body
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[0U] 
	= ((0xffffff00U & ((IData)((VL_ULL(0x1ffffffffffffff) 
				    & VL_NEGATE_Q((QData)((IData)(
								  (1U 
								   & ((IData)(vlTOPp->io_y_in) 
								      >> 7U))))))) 
			   << 8U)) | (IData)(vlTOPp->io_y_in));
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[1U] 
	= ((0xffU & ((IData)((VL_ULL(0x1ffffffffffffff) 
			      & VL_NEGATE_Q((QData)((IData)(
							    (1U 
							     & ((IData)(vlTOPp->io_y_in) 
								>> 7U))))))) 
		     >> 0x18U)) | (0xffffff00U & ((IData)(
							  ((VL_ULL(0x1ffffffffffffff) 
							    & VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->io_y_in) 
										>> 7U)))))) 
							   >> 0x20U)) 
						  << 8U)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_51[2U] 
	= (0xffU & ((IData)(((VL_ULL(0x1ffffffffffffff) 
			      & VL_NEGATE_Q((QData)((IData)(
							    (1U 
							     & ((IData)(vlTOPp->io_y_in) 
								>> 7U)))))) 
			     >> 0x20U)) >> 0x18U));
    vlTOPp->interpolation_compute_spline__DOT___GEN_22 
	= ((VL_ULL(0x1ffffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								     (1U 
								      & ((IData)(vlTOPp->io_y_in) 
									 >> 7U))))) 
					 << 8U)) | (QData)((IData)(vlTOPp->io_y_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_9 
	= ((VL_ULL(0x1ffffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								   (1U 
								    & ((IData)(vlTOPp->io_x_in) 
								       >> 7U))))) 
				       << 8U)) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_5 
	= ((VL_ULL(0x1ffffffff00) & (VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & ((IData)(vlTOPp->io_x_in) 
								     >> 7U))))) 
				     << 8U)) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___GEN_2 
	= (((QData)((IData)((0x1ffffffU & VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->io_x_in) 
								  >> 7U))))))) 
	    << 8U) | (QData)((IData)(vlTOPp->io_x_in)));
    vlTOPp->interpolation_compute_spline__DOT___T_53 
	= (VL_ULL(0x1ffffffffffffff) & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_9)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29))));
    vlTOPp->interpolation_compute_spline__DOT___T_25 
	= (VL_ULL(0x1ffffffffffff) & VL_MULS_QQQ(49,49,49, 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, 
								  (VL_ULL(0x1ffffffffff) 
								   & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_5)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
						 (VL_ULL(0x1ffffffffffff) 
						  & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14))));
    vlTOPp->interpolation_compute_spline__DOT___T_4 
	= (VL_ULL(0x1ffffffffff) & ((((QData)((IData)(
						      (0x1ffU 
						       & VL_NEGATE_I((IData)(
									     (1U 
									      & (vlTOPp->io_coefficient_0 
										>> 0x1fU))))))) 
				      << 0x20U) | (QData)((IData)(vlTOPp->io_coefficient_0))) 
				    + VL_MULS_QQQ(41,41,41, 
						  (VL_ULL(0x1ffffffffff) 
						   & VL_EXTENDS_QQ(41,33, 
								   (VL_ULL(0x1ffffffff) 
								    & VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_1)), VL_ULL(4))))), 
						  (VL_ULL(0x1ffffffffff) 
						   & VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))));
    vlTOPp->interpolation_compute_spline__DOT___T_10 
	= (VL_ULL(0x1ffffffffffff) & ((((QData)((IData)(
							(0xffU 
							 & VL_NEGATE_I((IData)(
									       (1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_4 
										>> 0x28U)))))))) 
					<< 0x29U) | vlTOPp->interpolation_compute_spline__DOT___T_4) 
				      + VL_MULS_QQQ(49,49,49, 
						    (VL_ULL(0x1ffffffffffff) 
						     & VL_EXTENDS_QQ(49,41, 
								     (VL_ULL(0x1ffffffffff) 
								      & VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_2)), VL_ULL(0x10))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
						    (VL_ULL(0x1ffffffffffff) 
						     & VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))));
    vlTOPp->interpolation_compute_spline__DOT___T_35 
	= (VL_ULL(0x1ffffffffffffff) & (((((((QData)((IData)(
							     (0xffU 
							      & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_10 
										>> 0x30U)))))))) 
					     << 0x31U) 
					    | vlTOPp->interpolation_compute_spline__DOT___T_10) 
					   + VL_MULS_QQQ(57,57,57, 
							 (VL_ULL(0x1ffffffffffffff) 
							  & VL_EXTENDS_QQ(57,49, 
									  (VL_ULL(0x1ffffffffffff) 
									   & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_3)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
							 (VL_ULL(0x1ffffffffffffff) 
							  & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))) 
					  + (((QData)((IData)(
							      (0xffffU 
							       & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_19 
										>> 0x28U)))))))) 
					      << 0x29U) 
					     | vlTOPp->interpolation_compute_spline__DOT___T_19)) 
					 + (((QData)((IData)(
							     (0xffU 
							      & VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->interpolation_compute_spline__DOT___T_25 
										>> 0x30U)))))))) 
					     << 0x31U) 
					    | vlTOPp->interpolation_compute_spline__DOT___T_25)) 
					+ VL_MULS_QQQ(57,57,57, 
						      (VL_ULL(0x1ffffffffffffff) 
						       & VL_EXTENDS_QQ(57,49, 
								       (VL_ULL(0x1ffffffffffff) 
									& VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_6)), VL_ULL(0x40))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_11)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						      (VL_ULL(0x1ffffffffffffff) 
						       & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp96[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_35);
    __Vtemp96[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->interpolation_compute_spline__DOT___T_35 
								     >> 0x38U))))) 
				     << 0x19U)) | (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_35 
							   >> 0x20U)));
    __Vtemp96[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						& (IData)(
							  (vlTOPp->interpolation_compute_spline__DOT___T_35 
							   >> 0x38U))))) 
			   >> 7U));
    VL_EXTENDS_WQ(65,57, __Vtemp98, (VL_ULL(0x1ffffffffffffff) 
				     & VL_MULS_QQQ(57,57,57, 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, 
								    (VL_ULL(0x1ffffffffffff) 
								     & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_7)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						   (VL_ULL(0x1ffffffffffffff) 
						    & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp99[0U] = __Vtemp98[0U];
    __Vtemp99[1U] = __Vtemp98[1U];
    __Vtemp99[2U] = (1U & __Vtemp98[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp101, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp102[0U] = __Vtemp101[0U];
    __Vtemp102[1U] = __Vtemp101[1U];
    __Vtemp102[2U] = (1U & __Vtemp101[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp103, __Vtemp99, __Vtemp102);
    VL_ADD_W(3, __Vtemp104, __Vtemp96, __Vtemp103);
    __Vtemp105[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_46);
    __Vtemp105[1U] = ((0xfffe0000U & (VL_NEGATE_I((IData)(
							  (1U 
							   & (IData)(
								     (vlTOPp->interpolation_compute_spline__DOT___T_46 
								      >> 0x30U))))) 
				      << 0x11U)) | (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_46 
							    >> 0x20U)));
    __Vtemp105[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						 & (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_46 
							    >> 0x30U))))) 
			    >> 0xfU));
    VL_ADD_W(3, __Vtemp106, __Vtemp104, __Vtemp105);
    __Vtemp107[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_53);
    __Vtemp107[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							  (1U 
							   & (IData)(
								     (vlTOPp->interpolation_compute_spline__DOT___T_53 
								      >> 0x38U))))) 
				      << 0x19U)) | (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_53 
							    >> 0x20U)));
    __Vtemp107[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						 & (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_53 
							    >> 0x38U))))) 
			    >> 7U));
    VL_ADD_W(3, __Vtemp108, __Vtemp106, __Vtemp107);
    VL_EXTENDS_WQ(65,57, __Vtemp110, (VL_ULL(0x1ffffffffffffff) 
				      & VL_MULS_QQQ(57,57,57, 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, 
								     (VL_ULL(0x1ffffffffffff) 
								      & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_10)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp111[0U] = __Vtemp110[0U];
    __Vtemp111[1U] = __Vtemp110[1U];
    __Vtemp111[2U] = (1U & __Vtemp110[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp113, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp114[0U] = __Vtemp113[0U];
    __Vtemp114[1U] = __Vtemp113[1U];
    __Vtemp114[2U] = (1U & __Vtemp113[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp115, __Vtemp111, __Vtemp114);
    VL_ADD_W(3, __Vtemp116, __Vtemp108, __Vtemp115);
    VL_EXTENDS_WQ(65,57, __Vtemp118, (VL_ULL(0x1ffffffffffffff) 
				      & VL_MULS_QQQ(57,57,57, 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, 
								     (VL_ULL(0x1ffffffffffff) 
								      & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_11)), VL_ULL(0x400))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_9)))));
    __Vtemp119[0U] = __Vtemp118[0U];
    __Vtemp119[1U] = __Vtemp118[1U];
    __Vtemp119[2U] = (1U & __Vtemp118[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp121, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp122[0U] = __Vtemp121[0U];
    __Vtemp122[1U] = __Vtemp121[1U];
    __Vtemp122[2U] = (1U & __Vtemp121[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp123, __Vtemp119, __Vtemp122);
    VL_ADD_W(3, __Vtemp124, __Vtemp116, __Vtemp123);
    __Vtemp125[0U] = (IData)(vlTOPp->interpolation_compute_spline__DOT___T_76);
    __Vtemp125[1U] = ((0xfe000000U & (VL_NEGATE_I((IData)(
							  (1U 
							   & (IData)(
								     (vlTOPp->interpolation_compute_spline__DOT___T_76 
								      >> 0x38U))))) 
				      << 0x19U)) | (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_76 
							    >> 0x20U)));
    __Vtemp125[2U] = (1U & (VL_NEGATE_I((IData)((1U 
						 & (IData)(
							   (vlTOPp->interpolation_compute_spline__DOT___T_76 
							    >> 0x38U))))) 
			    >> 7U));
    VL_ADD_W(3, __Vtemp126, __Vtemp124, __Vtemp125);
    VL_EXTENDS_WQ(65,57, __Vtemp128, (VL_ULL(0x1ffffffffffffff) 
				      & VL_MULS_QQQ(57,57,57, 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, 
								     (VL_ULL(0x1ffffffffffff) 
								      & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_13)), VL_ULL(0x100))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_14)))))), 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp129[0U] = __Vtemp128[0U];
    __Vtemp129[1U] = __Vtemp128[1U];
    __Vtemp129[2U] = (1U & __Vtemp128[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp131, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp132[0U] = __Vtemp131[0U];
    __Vtemp132[1U] = __Vtemp131[1U];
    __Vtemp132[2U] = (1U & __Vtemp131[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp133, __Vtemp129, __Vtemp132);
    VL_ADD_W(3, __Vtemp134, __Vtemp126, __Vtemp133);
    vlTOPp->interpolation_compute_spline__DOT___T_87[0U] 
	= __Vtemp134[0U];
    vlTOPp->interpolation_compute_spline__DOT___T_87[1U] 
	= __Vtemp134[1U];
    vlTOPp->interpolation_compute_spline__DOT___T_87[2U] 
	= (1U & __Vtemp134[2U]);
    __Vtemp137[0U] = vlTOPp->interpolation_compute_spline__DOT___T_87[0U];
    __Vtemp137[1U] = vlTOPp->interpolation_compute_spline__DOT___T_87[1U];
    __Vtemp137[2U] = ((0x1feU & (VL_NEGATE_I((IData)(
						     (1U 
						      & vlTOPp->interpolation_compute_spline__DOT___T_87[2U]))) 
				 << 1U)) | vlTOPp->interpolation_compute_spline__DOT___T_87[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp141, (VL_ULL(0x1ffffffffffffff) 
				      & VL_MULS_QQQ(57,57,57, 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, 
								     (VL_ULL(0x1ffffffffffff) 
								      & VL_MULS_QQQ(49,49,49, 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_MULS_QQQ(41,41,41, 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, 
										(VL_ULL(0x1ffffffff) 
										& VL_DIVS_QQQ(33, 
										(VL_ULL(0x1ffffffff) 
										& VL_EXTENDS_QI(33,32, vlTOPp->io_coefficient_14)), VL_ULL(0x400))))), 
										(VL_ULL(0x1ffffffffff) 
										& VL_EXTENDS_QQ(41,33, vlTOPp->interpolation_compute_spline__DOT___GEN_2)))))), 
										(VL_ULL(0x1ffffffffffff) 
										& VL_EXTENDS_QQ(49,41, vlTOPp->interpolation_compute_spline__DOT___GEN_5)))))), 
						    (VL_ULL(0x1ffffffffffffff) 
						     & VL_EXTENDS_QQ(57,49, vlTOPp->interpolation_compute_spline__DOT___GEN_29)))));
    __Vtemp142[0U] = __Vtemp141[0U];
    __Vtemp142[1U] = __Vtemp141[1U];
    __Vtemp142[2U] = (1U & __Vtemp141[2U]);
    VL_EXTENDS_WQ(65,57, __Vtemp144, vlTOPp->interpolation_compute_spline__DOT___GEN_22);
    __Vtemp145[0U] = __Vtemp144[0U];
    __Vtemp145[1U] = __Vtemp144[1U];
    __Vtemp145[2U] = (1U & __Vtemp144[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp146, __Vtemp142, __Vtemp145);
    __Vtemp147[0U] = __Vtemp146[0U];
    __Vtemp147[1U] = __Vtemp146[1U];
    __Vtemp147[2U] = (1U & __Vtemp146[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp148, __Vtemp147);
    __Vtemp149[0U] = __Vtemp148[0U];
    __Vtemp149[1U] = __Vtemp148[1U];
    __Vtemp149[2U] = (0x1ffU & __Vtemp148[2U]);
    VL_EXTENDS_WW(73,65, __Vtemp151, vlTOPp->interpolation_compute_spline__DOT___GEN_51);
    __Vtemp152[0U] = __Vtemp151[0U];
    __Vtemp152[1U] = __Vtemp151[1U];
    __Vtemp152[2U] = (0x1ffU & __Vtemp151[2U]);
    VL_MULS_WWW(73,73,73, __Vtemp153, __Vtemp149, __Vtemp152);
    VL_ADD_W(3, __Vtemp154, __Vtemp137, __Vtemp153);
    vlTOPp->interpolation_compute_spline__DOT___T_96[0U] 
	= __Vtemp154[0U];
    vlTOPp->interpolation_compute_spline__DOT___T_96[1U] 
	= __Vtemp154[1U];
    vlTOPp->interpolation_compute_spline__DOT___T_96[2U] 
	= (0x1ffU & __Vtemp154[2U]);
}

void Vinterpolation_compute_spline::_eval(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_eval\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vinterpolation_compute_spline::_eval_initial(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_eval_initial\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vinterpolation_compute_spline::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::final\n"); );
    // Variables
    Vinterpolation_compute_spline__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vinterpolation_compute_spline::_eval_settle(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_eval_settle\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vinterpolation_compute_spline::_change_request(Vinterpolation_compute_spline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_change_request\n"); );
    Vinterpolation_compute_spline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vinterpolation_compute_spline::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void Vinterpolation_compute_spline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterpolation_compute_spline::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_i_in = VL_RAND_RESET_I(8);
    io_j_in = VL_RAND_RESET_I(8);
    io_x_in = VL_RAND_RESET_I(8);
    io_y_in = VL_RAND_RESET_I(8);
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
    io_interpolation_compute_spline = VL_RAND_RESET_I(8);
    io_i_out = VL_RAND_RESET_I(8);
    io_j_out = VL_RAND_RESET_I(8);
    io_x_out = VL_RAND_RESET_I(8);
    io_y_out = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__temp_1 = VL_RAND_RESET_I(32);
    interpolation_compute_spline__DOT__i_1 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__j_1 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__x_1 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__y_1 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT___GEN_2 = VL_RAND_RESET_Q(33);
    interpolation_compute_spline__DOT___T_4 = VL_RAND_RESET_Q(41);
    interpolation_compute_spline__DOT___GEN_5 = VL_RAND_RESET_Q(41);
    interpolation_compute_spline__DOT___T_10 = VL_RAND_RESET_Q(49);
    interpolation_compute_spline__DOT___GEN_9 = VL_RAND_RESET_Q(49);
    interpolation_compute_spline__DOT___GEN_11 = VL_RAND_RESET_Q(33);
    interpolation_compute_spline__DOT___T_19 = VL_RAND_RESET_Q(41);
    interpolation_compute_spline__DOT___GEN_14 = VL_RAND_RESET_Q(41);
    interpolation_compute_spline__DOT___T_25 = VL_RAND_RESET_Q(49);
    interpolation_compute_spline__DOT___T_35 = VL_RAND_RESET_Q(57);
    interpolation_compute_spline__DOT___GEN_22 = VL_RAND_RESET_Q(57);
    interpolation_compute_spline__DOT___T_46 = VL_RAND_RESET_Q(49);
    interpolation_compute_spline__DOT___GEN_29 = VL_RAND_RESET_Q(49);
    interpolation_compute_spline__DOT___T_53 = VL_RAND_RESET_Q(57);
    interpolation_compute_spline__DOT___T_76 = VL_RAND_RESET_Q(57);
    VL_RAND_RESET_W(65,interpolation_compute_spline__DOT___T_87);
    VL_RAND_RESET_W(65,interpolation_compute_spline__DOT___GEN_51);
    VL_RAND_RESET_W(73,interpolation_compute_spline__DOT___T_96);
    interpolation_compute_spline__DOT__temp_2 = VL_RAND_RESET_I(32);
    interpolation_compute_spline__DOT__i_2 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__j_2 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__x_2 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__y_2 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT___T_111 = VL_RAND_RESET_Q(33);
    interpolation_compute_spline__DOT__temp_3 = VL_RAND_RESET_I(32);
    interpolation_compute_spline__DOT__i_3 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__j_3 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__x_3 = VL_RAND_RESET_I(8);
    interpolation_compute_spline__DOT__y_3 = VL_RAND_RESET_I(8);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
