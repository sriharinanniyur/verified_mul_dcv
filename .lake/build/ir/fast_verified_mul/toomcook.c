// Lean compiler output
// Module: fast_verified_mul.toomcook
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
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_mathlib_Multiset_map___redArg(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_List_foldrTR___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_digits(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_sub(lean_object*, lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* l_Rat_pow(lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_sum___at___00bernoulli_x27_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_digits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_digits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__0 = (const lean_object*)&lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__0_value;
static lean_once_cell_t lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__i(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__i___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__B(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__B___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__C(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__C___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P__PRIME__UB(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P__PRIME__UB___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_toomcook__THETA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_toomcook__THETA___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__THETA(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__THETA___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_digits(lean_object* v_b_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_nat_abs(v_x_2_);
v___x_4_ = lp_mathlib_Nat_digits(v_b_1_, v___x_3_);
v___x_5_ = l_List_lengthTR___redArg(v___x_4_);
lean_dec(v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_digits___boxed(lean_object* v_b_6_, lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_fast__verified__mul_digits(v_b_6_, v_x_7_);
lean_dec(v_x_7_);
lean_dec(v_b_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly___lam__0(lean_object* v_split_9_, lean_object* v_x_10_, lean_object* v_i_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_array_fget_borrowed(v_split_9_, v_i_11_);
lean_inc(v___x_12_);
v___x_13_ = lean_nat_to_int(v___x_12_);
v___x_14_ = l_Int_pow(v_x_10_, v_i_11_);
v___x_15_ = lean_int_mul(v___x_13_, v___x_14_);
lean_dec(v___x_14_);
lean_dec(v___x_13_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly___lam__0___boxed(lean_object* v_split_16_, lean_object* v_x_17_, lean_object* v_i_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = lp_fast__verified__mul_eval__vec__as__poly___lam__0(v_split_16_, v_x_17_, v_i_18_);
lean_dec(v_i_18_);
lean_dec(v_x_17_);
lean_dec_ref(v_split_16_);
return v_res_19_;
}
}
static lean_object* _init_lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(0u);
v___x_22_ = lean_nat_to_int(v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0(lean_object* v_s_23_){
_start:
{
lean_object* v___f_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___f_24_ = ((lean_object*)(lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__0));
v___x_25_ = lean_obj_once(&lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1, &lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1_once, _init_lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0___closed__1);
v___x_26_ = l_List_foldrTR___redArg(v___f_24_, v___x_25_, v_s_23_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(lean_object* v_s_27_, lean_object* v_f_28_){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lp_mathlib_Multiset_map___redArg(v_f_28_, v_s_27_);
v___x_30_ = lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00eval__vec__as__poly_spec__0_spec__0(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly(lean_object* v_K_31_, lean_object* v_split_32_, lean_object* v_x_33_){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___f_34_ = lean_alloc_closure((void*)(lp_fast__verified__mul_eval__vec__as__poly___lam__0___boxed), 3, 2);
lean_closure_set(v___f_34_, 0, v_split_32_);
lean_closure_set(v___f_34_, 1, v_x_33_);
v___x_35_ = l_List_finRange(v_K_31_);
v___x_36_ = lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(v___x_35_, v___f_34_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0(lean_object* v_00_u03b9_37_, lean_object* v_s_38_, lean_object* v_f_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(v_s_38_, v_f_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0(lean_object* v_split_41_, lean_object* v_x_42_, lean_object* v_i_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_array_fget_borrowed(v_split_41_, v_i_43_);
v___x_45_ = l_Rat_pow(v_x_42_, v_i_43_);
v___x_46_ = l_Rat_mul(v___x_44_, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0___boxed(lean_object* v_split_47_, lean_object* v_x_48_, lean_object* v_i_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0(v_split_47_, v_x_48_, v_i_49_);
lean_dec(v_i_49_);
lean_dec_ref(v_split_47_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_eval__vec__as__poly__Q(lean_object* v_K_51_, lean_object* v_split_52_, lean_object* v_x_53_){
_start:
{
lean_object* v___f_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___f_54_ = lean_alloc_closure((void*)(lp_fast__verified__mul_eval__vec__as__poly__Q___lam__0___boxed), 3, 2);
lean_closure_set(v___f_54_, 0, v_split_52_);
lean_closure_set(v___f_54_, 1, v_x_53_);
v___x_55_ = l_List_finRange(v_K_51_);
v___x_56_ = lp_mathlib_Finset_sum___at___00bernoulli_x27_spec__1___redArg(v___x_55_, v___f_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P(lean_object* v_BASE_57_, lean_object* v_a_58_, lean_object* v_b_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_60_ = lean_nat_abs(v_a_58_);
v___x_61_ = lean_nat_to_int(v___x_60_);
v___x_62_ = lean_nat_abs(v_b_59_);
v___x_63_ = lean_nat_to_int(v___x_62_);
v___x_64_ = lean_int_dec_le(v___x_61_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
lean_dec(v___x_63_);
v___x_65_ = lp_fast__verified__mul_digits(v_BASE_57_, v___x_61_);
lean_dec(v___x_61_);
return v___x_65_;
}
else
{
lean_object* v___x_66_; 
lean_dec(v___x_61_);
v___x_66_ = lp_fast__verified__mul_digits(v_BASE_57_, v___x_63_);
lean_dec(v___x_63_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P___boxed(lean_object* v_BASE_67_, lean_object* v_a_68_, lean_object* v_b_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lp_fast__verified__mul_toomcook__P(v_BASE_67_, v_a_68_, v_b_69_);
lean_dec(v_b_69_);
lean_dec(v_a_68_);
lean_dec(v_BASE_67_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__i(lean_object* v_KA_71_, lean_object* v_KB_72_, lean_object* v_BASE_73_, lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_76_ = lp_fast__verified__mul_digits(v_BASE_73_, v_a_74_);
v___x_77_ = lean_nat_add(v___x_76_, v_KA_71_);
lean_dec(v___x_76_);
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = lean_nat_sub(v___x_77_, v___x_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_nat_div(v___x_79_, v_KA_71_);
lean_dec(v___x_79_);
v___x_81_ = lp_fast__verified__mul_digits(v_BASE_73_, v_b_75_);
v___x_82_ = lean_nat_add(v___x_81_, v_KB_72_);
lean_dec(v___x_81_);
v___x_83_ = lean_nat_sub(v___x_82_, v___x_78_);
lean_dec(v___x_82_);
v___x_84_ = lean_nat_div(v___x_83_, v_KB_72_);
lean_dec(v___x_83_);
v___x_85_ = lean_nat_dec_le(v___x_80_, v___x_84_);
if (v___x_85_ == 0)
{
lean_dec(v___x_84_);
return v___x_80_;
}
else
{
lean_dec(v___x_80_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__i___boxed(lean_object* v_KA_86_, lean_object* v_KB_87_, lean_object* v_BASE_88_, lean_object* v_a_89_, lean_object* v_b_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = lp_fast__verified__mul_toomcook__i(v_KA_86_, v_KB_87_, v_BASE_88_, v_a_89_, v_b_90_);
lean_dec(v_b_90_);
lean_dec(v_a_89_);
lean_dec(v_BASE_88_);
lean_dec(v_KB_87_);
lean_dec(v_KA_86_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__B(lean_object* v_KA_92_, lean_object* v_KB_93_, lean_object* v_BASE_94_, lean_object* v_a_95_, lean_object* v_b_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lp_fast__verified__mul_toomcook__i(v_KA_92_, v_KB_93_, v_BASE_94_, v_a_95_, v_b_96_);
v___x_98_ = lean_nat_pow(v_BASE_94_, v___x_97_);
lean_dec(v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__B___boxed(lean_object* v_KA_99_, lean_object* v_KB_100_, lean_object* v_BASE_101_, lean_object* v_a_102_, lean_object* v_b_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_fast__verified__mul_toomcook__B(v_KA_99_, v_KB_100_, v_BASE_101_, v_a_102_, v_b_103_);
lean_dec(v_b_103_);
lean_dec(v_a_102_);
lean_dec(v_BASE_101_);
lean_dec(v_KB_100_);
lean_dec(v_KA_99_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split___lam__0(lean_object* v_a_105_, lean_object* v_b_106_, lean_object* v_KA_107_, lean_object* v_KB_108_, lean_object* v_BASE_109_, lean_object* v_z_110_, lean_object* v_i_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_112_ = lean_nat_to_int(v_a_105_);
v___x_113_ = lean_nat_to_int(v_b_106_);
v___x_114_ = lp_fast__verified__mul_toomcook__B(v_KA_107_, v_KB_108_, v_BASE_109_, v___x_112_, v___x_113_);
lean_dec(v___x_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_nat_pow(v___x_114_, v_i_111_);
v___x_116_ = lean_nat_div(v_z_110_, v___x_115_);
lean_dec(v___x_115_);
v___x_117_ = lean_nat_mod(v___x_116_, v___x_114_);
lean_dec(v___x_114_);
lean_dec(v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split___lam__0___boxed(lean_object* v_a_118_, lean_object* v_b_119_, lean_object* v_KA_120_, lean_object* v_KB_121_, lean_object* v_BASE_122_, lean_object* v_z_123_, lean_object* v_i_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = lp_fast__verified__mul_toomcook__split___lam__0(v_a_118_, v_b_119_, v_KA_120_, v_KB_121_, v_BASE_122_, v_z_123_, v_i_124_);
lean_dec(v_i_124_);
lean_dec(v_z_123_);
lean_dec(v_BASE_122_);
lean_dec(v_KB_121_);
lean_dec(v_KA_120_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__split(lean_object* v_KA_126_, lean_object* v_KB_127_, lean_object* v_KZ_128_, lean_object* v_BASE_129_, lean_object* v_a_130_, lean_object* v_b_131_, lean_object* v_z_132_){
_start:
{
lean_object* v___f_133_; lean_object* v___x_134_; 
v___f_133_ = lean_alloc_closure((void*)(lp_fast__verified__mul_toomcook__split___lam__0___boxed), 7, 6);
lean_closure_set(v___f_133_, 0, v_a_130_);
lean_closure_set(v___f_133_, 1, v_b_131_);
lean_closure_set(v___f_133_, 2, v_KA_126_);
lean_closure_set(v___f_133_, 3, v_KB_127_);
lean_closure_set(v___f_133_, 4, v_BASE_129_);
lean_closure_set(v___f_133_, 5, v_z_132_);
v___x_134_ = l_Array_ofFn___redArg(v_KZ_128_, v___f_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0(lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_136_) == 0)
{
return v_x_135_;
}
else
{
lean_object* v_head_137_; lean_object* v_tail_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_head_137_ = lean_ctor_get(v_x_136_, 0);
v_tail_138_ = lean_ctor_get(v_x_136_, 1);
v___x_139_ = lean_nat_abs(v_head_137_);
v___x_140_ = lean_nat_dec_le(v_x_135_, v___x_139_);
if (v___x_140_ == 0)
{
lean_dec(v___x_139_);
v_x_136_ = v_tail_138_;
goto _start;
}
else
{
lean_dec(v_x_135_);
v_x_135_ = v___x_139_;
v_x_136_ = v_tail_138_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0___boxed(lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0(v_x_143_, v_x_144_);
lean_dec(v_x_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax___redArg(lean_object* v_POINTS_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_array_to_list(v_POINTS_146_);
v___x_149_ = lp_fast__verified__mul_List_foldl___at___00toomcook__vmax_spec__0(v___x_147_, v___x_148_);
lean_dec(v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax(lean_object* v_KA_150_, lean_object* v_KB_151_, lean_object* v_POINTS_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lp_fast__verified__mul_toomcook__vmax___redArg(v_POINTS_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__vmax___boxed(lean_object* v_KA_154_, lean_object* v_KB_155_, lean_object* v_POINTS_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = lp_fast__verified__mul_toomcook__vmax(v_KA_154_, v_KB_155_, v_POINTS_156_);
lean_dec(v_KB_155_);
lean_dec(v_KA_154_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___lam__0(lean_object* v_v__max_158_, lean_object* v_i_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_nat_to_int(v_v__max_158_);
v___x_161_ = l_Int_pow(v___x_160_, v_i_159_);
lean_dec(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___lam__0___boxed(lean_object* v_v__max_162_, lean_object* v_i_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = lp_fast__verified__mul_toomcook__CA___redArg___lam__0(v_v__max_162_, v_i_163_);
lean_dec(v_i_163_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg(lean_object* v_BASE_165_, lean_object* v_KA_166_, lean_object* v_POINTS_167_){
_start:
{
lean_object* v_v__max_168_; lean_object* v___f_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_v__max_168_ = lp_fast__verified__mul_toomcook__vmax___redArg(v_POINTS_167_);
v___f_169_ = lean_alloc_closure((void*)(lp_fast__verified__mul_toomcook__CA___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_169_, 0, v_v__max_168_);
v___x_170_ = l_List_range(v_KA_166_);
v___x_171_ = lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(v___x_170_, v___f_169_);
v___x_172_ = lp_fast__verified__mul_digits(v_BASE_165_, v___x_171_);
lean_dec(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___redArg___boxed(lean_object* v_BASE_173_, lean_object* v_KA_174_, lean_object* v_POINTS_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_fast__verified__mul_toomcook__CA___redArg(v_BASE_173_, v_KA_174_, v_POINTS_175_);
lean_dec(v_BASE_173_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA(lean_object* v_BASE_177_, lean_object* v_KA_178_, lean_object* v_KB_179_, lean_object* v_POINTS_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lp_fast__verified__mul_toomcook__CA___redArg(v_BASE_177_, v_KA_178_, v_POINTS_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CA___boxed(lean_object* v_BASE_182_, lean_object* v_KA_183_, lean_object* v_KB_184_, lean_object* v_POINTS_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lp_fast__verified__mul_toomcook__CA(v_BASE_182_, v_KA_183_, v_KB_184_, v_POINTS_185_);
lean_dec(v_KB_184_);
lean_dec(v_BASE_182_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___redArg(lean_object* v_BASE_187_, lean_object* v_KB_188_, lean_object* v_POINTS_189_){
_start:
{
lean_object* v_v__max_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_v__max_190_ = lp_fast__verified__mul_toomcook__vmax___redArg(v_POINTS_189_);
v___f_191_ = lean_alloc_closure((void*)(lp_fast__verified__mul_toomcook__CA___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_191_, 0, v_v__max_190_);
v___x_192_ = l_List_range(v_KB_188_);
v___x_193_ = lp_fast__verified__mul_Finset_sum___at___00eval__vec__as__poly_spec__0___redArg(v___x_192_, v___f_191_);
v___x_194_ = lp_fast__verified__mul_digits(v_BASE_187_, v___x_193_);
lean_dec(v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___redArg___boxed(lean_object* v_BASE_195_, lean_object* v_KB_196_, lean_object* v_POINTS_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = lp_fast__verified__mul_toomcook__CB___redArg(v_BASE_195_, v_KB_196_, v_POINTS_197_);
lean_dec(v_BASE_195_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB(lean_object* v_BASE_199_, lean_object* v_KA_200_, lean_object* v_KB_201_, lean_object* v_POINTS_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lp_fast__verified__mul_toomcook__CB___redArg(v_BASE_199_, v_KB_201_, v_POINTS_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__CB___boxed(lean_object* v_BASE_204_, lean_object* v_KA_205_, lean_object* v_KB_206_, lean_object* v_POINTS_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = lp_fast__verified__mul_toomcook__CB(v_BASE_204_, v_KA_205_, v_KB_206_, v_POINTS_207_);
lean_dec(v_KA_205_);
lean_dec(v_BASE_204_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__C(lean_object* v_BASE_209_, lean_object* v_KA_210_, lean_object* v_KB_211_, lean_object* v_POINTS_212_){
_start:
{
lean_object* v___y_214_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
lean_inc_ref(v_POINTS_212_);
v___x_217_ = lp_fast__verified__mul_toomcook__CA___redArg(v_BASE_209_, v_KA_210_, v_POINTS_212_);
v___x_218_ = lp_fast__verified__mul_toomcook__CB___redArg(v_BASE_209_, v_KB_211_, v_POINTS_212_);
v___x_219_ = lean_nat_dec_le(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec(v___x_218_);
v___y_214_ = v___x_217_;
goto v___jp_213_;
}
else
{
lean_dec(v___x_217_);
v___y_214_ = v___x_218_;
goto v___jp_213_;
}
v___jp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v___y_214_, v___x_215_);
lean_dec(v___y_214_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__C___boxed(lean_object* v_BASE_220_, lean_object* v_KA_221_, lean_object* v_KB_222_, lean_object* v_POINTS_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = lp_fast__verified__mul_toomcook__C(v_BASE_220_, v_KA_221_, v_KB_222_, v_POINTS_223_);
lean_dec(v_BASE_220_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P__PRIME__UB(lean_object* v_BASE_225_, lean_object* v_KA_226_, lean_object* v_KB_227_, lean_object* v_a_228_, lean_object* v_b_229_, lean_object* v_POINTS_230_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___y_235_; uint8_t v___x_239_; 
v___x_231_ = lean_nat_to_int(v_a_228_);
v___x_232_ = lean_nat_to_int(v_b_229_);
v___x_233_ = lp_fast__verified__mul_toomcook__P(v_BASE_225_, v___x_231_, v___x_232_);
lean_dec(v___x_232_);
lean_dec(v___x_231_);
v___x_239_ = lean_nat_dec_le(v_KA_226_, v_KB_227_);
if (v___x_239_ == 0)
{
lean_inc(v_KB_227_);
v___y_235_ = v_KB_227_;
goto v___jp_234_;
}
else
{
lean_inc(v_KA_226_);
v___y_235_ = v_KA_226_;
goto v___jp_234_;
}
v___jp_234_:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_236_ = lean_nat_div(v___x_233_, v___y_235_);
lean_dec(v___y_235_);
lean_dec(v___x_233_);
v___x_237_ = lp_fast__verified__mul_toomcook__C(v_BASE_225_, v_KA_226_, v_KB_227_, v_POINTS_230_);
v___x_238_ = lean_nat_add(v___x_236_, v___x_237_);
lean_dec(v___x_237_);
lean_dec(v___x_236_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__P__PRIME__UB___boxed(lean_object* v_BASE_240_, lean_object* v_KA_241_, lean_object* v_KB_242_, lean_object* v_a_243_, lean_object* v_b_244_, lean_object* v_POINTS_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = lp_fast__verified__mul_toomcook__P__PRIME__UB(v_BASE_240_, v_KA_241_, v_KB_242_, v_a_243_, v_b_244_, v_POINTS_245_);
lean_dec(v_BASE_240_);
return v_res_246_;
}
}
static lean_object* _init_lp_fast__verified__mul_toomcook__THETA___closed__0(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_unsigned_to_nat(1u);
v___x_248_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__THETA(lean_object* v_BASE_249_, lean_object* v_KA_250_, lean_object* v_KB_251_, lean_object* v_POINTS_252_){
_start:
{
lean_object* v___x_253_; lean_object* v_C_254_; lean_object* v___y_256_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
lean_inc(v_KB_251_);
lean_inc(v_KA_250_);
v___x_253_ = lp_fast__verified__mul_toomcook__C(v_BASE_249_, v_KA_250_, v_KB_251_, v_POINTS_252_);
v_C_254_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v___x_253_);
v___x_261_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v_KA_250_);
v___x_262_ = lp_mathlib_Nat_cast___at___00CompareReals_instCommRingQ_spec__0(v_KB_251_);
lean_inc_ref(v___x_262_);
lean_inc_ref(v___x_261_);
v___x_263_ = l_Rat_instDecidableLe(v___x_261_, v___x_262_);
if (v___x_263_ == 0)
{
lean_dec_ref(v___x_261_);
v___y_256_ = v___x_262_;
goto v___jp_255_;
}
else
{
lean_dec_ref(v___x_262_);
v___y_256_ = v___x_261_;
goto v___jp_255_;
}
v___jp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
lean_inc_ref(v___y_256_);
v___x_257_ = l_Rat_mul(v_C_254_, v___y_256_);
lean_dec_ref(v_C_254_);
v___x_258_ = lean_obj_once(&lp_fast__verified__mul_toomcook__THETA___closed__0, &lp_fast__verified__mul_toomcook__THETA___closed__0_once, _init_lp_fast__verified__mul_toomcook__THETA___closed__0);
v___x_259_ = l_Rat_sub(v___y_256_, v___x_258_);
v___x_260_ = l_Rat_div(v___x_257_, v___x_259_);
lean_dec_ref(v___x_257_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_toomcook__THETA___boxed(lean_object* v_BASE_264_, lean_object* v_KA_265_, lean_object* v_KB_266_, lean_object* v_POINTS_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_fast__verified__mul_toomcook__THETA(v_BASE_264_, v_KA_265_, v_KB_266_, v_POINTS_267_);
lean_dec(v_BASE_264_);
return v_res_268_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_toomcook(uint8_t builtin) {
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
