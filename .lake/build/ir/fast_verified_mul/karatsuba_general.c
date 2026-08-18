// Lean compiler output
// Module: fast_verified_mul.karatsuba_general
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
lean_object* lp_mathlib_Nat_digits(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___redArg(lean_object* v_b_1_, lean_object* v_x_2_, lean_object* v_y_3_){
_start:
{
lean_object* v___y_5_; lean_object* v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_31_ = lean_nat_abs(v_x_2_);
v___x_32_ = lean_nat_abs(v_y_3_);
v___x_33_ = lean_nat_dec_le(v___x_31_, v___x_32_);
if (v___x_33_ == 0)
{
lean_dec(v___x_32_);
v___y_5_ = v___x_31_;
goto v___jp_4_;
}
else
{
lean_dec(v___x_31_);
v___y_5_ = v___x_32_;
goto v___jp_4_;
}
v___jp_4_:
{
lean_object* v___x_6_; lean_object* v_n_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_6_ = lp_mathlib_Nat_digits(v_b_1_, v___y_5_);
v_n_7_ = l_List_lengthTR___redArg(v___x_6_);
lean_dec(v___x_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_dec_le(v_n_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; lean_object* v_k_11_; lean_object* v_b_x27_12_; lean_object* v___x_13_; lean_object* v_x1_14_; lean_object* v_x0_15_; lean_object* v_y1_16_; lean_object* v_y0_17_; lean_object* v_z1_18_; lean_object* v_z0_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v_z2_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_10_ = lean_unsigned_to_nat(2u);
v_k_11_ = lean_nat_shiftr(v_n_7_, v___x_8_);
lean_dec(v_n_7_);
v_b_x27_12_ = lean_nat_pow(v_b_1_, v_k_11_);
lean_dec(v_k_11_);
v___x_13_ = lean_nat_to_int(v_b_x27_12_);
v_x1_14_ = lean_int_ediv(v_x_2_, v___x_13_);
v_x0_15_ = lean_int_emod(v_x_2_, v___x_13_);
v_y1_16_ = lean_int_ediv(v_y_3_, v___x_13_);
v_y0_17_ = lean_int_emod(v_y_3_, v___x_13_);
v_z1_18_ = lp_fast__verified__mul_karatsuba___redArg(v_b_1_, v_x1_14_, v_y1_16_);
v_z0_19_ = lp_fast__verified__mul_karatsuba___redArg(v_b_1_, v_x0_15_, v_y0_17_);
v___x_20_ = lean_int_add(v_x0_15_, v_x1_14_);
lean_dec(v_x1_14_);
lean_dec(v_x0_15_);
v___x_21_ = lean_int_add(v_y0_17_, v_y1_16_);
lean_dec(v_y1_16_);
lean_dec(v_y0_17_);
v_z2_22_ = lp_fast__verified__mul_karatsuba___redArg(v_b_1_, v___x_20_, v___x_21_);
lean_dec(v___x_21_);
lean_dec(v___x_20_);
v___x_23_ = l_Int_pow(v___x_13_, v___x_10_);
v___x_24_ = lean_int_mul(v_z1_18_, v___x_23_);
lean_dec(v___x_23_);
v___x_25_ = lean_int_sub(v_z2_22_, v_z1_18_);
lean_dec(v_z1_18_);
lean_dec(v_z2_22_);
v___x_26_ = lean_int_sub(v___x_25_, v_z0_19_);
lean_dec(v___x_25_);
v___x_27_ = lean_int_mul(v___x_26_, v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_26_);
v___x_28_ = lean_int_add(v___x_24_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_24_);
v___x_29_ = lean_int_add(v___x_28_, v_z0_19_);
lean_dec(v_z0_19_);
lean_dec(v___x_28_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; 
lean_dec(v_n_7_);
v___x_30_ = lean_int_mul(v_x_2_, v_y_3_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___redArg___boxed(lean_object* v_b_34_, lean_object* v_x_35_, lean_object* v_y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_fast__verified__mul_karatsuba___redArg(v_b_34_, v_x_35_, v_y_36_);
lean_dec(v_y_36_);
lean_dec(v_x_35_);
lean_dec(v_b_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba(lean_object* v_b_38_, lean_object* v_hb_39_, lean_object* v_x_40_, lean_object* v_y_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lp_fast__verified__mul_karatsuba___redArg(v_b_38_, v_x_40_, v_y_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___boxed(lean_object* v_b_43_, lean_object* v_hb_44_, lean_object* v_x_45_, lean_object* v_y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_fast__verified__mul_karatsuba(v_b_43_, v_hb_44_, v_x_45_, v_y_46_);
lean_dec(v_y_46_);
lean_dec(v_x_45_);
lean_dec(v_b_43_);
return v_res_47_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_karatsuba__general(uint8_t builtin) {
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
