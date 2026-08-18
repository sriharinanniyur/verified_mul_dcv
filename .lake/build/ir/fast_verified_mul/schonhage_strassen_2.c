// Lean compiler output
// Module: fast_verified_mul.schonhage_strassen_2
// Imports: public import Init public meta import Init public import Mathlib
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lp_mathlib_Finset_sum___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_mathlib_ZMod_val(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lp_mathlib_CommRing_toNonUnitalCommRing___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(lean_object*);
lean_object* lp_mathlib_LieRing_ofAssociativeRing___redArg(lean_object*);
lean_object* lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_ZMod_commRing(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_mathlib_AddGroupWithOne_toAddGroup___redArg(lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_mathlib_Int_instAddCommMonoid;
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__0 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__0_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__1 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__1_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__2 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__2_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__3 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__3_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__4 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__4_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__5 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__5_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__6 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__6_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__0_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__1_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__7 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__7_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__7_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__2_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__3_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__4_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__5_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__8 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__8_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__8_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__6_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__9 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__9_value;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg___lam__0(lean_object* v_toSemiring_1_, lean_object* v_x_2_, lean_object* v_i_3_, lean_object* v_OMEGA_4_, lean_object* v_toMul_5_, lean_object* v_j_6_){
_start:
{
lean_object* v_npow_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_npow_7_ = lean_ctor_get(v_toSemiring_1_, 3);
lean_inc(v_npow_7_);
lean_dec_ref(v_toSemiring_1_);
lean_inc(v_j_6_);
v___x_8_ = lean_apply_1(v_x_2_, v_j_6_);
v___x_9_ = lean_nat_mul(v_j_6_, v_i_3_);
lean_dec(v_j_6_);
v___x_10_ = lean_apply_2(v_npow_7_, v___x_9_, v_OMEGA_4_);
v___x_11_ = lean_apply_2(v_toMul_5_, v___x_8_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg___lam__0___boxed(lean_object* v_toSemiring_12_, lean_object* v_x_13_, lean_object* v_i_14_, lean_object* v_OMEGA_15_, lean_object* v_toMul_16_, lean_object* v_j_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_fast__verified__mul_NTT___redArg___lam__0(v_toSemiring_12_, v_x_13_, v_i_14_, v_OMEGA_15_, v_toMul_16_, v_j_17_);
lean_dec(v_i_14_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT___redArg(lean_object* v_inst_19_, lean_object* v_K_20_, lean_object* v_x_21_, lean_object* v_OMEGA_22_, lean_object* v_i_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v_toAddCommMonoid_26_; lean_object* v___x_27_; lean_object* v_toMul_28_; lean_object* v_toSemiring_29_; lean_object* v___x_30_; lean_object* v___f_31_; lean_object* v___x_32_; 
lean_inc_ref(v_inst_19_);
v___x_24_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_inst_19_);
v___x_25_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_24_);
v_toAddCommMonoid_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc_ref(v_toAddCommMonoid_26_);
v___x_27_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_25_);
v_toMul_28_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_toMul_28_);
lean_dec_ref(v___x_27_);
v_toSemiring_29_ = lean_ctor_get(v_inst_19_, 0);
lean_inc_ref(v_toSemiring_29_);
lean_dec_ref(v_inst_19_);
v___x_30_ = l_List_finRange(v_K_20_);
v___f_31_ = lean_alloc_closure((void*)(lp_fast__verified__mul_NTT___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_31_, 0, v_toSemiring_29_);
lean_closure_set(v___f_31_, 1, v_x_21_);
lean_closure_set(v___f_31_, 2, v_i_23_);
lean_closure_set(v___f_31_, 3, v_OMEGA_22_);
lean_closure_set(v___f_31_, 4, v_toMul_28_);
v___x_32_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_26_, v___x_30_, v___f_31_);
lean_dec_ref(v_toAddCommMonoid_26_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_NTT(lean_object* v_R_33_, lean_object* v_inst_34_, lean_object* v_K_35_, lean_object* v_inst_36_, lean_object* v_x_37_, lean_object* v_OMEGA_38_, lean_object* v_i_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lp_fast__verified__mul_NTT___redArg(v_inst_34_, v_K_35_, v_x_37_, v_OMEGA_38_, v_i_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0(lean_object* v_toMul_41_, lean_object* v_00_u03c9_42_, lean_object* v_j_43_, lean_object* v_h_44_, lean_object* v_r_45_){
_start:
{
lean_object* v_fst_46_; lean_object* v_snd_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_57_; 
v_fst_46_ = lean_ctor_get(v_r_45_, 0);
v_snd_47_ = lean_ctor_get(v_r_45_, 1);
v_isSharedCheck_57_ = !lean_is_exclusive(v_r_45_);
if (v_isSharedCheck_57_ == 0)
{
v___x_49_ = v_r_45_;
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_snd_47_);
lean_inc(v_fst_46_);
lean_dec(v_r_45_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v_T_51_; lean_object* v_acc_52_; lean_object* v___x_54_; 
lean_inc(v_snd_47_);
v_T_51_ = lean_array_fset(v_fst_46_, v_j_43_, v_snd_47_);
v_acc_52_ = lean_apply_2(v_toMul_41_, v_snd_47_, v_00_u03c9_42_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 1, v_acc_52_);
lean_ctor_set(v___x_49_, 0, v_T_51_);
v___x_54_ = v___x_49_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_T_51_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_acc_52_);
v___x_54_ = v_reuseFailAlloc_56_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
lean_object* v___x_55_; 
v___x_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0___boxed(lean_object* v_toMul_58_, lean_object* v_00_u03c9_59_, lean_object* v_j_60_, lean_object* v_h_61_, lean_object* v_r_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0(v_toMul_58_, v_00_u03c9_59_, v_j_60_, v_h_61_, v_r_62_);
lean_dec(v_j_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg(lean_object* v_inst_83_, lean_object* v_n_84_, lean_object* v_00_u03c9_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_toAddMonoidWithOne_88_; lean_object* v_toOne_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_114_; 
v___x_86_ = ((lean_object*)(lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__9));
lean_inc_ref(v_inst_83_);
v___x_87_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_inst_83_);
v_toAddMonoidWithOne_88_ = lean_ctor_get(v___x_87_, 1);
lean_inc_ref(v_toAddMonoidWithOne_88_);
lean_dec_ref(v___x_87_);
v_toOne_89_ = lean_ctor_get(v_toAddMonoidWithOne_88_, 2);
v_isSharedCheck_114_ = !lean_is_exclusive(v_toAddMonoidWithOne_88_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; lean_object* v_unused_116_; 
v_unused_115_ = lean_ctor_get(v_toAddMonoidWithOne_88_, 1);
lean_dec(v_unused_115_);
v_unused_116_ = lean_ctor_get(v_toAddMonoidWithOne_88_, 0);
lean_dec(v_unused_116_);
v___x_91_ = v_toAddMonoidWithOne_88_;
v_isShared_92_ = v_isSharedCheck_114_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_toOne_89_);
lean_dec(v_toAddMonoidWithOne_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_114_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v_toMul_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_112_; 
v___x_93_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_inst_83_);
v___x_94_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_93_);
v___x_95_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_94_);
v_toMul_96_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_112_ == 0)
{
lean_object* v_unused_113_; 
v_unused_113_ = lean_ctor_get(v___x_95_, 1);
lean_dec(v_unused_113_);
v___x_98_ = v___x_95_;
v_isShared_99_ = v_isSharedCheck_112_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_toMul_96_);
lean_dec(v___x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_112_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v_T_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; 
lean_inc(v_toOne_89_);
lean_inc(v_n_84_);
v_T_100_ = lean_mk_array(v_n_84_, v_toOne_89_);
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_unsigned_to_nat(1u);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 2, v___x_102_);
lean_ctor_set(v___x_91_, 1, v_n_84_);
lean_ctor_set(v___x_91_, 0, v___x_101_);
v___x_104_ = v___x_91_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_n_84_);
lean_ctor_set(v_reuseFailAlloc_111_, 2, v___x_102_);
v___x_104_ = v_reuseFailAlloc_111_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_106_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_toOne_89_);
lean_ctor_set(v___x_98_, 0, v_T_100_);
v___x_106_ = v___x_98_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_T_100_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_toOne_89_);
v___x_106_ = v_reuseFailAlloc_110_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___f_107_; lean_object* v___x_108_; lean_object* v_fst_109_; 
v___f_107_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_107_, 0, v_toMul_96_);
lean_closure_set(v___f_107_, 1, v_00_u03c9_85_);
v___x_108_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(v___x_86_, v___x_104_, v___f_107_, v___x_106_, v___x_101_);
v_fst_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_fst_109_);
lean_dec(v___x_108_);
return v_fst_109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table(lean_object* v_R_117_, lean_object* v_inst_118_, lean_object* v_n_119_, lean_object* v_00_u03c9_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg(v_inst_118_, v_n_119_, v_00_u03c9_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__0(lean_object* v___x_122_, lean_object* v_x_123_, lean_object* v_j_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_nat_mul(v___x_122_, v_j_124_);
v___x_126_ = lean_array_fget_borrowed(v_x_123_, v___x_125_);
lean_dec(v___x_125_);
lean_inc(v___x_126_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__0___boxed(lean_object* v___x_127_, lean_object* v_x_128_, lean_object* v_j_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = lp_fast__verified__mul_FFT__zmod___redArg___lam__0(v___x_127_, v_x_128_, v_j_129_);
lean_dec(v_j_129_);
lean_dec_ref(v_x_128_);
lean_dec(v___x_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__1(lean_object* v___x_131_, lean_object* v___x_132_, lean_object* v_x_133_, lean_object* v_j_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_nat_mul(v___x_131_, v_j_134_);
v___x_136_ = lean_nat_add(v___x_135_, v___x_132_);
lean_dec(v___x_135_);
v___x_137_ = lean_array_fget_borrowed(v_x_133_, v___x_136_);
lean_dec(v___x_136_);
lean_inc(v___x_137_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__1___boxed(lean_object* v___x_138_, lean_object* v___x_139_, lean_object* v_x_140_, lean_object* v_j_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = lp_fast__verified__mul_FFT__zmod___redArg___lam__1(v___x_138_, v___x_139_, v_x_140_, v_j_141_);
lean_dec(v_j_141_);
lean_dec_ref(v_x_140_);
lean_dec(v___x_139_);
lean_dec(v___x_138_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__2(lean_object* v_E_x27_143_, lean_object* v_T_144_, lean_object* v_O_x27_145_, lean_object* v_toMul_146_, lean_object* v_toAdd_147_, lean_object* v_K__pred_148_, lean_object* v_toSub_149_, lean_object* v_j_150_, lean_object* v_h_151_, lean_object* v_r_152_){
_start:
{
lean_object* v_p_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_q_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v_result_161_; lean_object* v___x_162_; 
v_p_153_ = lean_array_fget_borrowed(v_E_x27_143_, v_j_150_);
v___x_154_ = lean_array_fget_borrowed(v_T_144_, v_j_150_);
v___x_155_ = lean_array_fget_borrowed(v_O_x27_145_, v_j_150_);
lean_inc(v___x_155_);
lean_inc(v___x_154_);
v_q_156_ = lean_apply_2(v_toMul_146_, v___x_154_, v___x_155_);
lean_inc(v_q_156_);
lean_inc_n(v_p_153_, 2);
v___x_157_ = lean_apply_2(v_toAdd_147_, v_p_153_, v_q_156_);
v___x_158_ = lean_array_fset(v_r_152_, v_j_150_, v___x_157_);
v___x_159_ = lean_nat_add(v_j_150_, v_K__pred_148_);
v___x_160_ = lean_apply_2(v_toSub_149_, v_p_153_, v_q_156_);
v_result_161_ = lean_array_fset(v___x_158_, v___x_159_, v___x_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v_result_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___lam__2___boxed(lean_object* v_E_x27_163_, lean_object* v_T_164_, lean_object* v_O_x27_165_, lean_object* v_toMul_166_, lean_object* v_toAdd_167_, lean_object* v_K__pred_168_, lean_object* v_toSub_169_, lean_object* v_j_170_, lean_object* v_h_171_, lean_object* v_r_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_fast__verified__mul_FFT__zmod___redArg___lam__2(v_E_x27_163_, v_T_164_, v_O_x27_165_, v_toMul_166_, v_toAdd_167_, v_K__pred_168_, v_toSub_169_, v_j_170_, v_h_171_, v_r_172_);
lean_dec(v_j_170_);
lean_dec(v_K__pred_168_);
lean_dec_ref(v_O_x27_165_);
lean_dec_ref(v_T_164_);
lean_dec_ref(v_E_x27_163_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg(lean_object* v_k_174_, lean_object* v_m_175_, lean_object* v_x_176_, lean_object* v_OMEGA_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v_toSemiring_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v_toZero_184_; lean_object* v___x_185_; lean_object* v_toMul_186_; lean_object* v_toAdd_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_toSub_190_; lean_object* v_zero_191_; uint8_t v_isZero_192_; 
v___x_178_ = ((lean_object*)(lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg___closed__9));
lean_inc(v_m_175_);
v___x_179_ = lp_mathlib_ZMod_commRing(v_m_175_);
v_toSemiring_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_toSemiring_180_);
lean_inc_ref_n(v___x_179_, 2);
v___x_181_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v___x_179_);
v___x_182_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_181_);
lean_inc_ref(v___x_182_);
v___x_183_ = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(v___x_182_);
v_toZero_184_ = lean_ctor_get(v___x_183_, 1);
lean_inc(v_toZero_184_);
lean_dec_ref(v___x_183_);
v___x_185_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_182_);
v_toMul_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_toMul_186_);
v_toAdd_187_ = lean_ctor_get(v___x_185_, 1);
lean_inc(v_toAdd_187_);
lean_dec_ref(v___x_185_);
v___x_188_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v___x_179_);
v___x_189_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_188_);
lean_dec_ref(v___x_188_);
v_toSub_190_ = lean_ctor_get(v___x_189_, 2);
lean_inc(v_toSub_190_);
lean_dec_ref(v___x_189_);
v_zero_191_ = lean_unsigned_to_nat(0u);
v_isZero_192_ = lean_nat_dec_eq(v_k_174_, v_zero_191_);
if (v_isZero_192_ == 1)
{
lean_dec(v_toSub_190_);
lean_dec(v_toAdd_187_);
lean_dec(v_toMul_186_);
lean_dec(v_toZero_184_);
lean_dec_ref(v_toSemiring_180_);
lean_dec_ref(v___x_179_);
lean_dec(v_OMEGA_177_);
lean_dec(v_m_175_);
return v_x_176_;
}
else
{
lean_object* v_npow_193_; lean_object* v_one_194_; lean_object* v_n_195_; lean_object* v___x_196_; lean_object* v___f_197_; lean_object* v_K__pred_198_; lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v_K_201_; lean_object* v_OMEGA__sq_202_; lean_object* v_E_203_; lean_object* v_O_204_; lean_object* v_E_x27_205_; lean_object* v_O_x27_206_; lean_object* v_T_207_; lean_object* v___f_208_; lean_object* v_result_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v_npow_193_ = lean_ctor_get(v_toSemiring_180_, 3);
lean_inc(v_npow_193_);
lean_dec_ref(v_toSemiring_180_);
v_one_194_ = lean_unsigned_to_nat(1u);
v_n_195_ = lean_nat_sub(v_k_174_, v_one_194_);
v___x_196_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v_x_176_);
v___f_197_ = lean_alloc_closure((void*)(lp_fast__verified__mul_FFT__zmod___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_197_, 0, v___x_196_);
lean_closure_set(v___f_197_, 1, v_x_176_);
v_K__pred_198_ = lean_nat_pow(v___x_196_, v_n_195_);
v___f_199_ = lean_alloc_closure((void*)(lp_fast__verified__mul_FFT__zmod___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_199_, 0, v___x_196_);
lean_closure_set(v___f_199_, 1, v_one_194_);
lean_closure_set(v___f_199_, 2, v_x_176_);
v___x_200_ = lean_nat_add(v_n_195_, v_one_194_);
v_K_201_ = lean_nat_pow(v___x_196_, v___x_200_);
lean_dec(v___x_200_);
lean_inc(v_OMEGA_177_);
v_OMEGA__sq_202_ = lean_apply_2(v_npow_193_, v___x_196_, v_OMEGA_177_);
lean_inc_n(v_K__pred_198_, 4);
v_E_203_ = l_Array_ofFn___redArg(v_K__pred_198_, v___f_197_);
v_O_204_ = l_Array_ofFn___redArg(v_K__pred_198_, v___f_199_);
lean_inc(v_OMEGA__sq_202_);
lean_inc(v_m_175_);
v_E_x27_205_ = lp_fast__verified__mul_FFT__zmod___redArg(v_n_195_, v_m_175_, v_E_203_, v_OMEGA__sq_202_);
v_O_x27_206_ = lp_fast__verified__mul_FFT__zmod___redArg(v_n_195_, v_m_175_, v_O_204_, v_OMEGA__sq_202_);
lean_dec(v_n_195_);
v_T_207_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__t__table___redArg(v___x_179_, v_K__pred_198_, v_OMEGA_177_);
v___f_208_ = lean_alloc_closure((void*)(lp_fast__verified__mul_FFT__zmod___redArg___lam__2___boxed), 10, 7);
lean_closure_set(v___f_208_, 0, v_E_x27_205_);
lean_closure_set(v___f_208_, 1, v_T_207_);
lean_closure_set(v___f_208_, 2, v_O_x27_206_);
lean_closure_set(v___f_208_, 3, v_toMul_186_);
lean_closure_set(v___f_208_, 4, v_toAdd_187_);
lean_closure_set(v___f_208_, 5, v_K__pred_198_);
lean_closure_set(v___f_208_, 6, v_toSub_190_);
v_result_209_ = lean_mk_array(v_K_201_, v_toZero_184_);
v___x_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_210_, 0, v_zero_191_);
lean_ctor_set(v___x_210_, 1, v_K__pred_198_);
lean_ctor_set(v___x_210_, 2, v_one_194_);
v___x_211_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(v___x_178_, v___x_210_, v___f_208_, v_result_209_, v_zero_191_);
return v___x_211_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___redArg___boxed(lean_object* v_k_212_, lean_object* v_m_213_, lean_object* v_x_214_, lean_object* v_OMEGA_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = lp_fast__verified__mul_FFT__zmod___redArg(v_k_212_, v_m_213_, v_x_214_, v_OMEGA_215_);
lean_dec(v_k_212_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod(lean_object* v_k_217_, lean_object* v_m_218_, lean_object* v_inst_219_, lean_object* v_x_220_, lean_object* v_OMEGA_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lp_fast__verified__mul_FFT__zmod___redArg(v_k_217_, v_m_218_, v_x_220_, v_OMEGA_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FFT__zmod___boxed(lean_object* v_k_223_, lean_object* v_m_224_, lean_object* v_inst_225_, lean_object* v_x_226_, lean_object* v_OMEGA_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = lp_fast__verified__mul_FFT__zmod(v_k_223_, v_m_224_, v_inst_225_, v_x_226_, v_OMEGA_227_);
lean_dec(v_k_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___redArg(lean_object* v_m_229_, lean_object* v_A_230_, lean_object* v_BETA_231_, lean_object* v_K_232_, lean_object* v_j_233_){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_sub(v_K_232_, v___x_234_);
v___x_236_ = lean_nat_dec_lt(v_j_233_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = lp_mathlib_ZMod_val(v_m_229_, v_A_230_);
v___x_238_ = lean_nat_pow(v_BETA_231_, v___x_235_);
lean_dec(v___x_235_);
v___x_239_ = lean_nat_div(v___x_237_, v___x_238_);
lean_dec(v___x_238_);
lean_dec(v___x_237_);
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v___x_235_);
v___x_240_ = lp_mathlib_ZMod_val(v_m_229_, v_A_230_);
v___x_241_ = lean_nat_pow(v_BETA_231_, v_j_233_);
v___x_242_ = lean_nat_div(v___x_240_, v___x_241_);
lean_dec(v___x_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_nat_mod(v___x_242_, v_BETA_231_);
lean_dec(v___x_242_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___redArg___boxed(lean_object* v_m_244_, lean_object* v_A_245_, lean_object* v_BETA_246_, lean_object* v_K_247_, lean_object* v_j_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_fast__verified__mul_decompose___redArg(v_m_244_, v_A_245_, v_BETA_246_, v_K_247_, v_j_248_);
lean_dec(v_j_248_);
lean_dec(v_K_247_);
lean_dec(v_BETA_246_);
lean_dec(v_A_245_);
lean_dec(v_m_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose(lean_object* v_m_250_, lean_object* v_inst_251_, lean_object* v_A_252_, lean_object* v_BETA_253_, lean_object* v_K_254_, lean_object* v_j_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lp_fast__verified__mul_decompose___redArg(v_m_250_, v_A_252_, v_BETA_253_, v_K_254_, v_j_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose___boxed(lean_object* v_m_257_, lean_object* v_inst_258_, lean_object* v_A_259_, lean_object* v_BETA_260_, lean_object* v_K_261_, lean_object* v_j_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = lp_fast__verified__mul_decompose(v_m_257_, v_inst_258_, v_A_259_, v_BETA_260_, v_K_261_, v_j_262_);
lean_dec(v_j_262_);
lean_dec(v_K_261_);
lean_dec(v_BETA_260_);
lean_dec(v_A_259_);
lean_dec(v_m_257_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___redArg(lean_object* v_m_264_, lean_object* v_elem_265_, lean_object* v_threshold_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_267_ = lp_mathlib_ZMod_val(v_m_264_, v_elem_265_);
v___x_268_ = lean_nat_to_int(v___x_267_);
v___x_269_ = lean_int_dec_le(v_threshold_266_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec(v_m_264_);
return v___x_268_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_nat_to_int(v_m_264_);
v___x_271_ = lean_int_sub(v___x_268_, v___x_270_);
lean_dec(v___x_270_);
lean_dec(v___x_268_);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___redArg___boxed(lean_object* v_m_272_, lean_object* v_elem_273_, lean_object* v_threshold_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = lp_fast__verified__mul_recover__sign___redArg(v_m_272_, v_elem_273_, v_threshold_274_);
lean_dec(v_threshold_274_);
lean_dec(v_elem_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign(lean_object* v_m_276_, lean_object* v_inst_277_, lean_object* v_elem_278_, lean_object* v_threshold_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lp_fast__verified__mul_recover__sign___redArg(v_m_276_, v_elem_278_, v_threshold_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recover__sign___boxed(lean_object* v_m_281_, lean_object* v_inst_282_, lean_object* v_elem_283_, lean_object* v_threshold_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = lp_fast__verified__mul_recover__sign(v_m_281_, v_inst_282_, v_elem_283_, v_threshold_284_);
lean_dec(v_threshold_284_);
lean_dec(v_elem_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___redArg(lean_object* v_k_286_, lean_object* v_x_287_, lean_object* v_h__1_288_, lean_object* v_h__2_289_){
_start:
{
lean_object* v_zero_290_; uint8_t v_isZero_291_; 
v_zero_290_ = lean_unsigned_to_nat(0u);
v_isZero_291_ = lean_nat_dec_eq(v_k_286_, v_zero_290_);
if (v_isZero_291_ == 1)
{
lean_object* v___x_292_; 
lean_dec(v_h__2_289_);
v___x_292_ = lean_apply_1(v_h__1_288_, v_x_287_);
return v___x_292_;
}
else
{
lean_object* v_one_293_; lean_object* v_n_294_; lean_object* v___x_295_; 
lean_dec(v_h__1_288_);
v_one_293_ = lean_unsigned_to_nat(1u);
v_n_294_ = lean_nat_sub(v_k_286_, v_one_293_);
v___x_295_ = lean_apply_2(v_h__2_289_, v_n_294_, v_x_287_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___redArg___boxed(lean_object* v_k_296_, lean_object* v_x_297_, lean_object* v_h__1_298_, lean_object* v_h__2_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___redArg(v_k_296_, v_x_297_, v_h__1_298_, v_h__2_299_);
lean_dec(v_k_296_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter(lean_object* v_m_301_, lean_object* v_motive_302_, lean_object* v_k_303_, lean_object* v_x_304_, lean_object* v_h__1_305_, lean_object* v_h__2_306_){
_start:
{
lean_object* v_zero_307_; uint8_t v_isZero_308_; 
v_zero_307_ = lean_unsigned_to_nat(0u);
v_isZero_308_ = lean_nat_dec_eq(v_k_303_, v_zero_307_);
if (v_isZero_308_ == 1)
{
lean_object* v___x_309_; 
lean_dec(v_h__2_306_);
v___x_309_ = lean_apply_1(v_h__1_305_, v_x_304_);
return v___x_309_;
}
else
{
lean_object* v_one_310_; lean_object* v_n_311_; lean_object* v___x_312_; 
lean_dec(v_h__1_305_);
v_one_310_ = lean_unsigned_to_nat(1u);
v_n_311_ = lean_nat_sub(v_k_303_, v_one_310_);
v___x_312_ = lean_apply_2(v_h__2_306_, v_n_311_, v_x_304_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter___boxed(lean_object* v_m_313_, lean_object* v_motive_314_, lean_object* v_k_315_, lean_object* v_x_316_, lean_object* v_h__1_317_, lean_object* v_h__2_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__FFT__zmod_match__1_splitter(v_m_313_, v_motive_314_, v_k_315_, v_x_316_, v_h__1_317_, v_h__2_318_);
lean_dec(v_k_315_);
lean_dec(v_m_313_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0(lean_object* v_j_320_, lean_object* v_K_321_, lean_object* v_l_322_, lean_object* v___x_323_, lean_object* v_inst_324_, lean_object* v_A_325_, lean_object* v_B_326_, lean_object* v_k_327_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_328_ = lean_nat_add(v_j_320_, v_k_327_);
v___x_329_ = lean_nat_mod(v___x_328_, v_K_321_);
v___x_330_ = lean_nat_dec_eq(v___x_329_, v_l_322_);
lean_dec(v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v_toZero_332_; 
lean_dec(v___x_328_);
lean_dec(v_k_327_);
lean_dec(v_B_326_);
lean_dec(v_A_325_);
lean_dec_ref(v_inst_324_);
lean_dec(v_j_320_);
v___x_331_ = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(v___x_323_);
v_toZero_332_ = lean_ctor_get(v___x_331_, 1);
lean_inc(v_toZero_332_);
lean_dec_ref(v___x_331_);
return v_toZero_332_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = lean_nat_dec_lt(v___x_328_, v_K_321_);
lean_dec(v___x_328_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v_toAddCommGroup_335_; lean_object* v___x_336_; lean_object* v_toNeg_337_; lean_object* v___x_338_; lean_object* v_toMul_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_334_ = lp_mathlib_LieRing_ofAssociativeRing___redArg(v_inst_324_);
v_toAddCommGroup_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc_ref(v_toAddCommGroup_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(v_toAddCommGroup_335_);
lean_dec_ref(v_toAddCommGroup_335_);
v_toNeg_337_ = lean_ctor_get(v___x_336_, 1);
lean_inc(v_toNeg_337_);
lean_dec_ref(v___x_336_);
v___x_338_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_323_);
v_toMul_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_toMul_339_);
lean_dec_ref(v___x_338_);
v___x_340_ = lean_apply_1(v_A_325_, v_j_320_);
v___x_341_ = lean_apply_1(v_B_326_, v_k_327_);
v___x_342_ = lean_apply_2(v_toMul_339_, v___x_340_, v___x_341_);
v___x_343_ = lean_apply_1(v_toNeg_337_, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; lean_object* v_toMul_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec_ref(v_inst_324_);
v___x_344_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_323_);
v_toMul_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_toMul_345_);
lean_dec_ref(v___x_344_);
v___x_346_ = lean_apply_1(v_A_325_, v_j_320_);
v___x_347_ = lean_apply_1(v_B_326_, v_k_327_);
v___x_348_ = lean_apply_2(v_toMul_345_, v___x_346_, v___x_347_);
return v___x_348_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0___boxed(lean_object* v_j_349_, lean_object* v_K_350_, lean_object* v_l_351_, lean_object* v___x_352_, lean_object* v_inst_353_, lean_object* v_A_354_, lean_object* v_B_355_, lean_object* v_k_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0(v_j_349_, v_K_350_, v_l_351_, v___x_352_, v_inst_353_, v_A_354_, v_B_355_, v_k_356_);
lean_dec(v_l_351_);
lean_dec(v_K_350_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1(lean_object* v_K_358_, lean_object* v_l_359_, lean_object* v___x_360_, lean_object* v_inst_361_, lean_object* v_A_362_, lean_object* v_B_363_, lean_object* v_toAddCommMonoid_364_, lean_object* v___x_365_, lean_object* v_j_366_){
_start:
{
lean_object* v___f_367_; lean_object* v___x_368_; 
v___f_367_ = lean_alloc_closure((void*)(lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_367_, 0, v_j_366_);
lean_closure_set(v___f_367_, 1, v_K_358_);
lean_closure_set(v___f_367_, 2, v_l_359_);
lean_closure_set(v___f_367_, 3, v___x_360_);
lean_closure_set(v___f_367_, 4, v_inst_361_);
lean_closure_set(v___f_367_, 5, v_A_362_);
lean_closure_set(v___f_367_, 6, v_B_363_);
v___x_368_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_364_, v___x_365_, v___f_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1___boxed(lean_object* v_K_369_, lean_object* v_l_370_, lean_object* v___x_371_, lean_object* v_inst_372_, lean_object* v_A_373_, lean_object* v_B_374_, lean_object* v_toAddCommMonoid_375_, lean_object* v___x_376_, lean_object* v_j_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1(v_K_369_, v_l_370_, v___x_371_, v_inst_372_, v_A_373_, v_B_374_, v_toAddCommMonoid_375_, v___x_376_, v_j_377_);
lean_dec_ref(v_toAddCommMonoid_375_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa___redArg(lean_object* v_inst_379_, lean_object* v_K_380_, lean_object* v_A_381_, lean_object* v_B_382_, lean_object* v_l_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v_toAddCommMonoid_386_; lean_object* v___x_387_; lean_object* v___f_388_; lean_object* v___x_389_; 
lean_inc_ref(v_inst_379_);
v___x_384_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_inst_379_);
v___x_385_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_384_);
v_toAddCommMonoid_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc_ref_n(v_toAddCommMonoid_386_, 2);
lean_inc(v_K_380_);
v___x_387_ = l_List_finRange(v_K_380_);
lean_inc(v___x_387_);
v___f_388_ = lean_alloc_closure((void*)(lp_fast__verified__mul_negacyclic__conv__ssa___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_388_, 0, v_K_380_);
lean_closure_set(v___f_388_, 1, v_l_383_);
lean_closure_set(v___f_388_, 2, v___x_385_);
lean_closure_set(v___f_388_, 3, v_inst_379_);
lean_closure_set(v___f_388_, 4, v_A_381_);
lean_closure_set(v___f_388_, 5, v_B_382_);
lean_closure_set(v___f_388_, 6, v_toAddCommMonoid_386_);
lean_closure_set(v___f_388_, 7, v___x_387_);
v___x_389_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_386_, v___x_387_, v___f_388_);
lean_dec_ref(v_toAddCommMonoid_386_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__ssa(lean_object* v_R_390_, lean_object* v_inst_391_, lean_object* v_K_392_, lean_object* v_inst_393_, lean_object* v_A_394_, lean_object* v_B_395_, lean_object* v_l_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lp_fast__verified__mul_negacyclic__conv__ssa___redArg(v_inst_391_, v_K_392_, v_A_394_, v_B_395_, v_l_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0(lean_object* v_j_398_, lean_object* v_K_399_, lean_object* v_l_400_, lean_object* v___x_401_, lean_object* v_f_402_, lean_object* v_g_403_, lean_object* v_k_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_405_ = lean_nat_add(v_j_398_, v_k_404_);
v___x_406_ = lean_nat_mod(v___x_405_, v_K_399_);
lean_dec(v___x_405_);
v___x_407_ = lean_nat_dec_eq(v___x_406_, v_l_400_);
lean_dec(v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; lean_object* v_toZero_409_; 
lean_dec(v_k_404_);
lean_dec(v_g_403_);
lean_dec(v_f_402_);
lean_dec(v_j_398_);
v___x_408_ = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(v___x_401_);
v_toZero_409_ = lean_ctor_get(v___x_408_, 1);
lean_inc(v_toZero_409_);
lean_dec_ref(v___x_408_);
return v_toZero_409_;
}
else
{
lean_object* v___x_410_; lean_object* v_toMul_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_410_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_401_);
v_toMul_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_toMul_411_);
lean_dec_ref(v___x_410_);
v___x_412_ = lean_apply_1(v_f_402_, v_j_398_);
v___x_413_ = lean_apply_1(v_g_403_, v_k_404_);
v___x_414_ = lean_apply_2(v_toMul_411_, v___x_412_, v___x_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0___boxed(lean_object* v_j_415_, lean_object* v_K_416_, lean_object* v_l_417_, lean_object* v___x_418_, lean_object* v_f_419_, lean_object* v_g_420_, lean_object* v_k_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0(v_j_415_, v_K_416_, v_l_417_, v___x_418_, v_f_419_, v_g_420_, v_k_421_);
lean_dec(v_l_417_);
lean_dec(v_K_416_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1(lean_object* v_K_423_, lean_object* v_l_424_, lean_object* v___x_425_, lean_object* v_f_426_, lean_object* v_g_427_, lean_object* v_toAddCommMonoid_428_, lean_object* v___x_429_, lean_object* v_j_430_){
_start:
{
lean_object* v___f_431_; lean_object* v___x_432_; 
v___f_431_ = lean_alloc_closure((void*)(lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_431_, 0, v_j_430_);
lean_closure_set(v___f_431_, 1, v_K_423_);
lean_closure_set(v___f_431_, 2, v_l_424_);
lean_closure_set(v___f_431_, 3, v___x_425_);
lean_closure_set(v___f_431_, 4, v_f_426_);
lean_closure_set(v___f_431_, 5, v_g_427_);
v___x_432_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_428_, v___x_429_, v___f_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1___boxed(lean_object* v_K_433_, lean_object* v_l_434_, lean_object* v___x_435_, lean_object* v_f_436_, lean_object* v_g_437_, lean_object* v_toAddCommMonoid_438_, lean_object* v___x_439_, lean_object* v_j_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1(v_K_433_, v_l_434_, v___x_435_, v_f_436_, v_g_437_, v_toAddCommMonoid_438_, v___x_439_, v_j_440_);
lean_dec_ref(v_toAddCommMonoid_438_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa___redArg(lean_object* v_inst_442_, lean_object* v_K_443_, lean_object* v_f_444_, lean_object* v_g_445_, lean_object* v_l_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_toAddCommMonoid_449_; lean_object* v___x_450_; lean_object* v___f_451_; lean_object* v___x_452_; 
v___x_447_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_inst_442_);
v___x_448_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_447_);
v_toAddCommMonoid_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc_ref_n(v_toAddCommMonoid_449_, 2);
lean_inc(v_K_443_);
v___x_450_ = l_List_finRange(v_K_443_);
lean_inc(v___x_450_);
v___f_451_ = lean_alloc_closure((void*)(lp_fast__verified__mul_cyclic__conv__ssa___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_451_, 0, v_K_443_);
lean_closure_set(v___f_451_, 1, v_l_446_);
lean_closure_set(v___f_451_, 2, v___x_448_);
lean_closure_set(v___f_451_, 3, v_f_444_);
lean_closure_set(v___f_451_, 4, v_g_445_);
lean_closure_set(v___f_451_, 5, v_toAddCommMonoid_449_);
lean_closure_set(v___f_451_, 6, v___x_450_);
v___x_452_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_449_, v___x_450_, v___f_451_);
lean_dec_ref(v_toAddCommMonoid_449_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_cyclic__conv__ssa(lean_object* v_R_453_, lean_object* v_inst_454_, lean_object* v_K_455_, lean_object* v_inst_456_, lean_object* v_f_457_, lean_object* v_g_458_, lean_object* v_l_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = lp_fast__verified__mul_cyclic__conv__ssa___redArg(v_inst_454_, v_K_455_, v_f_457_, v_g_458_, v_l_459_);
return v___x_460_;
}
}
static lean_object* _init_lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_nat_to_int(v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0(lean_object* v_j_463_, lean_object* v_K_464_, lean_object* v_l_465_, lean_object* v_A_466_, lean_object* v_B_467_, lean_object* v_k_468_){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = lean_nat_add(v_j_463_, v_k_468_);
v___x_470_ = lean_nat_mod(v___x_469_, v_K_464_);
v___x_471_ = lean_nat_dec_eq(v___x_470_, v_l_465_);
lean_dec(v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; 
lean_dec(v___x_469_);
lean_dec(v_k_468_);
lean_dec_ref(v_B_467_);
lean_dec_ref(v_A_466_);
lean_dec(v_j_463_);
v___x_472_ = lean_obj_once(&lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0, &lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0_once, _init_lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___closed__0);
return v___x_472_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = lean_nat_dec_lt(v___x_469_, v_K_464_);
lean_dec(v___x_469_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_474_ = lean_apply_1(v_A_466_, v_j_463_);
v___x_475_ = lean_nat_to_int(v___x_474_);
v___x_476_ = lean_apply_1(v_B_467_, v_k_468_);
v___x_477_ = lean_nat_to_int(v___x_476_);
v___x_478_ = lean_int_mul(v___x_475_, v___x_477_);
lean_dec(v___x_477_);
lean_dec(v___x_475_);
v___x_479_ = lean_int_neg(v___x_478_);
lean_dec(v___x_478_);
return v___x_479_;
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_480_ = lean_apply_1(v_A_466_, v_j_463_);
v___x_481_ = lean_nat_to_int(v___x_480_);
v___x_482_ = lean_apply_1(v_B_467_, v_k_468_);
v___x_483_ = lean_nat_to_int(v___x_482_);
v___x_484_ = lean_int_mul(v___x_481_, v___x_483_);
lean_dec(v___x_483_);
lean_dec(v___x_481_);
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___boxed(lean_object* v_j_485_, lean_object* v_K_486_, lean_object* v_l_487_, lean_object* v_A_488_, lean_object* v_B_489_, lean_object* v_k_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0(v_j_485_, v_K_486_, v_l_487_, v_A_488_, v_B_489_, v_k_490_);
lean_dec(v_l_487_);
lean_dec(v_K_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1(lean_object* v_K_492_, lean_object* v_l_493_, lean_object* v_A_494_, lean_object* v_B_495_, lean_object* v___x_496_, lean_object* v___x_497_, lean_object* v_j_498_){
_start:
{
lean_object* v___f_499_; lean_object* v___x_500_; 
v___f_499_ = lean_alloc_closure((void*)(lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_499_, 0, v_j_498_);
lean_closure_set(v___f_499_, 1, v_K_492_);
lean_closure_set(v___f_499_, 2, v_l_493_);
lean_closure_set(v___f_499_, 3, v_A_494_);
lean_closure_set(v___f_499_, 4, v_B_495_);
v___x_500_ = lp_mathlib_Finset_sum___redArg(v___x_496_, v___x_497_, v___f_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1___boxed(lean_object* v_K_501_, lean_object* v_l_502_, lean_object* v_A_503_, lean_object* v_B_504_, lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v_j_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1(v_K_501_, v_l_502_, v_A_503_, v_B_504_, v___x_505_, v___x_506_, v_j_507_);
lean_dec_ref(v___x_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int___redArg(lean_object* v_K_509_, lean_object* v_A_510_, lean_object* v_B_511_, lean_object* v_l_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___f_515_; lean_object* v___x_516_; 
v___x_513_ = lp_mathlib_Int_instAddCommMonoid;
lean_inc(v_K_509_);
v___x_514_ = l_List_finRange(v_K_509_);
lean_inc(v___x_514_);
v___f_515_ = lean_alloc_closure((void*)(lp_fast__verified__mul_negacyclic__conv__int___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_515_, 0, v_K_509_);
lean_closure_set(v___f_515_, 1, v_l_512_);
lean_closure_set(v___f_515_, 2, v_A_510_);
lean_closure_set(v___f_515_, 3, v_B_511_);
lean_closure_set(v___f_515_, 4, v___x_513_);
lean_closure_set(v___f_515_, 5, v___x_514_);
v___x_516_ = lp_mathlib_Finset_sum___redArg(v___x_513_, v___x_514_, v___f_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_negacyclic__conv__int(lean_object* v_K_517_, lean_object* v_inst_518_, lean_object* v_A_519_, lean_object* v_B_520_, lean_object* v_l_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lp_fast__verified__mul_negacyclic__conv__int___redArg(v_K_517_, v_A_519_, v_B_520_, v_l_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___redArg(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_h__1_525_, lean_object* v_h__2_526_){
_start:
{
lean_object* v_zero_527_; uint8_t v_isZero_528_; 
v_zero_527_ = lean_unsigned_to_nat(0u);
v_isZero_528_ = lean_nat_dec_eq(v_x_523_, v_zero_527_);
if (v_isZero_528_ == 1)
{
lean_object* v___x_529_; 
lean_dec(v_h__2_526_);
v___x_529_ = lean_apply_1(v_h__1_525_, v_x_524_);
return v___x_529_;
}
else
{
lean_object* v_one_530_; lean_object* v_n_531_; lean_object* v___x_532_; 
lean_dec(v_h__1_525_);
v_one_530_ = lean_unsigned_to_nat(1u);
v_n_531_ = lean_nat_sub(v_x_523_, v_one_530_);
v___x_532_ = lean_apply_2(v_h__2_526_, v_n_531_, v_x_524_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___redArg___boxed(lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_h__1_535_, lean_object* v_h__2_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___redArg(v_x_533_, v_x_534_, v_h__1_535_, v_h__2_536_);
lean_dec(v_x_533_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter(lean_object* v_motive_538_, lean_object* v_x_539_, lean_object* v_x_540_, lean_object* v_h__1_541_, lean_object* v_h__2_542_){
_start:
{
lean_object* v_zero_543_; uint8_t v_isZero_544_; 
v_zero_543_ = lean_unsigned_to_nat(0u);
v_isZero_544_ = lean_nat_dec_eq(v_x_539_, v_zero_543_);
if (v_isZero_544_ == 1)
{
lean_object* v___x_545_; 
lean_dec(v_h__2_542_);
v___x_545_ = lean_apply_1(v_h__1_541_, v_x_540_);
return v___x_545_;
}
else
{
lean_object* v_one_546_; lean_object* v_n_547_; lean_object* v___x_548_; 
lean_dec(v_h__1_541_);
v_one_546_ = lean_unsigned_to_nat(1u);
v_n_547_ = lean_nat_sub(v_x_539_, v_one_546_);
v___x_548_ = lean_apply_2(v_h__2_542_, v_n_547_, v_x_540_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter___boxed(lean_object* v_motive_549_, lean_object* v_x_550_, lean_object* v_x_551_, lean_object* v_h__1_552_, lean_object* v_h__2_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__2_0__ZMod_inv_match__1_splitter(v_motive_549_, v_x_550_, v_x_551_, v_h__1_552_, v_h__2_553_);
lean_dec(v_x_550_);
return v_res_554_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_schonhage__strassen__2(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
