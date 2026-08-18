// Lean compiler output
// Module: fast_verified_mul.karatsuba
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
lean_object* lean_nat_abs(lean_object*);
lean_object* lp_mathlib_Nat_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_shiftLeft(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba(lean_object* v_x__raw_1_, lean_object* v_y__raw_2_){
_start:
{
lean_object* v_x_3_; lean_object* v_y_4_; lean_object* v___y_6_; uint8_t v___x_38_; 
v_x_3_ = lean_nat_abs(v_x__raw_1_);
v_y_4_ = lean_nat_abs(v_y__raw_2_);
v___x_38_ = lean_nat_dec_le(v_x_3_, v_y_4_);
if (v___x_38_ == 0)
{
lean_inc(v_x_3_);
v___y_6_ = v_x_3_;
goto v___jp_5_;
}
else
{
lean_inc(v_y_4_);
v___y_6_ = v_y_4_;
goto v___jp_5_;
}
v___jp_5_:
{
lean_object* v_n_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_n_7_ = lp_mathlib_Nat_size(v___y_6_);
lean_dec(v___y_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_dec_le(v_n_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v_k_10_; lean_object* v___x_11_; lean_object* v_mask_12_; lean_object* v_x1_13_; lean_object* v_x0_14_; lean_object* v_y1_15_; lean_object* v_y0_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v_z0_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v_z2_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v_z1_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_k_10_ = lean_nat_shiftr(v_n_7_, v___x_8_);
lean_dec(v_n_7_);
v___x_11_ = lean_nat_shiftl(v___x_8_, v_k_10_);
v_mask_12_ = lean_nat_sub(v___x_11_, v___x_8_);
lean_dec(v___x_11_);
v_x1_13_ = lean_nat_shiftr(v_x_3_, v_k_10_);
v_x0_14_ = lean_nat_land(v_x_3_, v_mask_12_);
lean_dec(v_x_3_);
v_y1_15_ = lean_nat_shiftr(v_y_4_, v_k_10_);
v_y0_16_ = lean_nat_land(v_y_4_, v_mask_12_);
lean_dec(v_mask_12_);
lean_dec(v_y_4_);
v___x_17_ = lean_nat_to_int(v_x0_14_);
v___x_18_ = lean_nat_to_int(v_y0_16_);
v_z0_19_ = lp_fast__verified__mul_karatsuba(v___x_17_, v___x_18_);
v___x_20_ = lean_nat_to_int(v_x1_13_);
v___x_21_ = lean_nat_to_int(v_y1_15_);
v_z2_22_ = lp_fast__verified__mul_karatsuba(v___x_20_, v___x_21_);
v___x_23_ = lean_int_add(v___x_20_, v___x_17_);
lean_dec(v___x_17_);
lean_dec(v___x_20_);
v___x_24_ = lean_int_add(v___x_21_, v___x_18_);
lean_dec(v___x_18_);
lean_dec(v___x_21_);
v_z1_25_ = lp_fast__verified__mul_karatsuba(v___x_23_, v___x_24_);
lean_dec(v___x_24_);
lean_dec(v___x_23_);
v___x_26_ = l_Int_sign(v_x__raw_1_);
v___x_27_ = l_Int_sign(v_y__raw_2_);
v___x_28_ = lean_int_mul(v___x_26_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_26_);
v___x_29_ = lean_nat_shiftl(v_k_10_, v___x_8_);
v___x_30_ = l_Int_shiftLeft(v_z2_22_, v___x_29_);
lean_dec(v___x_29_);
v___x_31_ = lean_int_sub(v_z1_25_, v_z2_22_);
lean_dec(v_z2_22_);
lean_dec(v_z1_25_);
v___x_32_ = lean_int_sub(v___x_31_, v_z0_19_);
lean_dec(v___x_31_);
v___x_33_ = l_Int_shiftLeft(v___x_32_, v_k_10_);
lean_dec(v_k_10_);
lean_dec(v___x_32_);
v___x_34_ = lean_int_add(v___x_30_, v___x_33_);
lean_dec(v___x_33_);
lean_dec(v___x_30_);
v___x_35_ = lean_int_add(v___x_34_, v_z0_19_);
lean_dec(v_z0_19_);
lean_dec(v___x_34_);
v___x_36_ = lean_int_mul(v___x_28_, v___x_35_);
lean_dec(v___x_35_);
lean_dec(v___x_28_);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
lean_dec(v_n_7_);
lean_dec(v_y_4_);
lean_dec(v_x_3_);
v___x_37_ = lean_int_mul(v_x__raw_1_, v_y__raw_2_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_karatsuba___boxed(lean_object* v_x__raw_39_, lean_object* v_y__raw_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_fast__verified__mul_karatsuba(v_x__raw_39_, v_y__raw_40_);
lean_dec(v_y__raw_40_);
lean_dec(v_x__raw_39_);
return v_res_41_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_karatsuba(uint8_t builtin) {
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
