// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PTInc_C2MPolyn7.h"


cEqAppui_PTInc_C2MPolyn7::cEqAppui_PTInc_C2MPolyn7():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,69));
   AddIntRef (cIncIntervale("Orient",69,75));
   AddIntRef (cIncIntervale("Tmp_PTer",75,78));
   Close(false);
}



void cEqAppui_PTInc_C2MPolyn7::ComputeVal()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[71];
   double tmp7_ = mCompCoord[75];
   double tmp8_ = mCompCoord[72];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[76];
   double tmp15_ = mCompCoord[73];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[77];
   double tmp18_ = mCompCoord[74];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn7_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn7_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;
   double tmp29_ = tmp24_*(tmp20_);
   double tmp30_ = tmp26_*(tmp20_);
   double tmp31_ = tmp27_*(tmp20_);
   double tmp32_ = tmp28_*(tmp20_);
   double tmp33_ = (tmp21_)*tmp28_;
   double tmp34_ = tmp29_*(tmp20_);
   double tmp35_ = tmp30_*(tmp20_);
   double tmp36_ = tmp31_*(tmp20_);
   double tmp37_ = tmp32_*(tmp20_);
   double tmp38_ = tmp33_*(tmp20_);
   double tmp39_ = (tmp21_)*tmp33_;
   double tmp40_ = tmp34_*(tmp20_);
   double tmp41_ = tmp35_*(tmp20_);
   double tmp42_ = tmp36_*(tmp20_);
   double tmp43_ = tmp37_*(tmp20_);
   double tmp44_ = tmp38_*(tmp20_);
   double tmp45_ = tmp39_*(tmp20_);
   double tmp46_ = (tmp21_)*tmp39_;
   double tmp47_ = mCompCoord[0];
   double tmp48_ = -(tmp3_);
   double tmp49_ = tmp4_*tmp12_;
   double tmp50_ = tmp3_*tmp12_;
   double tmp51_ = tmp48_*tmp11_;
   double tmp52_ = tmp49_*tmp13_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp9_);
   double tmp55_ = tmp4_*tmp11_;
   double tmp56_ = tmp50_*tmp13_;
   double tmp57_ = tmp55_+tmp56_;
   double tmp58_ = (tmp57_)*(tmp16_);
   double tmp59_ = tmp54_+tmp58_;
   double tmp60_ = tmp2_*tmp13_;
   double tmp61_ = tmp60_*(tmp19_);
   double tmp62_ = tmp59_+tmp61_;
   double tmp63_ = mCompCoord[3];
   double tmp64_ = mCompCoord[4];
   double tmp65_ = mCompCoord[5];
   double tmp66_ = (tmp20_)*(tmp21_);
   double tmp67_ = mCompCoord[6];
   double tmp68_ = tmp40_*(tmp20_);
   double tmp69_ = tmp41_*(tmp20_);
   double tmp70_ = tmp42_*(tmp20_);
   double tmp71_ = tmp43_*(tmp20_);
   double tmp72_ = tmp44_*(tmp20_);
   double tmp73_ = tmp45_*(tmp20_);
   double tmp74_ = tmp46_*(tmp20_);
   double tmp75_ = (tmp21_)*tmp46_;

  mVal[0] = (mCompCoord[1]+tmp47_*((tmp4_*tmp2_*(tmp9_)+tmp3_*tmp2_*(tmp16_)+tmp5_*(tmp19_))/(tmp62_)))-((((1+tmp63_)*(tmp20_)+tmp64_*(tmp21_))-tmp65_*2*tmp22_+tmp67_*tmp66_+mCompCoord[7]*tmp23_)*mLocPolyn7_State_0_0+(mCompCoord[9]*tmp24_+mCompCoord[10]*tmp26_+mCompCoord[11]*tmp27_+mCompCoord[12]*tmp28_+mCompCoord[17]*tmp29_+mCompCoord[18]*tmp30_+mCompCoord[19]*tmp31_+mCompCoord[20]*tmp32_+mCompCoord[21]*tmp33_+mCompCoord[27]*tmp34_+mCompCoord[28]*tmp35_+mCompCoord[29]*tmp36_+mCompCoord[30]*tmp37_+mCompCoord[31]*tmp38_+mCompCoord[32]*tmp39_+mCompCoord[39]*tmp40_+mCompCoord[40]*tmp41_+mCompCoord[41]*tmp42_+mCompCoord[42]*tmp43_+mCompCoord[43]*tmp44_+mCompCoord[44]*tmp45_+mCompCoord[45]*tmp46_+mCompCoord[53]*tmp68_+mCompCoord[54]*tmp69_+mCompCoord[55]*tmp70_+mCompCoord[56]*tmp71_+mCompCoord[57]*tmp72_+mCompCoord[58]*tmp73_+mCompCoord[59]*tmp74_+mCompCoord[60]*tmp75_)*mLocPolyn7_State_0_0);

  mVal[1] = (mCompCoord[2]+tmp47_*(((tmp48_*tmp13_+tmp49_*tmp10_)*(tmp9_)+(tmp4_*tmp13_+tmp50_*tmp10_)*(tmp16_)+tmp2_*tmp10_*(tmp19_))/(tmp62_)))-((((1-tmp63_)*(tmp21_)+tmp64_*(tmp20_)+tmp65_*tmp66_)-tmp67_*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn7_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp29_+mCompCoord[23]*tmp30_+mCompCoord[24]*tmp31_+mCompCoord[25]*tmp32_+mCompCoord[26]*tmp33_+mCompCoord[33]*tmp34_+mCompCoord[34]*tmp35_+mCompCoord[35]*tmp36_+mCompCoord[36]*tmp37_+mCompCoord[37]*tmp38_+mCompCoord[38]*tmp39_+mCompCoord[46]*tmp40_+mCompCoord[47]*tmp41_+mCompCoord[48]*tmp42_+mCompCoord[49]*tmp43_+mCompCoord[50]*tmp44_+mCompCoord[51]*tmp45_+mCompCoord[52]*tmp46_+mCompCoord[61]*tmp68_+mCompCoord[62]*tmp69_+mCompCoord[63]*tmp70_+mCompCoord[64]*tmp71_+mCompCoord[65]*tmp72_+mCompCoord[66]*tmp73_+mCompCoord[67]*tmp74_+mCompCoord[68]*tmp75_)*mLocPolyn7_State_0_0);

}


