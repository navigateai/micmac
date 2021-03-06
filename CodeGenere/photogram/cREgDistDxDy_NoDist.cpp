// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxDy_NoDist.h"


cREgDistDxDy_NoDist::cREgDistDxDy_NoDist():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,3));
   Close(false);
}



void cREgDistDxDy_NoDist::ComputeVal()
{

  mVal[0] = (mLocRegDistxy1_x + mLocRegDistxy2_x) - (mLocRegDistxy3_x + mLocRegDistxy4_x);

  mVal[1] = (mLocRegDistxy1_y + mLocRegDistxy2_y) - (mLocRegDistxy3_y + mLocRegDistxy4_y);

}


void cREgDistDxDy_NoDist::ComputeValDeriv()
{

  mVal[0] = (mLocRegDistxy1_x + mLocRegDistxy2_x) - (mLocRegDistxy3_x + mLocRegDistxy4_x);

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mVal[1] = (mLocRegDistxy1_y + mLocRegDistxy2_y) - (mLocRegDistxy3_y + mLocRegDistxy4_y);

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
}


void cREgDistDxDy_NoDist::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxDy_NoDist Has no Der Sec");
}

void cREgDistDxDy_NoDist::SetRegDistxy1_x(double aVal){ mLocRegDistxy1_x = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy1_y(double aVal){ mLocRegDistxy1_y = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy2_x(double aVal){ mLocRegDistxy2_x = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy2_y(double aVal){ mLocRegDistxy2_y = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy3_x(double aVal){ mLocRegDistxy3_x = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy3_y(double aVal){ mLocRegDistxy3_y = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy4_x(double aVal){ mLocRegDistxy4_x = aVal;}
void cREgDistDxDy_NoDist::SetRegDistxy4_y(double aVal){ mLocRegDistxy4_y = aVal;}



double * cREgDistDxDy_NoDist::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistxy1_x") return & mLocRegDistxy1_x;
   if (aName == "RegDistxy1_y") return & mLocRegDistxy1_y;
   if (aName == "RegDistxy2_x") return & mLocRegDistxy2_x;
   if (aName == "RegDistxy2_y") return & mLocRegDistxy2_y;
   if (aName == "RegDistxy3_x") return & mLocRegDistxy3_x;
   if (aName == "RegDistxy3_y") return & mLocRegDistxy3_y;
   if (aName == "RegDistxy4_x") return & mLocRegDistxy4_x;
   if (aName == "RegDistxy4_y") return & mLocRegDistxy4_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxDy_NoDist::mTheAuto("cREgDistDxDy_NoDist",cREgDistDxDy_NoDist::Alloc);


cElCompiledFonc *  cREgDistDxDy_NoDist::Alloc()
{  return new cREgDistDxDy_NoDist();
}


