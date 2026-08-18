// Lean compiler output
// Module: fast_verified_mul.toom3
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_shiftLeft(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lp_mathlib_Nat_shiftLeft_x27(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
static lean_once_cell_t lp_fast__verified__mul_ToomCook3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_ToomCook3___closed__0;
static lean_once_cell_t lp_fast__verified__mul_ToomCook3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_ToomCook3___closed__1;
static lean_once_cell_t lp_fast__verified__mul_ToomCook3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_ToomCook3___closed__2;
static lean_once_cell_t lp_fast__verified__mul_ToomCook3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_fast__verified__mul_ToomCook3___closed__3;
LEAN_EXPORT lean_object* lp_fast__verified__mul_ToomCook3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_fast__verified__mul_ToomCook3___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_fast__verified__mul_ToomCook3___closed__0(void){
_start:
{
lean_object* v_natZero_1_; lean_object* v_intZero_2_; 
v_natZero_1_ = lean_unsigned_to_nat(0u);
v_intZero_2_ = lean_nat_to_int(v_natZero_1_);
return v_intZero_2_;
}
}
static lean_object* _init_lp_fast__verified__mul_ToomCook3___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(6u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_lp_fast__verified__mul_ToomCook3___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(3u);
v___x_6_ = lean_nat_to_int(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_lp_fast__verified__mul_ToomCook3___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_ToomCook3(lean_object* v_a__raw_9_, lean_object* v_b__raw_10_){
_start:
{
lean_object* v___y_12_; lean_object* v___y_13_; lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___y_16_; lean_object* v___y_17_; lean_object* v___y_18_; lean_object* v___y_19_; lean_object* v___y_39_; lean_object* v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; lean_object* v___y_43_; lean_object* v___y_44_; lean_object* v___y_45_; lean_object* v___y_46_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_78_; lean_object* v___y_79_; lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___y_82_; lean_object* v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v_a_104_; lean_object* v_b_105_; lean_object* v___y_107_; uint8_t v___x_171_; 
v_a_104_ = lean_nat_abs(v_a__raw_9_);
v_b_105_ = lean_nat_abs(v_b__raw_10_);
v___x_171_ = lean_nat_dec_le(v_a_104_, v_b_105_);
if (v___x_171_ == 0)
{
lean_inc(v_a_104_);
v___y_107_ = v_a_104_;
goto v___jp_106_;
}
else
{
lean_inc(v_b_105_);
v___y_107_ = v_b_105_;
goto v___jp_106_;
}
v___jp_11_:
{
lean_object* v_r1_20_; lean_object* v___x_21_; lean_object* v_r2_22_; lean_object* v_r3_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_r1_20_ = lean_int_sub(v___y_15_, v___y_17_);
lean_dec(v___y_15_);
v___x_21_ = lean_int_sub(v___y_19_, v___y_14_);
v_r2_22_ = lean_int_sub(v___x_21_, v___y_16_);
lean_dec(v___x_21_);
v_r3_23_ = lean_int_sub(v___y_17_, v___y_19_);
lean_dec(v___y_19_);
lean_dec(v___y_17_);
v___x_24_ = l_Int_sign(v_a__raw_9_);
v___x_25_ = l_Int_sign(v_b__raw_10_);
v___x_26_ = lean_int_mul(v___x_24_, v___x_25_);
lean_dec(v___x_25_);
lean_dec(v___x_24_);
v___x_27_ = l_Int_shiftLeft(v_r1_20_, v___y_12_);
lean_dec(v_r1_20_);
v___x_28_ = lean_int_add(v___y_14_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___y_14_);
v___x_29_ = l_Int_shiftLeft(v_r2_22_, v___y_13_);
lean_dec(v_r2_22_);
v___x_30_ = lean_int_add(v___x_28_, v___x_29_);
lean_dec(v___x_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_nat_add(v___y_12_, v___y_13_);
lean_dec(v___y_13_);
v___x_32_ = l_Int_shiftLeft(v_r3_23_, v___x_31_);
lean_dec(v___x_31_);
lean_dec(v_r3_23_);
v___x_33_ = lean_int_add(v___x_30_, v___x_32_);
lean_dec(v___x_32_);
lean_dec(v___x_30_);
v___x_34_ = lean_nat_shiftl(v___y_12_, v___y_18_);
lean_dec(v___y_12_);
v___x_35_ = l_Int_shiftLeft(v___y_16_, v___x_34_);
lean_dec(v___x_34_);
lean_dec(v___y_16_);
v___x_36_ = lean_int_add(v___x_33_, v___x_35_);
lean_dec(v___x_35_);
lean_dec(v___x_33_);
v___x_37_ = lean_int_mul(v___x_26_, v___x_36_);
lean_dec(v___x_36_);
lean_dec(v___x_26_);
return v___x_37_;
}
v___jp_38_:
{
lean_object* v_t1_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v_intZero_52_; uint8_t v_isNeg_53_; 
v_t1_49_ = lean_int_sub(v___y_45_, v___y_48_);
lean_dec(v___y_48_);
lean_dec(v___y_45_);
v___x_50_ = lean_int_add(v___y_43_, v___y_39_);
lean_dec(v___y_39_);
v___x_51_ = lean_int_neg(v___y_47_);
v_intZero_52_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__0, &lp_fast__verified__mul_ToomCook3___closed__0_once, _init_lp_fast__verified__mul_ToomCook3___closed__0);
v_isNeg_53_ = lean_int_dec_lt(v___x_50_, v_intZero_52_);
if (v_isNeg_53_ == 0)
{
lean_object* v_a_54_; uint8_t v_isNeg_55_; 
v_a_54_ = lean_nat_abs(v___x_50_);
lean_dec(v___x_50_);
v_isNeg_55_ = lean_int_dec_lt(v___x_51_, v_intZero_52_);
if (v_isNeg_55_ == 0)
{
lean_object* v_a_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_a_56_ = lean_nat_abs(v___x_51_);
lean_dec(v___x_51_);
v___x_57_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_55_, v_a_54_, v_a_56_);
lean_dec(v_a_56_);
lean_dec(v_a_54_);
v___x_58_ = lean_nat_to_int(v___x_57_);
v___y_12_ = v___y_40_;
v___y_13_ = v___y_41_;
v___y_14_ = v___y_42_;
v___y_15_ = v___y_43_;
v___y_16_ = v___y_44_;
v___y_17_ = v_t1_49_;
v___y_18_ = v___y_46_;
v___y_19_ = v___x_58_;
goto v___jp_11_;
}
else
{
lean_object* v_abs_59_; lean_object* v_one_60_; lean_object* v_a_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_abs_59_ = lean_nat_abs(v___x_51_);
lean_dec(v___x_51_);
v_one_60_ = lean_unsigned_to_nat(1u);
v_a_61_ = lean_nat_sub(v_abs_59_, v_one_60_);
lean_dec(v_abs_59_);
v___x_62_ = lean_nat_add(v_a_61_, v_one_60_);
lean_dec(v_a_61_);
v___x_63_ = lean_nat_shiftr(v_a_54_, v___x_62_);
lean_dec(v___x_62_);
lean_dec(v_a_54_);
v___x_64_ = lean_nat_to_int(v___x_63_);
v___y_12_ = v___y_40_;
v___y_13_ = v___y_41_;
v___y_14_ = v___y_42_;
v___y_15_ = v___y_43_;
v___y_16_ = v___y_44_;
v___y_17_ = v_t1_49_;
v___y_18_ = v___y_46_;
v___y_19_ = v___x_64_;
goto v___jp_11_;
}
}
else
{
lean_object* v_abs_65_; lean_object* v_one_66_; lean_object* v_a_67_; uint8_t v_isNeg_68_; 
v_abs_65_ = lean_nat_abs(v___x_50_);
lean_dec(v___x_50_);
v_one_66_ = lean_unsigned_to_nat(1u);
v_a_67_ = lean_nat_sub(v_abs_65_, v_one_66_);
lean_dec(v_abs_65_);
v_isNeg_68_ = lean_int_dec_lt(v___x_51_, v_intZero_52_);
if (v_isNeg_68_ == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_a_69_ = lean_nat_abs(v___x_51_);
lean_dec(v___x_51_);
v___x_70_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_53_, v_a_67_, v_a_69_);
lean_dec(v_a_69_);
lean_dec(v_a_67_);
v___x_71_ = lean_int_neg_succ_of_nat(v___x_70_);
v___y_12_ = v___y_40_;
v___y_13_ = v___y_41_;
v___y_14_ = v___y_42_;
v___y_15_ = v___y_43_;
v___y_16_ = v___y_44_;
v___y_17_ = v_t1_49_;
v___y_18_ = v___y_46_;
v___y_19_ = v___x_71_;
goto v___jp_11_;
}
else
{
lean_object* v_abs_72_; lean_object* v_a_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_abs_72_ = lean_nat_abs(v___x_51_);
lean_dec(v___x_51_);
v_a_73_ = lean_nat_sub(v_abs_72_, v_one_66_);
lean_dec(v_abs_72_);
v___x_74_ = lean_nat_add(v_a_73_, v_one_66_);
lean_dec(v_a_73_);
v___x_75_ = lean_nat_shiftr(v_a_67_, v___x_74_);
lean_dec(v___x_74_);
lean_dec(v_a_67_);
v___x_76_ = lean_int_neg_succ_of_nat(v___x_75_);
v___y_12_ = v___y_40_;
v___y_13_ = v___y_41_;
v___y_14_ = v___y_42_;
v___y_15_ = v___y_43_;
v___y_16_ = v___y_44_;
v___y_17_ = v_t1_49_;
v___y_18_ = v___y_46_;
v___y_19_ = v___x_76_;
goto v___jp_11_;
}
}
}
v___jp_77_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v_intZero_94_; uint8_t v_isNeg_95_; 
v___x_90_ = lean_int_add(v___y_83_, v___y_89_);
lean_dec(v___y_89_);
lean_dec(v___y_83_);
v___x_91_ = lean_int_add(v___x_90_, v___y_85_);
lean_dec(v___y_85_);
lean_dec(v___x_90_);
v___x_92_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__1, &lp_fast__verified__mul_ToomCook3___closed__1_once, _init_lp_fast__verified__mul_ToomCook3___closed__1);
v___x_93_ = lean_int_ediv(v___x_91_, v___x_92_);
lean_dec(v___x_91_);
v_intZero_94_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__0, &lp_fast__verified__mul_ToomCook3___closed__0_once, _init_lp_fast__verified__mul_ToomCook3___closed__0);
v_isNeg_95_ = lean_int_dec_lt(v___y_84_, v_intZero_94_);
if (v_isNeg_95_ == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_a_96_ = lean_nat_abs(v___y_84_);
v___x_97_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_95_, v_a_96_, v___y_86_);
lean_dec(v_a_96_);
v___x_98_ = lean_nat_to_int(v___x_97_);
v___y_39_ = v___y_78_;
v___y_40_ = v___y_79_;
v___y_41_ = v___y_80_;
v___y_42_ = v___y_81_;
v___y_43_ = v___y_82_;
v___y_44_ = v___y_84_;
v___y_45_ = v___x_93_;
v___y_46_ = v___y_87_;
v___y_47_ = v___y_88_;
v___y_48_ = v___x_98_;
goto v___jp_38_;
}
else
{
lean_object* v_abs_99_; lean_object* v_one_100_; lean_object* v_a_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_abs_99_ = lean_nat_abs(v___y_84_);
v_one_100_ = lean_unsigned_to_nat(1u);
v_a_101_ = lean_nat_sub(v_abs_99_, v_one_100_);
lean_dec(v_abs_99_);
v___x_102_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_95_, v_a_101_, v___y_86_);
lean_dec(v_a_101_);
v___x_103_ = lean_int_neg_succ_of_nat(v___x_102_);
v___y_39_ = v___y_78_;
v___y_40_ = v___y_79_;
v___y_41_ = v___y_80_;
v___y_42_ = v___y_81_;
v___y_43_ = v___y_82_;
v___y_44_ = v___y_84_;
v___y_45_ = v___x_93_;
v___y_46_ = v___y_87_;
v___y_47_ = v___y_88_;
v___y_48_ = v___x_103_;
goto v___jp_38_;
}
}
v___jp_106_:
{
lean_object* v_n_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_n_108_ = lp_mathlib_Nat_size(v___y_107_);
lean_dec(v___y_107_);
v___x_109_ = lean_unsigned_to_nat(3u);
v___x_110_ = lean_nat_dec_le(v_n_108_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_i_114_; lean_object* v___x_115_; lean_object* v_mask_116_; lean_object* v_a0_117_; lean_object* v___x_118_; lean_object* v_a1_119_; lean_object* v___x_120_; lean_object* v_a2_121_; lean_object* v_b0_122_; lean_object* v___x_123_; lean_object* v_b1_124_; lean_object* v_b2_125_; lean_object* v_a02_126_; lean_object* v_b02_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v_a__sub_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_b__sub_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v_r0_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_w1_139_; lean_object* v_w__neg__1_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_w2_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v_r4_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v_intZero_161_; uint8_t v_isNeg_162_; 
v___x_111_ = lean_nat_add(v_n_108_, v___x_109_);
lean_dec(v_n_108_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_sub(v___x_111_, v___x_112_);
lean_dec(v___x_111_);
v_i_114_ = lean_nat_div(v___x_113_, v___x_109_);
lean_dec(v___x_113_);
v___x_115_ = lean_nat_shiftl(v___x_112_, v_i_114_);
v_mask_116_ = lean_nat_sub(v___x_115_, v___x_112_);
lean_dec(v___x_115_);
v_a0_117_ = lean_nat_land(v_a_104_, v_mask_116_);
v___x_118_ = lean_nat_shiftr(v_a_104_, v_i_114_);
v_a1_119_ = lean_nat_land(v___x_118_, v_mask_116_);
lean_dec(v___x_118_);
v___x_120_ = lean_nat_shiftl(v_i_114_, v___x_112_);
v_a2_121_ = lean_nat_shiftr(v_a_104_, v___x_120_);
lean_dec(v_a_104_);
v_b0_122_ = lean_nat_land(v_b_105_, v_mask_116_);
v___x_123_ = lean_nat_shiftr(v_b_105_, v_i_114_);
v_b1_124_ = lean_nat_land(v___x_123_, v_mask_116_);
lean_dec(v_mask_116_);
lean_dec(v___x_123_);
v_b2_125_ = lean_nat_shiftr(v_b_105_, v___x_120_);
lean_dec(v_b_105_);
v_a02_126_ = lean_nat_add(v_a0_117_, v_a2_121_);
v_b02_127_ = lean_nat_add(v_b0_122_, v_b2_125_);
v___x_128_ = lean_nat_to_int(v_a02_126_);
lean_inc(v_a1_119_);
v___x_129_ = lean_nat_to_int(v_a1_119_);
v_a__sub_130_ = lean_int_sub(v___x_128_, v___x_129_);
v___x_131_ = lean_nat_to_int(v_b02_127_);
lean_inc(v_b1_124_);
v___x_132_ = lean_nat_to_int(v_b1_124_);
v_b__sub_133_ = lean_int_sub(v___x_131_, v___x_132_);
v___x_134_ = lean_nat_to_int(v_a0_117_);
v___x_135_ = lean_nat_to_int(v_b0_122_);
v_r0_136_ = lp_fast__verified__mul_ToomCook3(v___x_134_, v___x_135_);
v___x_137_ = lean_int_add(v___x_128_, v___x_129_);
lean_dec(v___x_129_);
lean_dec(v___x_128_);
v___x_138_ = lean_int_add(v___x_131_, v___x_132_);
lean_dec(v___x_132_);
lean_dec(v___x_131_);
v_w1_139_ = lp_fast__verified__mul_ToomCook3(v___x_137_, v___x_138_);
lean_dec(v___x_138_);
lean_dec(v___x_137_);
v_w__neg__1_140_ = lp_fast__verified__mul_ToomCook3(v_a__sub_130_, v_b__sub_133_);
lean_dec(v_b__sub_133_);
lean_dec(v_a__sub_130_);
v___x_141_ = lean_nat_shiftl(v_a1_119_, v___x_112_);
lean_dec(v_a1_119_);
v___x_142_ = lean_nat_to_int(v___x_141_);
v___x_143_ = lean_int_add(v___x_134_, v___x_142_);
lean_dec(v___x_142_);
lean_dec(v___x_134_);
v___x_144_ = lean_unsigned_to_nat(2u);
v___x_145_ = lean_nat_shiftl(v_a2_121_, v___x_144_);
v___x_146_ = lean_nat_to_int(v___x_145_);
v___x_147_ = lean_int_add(v___x_143_, v___x_146_);
lean_dec(v___x_146_);
lean_dec(v___x_143_);
v___x_148_ = lean_nat_shiftl(v_b1_124_, v___x_112_);
lean_dec(v_b1_124_);
v___x_149_ = lean_nat_to_int(v___x_148_);
v___x_150_ = lean_int_add(v___x_135_, v___x_149_);
lean_dec(v___x_149_);
lean_dec(v___x_135_);
v___x_151_ = lean_nat_shiftl(v_b2_125_, v___x_144_);
v___x_152_ = lean_nat_to_int(v___x_151_);
v___x_153_ = lean_int_add(v___x_150_, v___x_152_);
lean_dec(v___x_152_);
lean_dec(v___x_150_);
v_w2_154_ = lp_fast__verified__mul_ToomCook3(v___x_147_, v___x_153_);
lean_dec(v___x_153_);
lean_dec(v___x_147_);
v___x_155_ = lean_nat_to_int(v_a2_121_);
v___x_156_ = lean_nat_to_int(v_b2_125_);
v_r4_157_ = lp_fast__verified__mul_ToomCook3(v___x_155_, v___x_156_);
lean_dec(v___x_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__2, &lp_fast__verified__mul_ToomCook3___closed__2_once, _init_lp_fast__verified__mul_ToomCook3___closed__2);
v___x_159_ = lean_int_mul(v___x_158_, v_r0_136_);
v___x_160_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__3, &lp_fast__verified__mul_ToomCook3___closed__3_once, _init_lp_fast__verified__mul_ToomCook3___closed__3);
v_intZero_161_ = lean_obj_once(&lp_fast__verified__mul_ToomCook3___closed__0, &lp_fast__verified__mul_ToomCook3___closed__0_once, _init_lp_fast__verified__mul_ToomCook3___closed__0);
v_isNeg_162_ = lean_int_dec_lt(v_w__neg__1_140_, v_intZero_161_);
if (v_isNeg_162_ == 0)
{
lean_object* v_a_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_a_163_ = lean_nat_abs(v_w__neg__1_140_);
v___x_164_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_162_, v_a_163_, v___x_112_);
lean_dec(v_a_163_);
v___x_165_ = lean_nat_to_int(v___x_164_);
v___y_78_ = v_w__neg__1_140_;
v___y_79_ = v_i_114_;
v___y_80_ = v___x_120_;
v___y_81_ = v_r0_136_;
v___y_82_ = v_w1_139_;
v___y_83_ = v___x_159_;
v___y_84_ = v_r4_157_;
v___y_85_ = v_w2_154_;
v___y_86_ = v___x_112_;
v___y_87_ = v___x_144_;
v___y_88_ = v___x_160_;
v___y_89_ = v___x_165_;
goto v___jp_77_;
}
else
{
lean_object* v_abs_166_; lean_object* v_a_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_abs_166_ = lean_nat_abs(v_w__neg__1_140_);
v_a_167_ = lean_nat_sub(v_abs_166_, v___x_112_);
lean_dec(v_abs_166_);
v___x_168_ = lp_mathlib_Nat_shiftLeft_x27(v_isNeg_162_, v_a_167_, v___x_112_);
lean_dec(v_a_167_);
v___x_169_ = lean_int_neg_succ_of_nat(v___x_168_);
v___y_78_ = v_w__neg__1_140_;
v___y_79_ = v_i_114_;
v___y_80_ = v___x_120_;
v___y_81_ = v_r0_136_;
v___y_82_ = v_w1_139_;
v___y_83_ = v___x_159_;
v___y_84_ = v_r4_157_;
v___y_85_ = v_w2_154_;
v___y_86_ = v___x_112_;
v___y_87_ = v___x_144_;
v___y_88_ = v___x_160_;
v___y_89_ = v___x_169_;
goto v___jp_77_;
}
}
else
{
lean_object* v___x_170_; 
lean_dec(v_n_108_);
lean_dec(v_b_105_);
lean_dec(v_a_104_);
v___x_170_ = lean_int_mul(v_a__raw_9_, v_b__raw_10_);
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* lp_fast__verified__mul_ToomCook3___boxed(lean_object* v_a__raw_172_, lean_object* v_b__raw_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = lp_fast__verified__mul_ToomCook3(v_a__raw_172_, v_b__raw_173_);
lean_dec(v_b__raw_173_);
lean_dec(v_a__raw_172_);
return v_res_174_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_fast__verified__mul_fast__verified__mul_toom3(uint8_t builtin) {
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