void cEqAppui_PTInc_C2MPolyn7::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[71];
   double tmp7_ = mCompCoord[75];
   double tmp8_ = mCompCoord[72];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[76];
   double tmp15_ = mCompCoord[73];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[77];
   double tmp18_ = mCompCoord[74];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn7_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn7_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;
   double tmp29_ = tmp24_*(tmp20_);
   double tmp30_ = tmp26_*(tmp20_);
   double tmp31_ = tmp27_*(tmp20_);
   double tmp32_ = tmp28_*(tmp20_);
   double tmp33_ = (tmp21_)*tmp28_;
   double tmp34_ = tmp29_*(tmp20_);
   double tmp35_ = tmp30_*(tmp20_);
   double tmp36_ = tmp31_*(tmp20_);
   double tmp37_ = tmp32_*(tmp20_);
   double tmp38_ = tmp33_*(tmp20_);
   double tmp39_ = (tmp21_)*tmp33_;
   double tmp40_ = tmp34_*(tmp20_);
   double tmp41_ = tmp35_*(tmp20_);
   double tmp42_ = tmp36_*(tmp20_);
   double tmp43_ = tmp37_*(tmp20_);
   double tmp44_ = tmp38_*(tmp20_);
   double tmp45_ = tmp39_*(tmp20_);
   double tmp46_ = (tmp21_)*tmp39_;
   double tmp47_ = tmp4_*tmp2_;
   double tmp48_ = tmp47_*(tmp9_);
   double tmp49_ = tmp3_*tmp2_;
   double tmp50_ = tmp49_*(tmp16_);
   double tmp51_ = tmp48_+tmp50_;
   double tmp52_ = tmp5_*(tmp19_);
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = -(tmp3_);
   double tmp55_ = tmp54_*tmp11_;
   double tmp56_ = tmp4_*tmp12_;
   double tmp57_ = tmp56_*tmp13_;
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)*(tmp9_);
   double tmp60_ = tmp4_*tmp11_;
   double tmp61_ = tmp3_*tmp12_;
   double tmp62_ = tmp61_*tmp13_;
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = (tmp63_)*(tmp16_);
   double tmp65_ = tmp59_+tmp64_;
   double tmp66_ = tmp2_*tmp13_;
   double tmp67_ = tmp66_*(tmp19_);
   double tmp68_ = tmp65_+tmp67_;
   double tmp69_ = (tmp53_)/(tmp68_);
   double tmp70_ = (tmp20_)*(tmp21_);
   double tmp71_ = tmp40_*(tmp20_);
   double tmp72_ = tmp41_*(tmp20_);
   double tmp73_ = tmp42_*(tmp20_);
   double tmp74_ = tmp43_*(tmp20_);
   double tmp75_ = tmp44_*(tmp20_);
   double tmp76_ = tmp45_*(tmp20_);
   double tmp77_ = tmp46_*(tmp20_);
   double tmp78_ = (tmp21_)*tmp46_;
   double tmp79_ = -(1);
   double tmp80_ = tmp79_*tmp3_;
   double tmp81_ = mCompCoord[0];
   double tmp82_ = tmp79_*tmp5_;
   double tmp83_ = -(tmp2_);
   double tmp84_ = ElSquare(tmp68_);
   double tmp85_ = -(tmp13_);
   double tmp86_ = tmp79_*tmp10_;
   double tmp87_ = mCompCoord[3];
   double tmp88_ = mCompCoord[4];
   double tmp89_ = mCompCoord[5];
   double tmp90_ = mCompCoord[6];
   double tmp91_ = tmp54_*tmp13_;
   double tmp92_ = tmp56_*tmp10_;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = (tmp93_)*(tmp9_);
   double tmp95_ = tmp4_*tmp13_;
   double tmp96_ = tmp61_*tmp10_;
   double tmp97_ = tmp95_+tmp96_;
   double tmp98_ = (tmp97_)*(tmp16_);
   double tmp99_ = tmp94_+tmp98_;
   double tmp100_ = tmp2_*tmp10_;
   double tmp101_ = tmp100_*(tmp19_);
   double tmp102_ = tmp99_+tmp101_;
   double tmp103_ = (tmp102_)/(tmp68_);
   double tmp104_ = (tmp20_)*mLocPolyn7_State_0_0;
   double tmp105_ = -(tmp104_);
   double tmp106_ = tmp70_*mLocPolyn7_State_0_0;
   double tmp107_ = -(tmp106_);
   double tmp108_ = tmp24_*mLocPolyn7_State_0_0;
   double tmp109_ = -(tmp108_);
   double tmp110_ = tmp26_*mLocPolyn7_State_0_0;
   double tmp111_ = -(tmp110_);
   double tmp112_ = tmp27_*mLocPolyn7_State_0_0;
   double tmp113_ = -(tmp112_);
   double tmp114_ = tmp28_*mLocPolyn7_State_0_0;
   double tmp115_ = -(tmp114_);
   double tmp116_ = tmp29_*mLocPolyn7_State_0_0;
   double tmp117_ = -(tmp116_);
   double tmp118_ = tmp30_*mLocPolyn7_State_0_0;
   double tmp119_ = -(tmp118_);
   double tmp120_ = tmp31_*mLocPolyn7_State_0_0;
   double tmp121_ = -(tmp120_);
   double tmp122_ = tmp32_*mLocPolyn7_State_0_0;
   double tmp123_ = -(tmp122_);
   double tmp124_ = tmp33_*mLocPolyn7_State_0_0;
   double tmp125_ = -(tmp124_);
   double tmp126_ = tmp34_*mLocPolyn7_State_0_0;
   double tmp127_ = -(tmp126_);
   double tmp128_ = tmp35_*mLocPolyn7_State_0_0;
   double tmp129_ = -(tmp128_);
   double tmp130_ = tmp36_*mLocPolyn7_State_0_0;
   double tmp131_ = -(tmp130_);
   double tmp132_ = tmp37_*mLocPolyn7_State_0_0;
   double tmp133_ = -(tmp132_);
   double tmp134_ = tmp38_*mLocPolyn7_State_0_0;
   double tmp135_ = -(tmp134_);
   double tmp136_ = tmp39_*mLocPolyn7_State_0_0;
   double tmp137_ = -(tmp136_);
   double tmp138_ = tmp40_*mLocPolyn7_State_0_0;
   double tmp139_ = -(tmp138_);
   double tmp140_ = tmp41_*mLocPolyn7_State_0_0;
   double tmp141_ = -(tmp140_);
   double tmp142_ = tmp42_*mLocPolyn7_State_0_0;
   double tmp143_ = -(tmp142_);
   double tmp144_ = tmp43_*mLocPolyn7_State_0_0;
   double tmp145_ = -(tmp144_);
   double tmp146_ = tmp44_*mLocPolyn7_State_0_0;
   double tmp147_ = -(tmp146_);
   double tmp148_ = tmp45_*mLocPolyn7_State_0_0;
   double tmp149_ = -(tmp148_);
   double tmp150_ = tmp46_*mLocPolyn7_State_0_0;
   double tmp151_ = -(tmp150_);
   double tmp152_ = tmp71_*mLocPolyn7_State_0_0;
   double tmp153_ = -(tmp152_);
   double tmp154_ = tmp72_*mLocPolyn7_State_0_0;
   double tmp155_ = -(tmp154_);
   double tmp156_ = tmp73_*mLocPolyn7_State_0_0;
   double tmp157_ = -(tmp156_);
   double tmp158_ = tmp74_*mLocPolyn7_State_0_0;
   double tmp159_ = -(tmp158_);
   double tmp160_ = tmp75_*mLocPolyn7_State_0_0;
   double tmp161_ = -(tmp160_);
   double tmp162_ = tmp76_*mLocPolyn7_State_0_0;
   double tmp163_ = -(tmp162_);
   double tmp164_ = tmp77_*mLocPolyn7_State_0_0;
   double tmp165_ = -(tmp164_);
   double tmp166_ = tmp78_*mLocPolyn7_State_0_0;
   double tmp167_ = -(tmp166_);
   double tmp168_ = -(tmp4_);
   double tmp169_ = tmp80_*tmp12_;
   double tmp170_ = tmp168_*tmp11_;
   double tmp171_ = tmp169_*tmp13_;
   double tmp172_ = tmp170_+tmp171_;
   double tmp173_ = (tmp172_)*(tmp9_);
   double tmp174_ = tmp80_*tmp11_;
   double tmp175_ = tmp174_+tmp57_;
   double tmp176_ = (tmp175_)*(tmp16_);
   double tmp177_ = tmp173_+tmp176_;
   double tmp178_ = tmp83_*tmp4_;
   double tmp179_ = tmp83_*tmp3_;
   double tmp180_ = tmp178_*tmp13_;
   double tmp181_ = tmp180_*(tmp9_);
   double tmp182_ = tmp179_*tmp13_;
   double tmp183_ = tmp182_*(tmp16_);
   double tmp184_ = tmp181_+tmp183_;
   double tmp185_ = tmp82_*tmp13_;
   double tmp186_ = tmp185_*(tmp19_);
   double tmp187_ = tmp184_+tmp186_;
   double tmp188_ = tmp85_*tmp54_;
   double tmp189_ = tmp86_*tmp56_;
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = (tmp190_)*(tmp9_);
   double tmp192_ = tmp85_*tmp4_;
   double tmp193_ = tmp86_*tmp61_;
   double tmp194_ = tmp192_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp16_);
   double tmp196_ = tmp191_+tmp195_;
   double tmp197_ = tmp86_*tmp2_;
   double tmp198_ = tmp197_*(tmp19_);
   double tmp199_ = tmp196_+tmp198_;
   double tmp200_ = tmp79_*(tmp58_);
   double tmp201_ = tmp79_*(tmp63_);
   double tmp202_ = tmp79_*tmp66_;

  mVal[0] = (mCompCoord[1]+tmp81_*(tmp69_))-((((1+tmp87_)*(tmp20_)+tmp88_*(tmp21_))-tmp89_*2*tmp22_+tmp90_*tmp70_+mCompCoord[7]*tmp23_)*mLocPolyn7_State_0_0+(mCompCoord[9]*tmp24_+mCompCoord[10]*tmp26_+mCompCoord[11]*tmp27_+mCompCoord[12]*tmp28_+mCompCoord[17]*tmp29_+mCompCoord[18]*tmp30_+mCompCoord[19]*tmp31_+mCompCoord[20]*tmp32_+mCompCoord[21]*tmp33_+mCompCoord[27]*tmp34_+mCompCoord[28]*tmp35_+mCompCoord[29]*tmp36_+mCompCoord[30]*tmp37_+mCompCoord[31]*tmp38_+mCompCoord[32]*tmp39_+mCompCoord[39]*tmp40_+mCompCoord[40]*tmp41_+mCompCoord[41]*tmp42_+mCompCoord[42]*tmp43_+mCompCoord[43]*tmp44_+mCompCoord[44]*tmp45_+mCompCoord[45]*tmp46_+mCompCoord[53]*tmp71_+mCompCoord[54]*tmp72_+mCompCoord[55]*tmp73_+mCompCoord[56]*tmp74_+mCompCoord[57]*tmp75_+mCompCoord[58]*tmp76_+mCompCoord[59]*tmp77_+mCompCoord[60]*tmp78_)*mLocPolyn7_State_0_0);

  mCompDer[0][0] = tmp69_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp105_;
  mCompDer[0][4] = -((tmp21_)*mLocPolyn7_State_0_0);
  mCompDer[0][5] = -(-(2*tmp22_)*mLocPolyn7_State_0_0);
  mCompDer[0][6] = tmp107_;
  mCompDer[0][7] = -(tmp23_*mLocPolyn7_State_0_0);
  mCompDer[0][8] = 0;
  mCompDer[0][9] = tmp109_;
  mCompDer[0][10] = tmp111_;
  mCompDer[0][11] = tmp113_;
  mCompDer[0][12] = tmp115_;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = tmp117_;
  mCompDer[0][18] = tmp119_;
  mCompDer[0][19] = tmp121_;
  mCompDer[0][20] = tmp123_;
  mCompDer[0][21] = tmp125_;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = tmp127_;
  mCompDer[0][28] = tmp129_;
  mCompDer[0][29] = tmp131_;
  mCompDer[0][30] = tmp133_;
  mCompDer[0][31] = tmp135_;
  mCompDer[0][32] = tmp137_;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = tmp139_;
  mCompDer[0][40] = tmp141_;
  mCompDer[0][41] = tmp143_;
  mCompDer[0][42] = tmp145_;
  mCompDer[0][43] = tmp147_;
  mCompDer[0][44] = tmp149_;
  mCompDer[0][45] = tmp151_;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = 0;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = 0;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = 0;
  mCompDer[0][52] = 0;
  mCompDer[0][53] = tmp153_;
  mCompDer[0][54] = tmp155_;
  mCompDer[0][55] = tmp157_;
  mCompDer[0][56] = tmp159_;
  mCompDer[0][57] = tmp161_;
  mCompDer[0][58] = tmp163_;
  mCompDer[0][59] = tmp165_;
  mCompDer[0][60] = tmp167_;
  mCompDer[0][61] = 0;
  mCompDer[0][62] = 0;
  mCompDer[0][63] = 0;
  mCompDer[0][64] = 0;
  mCompDer[0][65] = 0;
  mCompDer[0][66] = 0;
  mCompDer[0][67] = 0;
  mCompDer[0][68] = 0;
  mCompDer[0][69] = (((tmp80_*tmp2_*(tmp9_)+tmp47_*(tmp16_))*(tmp68_)-(tmp53_)*(tmp177_))/tmp84_)*tmp81_;
  mCompDer[0][70] = (((tmp82_*tmp4_*(tmp9_)+tmp82_*tmp3_*(tmp16_)+tmp2_*(tmp19_))*(tmp68_)-(tmp53_)*(tmp187_))/tmp84_)*tmp81_;
  mCompDer[0][71] = (-((tmp53_)*(tmp199_))/tmp84_)*tmp81_;
  mCompDer[0][72] = ((tmp79_*tmp47_*(tmp68_)-(tmp53_)*tmp200_)/tmp84_)*tmp81_;
  mCompDer[0][73] = ((tmp79_*tmp49_*(tmp68_)-(tmp53_)*tmp201_)/tmp84_)*tmp81_;
  mCompDer[0][74] = ((tmp82_*(tmp68_)-(tmp53_)*tmp202_)/tmp84_)*tmp81_;
  mCompDer[0][75] = ((tmp47_*(tmp68_)-(tmp53_)*(tmp58_))/tmp84_)*tmp81_;
  mCompDer[0][76] = ((tmp49_*(tmp68_)-(tmp53_)*(tmp63_))/tmp84_)*tmp81_;
  mCompDer[0][77] = ((tmp5_*(tmp68_)-(tmp53_)*tmp66_)/tmp84_)*tmp81_;
  mVal[1] = (mCompCoord[2]+tmp81_*(tmp103_))-((((1-tmp87_)*(tmp21_)+tmp88_*(tmp20_)+tmp89_*tmp70_)-tmp90_*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn7_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp29_+mCompCoord[23]*tmp30_+mCompCoord[24]*tmp31_+mCompCoord[25]*tmp32_+mCompCoord[26]*tmp33_+mCompCoord[33]*tmp34_+mCompCoord[34]*tmp35_+mCompCoord[35]*tmp36_+mCompCoord[36]*tmp37_+mCompCoord[37]*tmp38_+mCompCoord[38]*tmp39_+mCompCoord[46]*tmp40_+mCompCoord[47]*tmp41_+mCompCoord[48]*tmp42_+mCompCoord[49]*tmp43_+mCompCoord[50]*tmp44_+mCompCoord[51]*tmp45_+mCompCoord[52]*tmp46_+mCompCoord[61]*tmp71_+mCompCoord[62]*tmp72_+mCompCoord[63]*tmp73_+mCompCoord[64]*tmp74_+mCompCoord[65]*tmp75_+mCompCoord[66]*tmp76_+mCompCoord[67]*tmp77_+mCompCoord[68]*tmp78_)*mLocPolyn7_State_0_0);

  mCompDer[1][0] = tmp103_;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 1;
  mCompDer[1][3] = -(tmp79_*(tmp21_)*mLocPolyn7_State_0_0);
  mCompDer[1][4] = tmp105_;
  mCompDer[1][5] = tmp107_;
  mCompDer[1][6] = -(-(2*tmp23_)*mLocPolyn7_State_0_0);
  mCompDer[1][7] = 0;
  mCompDer[1][8] = -(tmp22_*mLocPolyn7_State_0_0);
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = tmp109_;
  mCompDer[1][14] = tmp111_;
  mCompDer[1][15] = tmp113_;
  mCompDer[1][16] = tmp115_;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = tmp117_;
  mCompDer[1][23] = tmp119_;
  mCompDer[1][24] = tmp121_;
  mCompDer[1][25] = tmp123_;
  mCompDer[1][26] = tmp125_;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = tmp127_;
  mCompDer[1][34] = tmp129_;
  mCompDer[1][35] = tmp131_;
  mCompDer[1][36] = tmp133_;
  mCompDer[1][37] = tmp135_;
  mCompDer[1][38] = tmp137_;
  mCompDer[1][39] = 0;
  mCompDer[1][40] = 0;
  mCompDer[1][41] = 0;
  mCompDer[1][42] = 0;
  mCompDer[1][43] = 0;
  mCompDer[1][44] = 0;
  mCompDer[1][45] = 0;
  mCompDer[1][46] = tmp139_;
  mCompDer[1][47] = tmp141_;
  mCompDer[1][48] = tmp143_;
  mCompDer[1][49] = tmp145_;
  mCompDer[1][50] = tmp147_;
  mCompDer[1][51] = tmp149_;
  mCompDer[1][52] = tmp151_;
  mCompDer[1][53] = 0;
  mCompDer[1][54] = 0;
  mCompDer[1][55] = 0;
  mCompDer[1][56] = 0;
  mCompDer[1][57] = 0;
  mCompDer[1][58] = 0;
  mCompDer[1][59] = 0;
  mCompDer[1][60] = 0;
  mCompDer[1][61] = tmp153_;
  mCompDer[1][62] = tmp155_;
  mCompDer[1][63] = tmp157_;
  mCompDer[1][64] = tmp159_;
  mCompDer[1][65] = tmp161_;
  mCompDer[1][66] = tmp163_;
  mCompDer[1][67] = tmp165_;
  mCompDer[1][68] = tmp167_;
  mCompDer[1][69] = ((((tmp168_*tmp13_+tmp169_*tmp10_)*(tmp9_)+(tmp80_*tmp13_+tmp92_)*(tmp16_))*(tmp68_)-(tmp102_)*(tmp177_))/tmp84_)*tmp81_;
  mCompDer[1][70] = (((tmp178_*tmp10_*(tmp9_)+tmp179_*tmp10_*(tmp16_)+tmp82_*tmp10_*(tmp19_))*(tmp68_)-(tmp102_)*(tmp187_))/tmp84_)*tmp81_;
  mCompDer[1][71] = ((((tmp86_*tmp54_+tmp13_*tmp56_)*(tmp9_)+(tmp86_*tmp4_+tmp13_*tmp61_)*(tmp16_)+tmp13_*tmp2_*(tmp19_))*(tmp68_)-(tmp102_)*(tmp199_))/tmp84_)*tmp81_;
  mCompDer[1][72] = ((tmp79_*(tmp93_)*(tmp68_)-(tmp102_)*tmp200_)/tmp84_)*tmp81_;
  mCompDer[1][73] = ((tmp79_*(tmp97_)*(tmp68_)-(tmp102_)*tmp201_)/tmp84_)*tmp81_;
  mCompDer[1][74] = ((tmp79_*tmp100_*(tmp68_)-(tmp102_)*tmp202_)/tmp84_)*tmp81_;
  mCompDer[1][75] = (((tmp93_)*(tmp68_)-(tmp102_)*(tmp58_))/tmp84_)*tmp81_;
  mCompDer[1][76] = (((tmp97_)*(tmp68_)-(tmp102_)*(tmp63_))/tmp84_)*tmp81_;
  mCompDer[1][77] = ((tmp100_*(tmp68_)-(tmp102_)*tmp66_)/tmp84_)*tmp81_;
}


void cEqAppui_PTInc_C2MPolyn7::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PTInc_C2MPolyn7 Has no Der Sec");
}

void cEqAppui_PTInc_C2MPolyn7::SetPolyn7_State_0_0(double aVal){ mLocPolyn7_State_0_0 = aVal;}
void cEqAppui_PTInc_C2MPolyn7::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PTInc_C2MPolyn7::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PTInc_C2MPolyn7::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn7_State_0_0") return & mLocPolyn7_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PTInc_C2MPolyn7::mTheAuto("cEqAppui_PTInc_C2MPolyn7",cEqAppui_PTInc_C2MPolyn7::Alloc);


cElCompiledFonc *  cEqAppui_PTInc_C2MPolyn7::Alloc()
{  return new cEqAppui_PTInc_C2MPolyn7();
}


