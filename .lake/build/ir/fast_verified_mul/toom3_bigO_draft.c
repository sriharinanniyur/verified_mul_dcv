// Lean compiler output
// Module: fast_verified_mul.toom3_bigO_draft
// Imports: public import Init public meta import Init public import Mathlib public import Cslib.Algorithms.Lean.TimeM
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
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_shiftLeft(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lp_mathlib_Nat_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_shiftLeft_x27(uint8_t, lean_object*, lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(0u);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v_a_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0(lean_object* v_00_u03b1_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0___redArg(v_a_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(lean_object* v_m_7_, lean_object* v_f_8_){
_start:
{
lean_object* v_ret_9_; lean_object* v_time_10_; lean_object* v_r_11_; lean_object* v_ret_12_; lean_object* v_time_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_21_; 
v_ret_9_ = lean_ctor_get(v_m_7_, 0);
lean_inc(v_ret_9_);
v_time_10_ = lean_ctor_get(v_m_7_, 1);
lean_inc(v_time_10_);
lean_dec_ref(v_m_7_);
v_r_11_ = lean_apply_1(v_f_8_, v_ret_9_);
v_ret_12_ = lean_ctor_get(v_r_11_, 0);
v_time_13_ = lean_ctor_get(v_r_11_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v_r_11_);
if (v_isSharedCheck_21_ == 0)
{
v___x_15_ = v_r_11_;
v_isShared_16_ = v_isSharedCheck_21_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_time_13_);
lean_inc(v_ret_12_);
lean_dec(v_r_11_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_21_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_17_ = lean_nat_add(v_time_10_, v_time_13_);
lean_dec(v_time_13_);
lean_dec(v_time_10_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v___x_17_);
v___x_19_ = v___x_15_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_ret_12_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v___x_17_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1(lean_object* v_00_u03b1_22_, lean_object* v_00_u03b2_23_, lean_object* v_m_24_, lean_object* v_f_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v_m_24_, v_f_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0(lean_object* v_a__raw_27_, lean_object* v_b__raw_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_int_mul(v_a__raw_27_, v_b__raw_28_);
v___x_31_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0___redArg(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0___boxed(lean_object* v_a__raw_32_, lean_object* v_b__raw_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0(v_a__raw_32_, v_b__raw_33_, v_x_34_);
lean_dec(v_b__raw_33_);
lean_dec(v_a__raw_32_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1(lean_object* v_a__raw_36_, lean_object* v_b__raw_37_, lean_object* v_r1_38_, lean_object* v_i_39_, lean_object* v_w0_40_, lean_object* v_r2_41_, lean_object* v___x_42_, lean_object* v_r3_43_, lean_object* v___x_44_, lean_object* v_w__inf_45_, lean_object* v_x_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_47_ = l_Int_sign(v_a__raw_36_);
v___x_48_ = l_Int_sign(v_b__raw_37_);
v___x_49_ = lean_int_mul(v___x_47_, v___x_48_);
lean_dec(v___x_48_);
lean_dec(v___x_47_);
v___x_50_ = l_Int_shiftLeft(v_r1_38_, v_i_39_);
v___x_51_ = lean_int_add(v_w0_40_, v___x_50_);
lean_dec(v___x_50_);
v___x_52_ = l_Int_shiftLeft(v_r2_41_, v___x_42_);
v___x_53_ = lean_int_add(v___x_51_, v___x_52_);
lean_dec(v___x_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_nat_add(v_i_39_, v___x_42_);
v___x_55_ = l_Int_shiftLeft(v_r3_43_, v___x_54_);
lean_dec(v___x_54_);
v___x_56_ = lean_int_add(v___x_53_, v___x_55_);
lean_dec(v___x_55_);
lean_dec(v___x_53_);
v___x_57_ = lean_nat_shiftl(v_i_39_, v___x_44_);
v___x_58_ = l_Int_shiftLeft(v_w__inf_45_, v___x_57_);
lean_dec(v___x_57_);
v___x_59_ = lean_int_add(v___x_56_, v___x_58_);
lean_dec(v___x_58_);
lean_dec(v___x_56_);
v___x_60_ = lean_int_mul(v___x_49_, v___x_59_);
lean_dec(v___x_59_);
lean_dec(v___x_49_);
v___x_61_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_pure___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__0___redArg(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1___boxed(lean_object* v_a__raw_62_, lean_object* v_b__raw_63_, lean_object* v_r1_64_, lean_object* v_i_65_, lean_object* v_w0_66_, lean_object* v_r2_67_, lean_object* v___x_68_, lean_object* v_r3_69_, lean_object* v___x_70_, lean_object* v_w__inf_71_, lean_object* v_x_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1(v_a__raw_62_, v_b__raw_63_, v_r1_64_, v_i_65_, v_w0_66_, v_r2_67_, v___x_68_, v_r3_69_, v___x_70_, v_w__inf_71_, v_x_72_);
lean_dec(v_w__inf_71_);
lean_dec(v___x_70_);
lean_dec(v_r3_69_);
lean_dec(v___x_68_);
lean_dec(v_r2_67_);
lean_dec(v_w0_66_);
lean_dec(v_i_65_);
lean_dec(v_r1_64_);
lean_dec(v_b__raw_63_);
lean_dec(v_a__raw_62_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2(lean_object* v___x_74_, lean_object* v_n_75_, lean_object* v___f_76_, lean_object* v_x_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_nat_mul(v___x_74_, v_n_75_);
v___x_79_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v___x_78_);
v___x_80_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_79_, v___f_76_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2___boxed(lean_object* v___x_81_, lean_object* v_n_82_, lean_object* v___f_83_, lean_object* v_x_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2(v___x_81_, v_n_82_, v___f_83_, v_x_84_);
lean_dec(v_n_82_);
lean_dec(v___x_81_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3(lean_object* v_t1_86_, lean_object* v___y_87_, lean_object* v_a__raw_88_, lean_object* v_b__raw_89_, lean_object* v_r1_90_, lean_object* v_i_91_, lean_object* v_w0_92_, lean_object* v_r2_93_, lean_object* v___x_94_, lean_object* v___x_95_, lean_object* v_w__inf_96_, lean_object* v_n_97_, lean_object* v___x_98_, lean_object* v_x_99_){
_start:
{
lean_object* v_r3_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_103_; 
v_r3_100_ = lean_int_sub(v_t1_86_, v___y_87_);
lean_inc(v___x_95_);
v___f_101_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__1___boxed), 11, 10);
lean_closure_set(v___f_101_, 0, v_a__raw_88_);
lean_closure_set(v___f_101_, 1, v_b__raw_89_);
lean_closure_set(v___f_101_, 2, v_r1_90_);
lean_closure_set(v___f_101_, 3, v_i_91_);
lean_closure_set(v___f_101_, 4, v_w0_92_);
lean_closure_set(v___f_101_, 5, v_r2_93_);
lean_closure_set(v___f_101_, 6, v___x_94_);
lean_closure_set(v___f_101_, 7, v_r3_100_);
lean_closure_set(v___f_101_, 8, v___x_95_);
lean_closure_set(v___f_101_, 9, v_w__inf_96_);
v___f_102_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__2___boxed), 4, 3);
lean_closure_set(v___f_102_, 0, v___x_95_);
lean_closure_set(v___f_102_, 1, v_n_97_);
lean_closure_set(v___f_102_, 2, v___f_101_);
v___x_103_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_98_, v___f_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3___boxed(lean_object* v_t1_104_, lean_object* v___y_105_, lean_object* v_a__raw_106_, lean_object* v_b__raw_107_, lean_object* v_r1_108_, lean_object* v_i_109_, lean_object* v_w0_110_, lean_object* v_r2_111_, lean_object* v___x_112_, lean_object* v___x_113_, lean_object* v_w__inf_114_, lean_object* v_n_115_, lean_object* v___x_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3(v_t1_104_, v___y_105_, v_a__raw_106_, v_b__raw_107_, v_r1_108_, v_i_109_, v_w0_110_, v_r2_111_, v___x_112_, v___x_113_, v_w__inf_114_, v_n_115_, v___x_116_, v_x_117_);
lean_dec(v___y_105_);
lean_dec(v_t1_104_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__4(lean_object* v___y_119_, lean_object* v_w0_120_, lean_object* v_w__inf_121_, lean_object* v_t1_122_, lean_object* v_a__raw_123_, lean_object* v_b__raw_124_, lean_object* v_r1_125_, lean_object* v_i_126_, lean_object* v___x_127_, lean_object* v___x_128_, lean_object* v_n_129_, lean_object* v___x_130_, lean_object* v_x_131_){
_start:
{
lean_object* v___x_132_; lean_object* v_r2_133_; lean_object* v___f_134_; lean_object* v___x_135_; 
v___x_132_ = lean_int_sub(v___y_119_, v_w0_120_);
v_r2_133_ = lean_int_sub(v___x_132_, v_w__inf_121_);
lean_dec(v___x_132_);
lean_inc_ref(v___x_130_);
v___f_134_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__3___boxed), 14, 13);
lean_closure_set(v___f_134_, 0, v_t1_122_);
lean_closure_set(v___f_134_, 1, v___y_119_);
lean_closure_set(v___f_134_, 2, v_a__raw_123_);
lean_closure_set(v___f_134_, 3, v_b__raw_124_);
lean_closure_set(v___f_134_, 4, v_r1_125_);
lean_closure_set(v___f_134_, 5, v_i_126_);
lean_closure_set(v___f_134_, 6, v_w0_120_);
lean_closure_set(v___f_134_, 7, v_r2_133_);
lean_closure_set(v___f_134_, 8, v___x_127_);
lean_closure_set(v___f_134_, 9, v___x_128_);
lean_closure_set(v___f_134_, 10, v_w__inf_121_);
lean_closure_set(v___f_134_, 11, v_n_129_);
lean_closure_set(v___f_134_, 12, v___x_130_);
v___x_135_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_130_, v___f_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5(lean_object* v_w1_136_, lean_object* v_t1_137_, lean_object* v___y_138_, lean_object* v_w0_139_, lean_object* v_w__inf_140_, lean_object* v_a__raw_141_, lean_object* v_b__raw_142_, lean_object* v_i_143_, lean_object* v___x_144_, lean_object* v___x_145_, lean_object* v_n_146_, lean_object* v___x_147_, lean_object* v_x_148_){
_start:
{
lean_object* v_r1_149_; lean_object* v___f_150_; lean_object* v___x_151_; 
v_r1_149_ = lean_int_sub(v_w1_136_, v_t1_137_);
lean_inc_ref(v___x_147_);
v___f_150_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__4), 13, 12);
lean_closure_set(v___f_150_, 0, v___y_138_);
lean_closure_set(v___f_150_, 1, v_w0_139_);
lean_closure_set(v___f_150_, 2, v_w__inf_140_);
lean_closure_set(v___f_150_, 3, v_t1_137_);
lean_closure_set(v___f_150_, 4, v_a__raw_141_);
lean_closure_set(v___f_150_, 5, v_b__raw_142_);
lean_closure_set(v___f_150_, 6, v_r1_149_);
lean_closure_set(v___f_150_, 7, v_i_143_);
lean_closure_set(v___f_150_, 8, v___x_144_);
lean_closure_set(v___f_150_, 9, v___x_145_);
lean_closure_set(v___f_150_, 10, v_n_146_);
lean_closure_set(v___f_150_, 11, v___x_147_);
v___x_151_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_147_, v___f_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5___boxed(lean_object* v_w1_152_, lean_object* v_t1_153_, lean_object* v___y_154_, lean_object* v_w0_155_, lean_object* v_w__inf_156_, lean_object* v_a__raw_157_, lean_object* v_b__raw_158_, lean_object* v_i_159_, lean_object* v___x_160_, lean_object* v___x_161_, lean_object* v_n_162_, lean_object* v___x_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5(v_w1_152_, v_t1_153_, v___y_154_, v_w0_155_, v_w__inf_156_, v_a__raw_157_, v_b__raw_158_, v_i_159_, v___x_160_, v___x_161_, v_n_162_, v___x_163_, v_x_164_);
lean_dec(v_w1_152_);
return v_res_165_;
}
}
static lean_object* _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0(void){
_start:
{
lean_object* v_natZero_166_; lean_object* v_intZero_167_; 
v_natZero_166_ = lean_unsigned_to_nat(0u);
v_intZero_167_ = lean_nat_to_int(v_natZero_166_);
return v_intZero_167_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6(lean_object* v_w1_168_, lean_object* v_t1_169_, lean_object* v_w0_170_, lean_object* v_w__inf_171_, lean_object* v_a__raw_172_, lean_object* v_b__raw_173_, lean_object* v_i_174_, lean_object* v___x_175_, lean_object* v___x_176_, lean_object* v_n_177_, lean_object* v___x_178_, lean_object* v_w__neg__1_179_, lean_object* v___x_180_, lean_object* v_x_181_){
_start:
{
lean_object* v___y_183_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_intZero_188_; uint8_t v_isNeg_189_; 
v___x_186_ = lean_int_add(v_w1_168_, v_w__neg__1_179_);
v___x_187_ = lean_int_neg(v___x_180_);
v_intZero_188_ = lean_obj_once(&lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0, &lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0_once, _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0);
v_isNeg_189_ = lean_int_dec_lt(v___x_186_, v_intZero_188_);
if (v_isNeg_189_ == 0)
{
lean_object* v_a_190_; uint8_t v_isNeg_191_; 
v_a_190_ = lean_nat_abs(v___x_186_);
lean_dec(v___x_186_);
v_isNeg_191_ = lean_int_dec_lt(v___x_187_, v_intZero_188_);
if (v_isNeg_191_ == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_a_192_ = lean_nat_abs(v___x_187_);
lean_dec(v___x_187_);
v___x_193_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_191_, v_a_190_, v_a_192_);
lean_dec(v_a_192_);
lean_dec(v_a_190_);
v___x_194_ = lean_nat_to_int(v___x_193_);
v___y_183_ = v___x_194_;
goto v___jp_182_;
}
else
{
lean_object* v_abs_195_; lean_object* v_one_196_; lean_object* v_a_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_abs_195_ = lean_nat_abs(v___x_187_);
lean_dec(v___x_187_);
v_one_196_ = lean_unsigned_to_nat(1u);
v_a_197_ = lean_nat_sub(v_abs_195_, v_one_196_);
lean_dec(v_abs_195_);
v___x_198_ = lean_nat_add(v_a_197_, v_one_196_);
lean_dec(v_a_197_);
v___x_199_ = lean_nat_shiftr(v_a_190_, v___x_198_);
lean_dec(v___x_198_);
lean_dec(v_a_190_);
v___x_200_ = lean_nat_to_int(v___x_199_);
v___y_183_ = v___x_200_;
goto v___jp_182_;
}
}
else
{
lean_object* v_abs_201_; lean_object* v_one_202_; lean_object* v_a_203_; uint8_t v_isNeg_204_; 
v_abs_201_ = lean_nat_abs(v___x_186_);
lean_dec(v___x_186_);
v_one_202_ = lean_unsigned_to_nat(1u);
v_a_203_ = lean_nat_sub(v_abs_201_, v_one_202_);
lean_dec(v_abs_201_);
v_isNeg_204_ = lean_int_dec_lt(v___x_187_, v_intZero_188_);
if (v_isNeg_204_ == 0)
{
lean_object* v_a_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_a_205_ = lean_nat_abs(v___x_187_);
lean_dec(v___x_187_);
v___x_206_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_189_, v_a_203_, v_a_205_);
lean_dec(v_a_205_);
lean_dec(v_a_203_);
v___x_207_ = lean_int_neg_succ_of_nat(v___x_206_);
v___y_183_ = v___x_207_;
goto v___jp_182_;
}
else
{
lean_object* v_abs_208_; lean_object* v_a_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_abs_208_ = lean_nat_abs(v___x_187_);
lean_dec(v___x_187_);
v_a_209_ = lean_nat_sub(v_abs_208_, v_one_202_);
lean_dec(v_abs_208_);
v___x_210_ = lean_nat_add(v_a_209_, v_one_202_);
lean_dec(v_a_209_);
v___x_211_ = lean_nat_shiftr(v_a_203_, v___x_210_);
lean_dec(v___x_210_);
lean_dec(v_a_203_);
v___x_212_ = lean_int_neg_succ_of_nat(v___x_211_);
v___y_183_ = v___x_212_;
goto v___jp_182_;
}
}
v___jp_182_:
{
lean_object* v___f_184_; lean_object* v___x_185_; 
lean_inc_ref(v___x_178_);
v___f_184_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__5___boxed), 13, 12);
lean_closure_set(v___f_184_, 0, v_w1_168_);
lean_closure_set(v___f_184_, 1, v_t1_169_);
lean_closure_set(v___f_184_, 2, v___y_183_);
lean_closure_set(v___f_184_, 3, v_w0_170_);
lean_closure_set(v___f_184_, 4, v_w__inf_171_);
lean_closure_set(v___f_184_, 5, v_a__raw_172_);
lean_closure_set(v___f_184_, 6, v_b__raw_173_);
lean_closure_set(v___f_184_, 7, v_i_174_);
lean_closure_set(v___f_184_, 8, v___x_175_);
lean_closure_set(v___f_184_, 9, v___x_176_);
lean_closure_set(v___f_184_, 10, v_n_177_);
lean_closure_set(v___f_184_, 11, v___x_178_);
v___x_185_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_178_, v___f_184_);
return v___x_185_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___boxed(lean_object* v_w1_213_, lean_object* v_t1_214_, lean_object* v_w0_215_, lean_object* v_w__inf_216_, lean_object* v_a__raw_217_, lean_object* v_b__raw_218_, lean_object* v_i_219_, lean_object* v___x_220_, lean_object* v___x_221_, lean_object* v_n_222_, lean_object* v___x_223_, lean_object* v_w__neg__1_224_, lean_object* v___x_225_, lean_object* v_x_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6(v_w1_213_, v_t1_214_, v_w0_215_, v_w__inf_216_, v_a__raw_217_, v_b__raw_218_, v_i_219_, v___x_220_, v___x_221_, v_n_222_, v___x_223_, v_w__neg__1_224_, v___x_225_, v_x_226_);
lean_dec(v___x_225_);
lean_dec(v_w__neg__1_224_);
return v_res_227_;
}
}
static lean_object* _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(6u);
v___x_229_ = lean_nat_to_int(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7(lean_object* v___x_230_, lean_object* v_w0_231_, lean_object* v___x_232_, lean_object* v_w1_233_, lean_object* v_a__raw_234_, lean_object* v_b__raw_235_, lean_object* v_i_236_, lean_object* v___x_237_, lean_object* v___x_238_, lean_object* v_n_239_, lean_object* v___x_240_, lean_object* v_w__neg__1_241_, lean_object* v_w2_242_, lean_object* v_w__inf_243_){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_254_; lean_object* v_intZero_269_; uint8_t v_isNeg_270_; 
v___x_244_ = lean_nat_to_int(v___x_230_);
v___x_245_ = lean_int_mul(v___x_244_, v_w0_231_);
lean_dec(v___x_244_);
lean_inc(v___x_232_);
v___x_246_ = lean_nat_to_int(v___x_232_);
v_intZero_269_ = lean_obj_once(&lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0, &lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0_once, _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0);
v_isNeg_270_ = lean_int_dec_lt(v_w__neg__1_241_, v_intZero_269_);
if (v_isNeg_270_ == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_a_271_ = lean_nat_abs(v_w__neg__1_241_);
v___x_272_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_270_, v_a_271_, v___x_232_);
lean_dec(v_a_271_);
v___x_273_ = lean_nat_to_int(v___x_272_);
v___y_254_ = v___x_273_;
goto v___jp_253_;
}
else
{
lean_object* v_abs_274_; lean_object* v_one_275_; lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_abs_274_ = lean_nat_abs(v_w__neg__1_241_);
v_one_275_ = lean_unsigned_to_nat(1u);
v_a_276_ = lean_nat_sub(v_abs_274_, v_one_275_);
lean_dec(v_abs_274_);
v___x_277_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_270_, v_a_276_, v___x_232_);
lean_dec(v_a_276_);
v___x_278_ = lean_int_neg_succ_of_nat(v___x_277_);
v___y_254_ = v___x_278_;
goto v___jp_253_;
}
v___jp_247_:
{
lean_object* v_t1_250_; lean_object* v___f_251_; lean_object* v___x_252_; 
v_t1_250_ = lean_int_sub(v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec(v___y_248_);
lean_inc_ref(v___x_240_);
v___f_251_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___boxed), 14, 13);
lean_closure_set(v___f_251_, 0, v_w1_233_);
lean_closure_set(v___f_251_, 1, v_t1_250_);
lean_closure_set(v___f_251_, 2, v_w0_231_);
lean_closure_set(v___f_251_, 3, v_w__inf_243_);
lean_closure_set(v___f_251_, 4, v_a__raw_234_);
lean_closure_set(v___f_251_, 5, v_b__raw_235_);
lean_closure_set(v___f_251_, 6, v_i_236_);
lean_closure_set(v___f_251_, 7, v___x_237_);
lean_closure_set(v___f_251_, 8, v___x_238_);
lean_closure_set(v___f_251_, 9, v_n_239_);
lean_closure_set(v___f_251_, 10, v___x_240_);
lean_closure_set(v___f_251_, 11, v_w__neg__1_241_);
lean_closure_set(v___f_251_, 12, v___x_246_);
v___x_252_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_240_, v___f_251_);
return v___x_252_;
}
v___jp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_intZero_259_; uint8_t v_isNeg_260_; 
v___x_255_ = lean_int_add(v___x_245_, v___y_254_);
lean_dec(v___y_254_);
lean_dec(v___x_245_);
v___x_256_ = lean_int_add(v___x_255_, v_w2_242_);
lean_dec(v___x_255_);
v___x_257_ = lean_obj_once(&lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0, &lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0_once, _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___closed__0);
v___x_258_ = lean_int_ediv(v___x_256_, v___x_257_);
lean_dec(v___x_256_);
v_intZero_259_ = lean_obj_once(&lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0, &lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0_once, _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__6___closed__0);
v_isNeg_260_ = lean_int_dec_lt(v_w__inf_243_, v_intZero_259_);
if (v_isNeg_260_ == 0)
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_a_261_ = lean_nat_abs(v_w__inf_243_);
v___x_262_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_260_, v_a_261_, v___x_232_);
lean_dec(v___x_232_);
lean_dec(v_a_261_);
v___x_263_ = lean_nat_to_int(v___x_262_);
v___y_248_ = v___x_258_;
v___y_249_ = v___x_263_;
goto v___jp_247_;
}
else
{
lean_object* v_abs_264_; lean_object* v_one_265_; lean_object* v_a_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_abs_264_ = lean_nat_abs(v_w__inf_243_);
v_one_265_ = lean_unsigned_to_nat(1u);
v_a_266_ = lean_nat_sub(v_abs_264_, v_one_265_);
lean_dec(v_abs_264_);
v___x_267_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_260_, v_a_266_, v___x_232_);
lean_dec(v___x_232_);
lean_dec(v_a_266_);
v___x_268_ = lean_int_neg_succ_of_nat(v___x_267_);
v___y_248_ = v___x_258_;
v___y_249_ = v___x_268_;
goto v___jp_247_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___boxed(lean_object* v___x_279_, lean_object* v_w0_280_, lean_object* v___x_281_, lean_object* v_w1_282_, lean_object* v_a__raw_283_, lean_object* v_b__raw_284_, lean_object* v_i_285_, lean_object* v___x_286_, lean_object* v___x_287_, lean_object* v_n_288_, lean_object* v___x_289_, lean_object* v_w__neg__1_290_, lean_object* v_w2_291_, lean_object* v_w__inf_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7(v___x_279_, v_w0_280_, v___x_281_, v_w1_282_, v_a__raw_283_, v_b__raw_284_, v_i_285_, v___x_286_, v___x_287_, v_n_288_, v___x_289_, v_w__neg__1_290_, v_w2_291_, v_w__inf_292_);
lean_dec(v_w2_291_);
return v_res_293_;
}
}
static lean_object* _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11___boxed(lean_object** _args){
lean_object* v___x_296_ = _args[0];
lean_object* v_w0_297_ = _args[1];
lean_object* v___x_298_ = _args[2];
lean_object* v_a__raw_299_ = _args[3];
lean_object* v_b__raw_300_ = _args[4];
lean_object* v_i_301_ = _args[5];
lean_object* v___x_302_ = _args[6];
lean_object* v___x_303_ = _args[7];
lean_object* v_n_304_ = _args[8];
lean_object* v___x_305_ = _args[9];
lean_object* v_a2_306_ = _args[10];
lean_object* v_b2_307_ = _args[11];
lean_object* v_a1_308_ = _args[12];
lean_object* v___x_309_ = _args[13];
lean_object* v_b1_310_ = _args[14];
lean_object* v___x_311_ = _args[15];
lean_object* v_a__sub_312_ = _args[16];
lean_object* v_b__sub_313_ = _args[17];
lean_object* v_w1_314_ = _args[18];
_start:
{
lean_object* v_res_315_; 
v_res_315_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11(v___x_296_, v_w0_297_, v___x_298_, v_a__raw_299_, v_b__raw_300_, v_i_301_, v___x_302_, v___x_303_, v_n_304_, v___x_305_, v_a2_306_, v_b2_307_, v_a1_308_, v___x_309_, v_b1_310_, v___x_311_, v_a__sub_312_, v_b__sub_313_, v_w1_314_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12(lean_object* v___x_316_, lean_object* v___x_317_, lean_object* v___x_318_, lean_object* v___x_319_, lean_object* v___f_320_, lean_object* v_x_321_){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_322_ = lean_int_add(v___x_316_, v___x_317_);
v___x_323_ = lean_int_add(v___x_318_, v___x_319_);
v___x_324_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(v___x_322_, v___x_323_);
v___x_325_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_324_, v___f_320_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12___boxed(lean_object* v___x_326_, lean_object* v___x_327_, lean_object* v___x_328_, lean_object* v___x_329_, lean_object* v___f_330_, lean_object* v_x_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12(v___x_326_, v___x_327_, v___x_328_, v___x_329_, v___f_330_, v_x_331_);
lean_dec(v___x_329_);
lean_dec(v___x_328_);
lean_dec(v___x_327_);
lean_dec(v___x_326_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13(lean_object* v_i_333_, lean_object* v___x_334_, lean_object* v___x_335_, lean_object* v_a__raw_336_, lean_object* v_b__raw_337_, lean_object* v___x_338_, lean_object* v_n_339_, lean_object* v_a2_340_, lean_object* v_b2_341_, lean_object* v_a1_342_, lean_object* v___x_343_, lean_object* v_b1_344_, lean_object* v___x_345_, lean_object* v_a__sub_346_, lean_object* v_b__sub_347_, lean_object* v___x_348_, lean_object* v___x_349_, lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v_w0_352_){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___f_356_; lean_object* v___f_357_; lean_object* v___x_358_; 
v___x_353_ = lean_unsigned_to_nat(2u);
v___x_354_ = lean_nat_mul(v___x_353_, v_i_333_);
v___x_355_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v___x_354_);
lean_inc_ref(v___x_355_);
v___f_356_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11___boxed), 19, 18);
lean_closure_set(v___f_356_, 0, v___x_334_);
lean_closure_set(v___f_356_, 1, v_w0_352_);
lean_closure_set(v___f_356_, 2, v___x_335_);
lean_closure_set(v___f_356_, 3, v_a__raw_336_);
lean_closure_set(v___f_356_, 4, v_b__raw_337_);
lean_closure_set(v___f_356_, 5, v_i_333_);
lean_closure_set(v___f_356_, 6, v___x_338_);
lean_closure_set(v___f_356_, 7, v___x_353_);
lean_closure_set(v___f_356_, 8, v_n_339_);
lean_closure_set(v___f_356_, 9, v___x_355_);
lean_closure_set(v___f_356_, 10, v_a2_340_);
lean_closure_set(v___f_356_, 11, v_b2_341_);
lean_closure_set(v___f_356_, 12, v_a1_342_);
lean_closure_set(v___f_356_, 13, v___x_343_);
lean_closure_set(v___f_356_, 14, v_b1_344_);
lean_closure_set(v___f_356_, 15, v___x_345_);
lean_closure_set(v___f_356_, 16, v_a__sub_346_);
lean_closure_set(v___f_356_, 17, v_b__sub_347_);
v___f_357_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__12___boxed), 6, 5);
lean_closure_set(v___f_357_, 0, v___x_348_);
lean_closure_set(v___f_357_, 1, v___x_349_);
lean_closure_set(v___f_357_, 2, v___x_350_);
lean_closure_set(v___f_357_, 3, v___x_351_);
lean_closure_set(v___f_357_, 4, v___f_356_);
v___x_358_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_355_, v___f_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13___boxed(lean_object** _args){
lean_object* v_i_359_ = _args[0];
lean_object* v___x_360_ = _args[1];
lean_object* v___x_361_ = _args[2];
lean_object* v_a__raw_362_ = _args[3];
lean_object* v_b__raw_363_ = _args[4];
lean_object* v___x_364_ = _args[5];
lean_object* v_n_365_ = _args[6];
lean_object* v_a2_366_ = _args[7];
lean_object* v_b2_367_ = _args[8];
lean_object* v_a1_368_ = _args[9];
lean_object* v___x_369_ = _args[10];
lean_object* v_b1_370_ = _args[11];
lean_object* v___x_371_ = _args[12];
lean_object* v_a__sub_372_ = _args[13];
lean_object* v_b__sub_373_ = _args[14];
lean_object* v___x_374_ = _args[15];
lean_object* v___x_375_ = _args[16];
lean_object* v___x_376_ = _args[17];
lean_object* v___x_377_ = _args[18];
lean_object* v_w0_378_ = _args[19];
_start:
{
lean_object* v_res_379_; 
v_res_379_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13(v_i_359_, v___x_360_, v___x_361_, v_a__raw_362_, v_b__raw_363_, v___x_364_, v_n_365_, v_a2_366_, v_b2_367_, v_a1_368_, v___x_369_, v_b1_370_, v___x_371_, v_a__sub_372_, v_b__sub_373_, v___x_374_, v___x_375_, v___x_376_, v___x_377_, v_w0_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14(lean_object* v_a0_380_, lean_object* v_b0_381_, lean_object* v_i_382_, lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v_a__raw_385_, lean_object* v_b__raw_386_, lean_object* v___x_387_, lean_object* v_n_388_, lean_object* v_a2_389_, lean_object* v_b2_390_, lean_object* v_a1_391_, lean_object* v_b1_392_, lean_object* v_a__sub_393_, lean_object* v_b__sub_394_, lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v___x_397_, lean_object* v___x_398_, lean_object* v_x_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_400_ = lean_nat_to_int(v_a0_380_);
v___x_401_ = lean_nat_to_int(v_b0_381_);
lean_inc(v___x_401_);
lean_inc(v___x_400_);
v___f_402_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__13___boxed), 20, 19);
lean_closure_set(v___f_402_, 0, v_i_382_);
lean_closure_set(v___f_402_, 1, v___x_383_);
lean_closure_set(v___f_402_, 2, v___x_384_);
lean_closure_set(v___f_402_, 3, v_a__raw_385_);
lean_closure_set(v___f_402_, 4, v_b__raw_386_);
lean_closure_set(v___f_402_, 5, v___x_387_);
lean_closure_set(v___f_402_, 6, v_n_388_);
lean_closure_set(v___f_402_, 7, v_a2_389_);
lean_closure_set(v___f_402_, 8, v_b2_390_);
lean_closure_set(v___f_402_, 9, v_a1_391_);
lean_closure_set(v___f_402_, 10, v___x_400_);
lean_closure_set(v___f_402_, 11, v_b1_392_);
lean_closure_set(v___f_402_, 12, v___x_401_);
lean_closure_set(v___f_402_, 13, v_a__sub_393_);
lean_closure_set(v___f_402_, 14, v_b__sub_394_);
lean_closure_set(v___f_402_, 15, v___x_395_);
lean_closure_set(v___f_402_, 16, v___x_396_);
lean_closure_set(v___f_402_, 17, v___x_397_);
lean_closure_set(v___f_402_, 18, v___x_398_);
v___x_403_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(v___x_400_, v___x_401_);
v___x_404_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_403_, v___f_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14___boxed(lean_object** _args){
lean_object* v_a0_405_ = _args[0];
lean_object* v_b0_406_ = _args[1];
lean_object* v_i_407_ = _args[2];
lean_object* v___x_408_ = _args[3];
lean_object* v___x_409_ = _args[4];
lean_object* v_a__raw_410_ = _args[5];
lean_object* v_b__raw_411_ = _args[6];
lean_object* v___x_412_ = _args[7];
lean_object* v_n_413_ = _args[8];
lean_object* v_a2_414_ = _args[9];
lean_object* v_b2_415_ = _args[10];
lean_object* v_a1_416_ = _args[11];
lean_object* v_b1_417_ = _args[12];
lean_object* v_a__sub_418_ = _args[13];
lean_object* v_b__sub_419_ = _args[14];
lean_object* v___x_420_ = _args[15];
lean_object* v___x_421_ = _args[16];
lean_object* v___x_422_ = _args[17];
lean_object* v___x_423_ = _args[18];
lean_object* v_x_424_ = _args[19];
_start:
{
lean_object* v_res_425_; 
v_res_425_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14(v_a0_405_, v_b0_406_, v_i_407_, v___x_408_, v___x_409_, v_a__raw_410_, v_b__raw_411_, v___x_412_, v_n_413_, v_a2_414_, v_b2_415_, v_a1_416_, v_b1_417_, v_a__sub_418_, v_b__sub_419_, v___x_420_, v___x_421_, v___x_422_, v___x_423_, v_x_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15(lean_object* v_b02_426_, lean_object* v_b1_427_, lean_object* v_a0_428_, lean_object* v_b0_429_, lean_object* v_i_430_, lean_object* v___x_431_, lean_object* v___x_432_, lean_object* v_a__raw_433_, lean_object* v_b__raw_434_, lean_object* v___x_435_, lean_object* v_n_436_, lean_object* v_a2_437_, lean_object* v_b2_438_, lean_object* v_a1_439_, lean_object* v_a__sub_440_, lean_object* v___x_441_, lean_object* v___x_442_, lean_object* v___x_443_, lean_object* v_x_444_){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v_b__sub_447_; lean_object* v___f_448_; lean_object* v___x_449_; 
v___x_445_ = lean_nat_to_int(v_b02_426_);
lean_inc(v_b1_427_);
v___x_446_ = lean_nat_to_int(v_b1_427_);
v_b__sub_447_ = lean_int_sub(v___x_445_, v___x_446_);
v___f_448_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__14___boxed), 20, 19);
lean_closure_set(v___f_448_, 0, v_a0_428_);
lean_closure_set(v___f_448_, 1, v_b0_429_);
lean_closure_set(v___f_448_, 2, v_i_430_);
lean_closure_set(v___f_448_, 3, v___x_431_);
lean_closure_set(v___f_448_, 4, v___x_432_);
lean_closure_set(v___f_448_, 5, v_a__raw_433_);
lean_closure_set(v___f_448_, 6, v_b__raw_434_);
lean_closure_set(v___f_448_, 7, v___x_435_);
lean_closure_set(v___f_448_, 8, v_n_436_);
lean_closure_set(v___f_448_, 9, v_a2_437_);
lean_closure_set(v___f_448_, 10, v_b2_438_);
lean_closure_set(v___f_448_, 11, v_a1_439_);
lean_closure_set(v___f_448_, 12, v_b1_427_);
lean_closure_set(v___f_448_, 13, v_a__sub_440_);
lean_closure_set(v___f_448_, 14, v_b__sub_447_);
lean_closure_set(v___f_448_, 15, v___x_441_);
lean_closure_set(v___f_448_, 16, v___x_442_);
lean_closure_set(v___f_448_, 17, v___x_445_);
lean_closure_set(v___f_448_, 18, v___x_446_);
v___x_449_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_443_, v___f_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15___boxed(lean_object** _args){
lean_object* v_b02_450_ = _args[0];
lean_object* v_b1_451_ = _args[1];
lean_object* v_a0_452_ = _args[2];
lean_object* v_b0_453_ = _args[3];
lean_object* v_i_454_ = _args[4];
lean_object* v___x_455_ = _args[5];
lean_object* v___x_456_ = _args[6];
lean_object* v_a__raw_457_ = _args[7];
lean_object* v_b__raw_458_ = _args[8];
lean_object* v___x_459_ = _args[9];
lean_object* v_n_460_ = _args[10];
lean_object* v_a2_461_ = _args[11];
lean_object* v_b2_462_ = _args[12];
lean_object* v_a1_463_ = _args[13];
lean_object* v_a__sub_464_ = _args[14];
lean_object* v___x_465_ = _args[15];
lean_object* v___x_466_ = _args[16];
lean_object* v___x_467_ = _args[17];
lean_object* v_x_468_ = _args[18];
_start:
{
lean_object* v_res_469_; 
v_res_469_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15(v_b02_450_, v_b1_451_, v_a0_452_, v_b0_453_, v_i_454_, v___x_455_, v___x_456_, v_a__raw_457_, v_b__raw_458_, v___x_459_, v_n_460_, v_a2_461_, v_b2_462_, v_a1_463_, v_a__sub_464_, v___x_465_, v___x_466_, v___x_467_, v_x_468_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16(lean_object* v_a02_470_, lean_object* v_a1_471_, lean_object* v_b02_472_, lean_object* v_b1_473_, lean_object* v_a0_474_, lean_object* v_b0_475_, lean_object* v_i_476_, lean_object* v___x_477_, lean_object* v___x_478_, lean_object* v_a__raw_479_, lean_object* v_b__raw_480_, lean_object* v___x_481_, lean_object* v_n_482_, lean_object* v_a2_483_, lean_object* v_b2_484_, lean_object* v___x_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_a__sub_489_; lean_object* v___f_490_; lean_object* v___x_491_; 
v___x_487_ = lean_nat_to_int(v_a02_470_);
lean_inc(v_a1_471_);
v___x_488_ = lean_nat_to_int(v_a1_471_);
v_a__sub_489_ = lean_int_sub(v___x_487_, v___x_488_);
lean_inc_ref(v___x_485_);
v___f_490_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__15___boxed), 19, 18);
lean_closure_set(v___f_490_, 0, v_b02_472_);
lean_closure_set(v___f_490_, 1, v_b1_473_);
lean_closure_set(v___f_490_, 2, v_a0_474_);
lean_closure_set(v___f_490_, 3, v_b0_475_);
lean_closure_set(v___f_490_, 4, v_i_476_);
lean_closure_set(v___f_490_, 5, v___x_477_);
lean_closure_set(v___f_490_, 6, v___x_478_);
lean_closure_set(v___f_490_, 7, v_a__raw_479_);
lean_closure_set(v___f_490_, 8, v_b__raw_480_);
lean_closure_set(v___f_490_, 9, v___x_481_);
lean_closure_set(v___f_490_, 10, v_n_482_);
lean_closure_set(v___f_490_, 11, v_a2_483_);
lean_closure_set(v___f_490_, 12, v_b2_484_);
lean_closure_set(v___f_490_, 13, v_a1_471_);
lean_closure_set(v___f_490_, 14, v_a__sub_489_);
lean_closure_set(v___f_490_, 15, v___x_487_);
lean_closure_set(v___f_490_, 16, v___x_488_);
lean_closure_set(v___f_490_, 17, v___x_485_);
v___x_491_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_485_, v___f_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16___boxed(lean_object** _args){
lean_object* v_a02_492_ = _args[0];
lean_object* v_a1_493_ = _args[1];
lean_object* v_b02_494_ = _args[2];
lean_object* v_b1_495_ = _args[3];
lean_object* v_a0_496_ = _args[4];
lean_object* v_b0_497_ = _args[5];
lean_object* v_i_498_ = _args[6];
lean_object* v___x_499_ = _args[7];
lean_object* v___x_500_ = _args[8];
lean_object* v_a__raw_501_ = _args[9];
lean_object* v_b__raw_502_ = _args[10];
lean_object* v___x_503_ = _args[11];
lean_object* v_n_504_ = _args[12];
lean_object* v_a2_505_ = _args[13];
lean_object* v_b2_506_ = _args[14];
lean_object* v___x_507_ = _args[15];
lean_object* v_x_508_ = _args[16];
_start:
{
lean_object* v_res_509_; 
v_res_509_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16(v_a02_492_, v_a1_493_, v_b02_494_, v_b1_495_, v_a0_496_, v_b0_497_, v_i_498_, v___x_499_, v___x_500_, v_a__raw_501_, v_b__raw_502_, v___x_503_, v_n_504_, v_a2_505_, v_b2_506_, v___x_507_, v_x_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__17(lean_object* v_b0_510_, lean_object* v_b2_511_, lean_object* v_a02_512_, lean_object* v_a1_513_, lean_object* v_b1_514_, lean_object* v_a0_515_, lean_object* v_i_516_, lean_object* v___x_517_, lean_object* v___x_518_, lean_object* v_a__raw_519_, lean_object* v_b__raw_520_, lean_object* v___x_521_, lean_object* v_n_522_, lean_object* v_a2_523_, lean_object* v___x_524_, lean_object* v_x_525_){
_start:
{
lean_object* v_b02_526_; lean_object* v___f_527_; lean_object* v___x_528_; 
v_b02_526_ = lean_nat_add(v_b0_510_, v_b2_511_);
lean_inc_ref(v___x_524_);
v___f_527_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__16___boxed), 17, 16);
lean_closure_set(v___f_527_, 0, v_a02_512_);
lean_closure_set(v___f_527_, 1, v_a1_513_);
lean_closure_set(v___f_527_, 2, v_b02_526_);
lean_closure_set(v___f_527_, 3, v_b1_514_);
lean_closure_set(v___f_527_, 4, v_a0_515_);
lean_closure_set(v___f_527_, 5, v_b0_510_);
lean_closure_set(v___f_527_, 6, v_i_516_);
lean_closure_set(v___f_527_, 7, v___x_517_);
lean_closure_set(v___f_527_, 8, v___x_518_);
lean_closure_set(v___f_527_, 9, v_a__raw_519_);
lean_closure_set(v___f_527_, 10, v_b__raw_520_);
lean_closure_set(v___f_527_, 11, v___x_521_);
lean_closure_set(v___f_527_, 12, v_n_522_);
lean_closure_set(v___f_527_, 13, v_a2_523_);
lean_closure_set(v___f_527_, 14, v_b2_511_);
lean_closure_set(v___f_527_, 15, v___x_524_);
v___x_528_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_524_, v___f_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__18(lean_object* v_a0_529_, lean_object* v_a2_530_, lean_object* v_b0_531_, lean_object* v_b2_532_, lean_object* v_a1_533_, lean_object* v_b1_534_, lean_object* v_i_535_, lean_object* v___x_536_, lean_object* v___x_537_, lean_object* v_a__raw_538_, lean_object* v_b__raw_539_, lean_object* v___x_540_, lean_object* v_n_541_, lean_object* v___x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v_a02_544_; lean_object* v___f_545_; lean_object* v___x_546_; 
v_a02_544_ = lean_nat_add(v_a0_529_, v_a2_530_);
lean_inc_ref(v___x_542_);
v___f_545_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__17), 16, 15);
lean_closure_set(v___f_545_, 0, v_b0_531_);
lean_closure_set(v___f_545_, 1, v_b2_532_);
lean_closure_set(v___f_545_, 2, v_a02_544_);
lean_closure_set(v___f_545_, 3, v_a1_533_);
lean_closure_set(v___f_545_, 4, v_b1_534_);
lean_closure_set(v___f_545_, 5, v_a0_529_);
lean_closure_set(v___f_545_, 6, v_i_535_);
lean_closure_set(v___f_545_, 7, v___x_536_);
lean_closure_set(v___f_545_, 8, v___x_537_);
lean_closure_set(v___f_545_, 9, v_a__raw_538_);
lean_closure_set(v___f_545_, 10, v_b__raw_539_);
lean_closure_set(v___f_545_, 11, v___x_540_);
lean_closure_set(v___f_545_, 12, v_n_541_);
lean_closure_set(v___f_545_, 13, v_a2_530_);
lean_closure_set(v___f_545_, 14, v___x_542_);
v___x_546_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_542_, v___f_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19(lean_object* v_b_547_, lean_object* v___x_548_, lean_object* v_a0_549_, lean_object* v_a2_550_, lean_object* v_b0_551_, lean_object* v_a1_552_, lean_object* v_b1_553_, lean_object* v_i_554_, lean_object* v___x_555_, lean_object* v___x_556_, lean_object* v_a__raw_557_, lean_object* v_b__raw_558_, lean_object* v_n_559_, lean_object* v___x_560_, lean_object* v___x_561_, lean_object* v_x_562_){
_start:
{
lean_object* v_b2_563_; lean_object* v___f_564_; lean_object* v___x_565_; 
v_b2_563_ = lean_nat_shiftr(v_b_547_, v___x_548_);
v___f_564_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__18), 15, 14);
lean_closure_set(v___f_564_, 0, v_a0_549_);
lean_closure_set(v___f_564_, 1, v_a2_550_);
lean_closure_set(v___f_564_, 2, v_b0_551_);
lean_closure_set(v___f_564_, 3, v_b2_563_);
lean_closure_set(v___f_564_, 4, v_a1_552_);
lean_closure_set(v___f_564_, 5, v_b1_553_);
lean_closure_set(v___f_564_, 6, v_i_554_);
lean_closure_set(v___f_564_, 7, v___x_555_);
lean_closure_set(v___f_564_, 8, v___x_556_);
lean_closure_set(v___f_564_, 9, v_a__raw_557_);
lean_closure_set(v___f_564_, 10, v_b__raw_558_);
lean_closure_set(v___f_564_, 11, v___x_548_);
lean_closure_set(v___f_564_, 12, v_n_559_);
lean_closure_set(v___f_564_, 13, v___x_560_);
v___x_565_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_561_, v___f_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19___boxed(lean_object* v_b_566_, lean_object* v___x_567_, lean_object* v_a0_568_, lean_object* v_a2_569_, lean_object* v_b0_570_, lean_object* v_a1_571_, lean_object* v_b1_572_, lean_object* v_i_573_, lean_object* v___x_574_, lean_object* v___x_575_, lean_object* v_a__raw_576_, lean_object* v_b__raw_577_, lean_object* v_n_578_, lean_object* v___x_579_, lean_object* v___x_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19(v_b_566_, v___x_567_, v_a0_568_, v_a2_569_, v_b0_570_, v_a1_571_, v_b1_572_, v_i_573_, v___x_574_, v___x_575_, v_a__raw_576_, v_b__raw_577_, v_n_578_, v___x_579_, v___x_580_, v_x_581_);
lean_dec(v_b_566_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20(lean_object* v_b_583_, lean_object* v_i_584_, lean_object* v_mask_585_, lean_object* v___x_586_, lean_object* v_a0_587_, lean_object* v_a2_588_, lean_object* v_b0_589_, lean_object* v_a1_590_, lean_object* v___x_591_, lean_object* v___x_592_, lean_object* v_a__raw_593_, lean_object* v_b__raw_594_, lean_object* v_n_595_, lean_object* v___x_596_, lean_object* v___x_597_, lean_object* v_x_598_){
_start:
{
lean_object* v___x_599_; lean_object* v_b1_600_; lean_object* v___f_601_; lean_object* v___x_602_; 
v___x_599_ = lean_nat_shiftr(v_b_583_, v_i_584_);
v_b1_600_ = lean_nat_land(v___x_599_, v_mask_585_);
lean_dec(v___x_599_);
lean_inc_ref(v___x_597_);
v___f_601_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__19___boxed), 16, 15);
lean_closure_set(v___f_601_, 0, v_b_583_);
lean_closure_set(v___f_601_, 1, v___x_586_);
lean_closure_set(v___f_601_, 2, v_a0_587_);
lean_closure_set(v___f_601_, 3, v_a2_588_);
lean_closure_set(v___f_601_, 4, v_b0_589_);
lean_closure_set(v___f_601_, 5, v_a1_590_);
lean_closure_set(v___f_601_, 6, v_b1_600_);
lean_closure_set(v___f_601_, 7, v_i_584_);
lean_closure_set(v___f_601_, 8, v___x_591_);
lean_closure_set(v___f_601_, 9, v___x_592_);
lean_closure_set(v___f_601_, 10, v_a__raw_593_);
lean_closure_set(v___f_601_, 11, v_b__raw_594_);
lean_closure_set(v___f_601_, 12, v_n_595_);
lean_closure_set(v___f_601_, 13, v___x_596_);
lean_closure_set(v___f_601_, 14, v___x_597_);
v___x_602_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_597_, v___f_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20___boxed(lean_object* v_b_603_, lean_object* v_i_604_, lean_object* v_mask_605_, lean_object* v___x_606_, lean_object* v_a0_607_, lean_object* v_a2_608_, lean_object* v_b0_609_, lean_object* v_a1_610_, lean_object* v___x_611_, lean_object* v___x_612_, lean_object* v_a__raw_613_, lean_object* v_b__raw_614_, lean_object* v_n_615_, lean_object* v___x_616_, lean_object* v___x_617_, lean_object* v_x_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20(v_b_603_, v_i_604_, v_mask_605_, v___x_606_, v_a0_607_, v_a2_608_, v_b0_609_, v_a1_610_, v___x_611_, v___x_612_, v_a__raw_613_, v_b__raw_614_, v_n_615_, v___x_616_, v___x_617_, v_x_618_);
lean_dec(v_mask_605_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__21(lean_object* v_b_620_, lean_object* v_mask_621_, lean_object* v_i_622_, lean_object* v___x_623_, lean_object* v_a0_624_, lean_object* v_a2_625_, lean_object* v_a1_626_, lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v_a__raw_629_, lean_object* v_b__raw_630_, lean_object* v_n_631_, lean_object* v___x_632_, lean_object* v___x_633_, lean_object* v_x_634_){
_start:
{
lean_object* v_b0_635_; lean_object* v___f_636_; lean_object* v___x_637_; 
v_b0_635_ = lean_nat_land(v_b_620_, v_mask_621_);
lean_inc_ref(v___x_633_);
v___f_636_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__20___boxed), 16, 15);
lean_closure_set(v___f_636_, 0, v_b_620_);
lean_closure_set(v___f_636_, 1, v_i_622_);
lean_closure_set(v___f_636_, 2, v_mask_621_);
lean_closure_set(v___f_636_, 3, v___x_623_);
lean_closure_set(v___f_636_, 4, v_a0_624_);
lean_closure_set(v___f_636_, 5, v_a2_625_);
lean_closure_set(v___f_636_, 6, v_b0_635_);
lean_closure_set(v___f_636_, 7, v_a1_626_);
lean_closure_set(v___f_636_, 8, v___x_627_);
lean_closure_set(v___f_636_, 9, v___x_628_);
lean_closure_set(v___f_636_, 10, v_a__raw_629_);
lean_closure_set(v___f_636_, 11, v_b__raw_630_);
lean_closure_set(v___f_636_, 12, v_n_631_);
lean_closure_set(v___f_636_, 13, v___x_632_);
lean_closure_set(v___f_636_, 14, v___x_633_);
v___x_637_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_633_, v___f_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22(lean_object* v_i_638_, lean_object* v___x_639_, lean_object* v_a_640_, lean_object* v_b_641_, lean_object* v_mask_642_, lean_object* v_a0_643_, lean_object* v_a1_644_, lean_object* v___x_645_, lean_object* v_a__raw_646_, lean_object* v_b__raw_647_, lean_object* v_n_648_, lean_object* v___x_649_, lean_object* v___x_650_, lean_object* v_x_651_){
_start:
{
lean_object* v___x_652_; lean_object* v_a2_653_; lean_object* v___f_654_; lean_object* v___x_655_; 
v___x_652_ = lean_nat_shiftl(v_i_638_, v___x_639_);
v_a2_653_ = lean_nat_shiftr(v_a_640_, v___x_652_);
lean_inc_ref(v___x_650_);
v___f_654_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__21), 15, 14);
lean_closure_set(v___f_654_, 0, v_b_641_);
lean_closure_set(v___f_654_, 1, v_mask_642_);
lean_closure_set(v___f_654_, 2, v_i_638_);
lean_closure_set(v___f_654_, 3, v___x_652_);
lean_closure_set(v___f_654_, 4, v_a0_643_);
lean_closure_set(v___f_654_, 5, v_a2_653_);
lean_closure_set(v___f_654_, 6, v_a1_644_);
lean_closure_set(v___f_654_, 7, v___x_645_);
lean_closure_set(v___f_654_, 8, v___x_639_);
lean_closure_set(v___f_654_, 9, v_a__raw_646_);
lean_closure_set(v___f_654_, 10, v_b__raw_647_);
lean_closure_set(v___f_654_, 11, v_n_648_);
lean_closure_set(v___f_654_, 12, v___x_649_);
lean_closure_set(v___f_654_, 13, v___x_650_);
v___x_655_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_650_, v___f_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22___boxed(lean_object* v_i_656_, lean_object* v___x_657_, lean_object* v_a_658_, lean_object* v_b_659_, lean_object* v_mask_660_, lean_object* v_a0_661_, lean_object* v_a1_662_, lean_object* v___x_663_, lean_object* v_a__raw_664_, lean_object* v_b__raw_665_, lean_object* v_n_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_x_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22(v_i_656_, v___x_657_, v_a_658_, v_b_659_, v_mask_660_, v_a0_661_, v_a1_662_, v___x_663_, v_a__raw_664_, v_b__raw_665_, v_n_666_, v___x_667_, v___x_668_, v_x_669_);
lean_dec(v_a_658_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__23(lean_object* v_a_671_, lean_object* v_i_672_, lean_object* v_mask_673_, lean_object* v___x_674_, lean_object* v_b_675_, lean_object* v_a0_676_, lean_object* v___x_677_, lean_object* v_a__raw_678_, lean_object* v_b__raw_679_, lean_object* v_n_680_, lean_object* v___x_681_, lean_object* v___x_682_, lean_object* v_x_683_){
_start:
{
lean_object* v___x_684_; lean_object* v_a1_685_; lean_object* v___f_686_; lean_object* v___x_687_; 
v___x_684_ = lean_nat_shiftr(v_a_671_, v_i_672_);
v_a1_685_ = lean_nat_land(v___x_684_, v_mask_673_);
lean_dec(v___x_684_);
lean_inc_ref(v___x_682_);
v___f_686_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__22___boxed), 14, 13);
lean_closure_set(v___f_686_, 0, v_i_672_);
lean_closure_set(v___f_686_, 1, v___x_674_);
lean_closure_set(v___f_686_, 2, v_a_671_);
lean_closure_set(v___f_686_, 3, v_b_675_);
lean_closure_set(v___f_686_, 4, v_mask_673_);
lean_closure_set(v___f_686_, 5, v_a0_676_);
lean_closure_set(v___f_686_, 6, v_a1_685_);
lean_closure_set(v___f_686_, 7, v___x_677_);
lean_closure_set(v___f_686_, 8, v_a__raw_678_);
lean_closure_set(v___f_686_, 9, v_b__raw_679_);
lean_closure_set(v___f_686_, 10, v_n_680_);
lean_closure_set(v___f_686_, 11, v___x_681_);
lean_closure_set(v___f_686_, 12, v___x_682_);
v___x_687_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_682_, v___f_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__24(lean_object* v_a_688_, lean_object* v_mask_689_, lean_object* v_i_690_, lean_object* v___x_691_, lean_object* v_b_692_, lean_object* v___x_693_, lean_object* v_a__raw_694_, lean_object* v_b__raw_695_, lean_object* v_n_696_, lean_object* v___x_697_, lean_object* v___x_698_, lean_object* v_x_699_){
_start:
{
lean_object* v_a0_700_; lean_object* v___f_701_; lean_object* v___x_702_; 
v_a0_700_ = lean_nat_land(v_a_688_, v_mask_689_);
lean_inc_ref(v___x_698_);
v___f_701_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__23), 13, 12);
lean_closure_set(v___f_701_, 0, v_a_688_);
lean_closure_set(v___f_701_, 1, v_i_690_);
lean_closure_set(v___f_701_, 2, v_mask_689_);
lean_closure_set(v___f_701_, 3, v___x_691_);
lean_closure_set(v___f_701_, 4, v_b_692_);
lean_closure_set(v___f_701_, 5, v_a0_700_);
lean_closure_set(v___f_701_, 6, v___x_693_);
lean_closure_set(v___f_701_, 7, v_a__raw_694_);
lean_closure_set(v___f_701_, 8, v_b__raw_695_);
lean_closure_set(v___f_701_, 9, v_n_696_);
lean_closure_set(v___f_701_, 10, v___x_697_);
lean_closure_set(v___f_701_, 11, v___x_698_);
v___x_702_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_698_, v___f_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__25(lean_object* v___x_703_, lean_object* v_i_704_, lean_object* v_a_705_, lean_object* v_b_706_, lean_object* v___x_707_, lean_object* v_a__raw_708_, lean_object* v_b__raw_709_, lean_object* v_n_710_, lean_object* v___x_711_, lean_object* v_x_712_){
_start:
{
lean_object* v___x_713_; lean_object* v_mask_714_; lean_object* v___x_715_; lean_object* v___f_716_; lean_object* v___x_717_; 
v___x_713_ = lean_nat_shiftl(v___x_703_, v_i_704_);
v_mask_714_ = lean_nat_sub(v___x_713_, v___x_703_);
lean_dec(v___x_713_);
lean_inc(v_i_704_);
v___x_715_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v_i_704_);
lean_inc_ref(v___x_715_);
v___f_716_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__24), 12, 11);
lean_closure_set(v___f_716_, 0, v_a_705_);
lean_closure_set(v___f_716_, 1, v_mask_714_);
lean_closure_set(v___f_716_, 2, v_i_704_);
lean_closure_set(v___f_716_, 3, v___x_703_);
lean_closure_set(v___f_716_, 4, v_b_706_);
lean_closure_set(v___f_716_, 5, v___x_707_);
lean_closure_set(v___f_716_, 6, v_a__raw_708_);
lean_closure_set(v___f_716_, 7, v_b__raw_709_);
lean_closure_set(v___f_716_, 8, v_n_710_);
lean_closure_set(v___f_716_, 9, v___x_715_);
lean_closure_set(v___f_716_, 10, v___x_711_);
v___x_717_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_715_, v___f_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__26(lean_object* v_n_718_, lean_object* v___x_719_, lean_object* v_a_720_, lean_object* v_b_721_, lean_object* v_a__raw_722_, lean_object* v_b__raw_723_, lean_object* v___x_724_, lean_object* v___x_725_, lean_object* v___f_726_, lean_object* v_x_727_){
_start:
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(3u);
v___x_729_ = lean_nat_dec_le(v_n_718_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_i_732_; lean_object* v___f_733_; lean_object* v___x_734_; 
lean_dec_ref(v___f_726_);
v___x_730_ = lean_nat_add(v_n_718_, v___x_728_);
v___x_731_ = lean_nat_sub(v___x_730_, v___x_719_);
lean_dec(v___x_730_);
v_i_732_ = lean_nat_div(v___x_731_, v___x_728_);
lean_dec(v___x_731_);
v___f_733_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__25), 10, 9);
lean_closure_set(v___f_733_, 0, v___x_719_);
lean_closure_set(v___f_733_, 1, v_i_732_);
lean_closure_set(v___f_733_, 2, v_a_720_);
lean_closure_set(v___f_733_, 3, v_b_721_);
lean_closure_set(v___f_733_, 4, v___x_728_);
lean_closure_set(v___f_733_, 5, v_a__raw_722_);
lean_closure_set(v___f_733_, 6, v_b__raw_723_);
lean_closure_set(v___f_733_, 7, v_n_718_);
lean_closure_set(v___f_733_, 8, v___x_724_);
v___x_734_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_725_, v___f_733_);
return v___x_734_;
}
else
{
lean_object* v___x_735_; 
lean_dec_ref(v___x_724_);
lean_dec(v_b__raw_723_);
lean_dec(v_a__raw_722_);
lean_dec(v_b_721_);
lean_dec(v_a_720_);
lean_dec(v___x_719_);
lean_dec(v_n_718_);
v___x_735_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_725_, v___f_726_);
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__27(lean_object* v___x_736_, lean_object* v_a_737_, lean_object* v_b_738_, lean_object* v_a__raw_739_, lean_object* v_b__raw_740_, lean_object* v___x_741_, lean_object* v___f_742_, lean_object* v_x_743_){
_start:
{
lean_object* v___y_745_; uint8_t v___x_750_; 
v___x_750_ = lean_nat_dec_le(v_a_737_, v_b_738_);
if (v___x_750_ == 0)
{
lean_inc(v_a_737_);
v___y_745_ = v_a_737_;
goto v___jp_744_;
}
else
{
lean_inc(v_b_738_);
v___y_745_ = v_b_738_;
goto v___jp_744_;
}
v___jp_744_:
{
lean_object* v_n_746_; lean_object* v___x_747_; lean_object* v___f_748_; lean_object* v___x_749_; 
v_n_746_ = lp_mathlib_Nat_size(v___y_745_);
lean_dec(v___y_745_);
lean_inc(v_n_746_);
v___x_747_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v_n_746_);
lean_inc_ref(v___x_747_);
v___f_748_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__26), 10, 9);
lean_closure_set(v___f_748_, 0, v_n_746_);
lean_closure_set(v___f_748_, 1, v___x_736_);
lean_closure_set(v___f_748_, 2, v_a_737_);
lean_closure_set(v___f_748_, 3, v_b_738_);
lean_closure_set(v___f_748_, 4, v_a__raw_739_);
lean_closure_set(v___f_748_, 5, v_b__raw_740_);
lean_closure_set(v___f_748_, 6, v___x_747_);
lean_closure_set(v___f_748_, 7, v___x_741_);
lean_closure_set(v___f_748_, 8, v___f_742_);
v___x_749_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_747_, v___f_748_);
return v___x_749_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__28(lean_object* v_b__raw_751_, lean_object* v___x_752_, lean_object* v_a_753_, lean_object* v_a__raw_754_, lean_object* v___x_755_, lean_object* v___f_756_, lean_object* v_x_757_){
_start:
{
lean_object* v_b_758_; lean_object* v___f_759_; lean_object* v___x_760_; 
v_b_758_ = lean_nat_abs(v_b__raw_751_);
lean_inc_ref(v___x_755_);
v___f_759_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__27), 8, 7);
lean_closure_set(v___f_759_, 0, v___x_752_);
lean_closure_set(v___f_759_, 1, v_a_753_);
lean_closure_set(v___f_759_, 2, v_b_758_);
lean_closure_set(v___f_759_, 3, v_a__raw_754_);
lean_closure_set(v___f_759_, 4, v_b__raw_751_);
lean_closure_set(v___f_759_, 5, v___x_755_);
lean_closure_set(v___f_759_, 6, v___f_756_);
v___x_760_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_755_, v___f_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(lean_object* v_a__raw_761_, lean_object* v_b__raw_762_){
_start:
{
lean_object* v___f_763_; lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___f_767_; lean_object* v___x_768_; 
lean_inc(v_b__raw_762_);
lean_inc(v_a__raw_761_);
v___f_763_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_763_, 0, v_a__raw_761_);
lean_closure_set(v___f_763_, 1, v_b__raw_762_);
v_a_764_ = lean_nat_abs(v_a__raw_761_);
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_obj_once(&lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0, &lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0_once, _init_lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___closed__0);
v___f_767_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__28), 7, 6);
lean_closure_set(v___f_767_, 0, v_b__raw_762_);
lean_closure_set(v___f_767_, 1, v___x_765_);
lean_closure_set(v___f_767_, 2, v_a_764_);
lean_closure_set(v___f_767_, 3, v_a__raw_761_);
lean_closure_set(v___f_767_, 4, v___x_766_);
lean_closure_set(v___f_767_, 5, v___f_763_);
v___x_768_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_766_, v___f_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__8(lean_object* v___x_769_, lean_object* v_w0_770_, lean_object* v___x_771_, lean_object* v_w1_772_, lean_object* v_a__raw_773_, lean_object* v_b__raw_774_, lean_object* v_i_775_, lean_object* v___x_776_, lean_object* v___x_777_, lean_object* v_n_778_, lean_object* v___x_779_, lean_object* v_w__neg__1_780_, lean_object* v_a2_781_, lean_object* v_b2_782_, lean_object* v_w2_783_){
_start:
{
lean_object* v___f_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___f_784_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__7___boxed), 14, 13);
lean_closure_set(v___f_784_, 0, v___x_769_);
lean_closure_set(v___f_784_, 1, v_w0_770_);
lean_closure_set(v___f_784_, 2, v___x_771_);
lean_closure_set(v___f_784_, 3, v_w1_772_);
lean_closure_set(v___f_784_, 4, v_a__raw_773_);
lean_closure_set(v___f_784_, 5, v_b__raw_774_);
lean_closure_set(v___f_784_, 6, v_i_775_);
lean_closure_set(v___f_784_, 7, v___x_776_);
lean_closure_set(v___f_784_, 8, v___x_777_);
lean_closure_set(v___f_784_, 9, v_n_778_);
lean_closure_set(v___f_784_, 10, v___x_779_);
lean_closure_set(v___f_784_, 11, v_w__neg__1_780_);
lean_closure_set(v___f_784_, 12, v_w2_783_);
v___x_785_ = lean_nat_to_int(v_a2_781_);
v___x_786_ = lean_nat_to_int(v_b2_782_);
v___x_787_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(v___x_785_, v___x_786_);
v___x_788_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_787_, v___f_784_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9(lean_object* v_a1_789_, lean_object* v___x_790_, lean_object* v___x_791_, lean_object* v_a2_792_, lean_object* v___x_793_, lean_object* v_b1_794_, lean_object* v___x_795_, lean_object* v_b2_796_, lean_object* v___f_797_, lean_object* v_x_798_){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_799_ = lean_nat_shiftl(v_a1_789_, v___x_790_);
v___x_800_ = lean_nat_to_int(v___x_799_);
v___x_801_ = lean_int_add(v___x_791_, v___x_800_);
lean_dec(v___x_800_);
v___x_802_ = lean_nat_shiftl(v_a2_792_, v___x_793_);
v___x_803_ = lean_nat_to_int(v___x_802_);
v___x_804_ = lean_int_add(v___x_801_, v___x_803_);
lean_dec(v___x_803_);
lean_dec(v___x_801_);
v___x_805_ = lean_nat_shiftl(v_b1_794_, v___x_790_);
v___x_806_ = lean_nat_to_int(v___x_805_);
v___x_807_ = lean_int_add(v___x_795_, v___x_806_);
lean_dec(v___x_806_);
v___x_808_ = lean_nat_shiftl(v_b2_796_, v___x_793_);
v___x_809_ = lean_nat_to_int(v___x_808_);
v___x_810_ = lean_int_add(v___x_807_, v___x_809_);
lean_dec(v___x_809_);
lean_dec(v___x_807_);
v___x_811_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(v___x_804_, v___x_810_);
v___x_812_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_811_, v___f_797_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9___boxed(lean_object* v_a1_813_, lean_object* v___x_814_, lean_object* v___x_815_, lean_object* v_a2_816_, lean_object* v___x_817_, lean_object* v_b1_818_, lean_object* v___x_819_, lean_object* v_b2_820_, lean_object* v___f_821_, lean_object* v_x_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9(v_a1_813_, v___x_814_, v___x_815_, v_a2_816_, v___x_817_, v_b1_818_, v___x_819_, v_b2_820_, v___f_821_, v_x_822_);
lean_dec(v_b2_820_);
lean_dec(v___x_819_);
lean_dec(v_b1_818_);
lean_dec(v___x_817_);
lean_dec(v_a2_816_);
lean_dec(v___x_815_);
lean_dec(v___x_814_);
lean_dec(v_a1_813_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10(lean_object* v___x_824_, lean_object* v_w0_825_, lean_object* v___x_826_, lean_object* v_w1_827_, lean_object* v_a__raw_828_, lean_object* v_b__raw_829_, lean_object* v_i_830_, lean_object* v___x_831_, lean_object* v___x_832_, lean_object* v_n_833_, lean_object* v___x_834_, lean_object* v_a2_835_, lean_object* v_b2_836_, lean_object* v_a1_837_, lean_object* v___x_838_, lean_object* v_b1_839_, lean_object* v___x_840_, lean_object* v_w__neg__1_841_){
_start:
{
lean_object* v___f_842_; lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
lean_inc(v_b2_836_);
lean_inc(v_a2_835_);
lean_inc(v___x_832_);
lean_inc(v_i_830_);
lean_inc(v___x_826_);
v___f_842_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__8), 15, 14);
lean_closure_set(v___f_842_, 0, v___x_824_);
lean_closure_set(v___f_842_, 1, v_w0_825_);
lean_closure_set(v___f_842_, 2, v___x_826_);
lean_closure_set(v___f_842_, 3, v_w1_827_);
lean_closure_set(v___f_842_, 4, v_a__raw_828_);
lean_closure_set(v___f_842_, 5, v_b__raw_829_);
lean_closure_set(v___f_842_, 6, v_i_830_);
lean_closure_set(v___f_842_, 7, v___x_831_);
lean_closure_set(v___f_842_, 8, v___x_832_);
lean_closure_set(v___f_842_, 9, v_n_833_);
lean_closure_set(v___f_842_, 10, v___x_834_);
lean_closure_set(v___f_842_, 11, v_w__neg__1_841_);
lean_closure_set(v___f_842_, 12, v_a2_835_);
lean_closure_set(v___f_842_, 13, v_b2_836_);
v___f_843_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__9___boxed), 10, 9);
lean_closure_set(v___f_843_, 0, v_a1_837_);
lean_closure_set(v___f_843_, 1, v___x_826_);
lean_closure_set(v___f_843_, 2, v___x_838_);
lean_closure_set(v___f_843_, 3, v_a2_835_);
lean_closure_set(v___f_843_, 4, v___x_832_);
lean_closure_set(v___f_843_, 5, v_b1_839_);
lean_closure_set(v___f_843_, 6, v___x_840_);
lean_closure_set(v___f_843_, 7, v_b2_836_);
lean_closure_set(v___f_843_, 8, v___f_842_);
v___x_844_ = lean_unsigned_to_nat(4u);
v___x_845_ = lean_nat_mul(v___x_844_, v_i_830_);
lean_dec(v_i_830_);
v___x_846_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v___x_845_);
v___x_847_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_846_, v___f_843_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10___boxed(lean_object** _args){
lean_object* v___x_848_ = _args[0];
lean_object* v_w0_849_ = _args[1];
lean_object* v___x_850_ = _args[2];
lean_object* v_w1_851_ = _args[3];
lean_object* v_a__raw_852_ = _args[4];
lean_object* v_b__raw_853_ = _args[5];
lean_object* v_i_854_ = _args[6];
lean_object* v___x_855_ = _args[7];
lean_object* v___x_856_ = _args[8];
lean_object* v_n_857_ = _args[9];
lean_object* v___x_858_ = _args[10];
lean_object* v_a2_859_ = _args[11];
lean_object* v_b2_860_ = _args[12];
lean_object* v_a1_861_ = _args[13];
lean_object* v___x_862_ = _args[14];
lean_object* v_b1_863_ = _args[15];
lean_object* v___x_864_ = _args[16];
lean_object* v_w__neg__1_865_ = _args[17];
_start:
{
lean_object* v_res_866_; 
v_res_866_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10(v___x_848_, v_w0_849_, v___x_850_, v_w1_851_, v_a__raw_852_, v_b__raw_853_, v_i_854_, v___x_855_, v___x_856_, v_n_857_, v___x_858_, v_a2_859_, v_b2_860_, v_a1_861_, v___x_862_, v_b1_863_, v___x_864_, v_w__neg__1_865_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__11(lean_object* v___x_867_, lean_object* v_w0_868_, lean_object* v___x_869_, lean_object* v_a__raw_870_, lean_object* v_b__raw_871_, lean_object* v_i_872_, lean_object* v___x_873_, lean_object* v___x_874_, lean_object* v_n_875_, lean_object* v___x_876_, lean_object* v_a2_877_, lean_object* v_b2_878_, lean_object* v_a1_879_, lean_object* v___x_880_, lean_object* v_b1_881_, lean_object* v___x_882_, lean_object* v_a__sub_883_, lean_object* v_b__sub_884_, lean_object* v_w1_885_){
_start:
{
lean_object* v___f_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___f_886_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3___lam__10___boxed), 18, 17);
lean_closure_set(v___f_886_, 0, v___x_867_);
lean_closure_set(v___f_886_, 1, v_w0_868_);
lean_closure_set(v___f_886_, 2, v___x_869_);
lean_closure_set(v___f_886_, 3, v_w1_885_);
lean_closure_set(v___f_886_, 4, v_a__raw_870_);
lean_closure_set(v___f_886_, 5, v_b__raw_871_);
lean_closure_set(v___f_886_, 6, v_i_872_);
lean_closure_set(v___f_886_, 7, v___x_873_);
lean_closure_set(v___f_886_, 8, v___x_874_);
lean_closure_set(v___f_886_, 9, v_n_875_);
lean_closure_set(v___f_886_, 10, v___x_876_);
lean_closure_set(v___f_886_, 11, v_a2_877_);
lean_closure_set(v___f_886_, 12, v_b2_878_);
lean_closure_set(v___f_886_, 13, v_a1_879_);
lean_closure_set(v___f_886_, 14, v___x_880_);
lean_closure_set(v___f_886_, 15, v_b1_881_);
lean_closure_set(v___f_886_, 16, v___x_882_);
v___x_887_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3(v_a__sub_883_, v_b__sub_884_);
v___x_888_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_bind___at___00Cslib_Algorithms_Lean_TimeM_Toom3_ToomCook3_spec__1___redArg(v___x_887_, v___f_886_);
return v___x_888_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
lean_object* initialize_cslib_Cslib_Algorithms_Lean_TimeM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_toom3__bigO__draft(uint8_t builtin) {
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
res = initialize_cslib_Cslib_Algorithms_Lean_TimeM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
