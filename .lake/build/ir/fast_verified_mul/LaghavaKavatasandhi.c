// Lean compiler output
// Module: fast_verified_mul.LaghavaKavatasandhi
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_iterateBody___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_iterateBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multAndAdd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multAndAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_zeroPrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_fast__verified__mul_lsdToNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_fast__verified__mul_lsdToNat___closed__0 = (const lean_object*)&lp_fast__verified__mul_lsdToNat___closed__0_value;
LEAN_EXPORT lean_object* lp_fast__verified__mul_lsdToNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_lsdToNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftDigits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftDigits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightDigits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightDigits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_innerLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_innerLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__multiplyDigits_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__multiplyDigits_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__outerLoop_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__outerLoop_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBodyPair(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBodyPair___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_iterateBody___redArg(lean_object* v_body_1_, lean_object* v_x_2_, lean_object* v_x_3_, lean_object* v_x_4_){
_start:
{
lean_object* v_zero_5_; uint8_t v_isZero_6_; 
v_zero_5_ = lean_unsigned_to_nat(0u);
v_isZero_6_ = lean_nat_dec_eq(v_x_3_, v_zero_5_);
if (v_isZero_6_ == 1)
{
lean_dec(v_x_3_);
lean_dec(v_x_2_);
lean_dec(v_body_1_);
return v_x_4_;
}
else
{
lean_object* v_one_7_; lean_object* v_n_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_one_7_ = lean_unsigned_to_nat(1u);
v_n_8_ = lean_nat_sub(v_x_3_, v_one_7_);
lean_dec(v_x_3_);
v___x_9_ = lean_nat_add(v_x_2_, v_one_7_);
lean_inc(v_body_1_);
v___x_10_ = lean_apply_2(v_body_1_, v_x_2_, v_x_4_);
v_x_2_ = v___x_9_;
v_x_3_ = v_n_8_;
v_x_4_ = v___x_10_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_iterateBody(lean_object* v_00_u03b1_12_, lean_object* v_body_13_, lean_object* v_x_14_, lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lp_fast__verified__mul_iterateBody___redArg(v_body_13_, v_x_14_, v_x_15_, v_x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multAndAdd(lean_object* v_a_18_, lean_object* v_b_19_, lean_object* v_c_20_, lean_object* v_base_21_){
_start:
{
lean_object* v___x_22_; lean_object* v_fullres_23_; lean_object* v_res_24_; lean_object* v_carry_25_; lean_object* v___x_26_; 
v___x_22_ = lean_nat_mul(v_a_18_, v_b_19_);
v_fullres_23_ = lean_nat_add(v___x_22_, v_c_20_);
lean_dec(v___x_22_);
v_res_24_ = lean_nat_mod(v_fullres_23_, v_base_21_);
v_carry_25_ = lean_nat_div(v_fullres_23_, v_base_21_);
lean_dec(v_fullres_23_);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v_res_24_);
lean_ctor_set(v___x_26_, 1, v_carry_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multAndAdd___boxed(lean_object* v_a_27_, lean_object* v_b_28_, lean_object* v_c_29_, lean_object* v_base_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = lp_fast__verified__mul_multAndAdd(v_a_27_, v_b_28_, v_c_29_, v_base_30_);
lean_dec(v_base_30_);
lean_dec(v_c_29_);
lean_dec(v_b_28_);
lean_dec(v_a_27_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg(lean_object* v_range_32_, lean_object* v_b_33_, lean_object* v_i_34_){
_start:
{
lean_object* v_stop_35_; lean_object* v_step_36_; uint8_t v___x_37_; 
v_stop_35_ = lean_ctor_get(v_range_32_, 1);
v_step_36_ = lean_ctor_get(v_range_32_, 2);
v___x_37_ = lean_nat_dec_lt(v_i_34_, v_stop_35_);
if (v___x_37_ == 0)
{
lean_dec(v_i_34_);
return v_b_33_;
}
else
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_array_set(v_b_33_, v_i_34_, v___x_38_);
v___x_40_ = lean_nat_add(v_i_34_, v_step_36_);
lean_dec(v_i_34_);
v_b_33_ = v___x_39_;
v_i_34_ = v___x_40_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg___boxed(lean_object* v_range_42_, lean_object* v_b_43_, lean_object* v_i_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg(v_range_42_, v_b_43_, v_i_44_);
lean_dec_ref(v_range_42_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_zeroPrefix(lean_object* v_W_46_, lean_object* v_m_47_){
_start:
{
lean_object* v___y_49_; lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = lean_array_get_size(v_W_46_);
v___x_55_ = lean_nat_dec_le(v_m_47_, v___x_54_);
if (v___x_55_ == 0)
{
lean_dec(v_m_47_);
v___y_49_ = v___x_54_;
goto v___jp_48_;
}
else
{
v___y_49_ = v_m_47_;
goto v___jp_48_;
}
v___jp_48_:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = lean_unsigned_to_nat(1u);
v___x_52_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set(v___x_52_, 1, v___y_49_);
lean_ctor_set(v___x_52_, 2, v___x_51_);
v___x_53_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg(v___x_52_, v_W_46_, v___x_50_);
lean_dec_ref(v___x_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0(lean_object* v_range_56_, lean_object* v_b_57_, lean_object* v_i_58_, lean_object* v_hs_59_, lean_object* v_hl_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___redArg(v_range_56_, v_b_57_, v_i_58_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0___boxed(lean_object* v_range_62_, lean_object* v_b_63_, lean_object* v_i_64_, lean_object* v_hs_65_, lean_object* v_hl_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00zeroPrefix_spec__0(v_range_62_, v_b_63_, v_i_64_, v_hs_65_, v_hl_66_);
lean_dec_ref(v_range_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg(lean_object* v_digits_68_, lean_object* v_base_69_, lean_object* v_range_70_, lean_object* v_b_71_, lean_object* v_i_72_){
_start:
{
lean_object* v_stop_73_; lean_object* v_step_74_; uint8_t v___x_75_; 
v_stop_73_ = lean_ctor_get(v_range_70_, 1);
v_step_74_ = lean_ctor_get(v_range_70_, 2);
v___x_75_ = lean_nat_dec_lt(v_i_72_, v_stop_73_);
if (v___x_75_ == 0)
{
lean_dec(v_i_72_);
return v_b_71_;
}
else
{
lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_91_; 
v_fst_76_ = lean_ctor_get(v_b_71_, 0);
v_snd_77_ = lean_ctor_get(v_b_71_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_b_71_);
if (v_isSharedCheck_91_ == 0)
{
v___x_79_ = v_b_71_;
v_isShared_80_ = v_isSharedCheck_91_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snd_77_);
lean_inc(v_fst_76_);
lean_dec(v_b_71_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_91_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_array_get_borrowed(v___x_81_, v_digits_68_, v_i_72_);
v___x_83_ = lean_nat_mul(v___x_82_, v_snd_77_);
v___x_84_ = lean_nat_add(v_fst_76_, v___x_83_);
lean_dec(v___x_83_);
lean_dec(v_fst_76_);
v___x_85_ = lean_nat_mul(v_snd_77_, v_base_69_);
lean_dec(v_snd_77_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 1, v___x_85_);
lean_ctor_set(v___x_79_, 0, v___x_84_);
v___x_87_ = v___x_79_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v___x_85_);
v___x_87_ = v_reuseFailAlloc_90_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_object* v___x_88_; 
v___x_88_ = lean_nat_add(v_i_72_, v_step_74_);
lean_dec(v_i_72_);
v_b_71_ = v___x_87_;
v_i_72_ = v___x_88_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg___boxed(lean_object* v_digits_92_, lean_object* v_base_93_, lean_object* v_range_94_, lean_object* v_b_95_, lean_object* v_i_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg(v_digits_92_, v_base_93_, v_range_94_, v_b_95_, v_i_96_);
lean_dec_ref(v_range_94_);
lean_dec(v_base_93_);
lean_dec_ref(v_digits_92_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_lsdToNat(lean_object* v_digits_101_, lean_object* v_base_102_){
_start:
{
lean_object* v_pow_103_; lean_object* v_acc_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_fst_109_; 
v_pow_103_ = lean_unsigned_to_nat(1u);
v_acc_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_array_get_size(v_digits_101_);
v___x_106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_106_, 0, v_acc_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
lean_ctor_set(v___x_106_, 2, v_pow_103_);
v___x_107_ = ((lean_object*)(lp_fast__verified__mul_lsdToNat___closed__0));
v___x_108_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg(v_digits_101_, v_base_102_, v___x_106_, v___x_107_, v_acc_104_);
lean_dec_ref(v___x_106_);
v_fst_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_fst_109_);
lean_dec_ref(v___x_108_);
return v_fst_109_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_lsdToNat___boxed(lean_object* v_digits_110_, lean_object* v_base_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_fast__verified__mul_lsdToNat(v_digits_110_, v_base_111_);
lean_dec(v_base_111_);
lean_dec_ref(v_digits_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0(lean_object* v_digits_113_, lean_object* v_base_114_, lean_object* v_range_115_, lean_object* v_b_116_, lean_object* v_i_117_, lean_object* v_hs_118_, lean_object* v_hl_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___redArg(v_digits_113_, v_base_114_, v_range_115_, v_b_116_, v_i_117_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0___boxed(lean_object* v_digits_121_, lean_object* v_base_122_, lean_object* v_range_123_, lean_object* v_b_124_, lean_object* v_i_125_, lean_object* v_hs_126_, lean_object* v_hl_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00lsdToNat_spec__0(v_digits_121_, v_base_122_, v_range_123_, v_b_124_, v_i_125_, v_hs_126_, v_hl_127_);
lean_dec_ref(v_range_123_);
lean_dec(v_base_122_);
lean_dec_ref(v_digits_121_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(lean_object* v_a_129_, lean_object* v_X_130_, lean_object* v_m_131_, lean_object* v_base_132_, lean_object* v_range_133_, lean_object* v_b_134_, lean_object* v_i_135_){
_start:
{
lean_object* v_stop_136_; lean_object* v_step_137_; uint8_t v___x_138_; 
v_stop_136_ = lean_ctor_get(v_range_133_, 1);
v_step_137_ = lean_ctor_get(v_range_133_, 2);
v___x_138_ = lean_nat_dec_lt(v_i_135_, v_stop_136_);
if (v___x_138_ == 0)
{
lean_dec(v_i_135_);
return v_b_134_;
}
else
{
lean_object* v_fst_139_; lean_object* v_snd_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_160_; 
v_fst_139_ = lean_ctor_get(v_b_134_, 0);
v_snd_140_ = lean_ctor_get(v_b_134_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_b_134_);
if (v_isSharedCheck_160_ == 0)
{
v___x_142_ = v_b_134_;
v_isShared_143_ = v_isSharedCheck_160_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_snd_140_);
lean_inc(v_fst_139_);
lean_dec(v_b_134_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_160_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v_fst_152_; lean_object* v_snd_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_nat_add(v_a_129_, v_i_135_);
v___x_146_ = lean_array_get_borrowed(v___x_144_, v_X_130_, v_i_135_);
v___x_147_ = lean_nat_add(v_m_131_, v_a_129_);
v___x_148_ = lean_array_get_borrowed(v___x_144_, v_fst_139_, v___x_147_);
lean_dec(v___x_147_);
v___x_149_ = lean_array_get_borrowed(v___x_144_, v_fst_139_, v___x_145_);
v___x_150_ = lean_nat_add(v___x_149_, v_snd_140_);
lean_dec(v_snd_140_);
v___x_151_ = lp_fast__verified__mul_multAndAdd(v___x_146_, v___x_148_, v___x_150_, v_base_132_);
lean_dec(v___x_150_);
v_fst_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_fst_152_);
v_snd_153_ = lean_ctor_get(v___x_151_, 1);
lean_inc(v_snd_153_);
lean_dec_ref(v___x_151_);
v___x_154_ = lean_array_set(v_fst_139_, v___x_145_, v_fst_152_);
lean_dec(v___x_145_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v_snd_153_);
lean_ctor_set(v___x_142_, 0, v___x_154_);
v___x_156_ = v___x_142_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_snd_153_);
v___x_156_ = v_reuseFailAlloc_159_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; 
v___x_157_ = lean_nat_add(v_i_135_, v_step_137_);
lean_dec(v_i_135_);
v_b_134_ = v___x_156_;
v_i_135_ = v___x_157_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg___boxed(lean_object* v_a_161_, lean_object* v_X_162_, lean_object* v_m_163_, lean_object* v_base_164_, lean_object* v_range_165_, lean_object* v_b_166_, lean_object* v_i_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_a_161_, v_X_162_, v_m_163_, v_base_164_, v_range_165_, v_b_166_, v_i_167_);
lean_dec_ref(v_range_165_);
lean_dec(v_base_164_);
lean_dec(v_m_163_);
lean_dec_ref(v_X_162_);
lean_dec(v_a_161_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg(lean_object* v_m_169_, lean_object* v_X_170_, lean_object* v_base_171_, lean_object* v_range_172_, lean_object* v_b_173_, lean_object* v_i_174_){
_start:
{
lean_object* v_stop_175_; lean_object* v_step_176_; uint8_t v___x_177_; 
v_stop_175_ = lean_ctor_get(v_range_172_, 1);
v_step_176_ = lean_ctor_get(v_range_172_, 2);
v___x_177_ = lean_nat_dec_lt(v_i_174_, v_stop_175_);
if (v___x_177_ == 0)
{
lean_dec(v_i_174_);
lean_dec(v_m_169_);
return v_b_173_;
}
else
{
lean_object* v_c_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v_fst_183_; lean_object* v_snd_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_c_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = lean_unsigned_to_nat(1u);
lean_inc(v_m_169_);
v___x_180_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_180_, 0, v_c_178_);
lean_ctor_set(v___x_180_, 1, v_m_169_);
lean_ctor_set(v___x_180_, 2, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_181_, 0, v_b_173_);
lean_ctor_set(v___x_181_, 1, v_c_178_);
v___x_182_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_i_174_, v_X_170_, v_m_169_, v_base_171_, v___x_180_, v___x_181_, v_c_178_);
lean_dec_ref(v___x_180_);
v_fst_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_fst_183_);
v_snd_184_ = lean_ctor_get(v___x_182_, 1);
lean_inc(v_snd_184_);
lean_dec_ref(v___x_182_);
v___x_185_ = lean_nat_add(v_i_174_, v_m_169_);
v___x_186_ = lean_array_set(v_fst_183_, v___x_185_, v_snd_184_);
lean_dec(v___x_185_);
v___x_187_ = lean_nat_add(v_i_174_, v_step_176_);
lean_dec(v_i_174_);
v_b_173_ = v___x_186_;
v_i_174_ = v___x_187_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg___boxed(lean_object* v_m_189_, lean_object* v_X_190_, lean_object* v_base_191_, lean_object* v_range_192_, lean_object* v_b_193_, lean_object* v_i_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg(v_m_189_, v_X_190_, v_base_191_, v_range_192_, v_b_193_, v_i_194_);
lean_dec_ref(v_range_192_);
lean_dec(v_base_191_);
lean_dec_ref(v_X_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg(lean_object* v_X_196_, lean_object* v_m_197_, lean_object* v_base_198_, lean_object* v_range_199_, lean_object* v_b_200_, lean_object* v_i_201_){
_start:
{
lean_object* v_stop_202_; lean_object* v_step_203_; uint8_t v___x_204_; 
v_stop_202_ = lean_ctor_get(v_range_199_, 1);
v_step_203_ = lean_ctor_get(v_range_199_, 2);
v___x_204_ = lean_nat_dec_lt(v_i_201_, v_stop_202_);
if (v___x_204_ == 0)
{
lean_dec(v_m_197_);
return v_b_200_;
}
else
{
lean_object* v_c_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v_fst_210_; lean_object* v_snd_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_c_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = lean_unsigned_to_nat(1u);
lean_inc(v_m_197_);
v___x_207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_207_, 0, v_c_205_);
lean_ctor_set(v___x_207_, 1, v_m_197_);
lean_ctor_set(v___x_207_, 2, v___x_206_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v_b_200_);
lean_ctor_set(v___x_208_, 1, v_c_205_);
v___x_209_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_i_201_, v_X_196_, v_m_197_, v_base_198_, v___x_207_, v___x_208_, v_c_205_);
lean_dec_ref(v___x_207_);
v_fst_210_ = lean_ctor_get(v___x_209_, 0);
lean_inc(v_fst_210_);
v_snd_211_ = lean_ctor_get(v___x_209_, 1);
lean_inc(v_snd_211_);
lean_dec_ref(v___x_209_);
v___x_212_ = lean_nat_add(v_i_201_, v_m_197_);
v___x_213_ = lean_array_set(v_fst_210_, v___x_212_, v_snd_211_);
lean_dec(v___x_212_);
v___x_214_ = lean_nat_add(v_i_201_, v_step_203_);
v___x_215_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg(v_m_197_, v_X_196_, v_base_198_, v_range_199_, v___x_213_, v___x_214_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg___boxed(lean_object* v_X_216_, lean_object* v_m_217_, lean_object* v_base_218_, lean_object* v_range_219_, lean_object* v_b_220_, lean_object* v_i_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg(v_X_216_, v_m_217_, v_base_218_, v_range_219_, v_b_220_, v_i_221_);
lean_dec(v_i_221_);
lean_dec_ref(v_range_219_);
lean_dec(v_base_218_);
lean_dec_ref(v_X_216_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___redArg(lean_object* v_W_223_, lean_object* v_m_224_, lean_object* v_base_225_){
_start:
{
lean_object* v_l_226_; lean_object* v_n_227_; lean_object* v_c_228_; lean_object* v_X_229_; lean_object* v_W_x27_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_l_226_ = lean_array_get_size(v_W_223_);
v_n_227_ = lean_nat_sub(v_l_226_, v_m_224_);
v_c_228_ = lean_unsigned_to_nat(0u);
lean_inc_n(v_m_224_, 2);
v_X_229_ = l_Array_extract___redArg(v_W_223_, v_c_228_, v_m_224_);
v_W_x27_230_ = lp_fast__verified__mul_zeroPrefix(v_W_223_, v_m_224_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_232_, 0, v_c_228_);
lean_ctor_set(v___x_232_, 1, v_n_227_);
lean_ctor_set(v___x_232_, 2, v___x_231_);
v___x_233_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg(v_X_229_, v_m_224_, v_base_225_, v___x_232_, v_W_x27_230_, v_c_228_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_X_229_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___redArg___boxed(lean_object* v_W_234_, lean_object* v_m_235_, lean_object* v_base_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_234_, v_m_235_, v_base_236_);
lean_dec(v_base_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits(lean_object* v_W_238_, lean_object* v_m_239_, lean_object* v_base_240_, lean_object* v_hbase_241_, lean_object* v_hsplit_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_238_, v_m_239_, v_base_240_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_multiplyDigits___boxed(lean_object* v_W_244_, lean_object* v_m_245_, lean_object* v_base_246_, lean_object* v_hbase_247_, lean_object* v_hsplit_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_fast__verified__mul_multiplyDigits(v_W_244_, v_m_245_, v_base_246_, v_hbase_247_, v_hsplit_248_);
lean_dec(v_base_246_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0(lean_object* v_a_250_, lean_object* v_X_251_, lean_object* v_m_252_, lean_object* v_base_253_, lean_object* v_range_254_, lean_object* v_b_255_, lean_object* v_i_256_, lean_object* v_hs_257_, lean_object* v_hl_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_a_250_, v_X_251_, v_m_252_, v_base_253_, v_range_254_, v_b_255_, v_i_256_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___boxed(lean_object* v_a_260_, lean_object* v_X_261_, lean_object* v_m_262_, lean_object* v_base_263_, lean_object* v_range_264_, lean_object* v_b_265_, lean_object* v_i_266_, lean_object* v_hs_267_, lean_object* v_hl_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0(v_a_260_, v_X_261_, v_m_262_, v_base_263_, v_range_264_, v_b_265_, v_i_266_, v_hs_267_, v_hl_268_);
lean_dec_ref(v_range_264_);
lean_dec(v_base_263_);
lean_dec(v_m_262_);
lean_dec_ref(v_X_261_);
lean_dec(v_a_260_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1(lean_object* v_X_270_, lean_object* v_m_271_, lean_object* v_base_272_, lean_object* v_range_273_, lean_object* v_b_274_, lean_object* v_i_275_, lean_object* v_hs_276_, lean_object* v_hl_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___redArg(v_X_270_, v_m_271_, v_base_272_, v_range_273_, v_b_274_, v_i_275_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1___boxed(lean_object* v_X_279_, lean_object* v_m_280_, lean_object* v_base_281_, lean_object* v_range_282_, lean_object* v_b_283_, lean_object* v_i_284_, lean_object* v_hs_285_, lean_object* v_hl_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1(v_X_279_, v_m_280_, v_base_281_, v_range_282_, v_b_283_, v_i_284_, v_hs_285_, v_hl_286_);
lean_dec(v_i_284_);
lean_dec_ref(v_range_282_);
lean_dec(v_base_281_);
lean_dec_ref(v_X_279_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1(lean_object* v_m_288_, lean_object* v_X_289_, lean_object* v_base_290_, lean_object* v_range_291_, lean_object* v_b_292_, lean_object* v_i_293_, lean_object* v_hs_294_, lean_object* v_hl_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___redArg(v_m_288_, v_X_289_, v_base_290_, v_range_291_, v_b_292_, v_i_293_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1___boxed(lean_object* v_m_297_, lean_object* v_X_298_, lean_object* v_base_299_, lean_object* v_range_300_, lean_object* v_b_301_, lean_object* v_i_302_, lean_object* v_hs_303_, lean_object* v_hl_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__1_spec__1(v_m_297_, v_X_298_, v_base_299_, v_range_300_, v_b_301_, v_i_302_, v_hs_303_, v_hl_304_);
lean_dec_ref(v_range_300_);
lean_dec(v_base_299_);
lean_dec_ref(v_X_298_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___redArg(lean_object* v_W_306_, lean_object* v_m_307_, lean_object* v_base_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_306_, v_m_307_, v_base_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___redArg___boxed(lean_object* v_W_310_, lean_object* v_m_311_, lean_object* v_base_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = lp_fast__verified__mul_laghavaKavatasandhi___redArg(v_W_310_, v_m_311_, v_base_312_);
lean_dec(v_base_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi(lean_object* v_W_314_, lean_object* v_m_315_, lean_object* v_base_316_, lean_object* v_hbase_317_, lean_object* v_hsplit_318_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_314_, v_m_315_, v_base_316_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_laghavaKavatasandhi___boxed(lean_object* v_W_320_, lean_object* v_m_321_, lean_object* v_base_322_, lean_object* v_hbase_323_, lean_object* v_hsplit_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = lp_fast__verified__mul_laghavaKavatasandhi(v_W_320_, v_m_321_, v_base_322_, v_hbase_323_, v_hsplit_324_);
lean_dec(v_base_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftDigits(lean_object* v_W_326_, lean_object* v_m_327_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = l_Array_extract___redArg(v_W_326_, v___x_328_, v_m_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftDigits___boxed(lean_object* v_W_330_, lean_object* v_m_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = lp_fast__verified__mul_leftDigits(v_W_330_, v_m_331_);
lean_dec_ref(v_W_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightDigits(lean_object* v_W_333_, lean_object* v_m_334_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_array_get_size(v_W_333_);
v___x_336_ = l_Array_extract___redArg(v_W_333_, v_m_334_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightDigits___boxed(lean_object* v_W_337_, lean_object* v_m_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = lp_fast__verified__mul_rightDigits(v_W_337_, v_m_338_);
lean_dec_ref(v_W_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftVal(lean_object* v_W_340_, lean_object* v_m_341_, lean_object* v_base_342_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lp_fast__verified__mul_leftDigits(v_W_340_, v_m_341_);
v___x_344_ = lp_fast__verified__mul_lsdToNat(v___x_343_, v_base_342_);
lean_dec_ref(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_leftVal___boxed(lean_object* v_W_345_, lean_object* v_m_346_, lean_object* v_base_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = lp_fast__verified__mul_leftVal(v_W_345_, v_m_346_, v_base_347_);
lean_dec(v_base_347_);
lean_dec_ref(v_W_345_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightVal(lean_object* v_W_349_, lean_object* v_m_350_, lean_object* v_base_351_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lp_fast__verified__mul_rightDigits(v_W_349_, v_m_350_);
v___x_353_ = lp_fast__verified__mul_lsdToNat(v___x_352_, v_base_351_);
lean_dec_ref(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_rightVal___boxed(lean_object* v_W_354_, lean_object* v_m_355_, lean_object* v_base_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = lp_fast__verified__mul_rightVal(v_W_354_, v_m_355_, v_base_356_);
lean_dec(v_base_356_);
lean_dec_ref(v_W_354_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___redArg(lean_object* v_W_358_, lean_object* v_m_359_, lean_object* v_base_360_){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_358_, v_m_359_, v_base_360_);
v___x_362_ = lp_fast__verified__mul_lsdToNat(v___x_361_, v_base_360_);
lean_dec_ref(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___redArg___boxed(lean_object* v_W_363_, lean_object* v_m_364_, lean_object* v_base_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = lp_fast__verified__mul_outVal___redArg(v_W_363_, v_m_364_, v_base_365_);
lean_dec(v_base_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal(lean_object* v_W_367_, lean_object* v_m_368_, lean_object* v_base_369_, lean_object* v_hbase_370_, lean_object* v_hsplit_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lp_fast__verified__mul_outVal___redArg(v_W_367_, v_m_368_, v_base_369_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal___boxed(lean_object* v_W_373_, lean_object* v_m_374_, lean_object* v_base_375_, lean_object* v_hbase_376_, lean_object* v_hsplit_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_fast__verified__mul_outVal(v_W_373_, v_m_374_, v_base_375_, v_hbase_376_, v_hsplit_377_);
lean_dec(v_base_375_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___redArg(lean_object* v_W_379_, lean_object* v_m_380_, lean_object* v_base_381_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lp_fast__verified__mul_multiplyDigits___redArg(v_W_379_, v_m_380_, v_base_381_);
v___x_383_ = lp_fast__verified__mul_lsdToNat(v___x_382_, v_base_381_);
lean_dec_ref(v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___redArg___boxed(lean_object* v_W_384_, lean_object* v_m_385_, lean_object* v_base_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = lp_fast__verified__mul_outVal_x27___redArg(v_W_384_, v_m_385_, v_base_386_);
lean_dec(v_base_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27(lean_object* v_W_388_, lean_object* v_m_389_, lean_object* v_base_390_, lean_object* v_hbase_391_, lean_object* v_hsplit_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lp_fast__verified__mul_outVal_x27___redArg(v_W_388_, v_m_389_, v_base_390_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outVal_x27___boxed(lean_object* v_W_394_, lean_object* v_m_395_, lean_object* v_base_396_, lean_object* v_hbase_397_, lean_object* v_hsplit_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = lp_fast__verified__mul_outVal_x27(v_W_394_, v_m_395_, v_base_396_, v_hbase_397_, v_hsplit_398_);
lean_dec(v_base_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_innerLoop(lean_object* v_X_400_, lean_object* v_W_401_, lean_object* v_yi_402_, lean_object* v_i_403_, lean_object* v_m_404_, lean_object* v_base_405_, lean_object* v_j_406_, lean_object* v_c_407_){
_start:
{
uint8_t v___x_408_; 
v___x_408_ = lean_nat_dec_lt(v_j_406_, v_m_404_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec(v_j_406_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v_W_401_);
lean_ctor_set(v___x_409_, 1, v_c_407_);
return v___x_409_;
}
else
{
lean_object* v_k_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_fst_416_; lean_object* v_snd_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_k_410_ = lean_nat_add(v_i_403_, v_j_406_);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_array_get_borrowed(v___x_411_, v_X_400_, v_j_406_);
v___x_413_ = lean_array_get_borrowed(v___x_411_, v_W_401_, v_k_410_);
v___x_414_ = lean_nat_add(v___x_413_, v_c_407_);
lean_dec(v_c_407_);
v___x_415_ = lp_fast__verified__mul_multAndAdd(v___x_412_, v_yi_402_, v___x_414_, v_base_405_);
lean_dec(v___x_414_);
v_fst_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_fst_416_);
v_snd_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_snd_417_);
lean_dec_ref(v___x_415_);
v___x_418_ = lean_array_set(v_W_401_, v_k_410_, v_fst_416_);
lean_dec(v_k_410_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_j_406_, v___x_419_);
lean_dec(v_j_406_);
v_W_401_ = v___x_418_;
v_j_406_ = v___x_420_;
v_c_407_ = v_snd_417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_innerLoop___boxed(lean_object* v_X_422_, lean_object* v_W_423_, lean_object* v_yi_424_, lean_object* v_i_425_, lean_object* v_m_426_, lean_object* v_base_427_, lean_object* v_j_428_, lean_object* v_c_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = lp_fast__verified__mul_innerLoop(v_X_422_, v_W_423_, v_yi_424_, v_i_425_, v_m_426_, v_base_427_, v_j_428_, v_c_429_);
lean_dec(v_base_427_);
lean_dec(v_m_426_);
lean_dec(v_i_425_);
lean_dec(v_yi_424_);
lean_dec_ref(v_X_422_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__multiplyDigits_match__1_splitter___redArg(lean_object* v_x_431_, lean_object* v_h__1_432_){
_start:
{
lean_object* v_fst_433_; lean_object* v_snd_434_; lean_object* v___x_435_; 
v_fst_433_ = lean_ctor_get(v_x_431_, 0);
lean_inc(v_fst_433_);
v_snd_434_ = lean_ctor_get(v_x_431_, 1);
lean_inc(v_snd_434_);
lean_dec_ref(v_x_431_);
v___x_435_ = lean_apply_2(v_h__1_432_, v_fst_433_, v_snd_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__multiplyDigits_match__1_splitter(lean_object* v_motive_436_, lean_object* v_x_437_, lean_object* v_h__1_438_){
_start:
{
lean_object* v_fst_439_; lean_object* v_snd_440_; lean_object* v___x_441_; 
v_fst_439_ = lean_ctor_get(v_x_437_, 0);
lean_inc(v_fst_439_);
v_snd_440_ = lean_ctor_get(v_x_437_, 1);
lean_inc(v_snd_440_);
lean_dec_ref(v_x_437_);
v___x_441_ = lean_apply_2(v_h__1_438_, v_fst_439_, v_snd_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerLoop(lean_object* v_X_442_, lean_object* v_W_443_, lean_object* v_m_444_, lean_object* v_n_445_, lean_object* v_base_446_, lean_object* v_i_447_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = lean_nat_dec_lt(v_i_447_, v_n_445_);
if (v___x_448_ == 0)
{
lean_dec(v_i_447_);
return v_W_443_;
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v_yi_451_; lean_object* v___x_452_; lean_object* v_fst_453_; lean_object* v_snd_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_add(v_m_444_, v_i_447_);
v_yi_451_ = lean_array_get(v___x_449_, v_W_443_, v___x_450_);
lean_dec(v___x_450_);
v___x_452_ = lp_fast__verified__mul_innerLoop(v_X_442_, v_W_443_, v_yi_451_, v_i_447_, v_m_444_, v_base_446_, v___x_449_, v___x_449_);
lean_dec(v_yi_451_);
v_fst_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_fst_453_);
v_snd_454_ = lean_ctor_get(v___x_452_, 1);
lean_inc(v_snd_454_);
lean_dec_ref(v___x_452_);
v___x_455_ = lean_nat_add(v_i_447_, v_m_444_);
v___x_456_ = lean_array_set(v_fst_453_, v___x_455_, v_snd_454_);
lean_dec(v___x_455_);
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = lean_nat_add(v_i_447_, v___x_457_);
lean_dec(v_i_447_);
v_W_443_ = v___x_456_;
v_i_447_ = v___x_458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerLoop___boxed(lean_object* v_X_460_, lean_object* v_W_461_, lean_object* v_m_462_, lean_object* v_n_463_, lean_object* v_base_464_, lean_object* v_i_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_fast__verified__mul_outerLoop(v_X_460_, v_W_461_, v_m_462_, v_n_463_, v_base_464_, v_i_465_);
lean_dec(v_base_464_);
lean_dec(v_n_463_);
lean_dec(v_m_462_);
lean_dec_ref(v_X_460_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__outerLoop_match__1_splitter___redArg(lean_object* v_x_467_, lean_object* v_h__1_468_){
_start:
{
lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; 
v_fst_469_ = lean_ctor_get(v_x_467_, 0);
lean_inc(v_fst_469_);
v_snd_470_ = lean_ctor_get(v_x_467_, 1);
lean_inc(v_snd_470_);
lean_dec_ref(v_x_467_);
v___x_471_ = lean_apply_2(v_h__1_468_, v_fst_469_, v_snd_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_LaghavaKavatasandhi_0__outerLoop_match__1_splitter(lean_object* v_motive_472_, lean_object* v_x_473_, lean_object* v_h__1_474_){
_start:
{
lean_object* v_fst_475_; lean_object* v_snd_476_; lean_object* v___x_477_; 
v_fst_475_ = lean_ctor_get(v_x_473_, 0);
lean_inc(v_fst_475_);
v_snd_476_ = lean_ctor_get(v_x_473_, 1);
lean_inc(v_snd_476_);
lean_dec_ref(v_x_473_);
v___x_477_ = lean_apply_2(v_h__1_474_, v_fst_475_, v_snd_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBody(lean_object* v_X_478_, lean_object* v_m_479_, lean_object* v_base_480_, lean_object* v_i_481_, lean_object* v_W_x27_482_){
_start:
{
lean_object* v_c_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_c_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_unsigned_to_nat(1u);
lean_inc(v_m_479_);
v___x_485_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_485_, 0, v_c_483_);
lean_ctor_set(v___x_485_, 1, v_m_479_);
lean_ctor_set(v___x_485_, 2, v___x_484_);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v_W_x27_482_);
lean_ctor_set(v___x_486_, 1, v_c_483_);
v___x_487_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_i_481_, v_X_478_, v_m_479_, v_base_480_, v___x_485_, v___x_486_, v_c_483_);
lean_dec_ref(v___x_485_);
v_fst_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_fst_488_);
v_snd_489_ = lean_ctor_get(v___x_487_, 1);
lean_inc(v_snd_489_);
lean_dec_ref(v___x_487_);
v___x_490_ = lean_nat_add(v_i_481_, v_m_479_);
lean_dec(v_m_479_);
v___x_491_ = lean_array_set(v_fst_488_, v___x_490_, v_snd_489_);
lean_dec(v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBody___boxed(lean_object* v_X_492_, lean_object* v_m_493_, lean_object* v_base_494_, lean_object* v_i_495_, lean_object* v_W_x27_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = lp_fast__verified__mul_outerBody(v_X_492_, v_m_493_, v_base_494_, v_i_495_, v_W_x27_496_);
lean_dec(v_i_495_);
lean_dec(v_base_494_);
lean_dec_ref(v_X_492_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBodyPair(lean_object* v_X_498_, lean_object* v_m_499_, lean_object* v_base_500_, lean_object* v_i_501_, lean_object* v_W_x27_502_){
_start:
{
lean_object* v_c_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
v_c_503_ = lean_unsigned_to_nat(0u);
v___x_504_ = lean_unsigned_to_nat(1u);
lean_inc(v_m_499_);
v___x_505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_505_, 0, v_c_503_);
lean_ctor_set(v___x_505_, 1, v_m_499_);
lean_ctor_set(v___x_505_, 2, v___x_504_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v_W_x27_502_);
lean_ctor_set(v___x_506_, 1, v_c_503_);
v___x_507_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00multiplyDigits_spec__0___redArg(v_i_501_, v_X_498_, v_m_499_, v_base_500_, v___x_505_, v___x_506_, v_c_503_);
lean_dec_ref(v___x_505_);
lean_dec(v_m_499_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
v_snd_509_ = lean_ctor_get(v___x_507_, 1);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_507_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_snd_509_);
lean_inc(v_fst_508_);
lean_dec(v___x_507_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_fst_508_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_snd_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_outerBodyPair___boxed(lean_object* v_X_517_, lean_object* v_m_518_, lean_object* v_base_519_, lean_object* v_i_520_, lean_object* v_W_x27_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = lp_fast__verified__mul_outerBodyPair(v_X_517_, v_m_518_, v_base_519_, v_i_520_, v_W_x27_521_);
lean_dec(v_i_520_);
lean_dec(v_base_519_);
lean_dec_ref(v_X_517_);
return v_res_522_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_LaghavaKavatasandhi(uint8_t builtin) {
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
