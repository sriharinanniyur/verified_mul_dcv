// Lean compiler output
// Module: fast_verified_mul.fft_time_draft
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
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_Semifield_toDivisionSemiring___redArg(lean_object*);
lean_object* lp_mathlib_Field_toEuclideanDomain___redArg(lean_object*);
lean_object* lp_mathlib_CommRing_toNonUnitalCommRing___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(lean_object*);
lean_object* lp_mathlib_Field_toDivisionRing___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_mathlib_AddGroupWithOne_toAddGroup___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_ZMod_val(lean_object*, lean_object*);
extern lean_object* lp_mathlib_Nat_instAddCancelCommMonoid;
lean_object* lp_mathlib_AddMonoid_toAddZeroClass___redArg(lean_object*);
lean_object* lp_cslib_Cslib_Algorithms_Lean_TimeM_instMonadOfAddZero___redArg(lean_object*);
extern lean_object* lp_mathlib_Nat_instMulZeroClass;
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* lp_mathlib_Finset_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0;
static lean_once_cell_t lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__2 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__0 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__0_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__1 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__1_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__2 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__2_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__3 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__3_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__4 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__4_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__5 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__5_value;
static const lean_closure_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__6 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__6_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__0_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__1_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__7 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__7_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__7_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__2_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__3_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__4_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__5_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__8 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__8_value;
static const lean_ctor_object lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__8_value),((lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__6_value)}};
static const lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__9 = (const lean_object*)&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__9_value;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__0(lean_object* v_toZero_1_, lean_object* v_r_2_){
_start:
{
lean_object* v_fst_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_10_; 
v_fst_3_ = lean_ctor_get(v_r_2_, 0);
v_isSharedCheck_10_ = !lean_is_exclusive(v_r_2_);
if (v_isSharedCheck_10_ == 0)
{
lean_object* v_unused_11_; 
v_unused_11_ = lean_ctor_get(v_r_2_, 1);
lean_dec(v_unused_11_);
v___x_5_ = v_r_2_;
v_isShared_6_ = v_isSharedCheck_10_;
goto v_resetjp_4_;
}
else
{
lean_inc(v_fst_3_);
lean_dec(v_r_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_10_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
lean_object* v___x_8_; 
if (v_isShared_6_ == 0)
{
lean_ctor_set(v___x_5_, 1, v_toZero_1_);
v___x_8_ = v___x_5_;
goto v_reusejp_7_;
}
else
{
lean_object* v_reuseFailAlloc_9_; 
v_reuseFailAlloc_9_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_9_, 0, v_fst_3_);
lean_ctor_set(v_reuseFailAlloc_9_, 1, v_toZero_1_);
v___x_8_ = v_reuseFailAlloc_9_;
goto v_reusejp_7_;
}
v_reusejp_7_:
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__1(lean_object* v_T_12_, lean_object* v_a_13_, lean_object* v_toZero_14_, lean_object* v_x_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v_T_12_);
lean_ctor_set(v___x_16_, 1, v_a_13_);
v___x_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v_toZero_14_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2(lean_object* v_fst_19_, lean_object* v_j_20_, lean_object* v_snd_21_, lean_object* v_toMul_22_, lean_object* v_OMEGA_23_, lean_object* v_toZero_24_, lean_object* v___x_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_T_27_; lean_object* v_a_28_; lean_object* v___f_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
lean_inc(v_snd_21_);
v_T_27_ = lean_array_fset(v_fst_19_, v_j_20_, v_snd_21_);
v_a_28_ = lean_apply_2(v_toMul_22_, v_snd_21_, v_OMEGA_23_);
lean_inc(v_toZero_24_);
v___f_29_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__1), 4, 3);
lean_closure_set(v___f_29_, 0, v_T_27_);
lean_closure_set(v___f_29_, 1, v_a_28_);
lean_closure_set(v___f_29_, 2, v_toZero_24_);
v___x_30_ = lean_box(0);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v_toZero_24_);
v___x_32_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_25_, v___x_31_, v___f_29_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2___boxed(lean_object* v_fst_33_, lean_object* v_j_34_, lean_object* v_snd_35_, lean_object* v_toMul_36_, lean_object* v_OMEGA_37_, lean_object* v_toZero_38_, lean_object* v___x_39_, lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2(v_fst_33_, v_j_34_, v_snd_35_, v_toMul_36_, v_OMEGA_37_, v_toZero_38_, v___x_39_, v_x_40_);
lean_dec(v_j_34_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__3(lean_object* v_toMul_42_, lean_object* v_OMEGA_43_, lean_object* v_toZero_44_, lean_object* v___x_45_, lean_object* v___x_46_, lean_object* v_j_47_, lean_object* v_h_48_, lean_object* v_r_49_){
_start:
{
lean_object* v_fst_50_; lean_object* v_snd_51_; lean_object* v___f_52_; lean_object* v___x_53_; 
v_fst_50_ = lean_ctor_get(v_r_49_, 0);
lean_inc(v_fst_50_);
v_snd_51_ = lean_ctor_get(v_r_49_, 1);
lean_inc(v_snd_51_);
lean_dec_ref(v_r_49_);
lean_inc_ref(v___x_45_);
v___f_52_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_52_, 0, v_fst_50_);
lean_closure_set(v___f_52_, 1, v_j_47_);
lean_closure_set(v___f_52_, 2, v_snd_51_);
lean_closure_set(v___f_52_, 3, v_toMul_42_);
lean_closure_set(v___f_52_, 4, v_OMEGA_43_);
lean_closure_set(v___f_52_, 5, v_toZero_44_);
lean_closure_set(v___f_52_, 6, v___x_45_);
v___x_53_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_45_, v___x_46_, v___f_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__4(lean_object* v_K_54_, lean_object* v___x_55_, lean_object* v_T_56_, lean_object* v_toOne_57_, lean_object* v___x_58_, lean_object* v___f_59_, lean_object* v___x_60_, lean_object* v___f_61_, lean_object* v_x_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v_K_54_);
lean_ctor_set(v___x_64_, 2, v___x_55_);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v_T_56_);
lean_ctor_set(v___x_65_, 1, v_toOne_57_);
v___x_66_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(v___x_58_, v___x_64_, v___f_59_, v___x_65_, v___x_63_);
v___x_67_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_60_, v___x_66_, v___f_61_);
return v___x_67_;
}
}
static lean_object* _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5(lean_object* v_K_70_, lean_object* v_toOne_71_, lean_object* v_toMul_72_, lean_object* v_OMEGA_73_, lean_object* v_toZero_74_, lean_object* v___x_75_, lean_object* v___x_76_, lean_object* v___f_77_, lean_object* v_x_78_){
_start:
{
lean_object* v_T_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; 
lean_inc(v_toOne_71_);
lean_inc(v_K_70_);
v_T_79_ = lean_mk_array(v_K_70_, v_toOne_71_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_obj_once(&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0, &lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0_once, _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0);
lean_inc_ref_n(v___x_75_, 2);
v___f_82_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__3), 8, 5);
lean_closure_set(v___f_82_, 0, v_toMul_72_);
lean_closure_set(v___f_82_, 1, v_OMEGA_73_);
lean_closure_set(v___f_82_, 2, v_toZero_74_);
lean_closure_set(v___f_82_, 3, v___x_75_);
lean_closure_set(v___f_82_, 4, v___x_81_);
v___f_83_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__4), 9, 8);
lean_closure_set(v___f_83_, 0, v_K_70_);
lean_closure_set(v___f_83_, 1, v___x_80_);
lean_closure_set(v___f_83_, 2, v_T_79_);
lean_closure_set(v___f_83_, 3, v_toOne_71_);
lean_closure_set(v___f_83_, 4, v___x_76_);
lean_closure_set(v___f_83_, 5, v___f_82_);
lean_closure_set(v___f_83_, 6, v___x_75_);
lean_closure_set(v___f_83_, 7, v___f_77_);
v___x_84_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_75_, v___x_81_, v___f_83_);
return v___x_84_;
}
}
static lean_object* _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lp_mathlib_Nat_instAddCancelCommMonoid;
v___x_86_ = lp_mathlib_AddMonoid_toAddZeroClass___redArg(v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0, &lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0_once, _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__0);
v___x_88_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_instMonadOfAddZero___redArg(v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg(lean_object* v_inst_90_, lean_object* v_K_91_, lean_object* v_OMEGA_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_toZero_95_; lean_object* v___x_96_; lean_object* v_toRing_97_; lean_object* v___x_98_; lean_object* v_toAddMonoidWithOne_99_; lean_object* v_toOne_100_; lean_object* v___x_101_; lean_object* v_toCommRing_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v_toMul_106_; lean_object* v___x_107_; lean_object* v___f_108_; lean_object* v___x_109_; lean_object* v___f_110_; lean_object* v___x_111_; 
v___x_93_ = lean_obj_once(&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1, &lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1_once, _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1);
v___x_94_ = lp_mathlib_Nat_instMulZeroClass;
v_toZero_95_ = lean_ctor_get(v___x_94_, 1);
lean_inc_ref(v_inst_90_);
v___x_96_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_90_);
v_toRing_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc_ref(v_toRing_97_);
lean_dec_ref(v___x_96_);
v___x_98_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_97_);
v_toAddMonoidWithOne_99_ = lean_ctor_get(v___x_98_, 1);
lean_inc_ref(v_toAddMonoidWithOne_99_);
lean_dec_ref(v___x_98_);
v_toOne_100_ = lean_ctor_get(v_toAddMonoidWithOne_99_, 2);
lean_inc(v_toOne_100_);
lean_dec_ref(v_toAddMonoidWithOne_99_);
v___x_101_ = lp_mathlib_Field_toEuclideanDomain___redArg(v_inst_90_);
v_toCommRing_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc_ref(v_toCommRing_102_);
lean_dec_ref(v___x_101_);
v___x_103_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_toCommRing_102_);
v___x_104_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_103_);
v___x_105_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_104_);
v_toMul_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_toMul_106_);
lean_dec_ref(v___x_105_);
v___x_107_ = ((lean_object*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__2));
lean_inc_n(v_toZero_95_, 2);
v___f_108_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__0), 2, 1);
lean_closure_set(v___f_108_, 0, v_toZero_95_);
lean_inc(v_K_91_);
v___x_109_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v_K_91_);
v___f_110_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5), 9, 8);
lean_closure_set(v___f_110_, 0, v_K_91_);
lean_closure_set(v___f_110_, 1, v_toOne_100_);
lean_closure_set(v___f_110_, 2, v_toMul_106_);
lean_closure_set(v___f_110_, 3, v_OMEGA_92_);
lean_closure_set(v___f_110_, 4, v_toZero_95_);
lean_closure_set(v___f_110_, 5, v___x_107_);
lean_closure_set(v___f_110_, 6, v___x_93_);
lean_closure_set(v___f_110_, 7, v___f_108_);
v___x_111_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_107_, v___x_109_, v___f_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table(lean_object* v_F_112_, lean_object* v_inst_113_, lean_object* v_K_114_, lean_object* v_OMEGA_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg(v_inst_113_, v_K_114_, v_OMEGA_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0(lean_object* v_toSemiring_117_, lean_object* v_x_118_, lean_object* v_i_119_, lean_object* v_OMEGA_120_, lean_object* v_toMul_121_, lean_object* v_j_122_){
_start:
{
lean_object* v_npow_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_npow_123_ = lean_ctor_get(v_toSemiring_117_, 3);
lean_inc(v_npow_123_);
lean_dec_ref(v_toSemiring_117_);
v___x_124_ = lean_array_fget_borrowed(v_x_118_, v_j_122_);
v___x_125_ = lean_nat_mul(v_j_122_, v_i_119_);
v___x_126_ = lean_apply_2(v_npow_123_, v___x_125_, v_OMEGA_120_);
lean_inc(v___x_124_);
v___x_127_ = lean_apply_2(v_toMul_121_, v___x_124_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0___boxed(lean_object* v_toSemiring_128_, lean_object* v_x_129_, lean_object* v_i_130_, lean_object* v_OMEGA_131_, lean_object* v_toMul_132_, lean_object* v_j_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0(v_toSemiring_128_, v_x_129_, v_i_130_, v_OMEGA_131_, v_toMul_132_, v_j_133_);
lean_dec(v_j_133_);
lean_dec(v_i_130_);
lean_dec_ref(v_x_129_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1(lean_object* v_toSemiring_135_, lean_object* v_x_136_, lean_object* v_OMEGA_137_, lean_object* v_toMul_138_, lean_object* v___x_139_, lean_object* v_toAddCommMonoid_140_, lean_object* v_i_141_){
_start:
{
lean_object* v___f_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___f_142_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_142_, 0, v_toSemiring_135_);
lean_closure_set(v___f_142_, 1, v_x_136_);
lean_closure_set(v___f_142_, 2, v_i_141_);
lean_closure_set(v___f_142_, 3, v_OMEGA_137_);
lean_closure_set(v___f_142_, 4, v_toMul_138_);
v___x_143_ = l_List_finRange(v___x_139_);
v___x_144_ = lp_mathlib_Finset_sum___redArg(v_toAddCommMonoid_140_, v___x_143_, v___f_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1___boxed(lean_object* v_toSemiring_145_, lean_object* v_x_146_, lean_object* v_OMEGA_147_, lean_object* v_toMul_148_, lean_object* v___x_149_, lean_object* v_toAddCommMonoid_150_, lean_object* v_i_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1(v_toSemiring_145_, v_x_146_, v_OMEGA_147_, v_toMul_148_, v___x_149_, v_toAddCommMonoid_150_, v_i_151_);
lean_dec_ref(v_toAddCommMonoid_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg(lean_object* v_inst_153_, lean_object* v_k_154_, lean_object* v_x_155_, lean_object* v_OMEGA_156_){
_start:
{
lean_object* v___x_157_; lean_object* v_toCommRing_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v_toAddCommMonoid_161_; lean_object* v___x_162_; lean_object* v_toMul_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_toSemiring_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___f_169_; lean_object* v___x_170_; 
lean_inc_ref(v_inst_153_);
v___x_157_ = lp_mathlib_Field_toEuclideanDomain___redArg(v_inst_153_);
v_toCommRing_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc_ref(v_toCommRing_158_);
lean_dec_ref(v___x_157_);
v___x_159_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_toCommRing_158_);
v___x_160_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_159_);
v_toAddCommMonoid_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc_ref(v_toAddCommMonoid_161_);
v___x_162_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_160_);
v_toMul_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_toMul_163_);
lean_dec_ref(v___x_162_);
v___x_164_ = lp_mathlib_Field_toSemifield___redArg(v_inst_153_);
lean_dec_ref(v_inst_153_);
v___x_165_ = lp_mathlib_Semifield_toDivisionSemiring___redArg(v___x_164_);
v_toSemiring_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc_ref(v_toSemiring_166_);
lean_dec_ref(v___x_165_);
v___x_167_ = lean_unsigned_to_nat(2u);
v___x_168_ = lean_nat_pow(v___x_167_, v_k_154_);
lean_inc(v___x_168_);
v___f_169_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_169_, 0, v_toSemiring_166_);
lean_closure_set(v___f_169_, 1, v_x_155_);
lean_closure_set(v___f_169_, 2, v_OMEGA_156_);
lean_closure_set(v___f_169_, 3, v_toMul_163_);
lean_closure_set(v___f_169_, 4, v___x_168_);
lean_closure_set(v___f_169_, 5, v_toAddCommMonoid_161_);
v___x_170_ = l_Array_ofFn___redArg(v___x_168_, v___f_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg___boxed(lean_object* v_inst_171_, lean_object* v_k_172_, lean_object* v_x_173_, lean_object* v_OMEGA_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg(v_inst_171_, v_k_172_, v_x_173_, v_OMEGA_174_);
lean_dec(v_k_172_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft(lean_object* v_F_176_, lean_object* v_inst_177_, lean_object* v_k_178_, lean_object* v_x_179_, lean_object* v_OMEGA_180_, lean_object* v___h__OMEGA_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___redArg(v_inst_177_, v_k_178_, v_x_179_, v_OMEGA_180_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft___boxed(lean_object* v_F_183_, lean_object* v_inst_184_, lean_object* v_k_185_, lean_object* v_x_186_, lean_object* v_OMEGA_187_, lean_object* v___h__OMEGA_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_dft(v_F_183_, v_inst_184_, v_k_185_, v_x_186_, v_OMEGA_187_, v___h__OMEGA_188_);
lean_dec(v_k_185_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__0(lean_object* v_toZero_190_, lean_object* v_r_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_r_191_);
lean_ctor_set(v___x_192_, 1, v_toZero_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1(lean_object* v___x_193_, lean_object* v_x_194_, lean_object* v_j_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_nat_mul(v___x_193_, v_j_195_);
v___x_197_ = lean_array_fget_borrowed(v_x_194_, v___x_196_);
lean_dec(v___x_196_);
lean_inc(v___x_197_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1___boxed(lean_object* v___x_198_, lean_object* v_x_199_, lean_object* v_j_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1(v___x_198_, v_x_199_, v_j_200_);
lean_dec(v_j_200_);
lean_dec_ref(v_x_199_);
lean_dec(v___x_198_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2(lean_object* v___x_202_, lean_object* v___x_203_, lean_object* v_x_204_, lean_object* v_j_205_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_206_ = lean_nat_mul(v___x_202_, v_j_205_);
v___x_207_ = lean_nat_add(v___x_206_, v___x_203_);
lean_dec(v___x_206_);
v___x_208_ = lean_array_fget_borrowed(v_x_204_, v___x_207_);
lean_dec(v___x_207_);
lean_inc(v___x_208_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2___boxed(lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v_x_211_, lean_object* v_j_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2(v___x_209_, v___x_210_, v_x_211_, v_j_212_);
lean_dec(v_j_212_);
lean_dec_ref(v_x_211_);
lean_dec(v___x_210_);
lean_dec(v___x_209_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__3(lean_object* v_result_214_, lean_object* v_toZero_215_, lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v_result_214_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v_toZero_215_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4(lean_object* v_X_219_, lean_object* v_i_220_, lean_object* v_T_221_, lean_object* v_Y_222_, lean_object* v_toMul_223_, lean_object* v_toAdd_224_, lean_object* v_r_225_, lean_object* v_K__pred_226_, lean_object* v_toSub_227_, lean_object* v_toZero_228_, lean_object* v___x_229_, lean_object* v_x_230_){
_start:
{
lean_object* v_p_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v_q_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v_result_239_; lean_object* v___f_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_p_231_ = lean_array_fget_borrowed(v_X_219_, v_i_220_);
v___x_232_ = lean_array_fget_borrowed(v_T_221_, v_i_220_);
v___x_233_ = lean_array_fget_borrowed(v_Y_222_, v_i_220_);
lean_inc(v___x_233_);
lean_inc(v___x_232_);
v_q_234_ = lean_apply_2(v_toMul_223_, v___x_232_, v___x_233_);
lean_inc(v_q_234_);
lean_inc_n(v_p_231_, 2);
v___x_235_ = lean_apply_2(v_toAdd_224_, v_p_231_, v_q_234_);
v___x_236_ = lean_array_fset(v_r_225_, v_i_220_, v___x_235_);
v___x_237_ = lean_nat_add(v_i_220_, v_K__pred_226_);
v___x_238_ = lean_apply_2(v_toSub_227_, v_p_231_, v_q_234_);
v_result_239_ = lean_array_fset(v___x_236_, v___x_237_, v___x_238_);
lean_dec(v___x_237_);
lean_inc(v_toZero_228_);
v___f_240_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__3), 3, 2);
lean_closure_set(v___f_240_, 0, v_result_239_);
lean_closure_set(v___f_240_, 1, v_toZero_228_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v_toZero_228_);
v___x_243_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_229_, v___x_242_, v___f_240_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4___boxed(lean_object* v_X_244_, lean_object* v_i_245_, lean_object* v_T_246_, lean_object* v_Y_247_, lean_object* v_toMul_248_, lean_object* v_toAdd_249_, lean_object* v_r_250_, lean_object* v_K__pred_251_, lean_object* v_toSub_252_, lean_object* v_toZero_253_, lean_object* v___x_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4(v_X_244_, v_i_245_, v_T_246_, v_Y_247_, v_toMul_248_, v_toAdd_249_, v_r_250_, v_K__pred_251_, v_toSub_252_, v_toZero_253_, v___x_254_, v_x_255_);
lean_dec(v_K__pred_251_);
lean_dec_ref(v_Y_247_);
lean_dec_ref(v_T_246_);
lean_dec(v_i_245_);
lean_dec_ref(v_X_244_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__5(lean_object* v_X_257_, lean_object* v_T_258_, lean_object* v_Y_259_, lean_object* v_toMul_260_, lean_object* v_toAdd_261_, lean_object* v_K__pred_262_, lean_object* v_toSub_263_, lean_object* v_toZero_264_, lean_object* v___x_265_, lean_object* v___x_266_, lean_object* v_i_267_, lean_object* v_h_268_, lean_object* v_r_269_){
_start:
{
lean_object* v___f_270_; lean_object* v___x_271_; 
lean_inc_ref(v___x_265_);
v___f_270_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_270_, 0, v_X_257_);
lean_closure_set(v___f_270_, 1, v_i_267_);
lean_closure_set(v___f_270_, 2, v_T_258_);
lean_closure_set(v___f_270_, 3, v_Y_259_);
lean_closure_set(v___f_270_, 4, v_toMul_260_);
lean_closure_set(v___f_270_, 5, v_toAdd_261_);
lean_closure_set(v___f_270_, 6, v_r_269_);
lean_closure_set(v___f_270_, 7, v_K__pred_262_);
lean_closure_set(v___f_270_, 8, v_toSub_263_);
lean_closure_set(v___f_270_, 9, v_toZero_264_);
lean_closure_set(v___f_270_, 10, v___x_265_);
v___x_271_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_265_, v___x_266_, v___f_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__6(lean_object* v_K_272_, lean_object* v_toZero_273_, lean_object* v_K__pred_274_, lean_object* v___x_275_, lean_object* v___x_276_, lean_object* v___f_277_, lean_object* v___x_278_, lean_object* v___f_279_, lean_object* v_x_280_){
_start:
{
lean_object* v_result_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_result_281_ = lean_mk_array(v_K_272_, v_toZero_273_);
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_K__pred_274_);
lean_ctor_set(v___x_283_, 2, v___x_275_);
v___x_284_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(v___x_276_, v___x_283_, v___f_277_, v_result_281_, v___x_282_);
v___x_285_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_278_, v___x_284_, v___f_279_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__7(lean_object* v_X_286_, lean_object* v_Y_287_, lean_object* v_toMul_288_, lean_object* v_toAdd_289_, lean_object* v_K__pred_290_, lean_object* v_toSub_291_, lean_object* v_toZero_292_, lean_object* v___x_293_, lean_object* v___x_294_, lean_object* v_K_295_, lean_object* v_toZero_296_, lean_object* v___x_297_, lean_object* v___x_298_, lean_object* v___f_299_, lean_object* v___x_300_, lean_object* v_T_301_){
_start:
{
lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___x_304_; 
lean_inc_ref_n(v___x_293_, 2);
lean_inc(v_K__pred_290_);
v___f_302_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__5), 13, 10);
lean_closure_set(v___f_302_, 0, v_X_286_);
lean_closure_set(v___f_302_, 1, v_T_301_);
lean_closure_set(v___f_302_, 2, v_Y_287_);
lean_closure_set(v___f_302_, 3, v_toMul_288_);
lean_closure_set(v___f_302_, 4, v_toAdd_289_);
lean_closure_set(v___f_302_, 5, v_K__pred_290_);
lean_closure_set(v___f_302_, 6, v_toSub_291_);
lean_closure_set(v___f_302_, 7, v_toZero_292_);
lean_closure_set(v___f_302_, 8, v___x_293_);
lean_closure_set(v___f_302_, 9, v___x_294_);
v___f_303_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__6), 9, 8);
lean_closure_set(v___f_303_, 0, v_K_295_);
lean_closure_set(v___f_303_, 1, v_toZero_296_);
lean_closure_set(v___f_303_, 2, v_K__pred_290_);
lean_closure_set(v___f_303_, 3, v___x_297_);
lean_closure_set(v___f_303_, 4, v___x_298_);
lean_closure_set(v___f_303_, 5, v___f_302_);
lean_closure_set(v___f_303_, 6, v___x_293_);
lean_closure_set(v___f_303_, 7, v___f_299_);
v___x_304_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_293_, v___x_300_, v___f_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8(lean_object* v_X_305_, lean_object* v_toMul_306_, lean_object* v_toAdd_307_, lean_object* v_K__pred_308_, lean_object* v_toSub_309_, lean_object* v_toZero_310_, lean_object* v___x_311_, lean_object* v___x_312_, lean_object* v_K_313_, lean_object* v_toZero_314_, lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v___f_317_, lean_object* v___x_318_, lean_object* v_inst_319_, lean_object* v_OMEGA_320_, lean_object* v_Y_321_){
_start:
{
lean_object* v___f_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_inc_ref(v___x_311_);
lean_inc(v_K__pred_308_);
v___f_322_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__7), 16, 15);
lean_closure_set(v___f_322_, 0, v_X_305_);
lean_closure_set(v___f_322_, 1, v_Y_321_);
lean_closure_set(v___f_322_, 2, v_toMul_306_);
lean_closure_set(v___f_322_, 3, v_toAdd_307_);
lean_closure_set(v___f_322_, 4, v_K__pred_308_);
lean_closure_set(v___f_322_, 5, v_toSub_309_);
lean_closure_set(v___f_322_, 6, v_toZero_310_);
lean_closure_set(v___f_322_, 7, v___x_311_);
lean_closure_set(v___f_322_, 8, v___x_312_);
lean_closure_set(v___f_322_, 9, v_K_313_);
lean_closure_set(v___f_322_, 10, v_toZero_314_);
lean_closure_set(v___f_322_, 11, v___x_315_);
lean_closure_set(v___f_322_, 12, v___x_316_);
lean_closure_set(v___f_322_, 13, v___f_317_);
lean_closure_set(v___f_322_, 14, v___x_318_);
v___x_323_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg(v_inst_319_, v_K__pred_308_, v_OMEGA_320_);
v___x_324_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_311_, v___x_323_, v___f_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_X_325_ = _args[0];
lean_object* v_toMul_326_ = _args[1];
lean_object* v_toAdd_327_ = _args[2];
lean_object* v_K__pred_328_ = _args[3];
lean_object* v_toSub_329_ = _args[4];
lean_object* v_toZero_330_ = _args[5];
lean_object* v___x_331_ = _args[6];
lean_object* v___x_332_ = _args[7];
lean_object* v_K_333_ = _args[8];
lean_object* v_toZero_334_ = _args[9];
lean_object* v___x_335_ = _args[10];
lean_object* v___x_336_ = _args[11];
lean_object* v___f_337_ = _args[12];
lean_object* v___x_338_ = _args[13];
lean_object* v_inst_339_ = _args[14];
lean_object* v_OMEGA_340_ = _args[15];
lean_object* v_Y_341_ = _args[16];
_start:
{
lean_object* v_res_342_; 
v_res_342_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8(v_X_325_, v_toMul_326_, v_toAdd_327_, v_K__pred_328_, v_toSub_329_, v_toZero_330_, v___x_331_, v___x_332_, v_K_333_, v_toZero_334_, v___x_335_, v___x_336_, v___f_337_, v___x_338_, v_inst_339_, v_OMEGA_340_, v_Y_341_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9(lean_object* v_toMul_343_, lean_object* v_toAdd_344_, lean_object* v_K__pred_345_, lean_object* v_toSub_346_, lean_object* v_toZero_347_, lean_object* v___x_348_, lean_object* v___x_349_, lean_object* v_K_350_, lean_object* v_toZero_351_, lean_object* v___x_352_, lean_object* v___x_353_, lean_object* v___f_354_, lean_object* v___x_355_, lean_object* v_inst_356_, lean_object* v_OMEGA_357_, lean_object* v_n_358_, lean_object* v_O_359_, lean_object* v_OMEGA__sq_360_, lean_object* v_X_361_){
_start:
{
lean_object* v___f_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
lean_inc_ref(v_inst_356_);
lean_inc_ref(v___x_348_);
v___f_362_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__8___boxed), 17, 16);
lean_closure_set(v___f_362_, 0, v_X_361_);
lean_closure_set(v___f_362_, 1, v_toMul_343_);
lean_closure_set(v___f_362_, 2, v_toAdd_344_);
lean_closure_set(v___f_362_, 3, v_K__pred_345_);
lean_closure_set(v___f_362_, 4, v_toSub_346_);
lean_closure_set(v___f_362_, 5, v_toZero_347_);
lean_closure_set(v___f_362_, 6, v___x_348_);
lean_closure_set(v___f_362_, 7, v___x_349_);
lean_closure_set(v___f_362_, 8, v_K_350_);
lean_closure_set(v___f_362_, 9, v_toZero_351_);
lean_closure_set(v___f_362_, 10, v___x_352_);
lean_closure_set(v___f_362_, 11, v___x_353_);
lean_closure_set(v___f_362_, 12, v___f_354_);
lean_closure_set(v___f_362_, 13, v___x_355_);
lean_closure_set(v___f_362_, 14, v_inst_356_);
lean_closure_set(v___f_362_, 15, v_OMEGA_357_);
v___x_363_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(v_inst_356_, v_n_358_, v_O_359_, v_OMEGA__sq_360_);
v___x_364_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_348_, v___x_363_, v___f_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_toMul_365_ = _args[0];
lean_object* v_toAdd_366_ = _args[1];
lean_object* v_K__pred_367_ = _args[2];
lean_object* v_toSub_368_ = _args[3];
lean_object* v_toZero_369_ = _args[4];
lean_object* v___x_370_ = _args[5];
lean_object* v___x_371_ = _args[6];
lean_object* v_K_372_ = _args[7];
lean_object* v_toZero_373_ = _args[8];
lean_object* v___x_374_ = _args[9];
lean_object* v___x_375_ = _args[10];
lean_object* v___f_376_ = _args[11];
lean_object* v___x_377_ = _args[12];
lean_object* v_inst_378_ = _args[13];
lean_object* v_OMEGA_379_ = _args[14];
lean_object* v_n_380_ = _args[15];
lean_object* v_O_381_ = _args[16];
lean_object* v_OMEGA__sq_382_ = _args[17];
lean_object* v_X_383_ = _args[18];
_start:
{
lean_object* v_res_384_; 
v_res_384_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9(v_toMul_365_, v_toAdd_366_, v_K__pred_367_, v_toSub_368_, v_toZero_369_, v___x_370_, v___x_371_, v_K_372_, v_toZero_373_, v___x_374_, v___x_375_, v___f_376_, v___x_377_, v_inst_378_, v_OMEGA_379_, v_n_380_, v_O_381_, v_OMEGA__sq_382_, v_X_383_);
lean_dec(v_n_380_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10___boxed(lean_object* v_inst_385_, lean_object* v_n_386_, lean_object* v_E_387_, lean_object* v_OMEGA__sq_388_, lean_object* v___x_389_, lean_object* v___f_390_, lean_object* v_x_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10(v_inst_385_, v_n_386_, v_E_387_, v_OMEGA__sq_388_, v___x_389_, v___f_390_, v_x_391_);
lean_dec(v_n_386_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11(lean_object* v_K__pred_393_, lean_object* v___f_394_, lean_object* v___f_395_, lean_object* v_toMul_396_, lean_object* v_toAdd_397_, lean_object* v_toSub_398_, lean_object* v_toZero_399_, lean_object* v___x_400_, lean_object* v___x_401_, lean_object* v_K_402_, lean_object* v_toZero_403_, lean_object* v___x_404_, lean_object* v___x_405_, lean_object* v___f_406_, lean_object* v___x_407_, lean_object* v_inst_408_, lean_object* v_OMEGA_409_, lean_object* v_n_410_, lean_object* v_OMEGA__sq_411_, lean_object* v_x_412_){
_start:
{
lean_object* v_E_413_; lean_object* v_O_414_; lean_object* v___f_415_; lean_object* v___f_416_; lean_object* v___x_417_; 
lean_inc_n(v_K__pred_393_, 2);
v_E_413_ = l_Array_ofFn___redArg(v_K__pred_393_, v___f_394_);
v_O_414_ = l_Array_ofFn___redArg(v_K__pred_393_, v___f_395_);
lean_inc(v_OMEGA__sq_411_);
lean_inc(v_n_410_);
lean_inc_ref(v_inst_408_);
lean_inc_ref(v___x_401_);
lean_inc_ref_n(v___x_400_, 2);
v___f_415_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__9___boxed), 19, 18);
lean_closure_set(v___f_415_, 0, v_toMul_396_);
lean_closure_set(v___f_415_, 1, v_toAdd_397_);
lean_closure_set(v___f_415_, 2, v_K__pred_393_);
lean_closure_set(v___f_415_, 3, v_toSub_398_);
lean_closure_set(v___f_415_, 4, v_toZero_399_);
lean_closure_set(v___f_415_, 5, v___x_400_);
lean_closure_set(v___f_415_, 6, v___x_401_);
lean_closure_set(v___f_415_, 7, v_K_402_);
lean_closure_set(v___f_415_, 8, v_toZero_403_);
lean_closure_set(v___f_415_, 9, v___x_404_);
lean_closure_set(v___f_415_, 10, v___x_405_);
lean_closure_set(v___f_415_, 11, v___f_406_);
lean_closure_set(v___f_415_, 12, v___x_407_);
lean_closure_set(v___f_415_, 13, v_inst_408_);
lean_closure_set(v___f_415_, 14, v_OMEGA_409_);
lean_closure_set(v___f_415_, 15, v_n_410_);
lean_closure_set(v___f_415_, 16, v_O_414_);
lean_closure_set(v___f_415_, 17, v_OMEGA__sq_411_);
v___f_416_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10___boxed), 7, 6);
lean_closure_set(v___f_416_, 0, v_inst_408_);
lean_closure_set(v___f_416_, 1, v_n_410_);
lean_closure_set(v___f_416_, 2, v_E_413_);
lean_closure_set(v___f_416_, 3, v_OMEGA__sq_411_);
lean_closure_set(v___f_416_, 4, v___x_400_);
lean_closure_set(v___f_416_, 5, v___f_415_);
v___x_417_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_400_, v___x_401_, v___f_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_K__pred_418_ = _args[0];
lean_object* v___f_419_ = _args[1];
lean_object* v___f_420_ = _args[2];
lean_object* v_toMul_421_ = _args[3];
lean_object* v_toAdd_422_ = _args[4];
lean_object* v_toSub_423_ = _args[5];
lean_object* v_toZero_424_ = _args[6];
lean_object* v___x_425_ = _args[7];
lean_object* v___x_426_ = _args[8];
lean_object* v_K_427_ = _args[9];
lean_object* v_toZero_428_ = _args[10];
lean_object* v___x_429_ = _args[11];
lean_object* v___x_430_ = _args[12];
lean_object* v___f_431_ = _args[13];
lean_object* v___x_432_ = _args[14];
lean_object* v_inst_433_ = _args[15];
lean_object* v_OMEGA_434_ = _args[16];
lean_object* v_n_435_ = _args[17];
lean_object* v_OMEGA__sq_436_ = _args[18];
lean_object* v_x_437_ = _args[19];
_start:
{
lean_object* v_res_438_; 
v_res_438_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11(v_K__pred_418_, v___f_419_, v___f_420_, v_toMul_421_, v_toAdd_422_, v_toSub_423_, v_toZero_424_, v___x_425_, v___x_426_, v_K_427_, v_toZero_428_, v___x_429_, v___x_430_, v___f_431_, v___x_432_, v_inst_433_, v_OMEGA_434_, v_n_435_, v_OMEGA__sq_436_, v_x_437_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__12(lean_object* v_toSemiring_439_, lean_object* v_x_440_, lean_object* v___x_441_, lean_object* v_n_442_, lean_object* v_OMEGA_443_, lean_object* v_toMul_444_, lean_object* v_toAdd_445_, lean_object* v_toSub_446_, lean_object* v_toZero_447_, lean_object* v___x_448_, lean_object* v___x_449_, lean_object* v_toZero_450_, lean_object* v___x_451_, lean_object* v___f_452_, lean_object* v_inst_453_, lean_object* v_x_454_){
_start:
{
lean_object* v_npow_455_; lean_object* v___x_456_; lean_object* v___f_457_; lean_object* v___f_458_; lean_object* v_K__pred_459_; lean_object* v___x_460_; lean_object* v_K_461_; lean_object* v_OMEGA__sq_462_; lean_object* v___x_463_; lean_object* v___f_464_; lean_object* v___x_465_; 
v_npow_455_ = lean_ctor_get(v_toSemiring_439_, 3);
lean_inc(v_npow_455_);
lean_dec_ref(v_toSemiring_439_);
v___x_456_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v_x_440_);
v___f_457_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_457_, 0, v___x_456_);
lean_closure_set(v___f_457_, 1, v_x_440_);
lean_inc(v___x_441_);
v___f_458_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_458_, 0, v___x_456_);
lean_closure_set(v___f_458_, 1, v___x_441_);
lean_closure_set(v___f_458_, 2, v_x_440_);
v_K__pred_459_ = lean_nat_pow(v___x_456_, v_n_442_);
v___x_460_ = lean_nat_add(v_n_442_, v___x_441_);
v_K_461_ = lean_nat_pow(v___x_456_, v___x_460_);
lean_dec(v___x_460_);
lean_inc(v_OMEGA_443_);
v_OMEGA__sq_462_ = lean_apply_2(v_npow_455_, v___x_456_, v_OMEGA_443_);
lean_inc(v_K_461_);
v___x_463_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_tick___redArg(v_K_461_);
lean_inc_ref(v___x_463_);
lean_inc_ref(v___x_448_);
v___f_464_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__11___boxed), 20, 19);
lean_closure_set(v___f_464_, 0, v_K__pred_459_);
lean_closure_set(v___f_464_, 1, v___f_457_);
lean_closure_set(v___f_464_, 2, v___f_458_);
lean_closure_set(v___f_464_, 3, v_toMul_444_);
lean_closure_set(v___f_464_, 4, v_toAdd_445_);
lean_closure_set(v___f_464_, 5, v_toSub_446_);
lean_closure_set(v___f_464_, 6, v_toZero_447_);
lean_closure_set(v___f_464_, 7, v___x_448_);
lean_closure_set(v___f_464_, 8, v___x_449_);
lean_closure_set(v___f_464_, 9, v_K_461_);
lean_closure_set(v___f_464_, 10, v_toZero_450_);
lean_closure_set(v___f_464_, 11, v___x_441_);
lean_closure_set(v___f_464_, 12, v___x_451_);
lean_closure_set(v___f_464_, 13, v___f_452_);
lean_closure_set(v___f_464_, 14, v___x_463_);
lean_closure_set(v___f_464_, 15, v_inst_453_);
lean_closure_set(v___f_464_, 16, v_OMEGA_443_);
lean_closure_set(v___f_464_, 17, v_n_442_);
lean_closure_set(v___f_464_, 18, v_OMEGA__sq_462_);
v___x_465_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_448_, v___x_463_, v___f_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(lean_object* v_inst_466_, lean_object* v_k_467_, lean_object* v_x_468_, lean_object* v_OMEGA_469_){
_start:
{
lean_object* v___x_470_; lean_object* v_toZero_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v_toSemiring_475_; lean_object* v___x_476_; lean_object* v_toCommRing_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v_toZero_481_; lean_object* v___x_482_; lean_object* v_toMul_483_; lean_object* v_toAdd_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_505_; 
v___x_470_ = lp_mathlib_Nat_instMulZeroClass;
v_toZero_471_ = lean_ctor_get(v___x_470_, 1);
v___x_472_ = lean_obj_once(&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1, &lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1_once, _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__1);
v___x_473_ = lp_mathlib_Field_toSemifield___redArg(v_inst_466_);
v___x_474_ = lp_mathlib_Semifield_toDivisionSemiring___redArg(v___x_473_);
v_toSemiring_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc_ref(v_toSemiring_475_);
lean_dec_ref(v___x_474_);
lean_inc_ref(v_inst_466_);
v___x_476_ = lp_mathlib_Field_toEuclideanDomain___redArg(v_inst_466_);
v_toCommRing_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc_ref(v_toCommRing_477_);
lean_dec_ref(v___x_476_);
v___x_478_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_toCommRing_477_);
v___x_479_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_478_);
lean_inc_ref(v___x_479_);
v___x_480_ = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(v___x_479_);
v_toZero_481_ = lean_ctor_get(v___x_480_, 1);
lean_inc(v_toZero_481_);
lean_dec_ref(v___x_480_);
v___x_482_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_479_);
v_toMul_483_ = lean_ctor_get(v___x_482_, 0);
v_toAdd_484_ = lean_ctor_get(v___x_482_, 1);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_505_ == 0)
{
v___x_486_ = v___x_482_;
v_isShared_487_ = v_isSharedCheck_505_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_toAdd_484_);
lean_inc(v_toMul_483_);
lean_dec(v___x_482_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_505_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v_toRing_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_toSub_492_; lean_object* v_zero_493_; uint8_t v_isZero_494_; 
lean_inc_ref(v_inst_466_);
v___x_488_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_466_);
v_toRing_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc_ref(v_toRing_489_);
lean_dec_ref(v___x_488_);
v___x_490_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_489_);
v___x_491_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_490_);
lean_dec_ref(v___x_490_);
v_toSub_492_ = lean_ctor_get(v___x_491_, 2);
lean_inc(v_toSub_492_);
lean_dec_ref(v___x_491_);
v_zero_493_ = lean_unsigned_to_nat(0u);
v_isZero_494_ = lean_nat_dec_eq(v_k_467_, v_zero_493_);
if (v_isZero_494_ == 1)
{
lean_object* v___x_496_; 
lean_dec(v_toSub_492_);
lean_dec(v_toAdd_484_);
lean_dec(v_toMul_483_);
lean_dec(v_toZero_481_);
lean_dec_ref(v_toSemiring_475_);
lean_dec(v_OMEGA_469_);
lean_dec_ref(v_inst_466_);
lean_inc(v_toZero_471_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 1, v_toZero_471_);
lean_ctor_set(v___x_486_, 0, v_x_468_);
v___x_496_ = v___x_486_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_x_468_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_toZero_471_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
else
{
lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v_one_500_; lean_object* v_n_501_; lean_object* v___x_502_; lean_object* v___f_503_; lean_object* v___x_504_; 
lean_del_object(v___x_486_);
lean_inc_n(v_toZero_471_, 2);
v___f_498_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__0), 2, 1);
lean_closure_set(v___f_498_, 0, v_toZero_471_);
v___x_499_ = ((lean_object*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___closed__2));
v_one_500_ = lean_unsigned_to_nat(1u);
v_n_501_ = lean_nat_sub(v_k_467_, v_one_500_);
v___x_502_ = lean_obj_once(&lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0, &lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0_once, _init_lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_t__table___redArg___lam__5___closed__0);
v___f_503_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__12), 16, 15);
lean_closure_set(v___f_503_, 0, v_toSemiring_475_);
lean_closure_set(v___f_503_, 1, v_x_468_);
lean_closure_set(v___f_503_, 2, v_one_500_);
lean_closure_set(v___f_503_, 3, v_n_501_);
lean_closure_set(v___f_503_, 4, v_OMEGA_469_);
lean_closure_set(v___f_503_, 5, v_toMul_483_);
lean_closure_set(v___f_503_, 6, v_toAdd_484_);
lean_closure_set(v___f_503_, 7, v_toSub_492_);
lean_closure_set(v___f_503_, 8, v_toZero_471_);
lean_closure_set(v___f_503_, 9, v___x_499_);
lean_closure_set(v___f_503_, 10, v___x_502_);
lean_closure_set(v___f_503_, 11, v_toZero_481_);
lean_closure_set(v___f_503_, 12, v___x_472_);
lean_closure_set(v___f_503_, 13, v___f_498_);
lean_closure_set(v___f_503_, 14, v_inst_466_);
v___x_504_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_499_, v___x_502_, v___f_503_);
return v___x_504_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__10(lean_object* v_inst_506_, lean_object* v_n_507_, lean_object* v_E_508_, lean_object* v_OMEGA__sq_509_, lean_object* v___x_510_, lean_object* v___f_511_, lean_object* v_x_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(v_inst_506_, v_n_507_, v_E_508_, v_OMEGA__sq_509_);
v___x_514_ = lp_cslib_Cslib_Algorithms_Lean_TimeM_bind___redArg(v___x_510_, v___x_513_, v___f_511_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___boxed(lean_object* v_inst_515_, lean_object* v_k_516_, lean_object* v_x_517_, lean_object* v_OMEGA_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(v_inst_515_, v_k_516_, v_x_517_, v_OMEGA_518_);
lean_dec(v_k_516_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft(lean_object* v_F_520_, lean_object* v_inst_521_, lean_object* v_k_522_, lean_object* v_x_523_, lean_object* v_OMEGA_524_, lean_object* v_h__OMEGA_525_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg(v_inst_521_, v_k_522_, v_x_523_, v_OMEGA_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___boxed(lean_object* v_F_527_, lean_object* v_inst_528_, lean_object* v_k_529_, lean_object* v_x_530_, lean_object* v_OMEGA_531_, lean_object* v_h__OMEGA_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft(v_F_527_, v_inst_528_, v_k_529_, v_x_530_, v_OMEGA_531_, v_h__OMEGA_532_);
lean_dec(v_k_529_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1(lean_object* v___x_534_, lean_object* v_x_535_, lean_object* v_j_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_537_ = lean_unsigned_to_nat(1u);
v___x_538_ = lean_nat_mul(v___x_534_, v_j_536_);
v___x_539_ = lean_nat_add(v___x_538_, v___x_537_);
lean_dec(v___x_538_);
v___x_540_ = lean_array_fget_borrowed(v_x_535_, v___x_539_);
lean_dec(v___x_539_);
lean_inc(v___x_540_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1___boxed(lean_object* v___x_541_, lean_object* v_x_542_, lean_object* v_j_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1(v___x_541_, v_x_542_, v_j_543_);
lean_dec(v_j_543_);
lean_dec_ref(v_x_542_);
lean_dec(v___x_541_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0(lean_object* v_E_x27_545_, lean_object* v_npow_546_, lean_object* v_OMEGA_547_, lean_object* v_O_x27_548_, lean_object* v_toMul_549_, lean_object* v_toAdd_550_, lean_object* v_K__pred_551_, lean_object* v_toSub_552_, lean_object* v_i_553_, lean_object* v_h_554_, lean_object* v_r_555_){
_start:
{
lean_object* v_p_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v_q_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v_result_564_; lean_object* v___x_565_; 
v_p_556_ = lean_array_fget_borrowed(v_E_x27_545_, v_i_553_);
lean_inc(v_i_553_);
v___x_557_ = lean_apply_2(v_npow_546_, v_i_553_, v_OMEGA_547_);
v___x_558_ = lean_array_fget_borrowed(v_O_x27_548_, v_i_553_);
lean_inc(v___x_558_);
v_q_559_ = lean_apply_2(v_toMul_549_, v___x_557_, v___x_558_);
lean_inc(v_q_559_);
lean_inc_n(v_p_556_, 2);
v___x_560_ = lean_apply_2(v_toAdd_550_, v_p_556_, v_q_559_);
v___x_561_ = lean_array_fset(v_r_555_, v_i_553_, v___x_560_);
v___x_562_ = lean_nat_add(v_i_553_, v_K__pred_551_);
lean_dec(v_i_553_);
v___x_563_ = lean_apply_2(v_toSub_552_, v_p_556_, v_q_559_);
v_result_564_ = lean_array_fset(v___x_561_, v___x_562_, v___x_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_result_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0___boxed(lean_object* v_E_x27_566_, lean_object* v_npow_567_, lean_object* v_OMEGA_568_, lean_object* v_O_x27_569_, lean_object* v_toMul_570_, lean_object* v_toAdd_571_, lean_object* v_K__pred_572_, lean_object* v_toSub_573_, lean_object* v_i_574_, lean_object* v_h_575_, lean_object* v_r_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0(v_E_x27_566_, v_npow_567_, v_OMEGA_568_, v_O_x27_569_, v_toMul_570_, v_toAdd_571_, v_K__pred_572_, v_toSub_573_, v_i_574_, v_h_575_, v_r_576_);
lean_dec(v_K__pred_572_);
lean_dec_ref(v_O_x27_569_);
lean_dec_ref(v_E_x27_566_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(lean_object* v_inst_597_, lean_object* v_k_598_, lean_object* v_x_599_, lean_object* v_OMEGA_600_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_toSemiring_604_; lean_object* v___x_605_; lean_object* v_toCommRing_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_644_; 
v___x_601_ = ((lean_object*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___closed__9));
v___x_602_ = lp_mathlib_Field_toSemifield___redArg(v_inst_597_);
v___x_603_ = lp_mathlib_Semifield_toDivisionSemiring___redArg(v___x_602_);
v_toSemiring_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc_ref(v_toSemiring_604_);
lean_dec_ref(v___x_603_);
lean_inc_ref(v_inst_597_);
v___x_605_ = lp_mathlib_Field_toEuclideanDomain___redArg(v_inst_597_);
v_toCommRing_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_644_ == 0)
{
lean_object* v_unused_645_; lean_object* v_unused_646_; 
v_unused_645_ = lean_ctor_get(v___x_605_, 2);
lean_dec(v_unused_645_);
v_unused_646_ = lean_ctor_get(v___x_605_, 1);
lean_dec(v_unused_646_);
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_644_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_toCommRing_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_644_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v_toZero_613_; lean_object* v___x_614_; lean_object* v_toMul_615_; lean_object* v_toAdd_616_; lean_object* v___x_617_; lean_object* v_toRing_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v_toSub_621_; lean_object* v_zero_622_; uint8_t v_isZero_623_; 
v___x_610_ = lp_mathlib_CommRing_toNonUnitalCommRing___redArg(v_toCommRing_606_);
v___x_611_ = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(v___x_610_);
lean_inc_ref(v___x_611_);
v___x_612_ = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(v___x_611_);
v_toZero_613_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_toZero_613_);
lean_dec_ref(v___x_612_);
v___x_614_ = lp_mathlib_NonUnitalNonAssocSemiring_toDistrib___redArg(v___x_611_);
v_toMul_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_toMul_615_);
v_toAdd_616_ = lean_ctor_get(v___x_614_, 1);
lean_inc(v_toAdd_616_);
lean_dec_ref(v___x_614_);
lean_inc_ref(v_inst_597_);
v___x_617_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_597_);
v_toRing_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc_ref(v_toRing_618_);
lean_dec_ref(v___x_617_);
v___x_619_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_618_);
v___x_620_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_619_);
lean_dec_ref(v___x_619_);
v_toSub_621_ = lean_ctor_get(v___x_620_, 2);
lean_inc(v_toSub_621_);
lean_dec_ref(v___x_620_);
v_zero_622_ = lean_unsigned_to_nat(0u);
v_isZero_623_ = lean_nat_dec_eq(v_k_598_, v_zero_622_);
if (v_isZero_623_ == 1)
{
lean_dec(v_toSub_621_);
lean_dec(v_toAdd_616_);
lean_dec(v_toMul_615_);
lean_dec(v_toZero_613_);
lean_del_object(v___x_608_);
lean_dec_ref(v_toSemiring_604_);
lean_dec(v_OMEGA_600_);
lean_dec_ref(v_inst_597_);
return v_x_599_;
}
else
{
lean_object* v_npow_624_; lean_object* v_one_625_; lean_object* v_n_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v_K__pred_629_; lean_object* v_E_630_; lean_object* v___f_631_; lean_object* v_O_632_; lean_object* v___x_633_; lean_object* v_E_x27_634_; lean_object* v_O_x27_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_result_639_; lean_object* v___x_641_; 
v_npow_624_ = lean_ctor_get(v_toSemiring_604_, 3);
lean_inc_n(v_npow_624_, 2);
lean_dec_ref(v_toSemiring_604_);
v_one_625_ = lean_unsigned_to_nat(1u);
v_n_626_ = lean_nat_sub(v_k_598_, v_one_625_);
v___x_627_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v_x_599_);
v___f_628_ = lean_alloc_closure((void*)(lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_628_, 0, v___x_627_);
lean_closure_set(v___f_628_, 1, v_x_599_);
v_K__pred_629_ = lean_nat_pow(v___x_627_, v_n_626_);
lean_inc_n(v_K__pred_629_, 3);
v_E_630_ = l_Array_ofFn___redArg(v_K__pred_629_, v___f_628_);
v___f_631_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_631_, 0, v___x_627_);
lean_closure_set(v___f_631_, 1, v_x_599_);
v_O_632_ = l_Array_ofFn___redArg(v_K__pred_629_, v___f_631_);
lean_inc(v_OMEGA_600_);
v___x_633_ = lean_apply_2(v_npow_624_, v___x_627_, v_OMEGA_600_);
lean_inc(v___x_633_);
lean_inc_ref(v_inst_597_);
v_E_x27_634_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(v_inst_597_, v_n_626_, v_E_630_, v___x_633_);
v_O_x27_635_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(v_inst_597_, v_n_626_, v_O_632_, v___x_633_);
v___f_636_ = lean_alloc_closure((void*)(lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___lam__0___boxed), 11, 8);
lean_closure_set(v___f_636_, 0, v_E_x27_634_);
lean_closure_set(v___f_636_, 1, v_npow_624_);
lean_closure_set(v___f_636_, 2, v_OMEGA_600_);
lean_closure_set(v___f_636_, 3, v_O_x27_635_);
lean_closure_set(v___f_636_, 4, v_toMul_615_);
lean_closure_set(v___f_636_, 5, v_toAdd_616_);
lean_closure_set(v___f_636_, 6, v_K__pred_629_);
lean_closure_set(v___f_636_, 7, v_toSub_621_);
v___x_637_ = lean_nat_add(v_n_626_, v_one_625_);
lean_dec(v_n_626_);
v___x_638_ = lean_nat_pow(v___x_627_, v___x_637_);
lean_dec(v___x_637_);
v_result_639_ = lean_mk_array(v___x_638_, v_toZero_613_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 2, v_one_625_);
lean_ctor_set(v___x_608_, 1, v_K__pred_629_);
lean_ctor_set(v___x_608_, 0, v_zero_622_);
v___x_641_ = v___x_608_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_zero_622_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_K__pred_629_);
lean_ctor_set(v_reuseFailAlloc_643_, 2, v_one_625_);
v___x_641_ = v_reuseFailAlloc_643_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_642_; 
v___x_642_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(v___x_601_, v___x_641_, v___f_636_, v_result_639_, v_zero_622_);
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg___boxed(lean_object* v_inst_647_, lean_object* v_k_648_, lean_object* v_x_649_, lean_object* v_OMEGA_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(v_inst_647_, v_k_648_, v_x_649_, v_OMEGA_650_);
lean_dec(v_k_648_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure(lean_object* v_F_652_, lean_object* v_inst_653_, lean_object* v_k_654_, lean_object* v_x_655_, lean_object* v_OMEGA_656_, lean_object* v_h__OMEGA_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___redArg(v_inst_653_, v_k_654_, v_x_655_, v_OMEGA_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure___boxed(lean_object* v_F_659_, lean_object* v_inst_660_, lean_object* v_k_661_, lean_object* v_x_662_, lean_object* v_OMEGA_663_, lean_object* v_h__OMEGA_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure(v_F_659_, v_inst_660_, v_k_661_, v_x_662_, v_OMEGA_663_, v_h__OMEGA_664_);
lean_dec(v_k_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___redArg(lean_object* v_k_666_, lean_object* v_x_667_, lean_object* v_h__1_668_, lean_object* v_h__2_669_){
_start:
{
lean_object* v_zero_670_; uint8_t v_isZero_671_; 
v_zero_670_ = lean_unsigned_to_nat(0u);
v_isZero_671_ = lean_nat_dec_eq(v_k_666_, v_zero_670_);
if (v_isZero_671_ == 1)
{
lean_object* v___x_672_; 
lean_dec(v_h__2_669_);
v___x_672_ = lean_apply_2(v_h__1_668_, v_x_667_, lean_box(0));
return v___x_672_;
}
else
{
lean_object* v_one_673_; lean_object* v_n_674_; lean_object* v___x_675_; 
lean_dec(v_h__1_668_);
v_one_673_ = lean_unsigned_to_nat(1u);
v_n_674_ = lean_nat_sub(v_k_666_, v_one_673_);
v___x_675_ = lean_apply_3(v_h__2_669_, v_n_674_, v_x_667_, lean_box(0));
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___redArg___boxed(lean_object* v_k_676_, lean_object* v_x_677_, lean_object* v_h__1_678_, lean_object* v_h__2_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___redArg(v_k_676_, v_x_677_, v_h__1_678_, v_h__2_679_);
lean_dec(v_k_676_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter(lean_object* v_F_681_, lean_object* v_inst_682_, lean_object* v_OMEGA_683_, lean_object* v_motive_684_, lean_object* v_k_685_, lean_object* v_x_686_, lean_object* v_h__OMEGA_687_, lean_object* v_h__1_688_, lean_object* v_h__2_689_){
_start:
{
lean_object* v_zero_690_; uint8_t v_isZero_691_; 
v_zero_690_ = lean_unsigned_to_nat(0u);
v_isZero_691_ = lean_nat_dec_eq(v_k_685_, v_zero_690_);
if (v_isZero_691_ == 1)
{
lean_object* v___x_692_; 
lean_dec(v_h__2_689_);
v___x_692_ = lean_apply_2(v_h__1_688_, v_x_686_, lean_box(0));
return v___x_692_;
}
else
{
lean_object* v_one_693_; lean_object* v_n_694_; lean_object* v___x_695_; 
lean_dec(v_h__1_688_);
v_one_693_ = lean_unsigned_to_nat(1u);
v_n_694_ = lean_nat_sub(v_k_685_, v_one_693_);
v___x_695_ = lean_apply_3(v_h__2_689_, v_n_694_, v_x_686_, lean_box(0));
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter___boxed(lean_object* v_F_696_, lean_object* v_inst_697_, lean_object* v_OMEGA_698_, lean_object* v_motive_699_, lean_object* v_k_700_, lean_object* v_x_701_, lean_object* v_h__OMEGA_702_, lean_object* v_h__1_703_, lean_object* v_h__2_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft_match__1_splitter(v_F_696_, v_inst_697_, v_OMEGA_698_, v_motive_699_, v_k_700_, v_x_701_, v_h__OMEGA_702_, v_h__1_703_, v_h__2_704_);
lean_dec(v_k_700_);
lean_dec(v_OMEGA_698_);
lean_dec_ref(v_inst_697_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___redArg(lean_object* v_k_706_, lean_object* v_x_707_, lean_object* v_h__1_708_, lean_object* v_h__2_709_){
_start:
{
lean_object* v_zero_710_; uint8_t v_isZero_711_; 
v_zero_710_ = lean_unsigned_to_nat(0u);
v_isZero_711_ = lean_nat_dec_eq(v_k_706_, v_zero_710_);
if (v_isZero_711_ == 1)
{
lean_object* v___x_712_; 
lean_dec(v_h__2_709_);
v___x_712_ = lean_apply_2(v_h__1_708_, v_x_707_, lean_box(0));
return v___x_712_;
}
else
{
lean_object* v_one_713_; lean_object* v_n_714_; lean_object* v___x_715_; 
lean_dec(v_h__1_708_);
v_one_713_ = lean_unsigned_to_nat(1u);
v_n_714_ = lean_nat_sub(v_k_706_, v_one_713_);
v___x_715_ = lean_apply_3(v_h__2_709_, v_n_714_, v_x_707_, lean_box(0));
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___redArg___boxed(lean_object* v_k_716_, lean_object* v_x_717_, lean_object* v_h__1_718_, lean_object* v_h__2_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___redArg(v_k_716_, v_x_717_, v_h__1_718_, v_h__2_719_);
lean_dec(v_k_716_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter(lean_object* v_F_721_, lean_object* v_inst_722_, lean_object* v_OMEGA_723_, lean_object* v_motive_724_, lean_object* v_k_725_, lean_object* v_x_726_, lean_object* v_h__OMEGA_727_, lean_object* v_h__1_728_, lean_object* v_h__2_729_){
_start:
{
lean_object* v_zero_730_; uint8_t v_isZero_731_; 
v_zero_730_ = lean_unsigned_to_nat(0u);
v_isZero_731_ = lean_nat_dec_eq(v_k_725_, v_zero_730_);
if (v_isZero_731_ == 1)
{
lean_object* v___x_732_; 
lean_dec(v_h__2_729_);
v___x_732_ = lean_apply_2(v_h__1_728_, v_x_726_, lean_box(0));
return v___x_732_;
}
else
{
lean_object* v_one_733_; lean_object* v_n_734_; lean_object* v___x_735_; 
lean_dec(v_h__1_728_);
v_one_733_ = lean_unsigned_to_nat(1u);
v_n_734_ = lean_nat_sub(v_k_725_, v_one_733_);
v___x_735_ = lean_apply_3(v_h__2_729_, v_n_734_, v_x_726_, lean_box(0));
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter___boxed(lean_object* v_F_736_, lean_object* v_inst_737_, lean_object* v_OMEGA_738_, lean_object* v_motive_739_, lean_object* v_k_740_, lean_object* v_x_741_, lean_object* v_h__OMEGA_742_, lean_object* v_h__1_743_, lean_object* v_h__2_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__pure_match__1_splitter(v_F_736_, v_inst_737_, v_OMEGA_738_, v_motive_739_, v_k_740_, v_x_741_, v_h__OMEGA_742_, v_h__1_743_, v_h__2_744_);
lean_dec(v_k_740_);
lean_dec(v_OMEGA_738_);
lean_dec_ref(v_inst_737_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg(lean_object* v_N_746_, lean_object* v_v_747_, lean_object* v_j_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lp_mathlib_ZMod_val(v_N_746_, v_j_748_);
v___x_750_ = lean_array_fget_borrowed(v_v_747_, v___x_749_);
lean_dec(v___x_749_);
lean_inc(v___x_750_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg___boxed(lean_object* v_N_751_, lean_object* v_v_752_, lean_object* v_j_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg(v_N_751_, v_v_752_, v_j_753_);
lean_dec(v_j_753_);
lean_dec_ref(v_v_752_);
lean_dec(v_N_751_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod(lean_object* v_N_755_, lean_object* v_inst_756_, lean_object* v_v_757_, lean_object* v_j_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___redArg(v_N_755_, v_v_757_, v_j_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod___boxed(lean_object* v_N_760_, lean_object* v_inst_761_, lean_object* v_v_762_, lean_object* v_j_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_convert__vector__to__zmod(v_N_760_, v_inst_761_, v_v_762_, v_j_763_);
lean_dec(v_j_763_);
lean_dec_ref(v_v_762_);
lean_dec(v_N_760_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula(lean_object* v_x_765_){
_start:
{
lean_object* v_zero_766_; uint8_t v_isZero_767_; 
v_zero_766_ = lean_unsigned_to_nat(0u);
v_isZero_767_ = lean_nat_dec_eq(v_x_765_, v_zero_766_);
if (v_isZero_767_ == 1)
{
return v_zero_766_;
}
else
{
lean_object* v_one_768_; lean_object* v_n_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_one_768_ = lean_unsigned_to_nat(1u);
v_n_769_ = lean_nat_sub(v_x_765_, v_one_768_);
v___x_770_ = lean_unsigned_to_nat(2u);
v___x_771_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula(v_n_769_);
v___x_772_ = lean_nat_mul(v___x_770_, v___x_771_);
lean_dec(v___x_771_);
v___x_773_ = lean_unsigned_to_nat(7u);
v___x_774_ = lean_nat_pow(v___x_770_, v_n_769_);
lean_dec(v_n_769_);
v___x_775_ = lean_nat_mul(v___x_773_, v___x_774_);
lean_dec(v___x_774_);
v___x_776_ = lean_nat_add(v___x_772_, v___x_775_);
lean_dec(v___x_775_);
lean_dec(v___x_772_);
v___x_777_ = lean_unsigned_to_nat(3u);
v___x_778_ = lean_nat_add(v___x_776_, v___x_777_);
lean_dec(v___x_776_);
return v___x_778_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula___boxed(lean_object* v_x_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = lp_fast__verified__mul_Cslib_Algorithms_Lean_TimeM_fft__time__formula(v_x_779_);
lean_dec(v_x_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___redArg(lean_object* v_x_781_, lean_object* v_h__1_782_, lean_object* v_h__2_783_){
_start:
{
lean_object* v_zero_784_; uint8_t v_isZero_785_; 
v_zero_784_ = lean_unsigned_to_nat(0u);
v_isZero_785_ = lean_nat_dec_eq(v_x_781_, v_zero_784_);
if (v_isZero_785_ == 1)
{
lean_object* v___x_786_; lean_object* v___x_787_; 
lean_dec(v_h__2_783_);
v___x_786_ = lean_box(0);
v___x_787_ = lean_apply_1(v_h__1_782_, v___x_786_);
return v___x_787_;
}
else
{
lean_object* v_one_788_; lean_object* v_n_789_; lean_object* v___x_790_; 
lean_dec(v_h__1_782_);
v_one_788_ = lean_unsigned_to_nat(1u);
v_n_789_ = lean_nat_sub(v_x_781_, v_one_788_);
v___x_790_ = lean_apply_1(v_h__2_783_, v_n_789_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___redArg___boxed(lean_object* v_x_791_, lean_object* v_h__1_792_, lean_object* v_h__2_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___redArg(v_x_791_, v_h__1_792_, v_h__2_793_);
lean_dec(v_x_791_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter(lean_object* v_motive_795_, lean_object* v_x_796_, lean_object* v_h__1_797_, lean_object* v_h__2_798_){
_start:
{
lean_object* v_zero_799_; uint8_t v_isZero_800_; 
v_zero_799_ = lean_unsigned_to_nat(0u);
v_isZero_800_ = lean_nat_dec_eq(v_x_796_, v_zero_799_);
if (v_isZero_800_ == 1)
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v_h__2_798_);
v___x_801_ = lean_box(0);
v___x_802_ = lean_apply_1(v_h__1_797_, v___x_801_);
return v___x_802_;
}
else
{
lean_object* v_one_803_; lean_object* v_n_804_; lean_object* v___x_805_; 
lean_dec(v_h__1_797_);
v_one_803_ = lean_unsigned_to_nat(1u);
v_n_804_ = lean_nat_sub(v_x_796_, v_one_803_);
v___x_805_ = lean_apply_1(v_h__2_798_, v_n_804_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter___boxed(lean_object* v_motive_806_, lean_object* v_x_807_, lean_object* v_h__1_808_, lean_object* v_h__2_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = lp_fast__verified__mul___private_fast__verified__mul_fft__time__draft_0__Cslib_Algorithms_Lean_TimeM_fft__time__formula_match__1_splitter(v_motive_806_, v_x_807_, v_h__1_808_, v_h__2_809_);
lean_dec(v_x_807_);
return v_res_810_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
lean_object* initialize_cslib_Cslib_Algorithms_Lean_TimeM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_fft__time__draft(uint8_t builtin) {
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
