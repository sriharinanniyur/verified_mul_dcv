// Lean compiler output
// Module: fast_verified_mul.power
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
lean_object* lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
uint8_t lp_mathlib_Nat_instDecidablePredEven(lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_nat__exp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_nat__exp___closed__0;
static lean_once_cell_t lp_fast__verified__mul_nat__exp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_nat__exp___closed__1;
LEAN_EXPORT lean_object* lp_fast__verified__mul_nat__exp(lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_int__exp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_int__exp___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_int__exp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_int__exp___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_fast__verified__mul_nat__exp___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_fast__verified__mul_nat__exp___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(1u);
v___x_4_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_nat__exp(lean_object* v_x_5_, lean_object* v_n_6_){
_start:
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_nat_dec_eq(v_n_6_, v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_9_ = lean_obj_once(&lp_fast__verified__mul_nat__exp___closed__0, &lp_fast__verified__mul_nat__exp___closed__0_once, _init_lp_fast__verified__mul_nat__exp___closed__0);
v___x_10_ = l_instDecidableEqRat_decEq(v_x_5_, v___x_9_);
if (v___x_10_ == 0)
{
uint8_t v___x_11_; 
v___x_11_ = lp_mathlib_Nat_instDecidablePredEven(v_n_6_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
lean_inc_ref(v_x_5_);
v___x_12_ = l_Rat_mul(v_x_5_, v_x_5_);
v___x_13_ = lean_unsigned_to_nat(1u);
v___x_14_ = lean_nat_sub(v_n_6_, v___x_13_);
lean_dec(v_n_6_);
v___x_15_ = lean_nat_shiftr(v___x_14_, v___x_13_);
lean_dec(v___x_14_);
v___x_16_ = lp_fast__verified__mul_nat__exp(v___x_12_, v___x_15_);
v___x_17_ = l_Rat_mul(v_x_5_, v___x_16_);
lean_dec_ref(v_x_5_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
lean_inc_ref(v_x_5_);
v___x_18_ = l_Rat_mul(v_x_5_, v_x_5_);
lean_dec_ref(v_x_5_);
v___x_19_ = lean_unsigned_to_nat(1u);
v___x_20_ = lean_nat_shiftr(v_n_6_, v___x_19_);
lean_dec(v_n_6_);
v_x_5_ = v___x_18_;
v_n_6_ = v___x_20_;
goto _start;
}
}
else
{
lean_dec(v_n_6_);
lean_dec_ref(v_x_5_);
return v___x_9_;
}
}
else
{
lean_object* v___x_22_; 
lean_dec(v_n_6_);
lean_dec_ref(v_x_5_);
v___x_22_ = lean_obj_once(&lp_fast__verified__mul_nat__exp___closed__1, &lp_fast__verified__mul_nat__exp___closed__1_once, _init_lp_fast__verified__mul_nat__exp___closed__1);
return v___x_22_;
}
}
}
static lean_object* _init_lp_fast__verified__mul_int__exp___closed__0(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_unsigned_to_nat(0u);
v___x_24_ = lean_nat_to_int(v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_int__exp(lean_object* v_x_25_, lean_object* v_n_26_){
_start:
{
lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_27_ = lean_obj_once(&lp_fast__verified__mul_int__exp___closed__0, &lp_fast__verified__mul_int__exp___closed__0_once, _init_lp_fast__verified__mul_int__exp___closed__0);
v___x_28_ = lean_int_dec_eq(v_n_26_, v___x_27_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_obj_once(&lp_fast__verified__mul_nat__exp___closed__0, &lp_fast__verified__mul_nat__exp___closed__0_once, _init_lp_fast__verified__mul_nat__exp___closed__0);
v___x_30_ = l_instDecidableEqRat_decEq(v_x_25_, v___x_29_);
if (v___x_30_ == 0)
{
uint8_t v___x_31_; 
v___x_31_ = lean_int_dec_lt(v_n_26_, v___x_27_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_nat_abs(v_n_26_);
v___x_33_ = lp_fast__verified__mul_nat__exp(v_x_25_, v___x_32_);
return v___x_33_;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = lean_obj_once(&lp_fast__verified__mul_nat__exp___closed__1, &lp_fast__verified__mul_nat__exp___closed__1_once, _init_lp_fast__verified__mul_nat__exp___closed__1);
v___x_35_ = l_Rat_div(v___x_34_, v_x_25_);
v___x_36_ = lean_nat_abs(v_n_26_);
v___x_37_ = lp_fast__verified__mul_nat__exp(v___x_35_, v___x_36_);
return v___x_37_;
}
}
else
{
lean_dec_ref(v_x_25_);
return v___x_29_;
}
}
else
{
lean_object* v___x_38_; 
lean_dec_ref(v_x_25_);
v___x_38_ = lean_obj_once(&lp_fast__verified__mul_nat__exp___closed__1, &lp_fast__verified__mul_nat__exp___closed__1_once, _init_lp_fast__verified__mul_nat__exp___closed__1);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_int__exp___boxed(lean_object* v_x_39_, lean_object* v_n_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_fast__verified__mul_int__exp(v_x_39_, v_n_40_);
lean_dec(v_n_40_);
return v_res_41_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_power(uint8_t builtin) {
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
