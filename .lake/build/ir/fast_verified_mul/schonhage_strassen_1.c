// Lean compiler output
// Module: fast_verified_mul.schonhage_strassen_1
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_shiftRight(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_List_foldrTR___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_map___redArg(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lp_mathlib_Nat_log(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
static lean_once_cell_t lp_fast__verified__mul_FPComplex_shr__round___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_FPComplex_shr__round___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_shr__round(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_shr__round___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul__via(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul__via___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_FPComplex_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_FPComplex_ofInt___closed__0;
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_round__re(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_round__re___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_bits(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_bits___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_knuth__bound(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_knuth__bound___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose__digit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose__digit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0___closed__0 = (const lean_object*)&lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_base__threshold;
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__ssa_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__ssa_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_fast__verified__mul_FPComplex_shr__round___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(2u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_shr__round(lean_object* v_v_3_, lean_object* v_P_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_nat_dec_eq(v_P_4_, v___x_5_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_7_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_shr__round___closed__0, &lp_fast__verified__mul_FPComplex_shr__round___closed__0_once, _init_lp_fast__verified__mul_FPComplex_shr__round___closed__0);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_sub(v_P_4_, v___x_8_);
v___x_10_ = l_Int_pow(v___x_7_, v___x_9_);
lean_dec(v___x_9_);
v___x_11_ = lean_int_add(v_v_3_, v___x_10_);
lean_dec(v___x_10_);
v___x_12_ = l_Int_shiftRight(v___x_11_, v_P_4_);
lean_dec(v___x_11_);
return v___x_12_;
}
else
{
lean_inc(v_v_3_);
return v_v_3_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_shr__round___boxed(lean_object* v_v_13_, lean_object* v_P_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lp_fast__verified__mul_FPComplex_shr__round(v_v_13_, v_P_14_);
lean_dec(v_P_14_);
lean_dec(v_v_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul(lean_object* v_P_16_, lean_object* v_a_17_, lean_object* v_b_18_){
_start:
{
lean_object* v_re_19_; lean_object* v_im_20_; lean_object* v_re_21_; lean_object* v_im_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_37_; 
v_re_19_ = lean_ctor_get(v_a_17_, 0);
v_im_20_ = lean_ctor_get(v_a_17_, 1);
v_re_21_ = lean_ctor_get(v_b_18_, 0);
v_im_22_ = lean_ctor_get(v_b_18_, 1);
v_isSharedCheck_37_ = !lean_is_exclusive(v_b_18_);
if (v_isSharedCheck_37_ == 0)
{
v___x_24_ = v_b_18_;
v_isShared_25_ = v_isSharedCheck_37_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_im_22_);
lean_inc(v_re_21_);
lean_dec(v_b_18_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_37_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_26_ = lean_int_mul(v_re_19_, v_re_21_);
v___x_27_ = lean_int_mul(v_im_20_, v_im_22_);
v___x_28_ = lean_int_sub(v___x_26_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_26_);
v___x_29_ = lp_fast__verified__mul_FPComplex_shr__round(v___x_28_, v_P_16_);
lean_dec(v___x_28_);
v___x_30_ = lean_int_mul(v_re_19_, v_im_22_);
lean_dec(v_im_22_);
v___x_31_ = lean_int_mul(v_im_20_, v_re_21_);
lean_dec(v_re_21_);
v___x_32_ = lean_int_add(v___x_30_, v___x_31_);
lean_dec(v___x_31_);
lean_dec(v___x_30_);
v___x_33_ = lp_fast__verified__mul_FPComplex_shr__round(v___x_32_, v_P_16_);
lean_dec(v___x_32_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 1, v___x_33_);
lean_ctor_set(v___x_24_, 0, v___x_29_);
v___x_35_ = v___x_24_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul___boxed(lean_object* v_P_38_, lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_fast__verified__mul_FPComplex_cmul(v_P_38_, v_a_39_, v_b_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_P_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___redArg(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
lean_object* v_re_44_; lean_object* v_im_45_; lean_object* v_re_46_; lean_object* v_im_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_56_; 
v_re_44_ = lean_ctor_get(v_a_42_, 0);
v_im_45_ = lean_ctor_get(v_a_42_, 1);
v_re_46_ = lean_ctor_get(v_b_43_, 0);
v_im_47_ = lean_ctor_get(v_b_43_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v_b_43_);
if (v_isSharedCheck_56_ == 0)
{
v___x_49_ = v_b_43_;
v_isShared_50_ = v_isSharedCheck_56_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_im_47_);
lean_inc(v_re_46_);
lean_dec(v_b_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_56_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_54_; 
v___x_51_ = lean_int_add(v_re_44_, v_re_46_);
lean_dec(v_re_46_);
v___x_52_ = lean_int_add(v_im_45_, v_im_47_);
lean_dec(v_im_47_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 1, v___x_52_);
lean_ctor_set(v___x_49_, 0, v___x_51_);
v___x_54_ = v___x_49_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___redArg___boxed(lean_object* v_a_57_, lean_object* v_b_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = lp_fast__verified__mul_FPComplex_cadd___redArg(v_a_57_, v_b_58_);
lean_dec_ref(v_a_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd(lean_object* v_P_60_, lean_object* v_a_61_, lean_object* v_b_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lp_fast__verified__mul_FPComplex_cadd___redArg(v_a_61_, v_b_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cadd___boxed(lean_object* v_P_64_, lean_object* v_a_65_, lean_object* v_b_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_fast__verified__mul_FPComplex_cadd(v_P_64_, v_a_65_, v_b_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_P_64_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___redArg(lean_object* v_a_68_, lean_object* v_b_69_){
_start:
{
lean_object* v_re_70_; lean_object* v_im_71_; lean_object* v_re_72_; lean_object* v_im_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_82_; 
v_re_70_ = lean_ctor_get(v_a_68_, 0);
v_im_71_ = lean_ctor_get(v_a_68_, 1);
v_re_72_ = lean_ctor_get(v_b_69_, 0);
v_im_73_ = lean_ctor_get(v_b_69_, 1);
v_isSharedCheck_82_ = !lean_is_exclusive(v_b_69_);
if (v_isSharedCheck_82_ == 0)
{
v___x_75_ = v_b_69_;
v_isShared_76_ = v_isSharedCheck_82_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_im_73_);
lean_inc(v_re_72_);
lean_dec(v_b_69_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_82_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_77_ = lean_int_sub(v_re_70_, v_re_72_);
lean_dec(v_re_72_);
v___x_78_ = lean_int_sub(v_im_71_, v_im_73_);
lean_dec(v_im_73_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_78_);
lean_ctor_set(v___x_75_, 0, v___x_77_);
v___x_80_ = v___x_75_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___redArg___boxed(lean_object* v_a_83_, lean_object* v_b_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lp_fast__verified__mul_FPComplex_csub___redArg(v_a_83_, v_b_84_);
lean_dec_ref(v_a_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub(lean_object* v_P_86_, lean_object* v_a_87_, lean_object* v_b_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lp_fast__verified__mul_FPComplex_csub___redArg(v_a_87_, v_b_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_csub___boxed(lean_object* v_P_90_, lean_object* v_a_91_, lean_object* v_b_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_fast__verified__mul_FPComplex_csub(v_P_90_, v_a_91_, v_b_92_);
lean_dec_ref(v_a_91_);
lean_dec(v_P_90_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul__via(lean_object* v_P_94_, lean_object* v_mul__fn_95_, lean_object* v_a_96_, lean_object* v_b_97_){
_start:
{
lean_object* v_re_98_; lean_object* v_im_99_; lean_object* v_re_100_; lean_object* v_im_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_116_; 
v_re_98_ = lean_ctor_get(v_a_96_, 0);
lean_inc(v_re_98_);
v_im_99_ = lean_ctor_get(v_a_96_, 1);
lean_inc(v_im_99_);
lean_dec_ref(v_a_96_);
v_re_100_ = lean_ctor_get(v_b_97_, 0);
v_im_101_ = lean_ctor_get(v_b_97_, 1);
v_isSharedCheck_116_ = !lean_is_exclusive(v_b_97_);
if (v_isSharedCheck_116_ == 0)
{
v___x_103_ = v_b_97_;
v_isShared_104_ = v_isSharedCheck_116_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_im_101_);
lean_inc(v_re_100_);
lean_dec(v_b_97_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_116_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
lean_inc_ref_n(v_mul__fn_95_, 3);
lean_inc(v_re_100_);
lean_inc(v_re_98_);
v___x_105_ = lean_apply_2(v_mul__fn_95_, v_re_98_, v_re_100_);
lean_inc(v_im_101_);
lean_inc(v_im_99_);
v___x_106_ = lean_apply_2(v_mul__fn_95_, v_im_99_, v_im_101_);
v___x_107_ = lean_int_sub(v___x_105_, v___x_106_);
lean_dec(v___x_106_);
lean_dec(v___x_105_);
v___x_108_ = lp_fast__verified__mul_FPComplex_shr__round(v___x_107_, v_P_94_);
lean_dec(v___x_107_);
v___x_109_ = lean_apply_2(v_mul__fn_95_, v_re_98_, v_im_101_);
v___x_110_ = lean_apply_2(v_mul__fn_95_, v_im_99_, v_re_100_);
v___x_111_ = lean_int_add(v___x_109_, v___x_110_);
lean_dec(v___x_110_);
lean_dec(v___x_109_);
v___x_112_ = lp_fast__verified__mul_FPComplex_shr__round(v___x_111_, v_P_94_);
lean_dec(v___x_111_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_112_);
lean_ctor_set(v___x_103_, 0, v___x_108_);
v___x_114_ = v___x_103_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_cmul__via___boxed(lean_object* v_P_117_, lean_object* v_mul__fn_118_, lean_object* v_a_119_, lean_object* v_b_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_fast__verified__mul_FPComplex_cmul__via(v_P_117_, v_mul__fn_118_, v_a_119_, v_b_120_);
lean_dec(v_P_117_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___redArg(lean_object* v_k_122_, lean_object* v_x_123_, lean_object* v_h__1_124_, lean_object* v_h__2_125_){
_start:
{
lean_object* v_zero_126_; uint8_t v_isZero_127_; 
v_zero_126_ = lean_unsigned_to_nat(0u);
v_isZero_127_ = lean_nat_dec_eq(v_k_122_, v_zero_126_);
if (v_isZero_127_ == 1)
{
lean_object* v___x_128_; 
lean_dec(v_h__2_125_);
v___x_128_ = lean_apply_1(v_h__1_124_, v_x_123_);
return v___x_128_;
}
else
{
lean_object* v_one_129_; lean_object* v_n_130_; lean_object* v___x_131_; 
lean_dec(v_h__1_124_);
v_one_129_ = lean_unsigned_to_nat(1u);
v_n_130_ = lean_nat_sub(v_k_122_, v_one_129_);
v___x_131_ = lean_apply_2(v_h__2_125_, v_n_130_, v_x_123_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___redArg___boxed(lean_object* v_k_132_, lean_object* v_x_133_, lean_object* v_h__1_134_, lean_object* v_h__2_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___redArg(v_k_132_, v_x_133_, v_h__1_134_, v_h__2_135_);
lean_dec(v_k_132_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter(lean_object* v_P_137_, lean_object* v_motive_138_, lean_object* v_k_139_, lean_object* v_x_140_, lean_object* v_h__1_141_, lean_object* v_h__2_142_){
_start:
{
lean_object* v_zero_143_; uint8_t v_isZero_144_; 
v_zero_143_ = lean_unsigned_to_nat(0u);
v_isZero_144_ = lean_nat_dec_eq(v_k_139_, v_zero_143_);
if (v_isZero_144_ == 1)
{
lean_object* v___x_145_; 
lean_dec(v_h__2_142_);
v___x_145_ = lean_apply_1(v_h__1_141_, v_x_140_);
return v___x_145_;
}
else
{
lean_object* v_one_146_; lean_object* v_n_147_; lean_object* v___x_148_; 
lean_dec(v_h__1_141_);
v_one_146_ = lean_unsigned_to_nat(1u);
v_n_147_ = lean_nat_sub(v_k_139_, v_one_146_);
v___x_148_ = lean_apply_2(v_h__2_142_, v_n_147_, v_x_140_);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter___boxed(lean_object* v_P_149_, lean_object* v_motive_150_, lean_object* v_k_151_, lean_object* v_x_152_, lean_object* v_h__1_153_, lean_object* v_h__2_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__FPComplex_FFT_match__1_splitter(v_P_149_, v_motive_150_, v_k_151_, v_x_152_, v_h__1_153_, v_h__2_154_);
lean_dec(v_k_151_);
lean_dec(v_P_149_);
return v_res_155_;
}
}
static lean_object* _init_lp_fast__verified__mul_FPComplex_ofInt___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_nat_to_int(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_ofInt(lean_object* v_P_158_, lean_object* v_n_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_shr__round___closed__0, &lp_fast__verified__mul_FPComplex_shr__round___closed__0_once, _init_lp_fast__verified__mul_FPComplex_shr__round___closed__0);
v___x_161_ = l_Int_pow(v___x_160_, v_P_158_);
v___x_162_ = lean_int_mul(v_n_159_, v___x_161_);
lean_dec(v___x_161_);
v___x_163_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_ofInt___closed__0, &lp_fast__verified__mul_FPComplex_ofInt___closed__0_once, _init_lp_fast__verified__mul_FPComplex_ofInt___closed__0);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_ofInt___boxed(lean_object* v_P_165_, lean_object* v_n_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_fast__verified__mul_FPComplex_ofInt(v_P_165_, v_n_166_);
lean_dec(v_n_166_);
lean_dec(v_P_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_round__re(lean_object* v_P_168_, lean_object* v_a_169_){
_start:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lean_nat_dec_eq(v_P_168_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v_re_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_re_172_ = lean_ctor_get(v_a_169_, 0);
v___x_173_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_shr__round___closed__0, &lp_fast__verified__mul_FPComplex_shr__round___closed__0_once, _init_lp_fast__verified__mul_FPComplex_shr__round___closed__0);
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_sub(v_P_168_, v___x_174_);
v___x_176_ = l_Int_pow(v___x_173_, v___x_175_);
lean_dec(v___x_175_);
v___x_177_ = lean_int_add(v_re_172_, v___x_176_);
lean_dec(v___x_176_);
v___x_178_ = l_Int_shiftRight(v___x_177_, v_P_168_);
lean_dec(v___x_177_);
return v___x_178_;
}
else
{
lean_object* v_re_179_; 
v_re_179_ = lean_ctor_get(v_a_169_, 0);
lean_inc(v_re_179_);
return v_re_179_;
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_FPComplex_round__re___boxed(lean_object* v_P_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lp_fast__verified__mul_FPComplex_round__re(v_P_180_, v_a_181_);
lean_dec_ref(v_a_181_);
lean_dec(v_P_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_bits(lean_object* v_x_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_184_ = lean_unsigned_to_nat(2u);
v___x_185_ = lean_nat_abs(v_x_183_);
v___x_186_ = lp_mathlib_Nat_log(v___x_184_, v___x_185_);
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_add(v___x_186_, v___x_187_);
lean_dec(v___x_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_bits___boxed(lean_object* v_x_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = lp_fast__verified__mul_bits(v_x_189_);
lean_dec(v_x_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_knuth__bound(lean_object* v_n_191_, lean_object* v_l_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_193_ = lean_unsigned_to_nat(4u);
v___x_194_ = lean_nat_mul(v___x_193_, v_n_191_);
v___x_195_ = lean_unsigned_to_nat(2u);
v___x_196_ = lean_nat_mul(v___x_195_, v_l_192_);
v___x_197_ = lean_nat_add(v___x_194_, v___x_196_);
lean_dec(v___x_196_);
lean_dec(v___x_194_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_knuth__bound___boxed(lean_object* v_n_198_, lean_object* v_l_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = lp_fast__verified__mul_knuth__bound(v_n_198_, v_l_199_);
lean_dec(v_l_199_);
lean_dec(v_n_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose__digit(lean_object* v_x_201_, lean_object* v_l_202_, lean_object* v_K_203_, lean_object* v_j_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___y_209_; 
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = lean_nat_sub(v_K_203_, v___x_205_);
v___x_207_ = lean_nat_dec_lt(v_j_204_, v___x_206_);
if (v___x_207_ == 0)
{
lean_dec(v_j_204_);
v___y_209_ = v___x_206_;
goto v___jp_208_;
}
else
{
lean_dec(v___x_206_);
v___y_209_ = v_j_204_;
goto v___jp_208_;
}
v___jp_208_:
{
lean_object* v_shift_210_; 
v_shift_210_ = lean_nat_mul(v_l_202_, v___y_209_);
lean_dec(v___y_209_);
if (v___x_207_ == 0)
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_nat_shiftr(v_x_201_, v_shift_210_);
lean_dec(v_shift_210_);
v___x_212_ = lean_nat_to_int(v___x_211_);
return v___x_212_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_213_ = lean_nat_shiftr(v_x_201_, v_shift_210_);
lean_dec(v_shift_210_);
v___x_214_ = lean_nat_shiftl(v___x_205_, v_l_202_);
v___x_215_ = lean_nat_sub(v___x_214_, v___x_205_);
lean_dec(v___x_214_);
v___x_216_ = lean_nat_land(v___x_213_, v___x_215_);
lean_dec(v___x_215_);
lean_dec(v___x_213_);
v___x_217_ = lean_nat_to_int(v___x_216_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_decompose__digit___boxed(lean_object* v_x_218_, lean_object* v_l_219_, lean_object* v_K_220_, lean_object* v_j_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = lp_fast__verified__mul_decompose__digit(v_x_218_, v_l_219_, v_K_220_, v_j_221_);
lean_dec(v_K_220_);
lean_dec(v_l_219_);
lean_dec(v_x_218_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose___lam__0(lean_object* v_c_223_, lean_object* v_l_224_, lean_object* v_j_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_inc(v_j_225_);
v___x_226_ = lean_apply_1(v_c_223_, v_j_225_);
v___x_227_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_shr__round___closed__0, &lp_fast__verified__mul_FPComplex_shr__round___closed__0_once, _init_lp_fast__verified__mul_FPComplex_shr__round___closed__0);
v___x_228_ = lean_nat_mul(v_l_224_, v_j_225_);
lean_dec(v_j_225_);
v___x_229_ = l_Int_pow(v___x_227_, v___x_228_);
lean_dec(v___x_228_);
v___x_230_ = lean_int_mul(v___x_226_, v___x_229_);
lean_dec(v___x_229_);
lean_dec(v___x_226_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose___lam__0___boxed(lean_object* v_c_231_, lean_object* v_l_232_, lean_object* v_j_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lp_fast__verified__mul_recompose___lam__0(v_c_231_, v_l_232_, v_j_233_);
lean_dec(v_l_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0(lean_object* v_s_236_){
_start:
{
lean_object* v___f_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___f_237_ = ((lean_object*)(lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0___closed__0));
v___x_238_ = lean_obj_once(&lp_fast__verified__mul_FPComplex_ofInt___closed__0, &lp_fast__verified__mul_FPComplex_ofInt___closed__0_once, _init_lp_fast__verified__mul_FPComplex_ofInt___closed__0);
v___x_239_ = l_List_foldrTR___redArg(v___f_237_, v___x_238_, v_s_236_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0___redArg(lean_object* v_s_240_, lean_object* v_f_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lp_mathlib_Multiset_map___redArg(v_f_241_, v_s_240_);
v___x_243_ = lp_fast__verified__mul_Multiset_sum___at___00Finset_sum___at___00recompose_spec__0_spec__0(v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_recompose(lean_object* v_K_244_, lean_object* v_l_245_, lean_object* v_c_246_){
_start:
{
lean_object* v___f_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___f_247_ = lean_alloc_closure((void*)(lp_fast__verified__mul_recompose___lam__0___boxed), 3, 2);
lean_closure_set(v___f_247_, 0, v_c_246_);
lean_closure_set(v___f_247_, 1, v_l_245_);
v___x_248_ = l_List_finRange(v_K_244_);
v___x_249_ = lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0___redArg(v___x_248_, v___f_247_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0(lean_object* v_00_u03b9_250_, lean_object* v_s_251_, lean_object* v_f_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lp_fast__verified__mul_Finset_sum___at___00recompose_spec__0___redArg(v_s_251_, v_f_252_);
return v___x_253_;
}
}
static lean_object* _init_lp_fast__verified__mul_base__threshold(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_unsigned_to_nat(64u);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__ssa_match__1_splitter___redArg(lean_object* v_x_255_, lean_object* v_x_256_, lean_object* v_h__1_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_apply_2(v_h__1_257_, v_x_255_, v_x_256_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul___private_fast__verified__mul_schonhage__strassen__1_0__ssa_match__1_splitter(lean_object* v_motive_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_h__1_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_apply_2(v_h__1_262_, v_x_260_, v_x_261_);
return v___x_263_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_schonhage__strassen__1(uint8_t builtin) {
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
lp_fast__verified__mul_base__threshold = _init_lp_fast__verified__mul_base__threshold();
lean_mark_persistent(lp_fast__verified__mul_base__threshold);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
