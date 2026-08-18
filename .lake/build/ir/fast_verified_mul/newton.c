// Lean compiler output
// Module: fast_verified_mul.newton
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_cast___at___00Nat_cast___at___00Nat_cast___at___00Nat_cast___at___00__private_Mathlib_NumberTheory_ModularForms_EisensteinSeries_E2_Transform_0__EisensteinSeries_00_u03b4_spec__0_spec__0_spec__2_spec__3(lean_object*);
lean_object* lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_4214226450____hygCtx___hyg_8_(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_(lean_object*, lean_object*);
lean_object* lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_M(lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_newton__raphson__division___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_newton__raphson__division(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_M(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_4214226450____hygCtx___hyg_8_), 3, 2);
lean_closure_set(v___f_3_, 0, v_x_1_);
lean_closure_set(v___f_3_, 1, v_x_2_);
return v___f_3_;
}
}
static lean_object* _init_lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(2u);
v___x_5_ = lp_mathlib_Nat_cast___at___00Nat_cast___at___00Nat_cast___at___00Nat_cast___at___00__private_Mathlib_NumberTheory_ModularForms_EisensteinSeries_E2_Transform_0__EisensteinSeries_00_u03b4_spec__0_spec__0_spec__2_spec__3(v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg(lean_object* v_D_6_, lean_object* v_range_7_, lean_object* v_b_8_, lean_object* v_i_9_){
_start:
{
lean_object* v_stop_10_; lean_object* v_step_11_; uint8_t v___x_12_; 
v_stop_10_ = lean_ctor_get(v_range_7_, 1);
v_step_11_ = lean_ctor_get(v_range_7_, 2);
v___x_12_ = lean_nat_dec_lt(v_i_9_, v_stop_10_);
if (v___x_12_ == 0)
{
lean_dec(v_i_9_);
lean_dec(v_D_6_);
return v_b_8_;
}
else
{
lean_object* v___x_13_; lean_object* v___f_14_; lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___f_17_; lean_object* v___x_18_; 
v___x_13_ = lean_obj_once(&lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0, &lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0_once, _init_lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___closed__0);
lean_inc(v_b_8_);
lean_inc(v_D_6_);
v___f_14_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_4214226450____hygCtx___hyg_8_), 3, 2);
lean_closure_set(v___f_14_, 0, v_D_6_);
lean_closure_set(v___f_14_, 1, v_b_8_);
v___f_15_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_2451848184____hygCtx___hyg_8_), 2, 1);
lean_closure_set(v___f_15_, 0, v___f_14_);
v___f_16_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_1138242547____hygCtx___hyg_8_), 3, 2);
lean_closure_set(v___f_16_, 0, v___x_13_);
lean_closure_set(v___f_16_, 1, v___f_15_);
v___f_17_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_4214226450____hygCtx___hyg_8_), 3, 2);
lean_closure_set(v___f_17_, 0, v_b_8_);
lean_closure_set(v___f_17_, 1, v___f_16_);
v___x_18_ = lean_nat_add(v_i_9_, v_step_11_);
lean_dec(v_i_9_);
v_b_8_ = v___f_17_;
v_i_9_ = v___x_18_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg___boxed(lean_object* v_D_20_, lean_object* v_range_21_, lean_object* v_b_22_, lean_object* v_i_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg(v_D_20_, v_range_21_, v_b_22_, v_i_23_);
lean_dec_ref(v_range_21_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_newton__raphson__division___redArg(lean_object* v_N_25_, lean_object* v_D_26_, lean_object* v_R0_27_, lean_object* v_n_28_){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___f_33_; 
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_31_, 0, v___x_29_);
lean_ctor_set(v___x_31_, 1, v_n_28_);
lean_ctor_set(v___x_31_, 2, v___x_30_);
v___x_32_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg(v_D_26_, v___x_31_, v_R0_27_, v___x_29_);
lean_dec_ref(v___x_31_);
v___f_33_ = lean_alloc_closure((void*)(lp_mathlib_Real_definition___lam__0_00___x40_Mathlib_Data_Real_Basic_4214226450____hygCtx___hyg_8_), 3, 2);
lean_closure_set(v___f_33_, 0, v_N_25_);
lean_closure_set(v___f_33_, 1, v___x_32_);
return v___f_33_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_newton__raphson__division(lean_object* v_N_34_, lean_object* v_D_35_, lean_object* v_R0_36_, lean_object* v___hD_37_, lean_object* v___hR0_38_, lean_object* v_n_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lp_fast__verified__mul_newton__raphson__division___redArg(v_N_34_, v_D_35_, v_R0_36_, v_n_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0(lean_object* v_D_41_, lean_object* v_range_42_, lean_object* v_b_43_, lean_object* v_i_44_, lean_object* v_hs_45_, lean_object* v_hl_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___redArg(v_D_41_, v_range_42_, v_b_43_, v_i_44_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0___boxed(lean_object* v_D_48_, lean_object* v_range_49_, lean_object* v_b_50_, lean_object* v_i_51_, lean_object* v_hs_52_, lean_object* v_hl_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_fast__verified__mul___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00newton__raphson__division_spec__0(v_D_48_, v_range_49_, v_b_50_, v_i_51_, v_hs_52_, v_hl_53_);
lean_dec_ref(v_range_49_);
return v_res_54_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_newton(uint8_t builtin) {
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
