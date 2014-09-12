// #include "general/all.h"
// #include "private/all.h"
// #include "XML_GEN/SuperposImage.h"
#include "StdAfx.h"
//
eTypeSurfaceAnalytique  Str2eTypeSurfaceAnalytique(const std::string & aName)
{
   if (aName=="eTSA_CylindreRevolution")
      return eTSA_CylindreRevolution;
  else
  {
      cout << aName << " is not a correct value for enum eTypeSurfaceAnalytique\n" ;
      ELISE_ASSERT(false,"XML enum value error");
  }
  return (eTypeSurfaceAnalytique) 0;
}
void xml_init(eTypeSurfaceAnalytique & aVal,cElXMLTree * aTree)
{
   aVal= Str2eTypeSurfaceAnalytique(aTree->Contenu());
}
std::string  eToString(const eTypeSurfaceAnalytique & anObj)
{
   if (anObj==eTSA_CylindreRevolution)
      return  "eTSA_CylindreRevolution";
 std::cout << "Enum = eTypeSurfaceAnalytique\n";
   ELISE_ASSERT(false,"Bad Value in eToString for enum value ");
   return "";
}

cElXMLTree * ToXMLTree(const std::string & aNameTag,const eTypeSurfaceAnalytique & anObj)
{
      return  cElXMLTree::ValueNode(aNameTag,eToString(anObj));
}

void  BinaryDumpInFile(ELISE_fp & aFp,const eTypeSurfaceAnalytique & anObj)
{
   BinaryDumpInFile(aFp,int(anObj));
}

void  BinaryUnDumpFromFile(eTypeSurfaceAnalytique & anObj,ELISE_fp & aFp)
{
   int aIVal;
   BinaryUnDumpFromFile(aIVal,aFp);
   anObj=(eTypeSurfaceAnalytique) aIVal;
}

std::string  Mangling( eTypeSurfaceAnalytique *) {return "0EE3E44D0D8D66C2FD3F";};

eModeBoxFusion  Str2eModeBoxFusion(const std::string & aName)
{
   if (aName=="eMBF_Union")
      return eMBF_Union;
   else if (aName=="eMBF_Inter")
      return eMBF_Inter;
   else if (aName=="eMBF_First")
      return eMBF_First;
  else
  {
      cout << aName << " is not a correct value for enum eModeBoxFusion\n" ;
      ELISE_ASSERT(false,"XML enum value error");
  }
  return (eModeBoxFusion) 0;
}
void xml_init(eModeBoxFusion & aVal,cElXMLTree * aTree)
{
   aVal= Str2eModeBoxFusion(aTree->Contenu());
}
std::string  eToString(const eModeBoxFusion & anObj)
{
   if (anObj==eMBF_Union)
      return  "eMBF_Union";
   if (anObj==eMBF_Inter)
      return  "eMBF_Inter";
   if (anObj==eMBF_First)
      return  "eMBF_First";
 std::cout << "Enum = eModeBoxFusion\n";
   ELISE_ASSERT(false,"Bad Value in eToString for enum value ");
   return "";
}

cElXMLTree * ToXMLTree(const std::string & aNameTag,const eModeBoxFusion & anObj)
{
      return  cElXMLTree::ValueNode(aNameTag,eToString(anObj));
}

void  BinaryDumpInFile(ELISE_fp & aFp,const eModeBoxFusion & anObj)
{
   BinaryDumpInFile(aFp,int(anObj));
}

void  BinaryUnDumpFromFile(eModeBoxFusion & anObj,ELISE_fp & aFp)
{
   int aIVal;
   BinaryUnDumpFromFile(aIVal,aFp);
   anObj=(eModeBoxFusion) aIVal;
}

std::string  Mangling( eModeBoxFusion *) {return "E4601E61E16B99AAFCBF";};


int & cIntervLutConvertion::NivIn()
{
   return mNivIn;
}

const int & cIntervLutConvertion::NivIn()const 
{
   return mNivIn;
}


int & cIntervLutConvertion::NivOut()
{
   return mNivOut;
}

const int & cIntervLutConvertion::NivOut()const 
{
   return mNivOut;
}

void  BinaryUnDumpFromFile(cIntervLutConvertion & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NivIn(),aFp);
    BinaryUnDumpFromFile(anObj.NivOut(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cIntervLutConvertion & anObj)
{
    BinaryDumpInFile(aFp,anObj.NivIn());
    BinaryDumpInFile(aFp,anObj.NivOut());
}

cElXMLTree * ToXMLTree(const cIntervLutConvertion & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"IntervLutConvertion",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NivIn"),anObj.NivIn())->ReTagThis("NivIn"));
   aRes->AddFils(::ToXMLTree(std::string("NivOut"),anObj.NivOut())->ReTagThis("NivOut"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cIntervLutConvertion & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NivIn(),aTree->Get("NivIn",1)); //tototo 

   xml_init(anObj.NivOut(),aTree->Get("NivOut",1)); //tototo 
}

std::string  Mangling( cIntervLutConvertion *) {return "1A1F20AD55FCE5C1FD3F";};


std::vector< cIntervLutConvertion > & cLutConvertion::IntervLutConvertion()
{
   return mIntervLutConvertion;
}

const std::vector< cIntervLutConvertion > & cLutConvertion::IntervLutConvertion()const 
{
   return mIntervLutConvertion;
}

void  BinaryUnDumpFromFile(cLutConvertion & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cIntervLutConvertion aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.IntervLutConvertion().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cLutConvertion & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.IntervLutConvertion().size());
    for(  std::vector< cIntervLutConvertion >::const_iterator iT=anObj.IntervLutConvertion().begin();
         iT!=anObj.IntervLutConvertion().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cLutConvertion & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"LutConvertion",eXMLBranche);
  for
  (       std::vector< cIntervLutConvertion >::const_iterator it=anObj.IntervLutConvertion().begin();
      it !=anObj.IntervLutConvertion().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("IntervLutConvertion"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cLutConvertion & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.IntervLutConvertion(),aTree->GetAll("IntervLutConvertion",false,1));
}

std::string  Mangling( cLutConvertion *) {return "60FE1AB73BA0CCE1FDBF";};


cTplValGesInit< std::string > & cWindowSelection::AllPts()
{
   return mAllPts;
}

const cTplValGesInit< std::string > & cWindowSelection::AllPts()const 
{
   return mAllPts;
}


cTplValGesInit< std::string > & cWindowSelection::PtsCenter()
{
   return mPtsCenter;
}

const cTplValGesInit< std::string > & cWindowSelection::PtsCenter()const 
{
   return mPtsCenter;
}


cTplValGesInit< double > & cWindowSelection::Percent()
{
   return mPercent;
}

const cTplValGesInit< double > & cWindowSelection::Percent()const 
{
   return mPercent;
}

void  BinaryUnDumpFromFile(cWindowSelection & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AllPts().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AllPts().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AllPts().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PtsCenter().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PtsCenter().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PtsCenter().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Percent().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Percent().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Percent().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cWindowSelection & anObj)
{
    BinaryDumpInFile(aFp,anObj.AllPts().IsInit());
    if (anObj.AllPts().IsInit()) BinaryDumpInFile(aFp,anObj.AllPts().Val());
    BinaryDumpInFile(aFp,anObj.PtsCenter().IsInit());
    if (anObj.PtsCenter().IsInit()) BinaryDumpInFile(aFp,anObj.PtsCenter().Val());
    BinaryDumpInFile(aFp,anObj.Percent().IsInit());
    if (anObj.Percent().IsInit()) BinaryDumpInFile(aFp,anObj.Percent().Val());
}

cElXMLTree * ToXMLTree(const cWindowSelection & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"WindowSelection",eXMLBranche);
   if (anObj.AllPts().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AllPts"),anObj.AllPts().Val())->ReTagThis("AllPts"));
   if (anObj.PtsCenter().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PtsCenter"),anObj.PtsCenter().Val())->ReTagThis("PtsCenter"));
   if (anObj.Percent().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Percent"),anObj.Percent().Val())->ReTagThis("Percent"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cWindowSelection & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.AllPts(),aTree->Get("AllPts",1)); //tototo 

   xml_init(anObj.PtsCenter(),aTree->Get("PtsCenter",1)); //tototo 

   xml_init(anObj.Percent(),aTree->Get("Percent",1)); //tototo 
}

std::string  Mangling( cWindowSelection *) {return "D95D9F3B25C7C2CAFE3F";};


std::string & cMasqTerrain::Image()
{
   return mImage;
}

const std::string & cMasqTerrain::Image()const 
{
   return mImage;
}


std::string & cMasqTerrain::XML()
{
   return mXML;
}

const std::string & cMasqTerrain::XML()const 
{
   return mXML;
}


cWindowSelection & cMasqTerrain::SelectPts()
{
   return mSelectPts;
}

const cWindowSelection & cMasqTerrain::SelectPts()const 
{
   return mSelectPts;
}

void  BinaryUnDumpFromFile(cMasqTerrain & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Image(),aFp);
    BinaryUnDumpFromFile(anObj.XML(),aFp);
    BinaryUnDumpFromFile(anObj.SelectPts(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMasqTerrain & anObj)
{
    BinaryDumpInFile(aFp,anObj.Image());
    BinaryDumpInFile(aFp,anObj.XML());
    BinaryDumpInFile(aFp,anObj.SelectPts());
}

cElXMLTree * ToXMLTree(const cMasqTerrain & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MasqTerrain",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Image"),anObj.Image())->ReTagThis("Image"));
   aRes->AddFils(::ToXMLTree(std::string("XML"),anObj.XML())->ReTagThis("XML"));
   aRes->AddFils(ToXMLTree(anObj.SelectPts())->ReTagThis("SelectPts"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMasqTerrain & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Image(),aTree->Get("Image",1)); //tototo 

   xml_init(anObj.XML(),aTree->Get("XML",1)); //tototo 

   xml_init(anObj.SelectPts(),aTree->Get("SelectPts",1)); //tototo 
}

std::string  Mangling( cMasqTerrain *) {return "A63654E2DFFB2999FB3F";};


Pt2di & cBoxPixMort::HautG()
{
   return mHautG;
}

const Pt2di & cBoxPixMort::HautG()const 
{
   return mHautG;
}


Pt2di & cBoxPixMort::BasD()
{
   return mBasD;
}

const Pt2di & cBoxPixMort::BasD()const 
{
   return mBasD;
}

void  BinaryUnDumpFromFile(cBoxPixMort & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.HautG(),aFp);
    BinaryUnDumpFromFile(anObj.BasD(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cBoxPixMort & anObj)
{
    BinaryDumpInFile(aFp,anObj.HautG());
    BinaryDumpInFile(aFp,anObj.BasD());
}

cElXMLTree * ToXMLTree(const cBoxPixMort & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"BoxPixMort",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("HautG"),anObj.HautG())->ReTagThis("HautG"));
   aRes->AddFils(::ToXMLTree(std::string("BasD"),anObj.BasD())->ReTagThis("BasD"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cBoxPixMort & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.HautG(),aTree->Get("HautG",1)); //tototo 

   xml_init(anObj.BasD(),aTree->Get("BasD",1)); //tototo 
}

std::string  Mangling( cBoxPixMort *) {return "4D109CC2D463E6A7FE3F";};


std::string & cFlattField::NameFile()
{
   return mNameFile;
}

const std::string & cFlattField::NameFile()const 
{
   return mNameFile;
}


std::vector< double > & cFlattField::RefValue()
{
   return mRefValue;
}

const std::vector< double > & cFlattField::RefValue()const 
{
   return mRefValue;
}

void  BinaryUnDumpFromFile(cFlattField & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameFile(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             double aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.RefValue().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFlattField & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameFile());
    BinaryDumpInFile(aFp,(int)anObj.RefValue().size());
    for(  std::vector< double >::const_iterator iT=anObj.RefValue().begin();
         iT!=anObj.RefValue().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cFlattField & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"FlattField",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameFile"),anObj.NameFile())->ReTagThis("NameFile"));
  for
  (       std::vector< double >::const_iterator it=anObj.RefValue().begin();
      it !=anObj.RefValue().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("RefValue"),(*it))->ReTagThis("RefValue"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFlattField & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameFile(),aTree->Get("NameFile",1)); //tototo 

   xml_init(anObj.RefValue(),aTree->GetAll("RefValue",false,1));
}

std::string  Mangling( cFlattField *) {return "1D9EE6CA5CE3F4D4FE3F";};


cTplValGesInit< double > & cChannelCmpCol::Dyn()
{
   return mDyn;
}

const cTplValGesInit< double > & cChannelCmpCol::Dyn()const 
{
   return mDyn;
}


cTplValGesInit< double > & cChannelCmpCol::Offset()
{
   return mOffset;
}

const cTplValGesInit< double > & cChannelCmpCol::Offset()const 
{
   return mOffset;
}


int & cChannelCmpCol::In()
{
   return mIn;
}

const int & cChannelCmpCol::In()const 
{
   return mIn;
}


int & cChannelCmpCol::Out()
{
   return mOut;
}

const int & cChannelCmpCol::Out()const 
{
   return mOut;
}


cTplValGesInit< double > & cChannelCmpCol::Pds()
{
   return mPds;
}

const cTplValGesInit< double > & cChannelCmpCol::Pds()const 
{
   return mPds;
}


cTplValGesInit< double > & cChannelCmpCol::ParamBiCub()
{
   return mParamBiCub;
}

const cTplValGesInit< double > & cChannelCmpCol::ParamBiCub()const 
{
   return mParamBiCub;
}

void  BinaryUnDumpFromFile(cChannelCmpCol & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Dyn().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Dyn().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Dyn().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Offset().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Offset().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Offset().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.In(),aFp);
    BinaryUnDumpFromFile(anObj.Out(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Pds().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Pds().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Pds().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ParamBiCub().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ParamBiCub().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ParamBiCub().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cChannelCmpCol & anObj)
{
    BinaryDumpInFile(aFp,anObj.Dyn().IsInit());
    if (anObj.Dyn().IsInit()) BinaryDumpInFile(aFp,anObj.Dyn().Val());
    BinaryDumpInFile(aFp,anObj.Offset().IsInit());
    if (anObj.Offset().IsInit()) BinaryDumpInFile(aFp,anObj.Offset().Val());
    BinaryDumpInFile(aFp,anObj.In());
    BinaryDumpInFile(aFp,anObj.Out());
    BinaryDumpInFile(aFp,anObj.Pds().IsInit());
    if (anObj.Pds().IsInit()) BinaryDumpInFile(aFp,anObj.Pds().Val());
    BinaryDumpInFile(aFp,anObj.ParamBiCub().IsInit());
    if (anObj.ParamBiCub().IsInit()) BinaryDumpInFile(aFp,anObj.ParamBiCub().Val());
}

cElXMLTree * ToXMLTree(const cChannelCmpCol & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ChannelCmpCol",eXMLBranche);
   if (anObj.Dyn().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Dyn"),anObj.Dyn().Val())->ReTagThis("Dyn"));
   if (anObj.Offset().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Offset"),anObj.Offset().Val())->ReTagThis("Offset"));
   aRes->AddFils(::ToXMLTree(std::string("In"),anObj.In())->ReTagThis("In"));
   aRes->AddFils(::ToXMLTree(std::string("Out"),anObj.Out())->ReTagThis("Out"));
   if (anObj.Pds().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Pds"),anObj.Pds().Val())->ReTagThis("Pds"));
   if (anObj.ParamBiCub().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ParamBiCub"),anObj.ParamBiCub().Val())->ReTagThis("ParamBiCub"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cChannelCmpCol & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Dyn(),aTree->Get("Dyn",1),double(1.0)); //tototo 

   xml_init(anObj.Offset(),aTree->Get("Offset",1),double(0.0)); //tototo 

   xml_init(anObj.In(),aTree->Get("In",1)); //tototo 

   xml_init(anObj.Out(),aTree->Get("Out",1)); //tototo 

   xml_init(anObj.Pds(),aTree->Get("Pds",1),double(1.0)); //tototo 

   xml_init(anObj.ParamBiCub(),aTree->Get("ParamBiCub",1)); //tototo 
}

std::string  Mangling( cChannelCmpCol *) {return "84E388AF34220FD8FCBF";};


std::string & cImageCmpCol::NameOrKey()
{
   return mNameOrKey;
}

const std::string & cImageCmpCol::NameOrKey()const 
{
   return mNameOrKey;
}


cTplValGesInit< eTypeNumerique > & cImageCmpCol::TypeTmpIn()
{
   return mTypeTmpIn;
}

const cTplValGesInit< eTypeNumerique > & cImageCmpCol::TypeTmpIn()const 
{
   return mTypeTmpIn;
}


cTplValGesInit< std::string > & cImageCmpCol::KeyCalcNameImOfGeom()
{
   return mKeyCalcNameImOfGeom;
}

const cTplValGesInit< std::string > & cImageCmpCol::KeyCalcNameImOfGeom()const 
{
   return mKeyCalcNameImOfGeom;
}


Pt2di & cImageCmpCol::HautG()
{
   return BoxPixMort().Val().HautG();
}

const Pt2di & cImageCmpCol::HautG()const 
{
   return BoxPixMort().Val().HautG();
}


Pt2di & cImageCmpCol::BasD()
{
   return BoxPixMort().Val().BasD();
}

const Pt2di & cImageCmpCol::BasD()const 
{
   return BoxPixMort().Val().BasD();
}


cTplValGesInit< cBoxPixMort > & cImageCmpCol::BoxPixMort()
{
   return mBoxPixMort;
}

const cTplValGesInit< cBoxPixMort > & cImageCmpCol::BoxPixMort()const 
{
   return mBoxPixMort;
}


std::string & cImageCmpCol::NameFile()
{
   return FlattField().Val().NameFile();
}

const std::string & cImageCmpCol::NameFile()const 
{
   return FlattField().Val().NameFile();
}


std::vector< double > & cImageCmpCol::RefValue()
{
   return FlattField().Val().RefValue();
}

const std::vector< double > & cImageCmpCol::RefValue()const 
{
   return FlattField().Val().RefValue();
}


cTplValGesInit< cFlattField > & cImageCmpCol::FlattField()
{
   return mFlattField;
}

const cTplValGesInit< cFlattField > & cImageCmpCol::FlattField()const 
{
   return mFlattField;
}


std::list< cChannelCmpCol > & cImageCmpCol::ChannelCmpCol()
{
   return mChannelCmpCol;
}

const std::list< cChannelCmpCol > & cImageCmpCol::ChannelCmpCol()const 
{
   return mChannelCmpCol;
}


cTplValGesInit< int > & cImageCmpCol::NbFilter()
{
   return mNbFilter;
}

const cTplValGesInit< int > & cImageCmpCol::NbFilter()const 
{
   return mNbFilter;
}


cTplValGesInit< int > & cImageCmpCol::SzFilter()
{
   return mSzFilter;
}

const cTplValGesInit< int > & cImageCmpCol::SzFilter()const 
{
   return mSzFilter;
}

void  BinaryUnDumpFromFile(cImageCmpCol & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameOrKey(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TypeTmpIn().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TypeTmpIn().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TypeTmpIn().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KeyCalcNameImOfGeom().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KeyCalcNameImOfGeom().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KeyCalcNameImOfGeom().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.BoxPixMort().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.BoxPixMort().ValForcedForUnUmp(),aFp);
        }
        else  anObj.BoxPixMort().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FlattField().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FlattField().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FlattField().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cChannelCmpCol aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.ChannelCmpCol().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbFilter().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbFilter().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbFilter().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzFilter().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzFilter().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzFilter().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImageCmpCol & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameOrKey());
    BinaryDumpInFile(aFp,anObj.TypeTmpIn().IsInit());
    if (anObj.TypeTmpIn().IsInit()) BinaryDumpInFile(aFp,anObj.TypeTmpIn().Val());
    BinaryDumpInFile(aFp,anObj.KeyCalcNameImOfGeom().IsInit());
    if (anObj.KeyCalcNameImOfGeom().IsInit()) BinaryDumpInFile(aFp,anObj.KeyCalcNameImOfGeom().Val());
    BinaryDumpInFile(aFp,anObj.BoxPixMort().IsInit());
    if (anObj.BoxPixMort().IsInit()) BinaryDumpInFile(aFp,anObj.BoxPixMort().Val());
    BinaryDumpInFile(aFp,anObj.FlattField().IsInit());
    if (anObj.FlattField().IsInit()) BinaryDumpInFile(aFp,anObj.FlattField().Val());
    BinaryDumpInFile(aFp,(int)anObj.ChannelCmpCol().size());
    for(  std::list< cChannelCmpCol >::const_iterator iT=anObj.ChannelCmpCol().begin();
         iT!=anObj.ChannelCmpCol().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.NbFilter().IsInit());
    if (anObj.NbFilter().IsInit()) BinaryDumpInFile(aFp,anObj.NbFilter().Val());
    BinaryDumpInFile(aFp,anObj.SzFilter().IsInit());
    if (anObj.SzFilter().IsInit()) BinaryDumpInFile(aFp,anObj.SzFilter().Val());
}

cElXMLTree * ToXMLTree(const cImageCmpCol & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImageCmpCol",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameOrKey"),anObj.NameOrKey())->ReTagThis("NameOrKey"));
   if (anObj.TypeTmpIn().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TypeTmpIn"),anObj.TypeTmpIn().Val())->ReTagThis("TypeTmpIn"));
   if (anObj.KeyCalcNameImOfGeom().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KeyCalcNameImOfGeom"),anObj.KeyCalcNameImOfGeom().Val())->ReTagThis("KeyCalcNameImOfGeom"));
   if (anObj.BoxPixMort().IsInit())
      aRes->AddFils(ToXMLTree(anObj.BoxPixMort().Val())->ReTagThis("BoxPixMort"));
   if (anObj.FlattField().IsInit())
      aRes->AddFils(ToXMLTree(anObj.FlattField().Val())->ReTagThis("FlattField"));
  for
  (       std::list< cChannelCmpCol >::const_iterator it=anObj.ChannelCmpCol().begin();
      it !=anObj.ChannelCmpCol().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("ChannelCmpCol"));
   if (anObj.NbFilter().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbFilter"),anObj.NbFilter().Val())->ReTagThis("NbFilter"));
   if (anObj.SzFilter().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzFilter"),anObj.SzFilter().Val())->ReTagThis("SzFilter"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImageCmpCol & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameOrKey(),aTree->Get("NameOrKey",1)); //tototo 

   xml_init(anObj.TypeTmpIn(),aTree->Get("TypeTmpIn",1)); //tototo 

   xml_init(anObj.KeyCalcNameImOfGeom(),aTree->Get("KeyCalcNameImOfGeom",1)); //tototo 

   xml_init(anObj.BoxPixMort(),aTree->Get("BoxPixMort",1)); //tototo 

   xml_init(anObj.FlattField(),aTree->Get("FlattField",1)); //tototo 

   xml_init(anObj.ChannelCmpCol(),aTree->GetAll("ChannelCmpCol",false,1));

   xml_init(anObj.NbFilter(),aTree->Get("NbFilter",1),int(0)); //tototo 

   xml_init(anObj.SzFilter(),aTree->Get("SzFilter",1),int(1)); //tototo 
}

std::string  Mangling( cImageCmpCol *) {return "D859AFB5EE7F34ECFB3F";};


std::vector< int > & cShowCalibsRel::Channel()
{
   return mChannel;
}

const std::vector< int > & cShowCalibsRel::Channel()const 
{
   return mChannel;
}


cTplValGesInit< double > & cShowCalibsRel::MaxRatio()
{
   return mMaxRatio;
}

const cTplValGesInit< double > & cShowCalibsRel::MaxRatio()const 
{
   return mMaxRatio;
}

void  BinaryUnDumpFromFile(cShowCalibsRel & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             int aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.Channel().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MaxRatio().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MaxRatio().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MaxRatio().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cShowCalibsRel & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.Channel().size());
    for(  std::vector< int >::const_iterator iT=anObj.Channel().begin();
         iT!=anObj.Channel().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.MaxRatio().IsInit());
    if (anObj.MaxRatio().IsInit()) BinaryDumpInFile(aFp,anObj.MaxRatio().Val());
}

cElXMLTree * ToXMLTree(const cShowCalibsRel & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ShowCalibsRel",eXMLBranche);
  for
  (       std::vector< int >::const_iterator it=anObj.Channel().begin();
      it !=anObj.Channel().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("Channel"),(*it))->ReTagThis("Channel"));
   if (anObj.MaxRatio().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("MaxRatio"),anObj.MaxRatio().Val())->ReTagThis("MaxRatio"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cShowCalibsRel & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Channel(),aTree->GetAll("Channel",false,1));

   xml_init(anObj.MaxRatio(),aTree->Get("MaxRatio",1),double(2.0)); //tototo 
}

std::string  Mangling( cShowCalibsRel *) {return "DDFC2322DC56799BFD3F";};


cTplValGesInit< int > & cImResultCC_Gray::Channel()
{
   return mChannel;
}

const cTplValGesInit< int > & cImResultCC_Gray::Channel()const 
{
   return mChannel;
}

void  BinaryUnDumpFromFile(cImResultCC_Gray & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Channel().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Channel().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Channel().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC_Gray & anObj)
{
    BinaryDumpInFile(aFp,anObj.Channel().IsInit());
    if (anObj.Channel().IsInit()) BinaryDumpInFile(aFp,anObj.Channel().Val());
}

cElXMLTree * ToXMLTree(const cImResultCC_Gray & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC_Gray",eXMLBranche);
   if (anObj.Channel().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Channel"),anObj.Channel().Val())->ReTagThis("Channel"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC_Gray & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Channel(),aTree->Get("Channel",1),int(0)); //tototo 
}

std::string  Mangling( cImResultCC_Gray *) {return "02826074E123D8E3FD3F";};


cTplValGesInit< Pt3di > & cImResultCC_RVB::Channel()
{
   return mChannel;
}

const cTplValGesInit< Pt3di > & cImResultCC_RVB::Channel()const 
{
   return mChannel;
}

void  BinaryUnDumpFromFile(cImResultCC_RVB & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Channel().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Channel().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Channel().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC_RVB & anObj)
{
    BinaryDumpInFile(aFp,anObj.Channel().IsInit());
    if (anObj.Channel().IsInit()) BinaryDumpInFile(aFp,anObj.Channel().Val());
}

cElXMLTree * ToXMLTree(const cImResultCC_RVB & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC_RVB",eXMLBranche);
   if (anObj.Channel().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Channel"),anObj.Channel().Val())->ReTagThis("Channel"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC_RVB & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Channel(),aTree->Get("Channel",1),Pt3di(0,1,2)); //tototo 
}

std::string  Mangling( cImResultCC_RVB *) {return "E48BE6098BFB3E93FC3F";};


cTplValGesInit< bool > & cImResultCC_Cnes::ModeMedian()
{
   return mModeMedian;
}

const cTplValGesInit< bool > & cImResultCC_Cnes::ModeMedian()const 
{
   return mModeMedian;
}


cTplValGesInit< Pt2di > & cImResultCC_Cnes::SzF()
{
   return mSzF;
}

const cTplValGesInit< Pt2di > & cImResultCC_Cnes::SzF()const 
{
   return mSzF;
}


cTplValGesInit< std::string > & cImResultCC_Cnes::ValueF()
{
   return mValueF;
}

const cTplValGesInit< std::string > & cImResultCC_Cnes::ValueF()const 
{
   return mValueF;
}


cTplValGesInit< int > & cImResultCC_Cnes::ChannelHF()
{
   return mChannelHF;
}

const cTplValGesInit< int > & cImResultCC_Cnes::ChannelHF()const 
{
   return mChannelHF;
}


cTplValGesInit< std::vector<int> > & cImResultCC_Cnes::ChannelBF()
{
   return mChannelBF;
}

const cTplValGesInit< std::vector<int> > & cImResultCC_Cnes::ChannelBF()const 
{
   return mChannelBF;
}


cTplValGesInit< int > & cImResultCC_Cnes::NbIterFCSte()
{
   return mNbIterFCSte;
}

const cTplValGesInit< int > & cImResultCC_Cnes::NbIterFCSte()const 
{
   return mNbIterFCSte;
}


cTplValGesInit< int > & cImResultCC_Cnes::SzIterFCSte()
{
   return mSzIterFCSte;
}

const cTplValGesInit< int > & cImResultCC_Cnes::SzIterFCSte()const 
{
   return mSzIterFCSte;
}

void  BinaryUnDumpFromFile(cImResultCC_Cnes & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ModeMedian().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ModeMedian().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ModeMedian().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ValueF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ValueF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ValueF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ChannelHF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ChannelHF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ChannelHF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ChannelBF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ChannelBF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ChannelBF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbIterFCSte().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbIterFCSte().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbIterFCSte().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzIterFCSte().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzIterFCSte().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzIterFCSte().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC_Cnes & anObj)
{
    BinaryDumpInFile(aFp,anObj.ModeMedian().IsInit());
    if (anObj.ModeMedian().IsInit()) BinaryDumpInFile(aFp,anObj.ModeMedian().Val());
    BinaryDumpInFile(aFp,anObj.SzF().IsInit());
    if (anObj.SzF().IsInit()) BinaryDumpInFile(aFp,anObj.SzF().Val());
    BinaryDumpInFile(aFp,anObj.ValueF().IsInit());
    if (anObj.ValueF().IsInit()) BinaryDumpInFile(aFp,anObj.ValueF().Val());
    BinaryDumpInFile(aFp,anObj.ChannelHF().IsInit());
    if (anObj.ChannelHF().IsInit()) BinaryDumpInFile(aFp,anObj.ChannelHF().Val());
    BinaryDumpInFile(aFp,anObj.ChannelBF().IsInit());
    if (anObj.ChannelBF().IsInit()) BinaryDumpInFile(aFp,anObj.ChannelBF().Val());
    BinaryDumpInFile(aFp,anObj.NbIterFCSte().IsInit());
    if (anObj.NbIterFCSte().IsInit()) BinaryDumpInFile(aFp,anObj.NbIterFCSte().Val());
    BinaryDumpInFile(aFp,anObj.SzIterFCSte().IsInit());
    if (anObj.SzIterFCSte().IsInit()) BinaryDumpInFile(aFp,anObj.SzIterFCSte().Val());
}

cElXMLTree * ToXMLTree(const cImResultCC_Cnes & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC_Cnes",eXMLBranche);
   if (anObj.ModeMedian().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ModeMedian"),anObj.ModeMedian().Val())->ReTagThis("ModeMedian"));
   if (anObj.SzF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzF"),anObj.SzF().Val())->ReTagThis("SzF"));
   if (anObj.ValueF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ValueF"),anObj.ValueF().Val())->ReTagThis("ValueF"));
   if (anObj.ChannelHF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ChannelHF"),anObj.ChannelHF().Val())->ReTagThis("ChannelHF"));
   if (anObj.ChannelBF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ChannelBF"),anObj.ChannelBF().Val())->ReTagThis("ChannelBF"));
   if (anObj.NbIterFCSte().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbIterFCSte"),anObj.NbIterFCSte().Val())->ReTagThis("NbIterFCSte"));
   if (anObj.SzIterFCSte().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzIterFCSte"),anObj.SzIterFCSte().Val())->ReTagThis("SzIterFCSte"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC_Cnes & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ModeMedian(),aTree->Get("ModeMedian",1),bool(false)); //tototo 

   xml_init(anObj.SzF(),aTree->Get("SzF",1),Pt2di(3,3)); //tototo 

   xml_init(anObj.ValueF(),aTree->Get("ValueF",1),std::string("1 2 1 2 4 2 1 2 1")); //tototo 

   xml_init(anObj.ChannelHF(),aTree->Get("ChannelHF",1),int(3)); //tototo 

   xml_init(anObj.ChannelBF(),aTree->Get("ChannelBF",1)); //tototo 

   xml_init(anObj.NbIterFCSte(),aTree->Get("NbIterFCSte",1),int(1)); //tototo 

   xml_init(anObj.SzIterFCSte(),aTree->Get("SzIterFCSte",1)); //tototo 
}

std::string  Mangling( cImResultCC_Cnes *) {return "78BD914E4886CCD0FE3F";};


cTplValGesInit< std::vector<int> > & cImResultCC_PXs::Channel()
{
   return mChannel;
}

const cTplValGesInit< std::vector<int> > & cImResultCC_PXs::Channel()const 
{
   return mChannel;
}


cTplValGesInit< Pt3dr > & cImResultCC_PXs::AxeRGB()
{
   return mAxeRGB;
}

const cTplValGesInit< Pt3dr > & cImResultCC_PXs::AxeRGB()const 
{
   return mAxeRGB;
}


cTplValGesInit< double > & cImResultCC_PXs::Cste()
{
   return mCste;
}

const cTplValGesInit< double > & cImResultCC_PXs::Cste()const 
{
   return mCste;
}


cTplValGesInit< bool > & cImResultCC_PXs::ApprentisageAxeRGB()
{
   return mApprentisageAxeRGB;
}

const cTplValGesInit< bool > & cImResultCC_PXs::ApprentisageAxeRGB()const 
{
   return mApprentisageAxeRGB;
}


std::list< std::string > & cImResultCC_PXs::UnusedAppr()
{
   return mUnusedAppr;
}

const std::list< std::string > & cImResultCC_PXs::UnusedAppr()const 
{
   return mUnusedAppr;
}

void  BinaryUnDumpFromFile(cImResultCC_PXs & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Channel().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Channel().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Channel().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AxeRGB().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AxeRGB().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AxeRGB().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Cste().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Cste().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Cste().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ApprentisageAxeRGB().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ApprentisageAxeRGB().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ApprentisageAxeRGB().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.UnusedAppr().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC_PXs & anObj)
{
    BinaryDumpInFile(aFp,anObj.Channel().IsInit());
    if (anObj.Channel().IsInit()) BinaryDumpInFile(aFp,anObj.Channel().Val());
    BinaryDumpInFile(aFp,anObj.AxeRGB().IsInit());
    if (anObj.AxeRGB().IsInit()) BinaryDumpInFile(aFp,anObj.AxeRGB().Val());
    BinaryDumpInFile(aFp,anObj.Cste().IsInit());
    if (anObj.Cste().IsInit()) BinaryDumpInFile(aFp,anObj.Cste().Val());
    BinaryDumpInFile(aFp,anObj.ApprentisageAxeRGB().IsInit());
    if (anObj.ApprentisageAxeRGB().IsInit()) BinaryDumpInFile(aFp,anObj.ApprentisageAxeRGB().Val());
    BinaryDumpInFile(aFp,(int)anObj.UnusedAppr().size());
    for(  std::list< std::string >::const_iterator iT=anObj.UnusedAppr().begin();
         iT!=anObj.UnusedAppr().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cImResultCC_PXs & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC_PXs",eXMLBranche);
   if (anObj.Channel().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Channel"),anObj.Channel().Val())->ReTagThis("Channel"));
   if (anObj.AxeRGB().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AxeRGB"),anObj.AxeRGB().Val())->ReTagThis("AxeRGB"));
   if (anObj.Cste().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Cste"),anObj.Cste().Val())->ReTagThis("Cste"));
   if (anObj.ApprentisageAxeRGB().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ApprentisageAxeRGB"),anObj.ApprentisageAxeRGB().Val())->ReTagThis("ApprentisageAxeRGB"));
  for
  (       std::list< std::string >::const_iterator it=anObj.UnusedAppr().begin();
      it !=anObj.UnusedAppr().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("UnusedAppr"),(*it))->ReTagThis("UnusedAppr"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC_PXs & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Channel(),aTree->Get("Channel",1)); //tototo 

   xml_init(anObj.AxeRGB(),aTree->Get("AxeRGB",1),Pt3dr(1.0,1.0,1.0)); //tototo 

   xml_init(anObj.Cste(),aTree->Get("Cste",1),double(0)); //tototo 

   xml_init(anObj.ApprentisageAxeRGB(),aTree->Get("ApprentisageAxeRGB",1),bool(false)); //tototo 

   xml_init(anObj.UnusedAppr(),aTree->GetAll("UnusedAppr",false,1));
}

std::string  Mangling( cImResultCC_PXs *) {return "4A61532DBE7BA0D9FE3F";};


cTplValGesInit< double > & cPondThom::PondExp()
{
   return mPondExp;
}

const cTplValGesInit< double > & cPondThom::PondExp()const 
{
   return mPondExp;
}


cTplValGesInit< int > & cPondThom::PondCste()
{
   return mPondCste;
}

const cTplValGesInit< int > & cPondThom::PondCste()const 
{
   return mPondCste;
}

void  BinaryUnDumpFromFile(cPondThom & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PondExp().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PondExp().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PondExp().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PondCste().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PondCste().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PondCste().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPondThom & anObj)
{
    BinaryDumpInFile(aFp,anObj.PondExp().IsInit());
    if (anObj.PondExp().IsInit()) BinaryDumpInFile(aFp,anObj.PondExp().Val());
    BinaryDumpInFile(aFp,anObj.PondCste().IsInit());
    if (anObj.PondCste().IsInit()) BinaryDumpInFile(aFp,anObj.PondCste().Val());
}

cElXMLTree * ToXMLTree(const cPondThom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PondThom",eXMLBranche);
   if (anObj.PondExp().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PondExp"),anObj.PondExp().Val())->ReTagThis("PondExp"));
   if (anObj.PondCste().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PondCste"),anObj.PondCste().Val())->ReTagThis("PondCste"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPondThom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.PondExp(),aTree->Get("PondExp",1)); //tototo 

   xml_init(anObj.PondCste(),aTree->Get("PondCste",1)); //tototo 
}

std::string  Mangling( cPondThom *) {return "AC6B03646DBD169DFE3F";};


double & cThomBidouille::VMin()
{
   return mVMin;
}

const double & cThomBidouille::VMin()const 
{
   return mVMin;
}


double & cThomBidouille::PourCent()
{
   return mPourCent;
}

const double & cThomBidouille::PourCent()const 
{
   return mPourCent;
}

void  BinaryUnDumpFromFile(cThomBidouille & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.VMin(),aFp);
    BinaryUnDumpFromFile(anObj.PourCent(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cThomBidouille & anObj)
{
    BinaryDumpInFile(aFp,anObj.VMin());
    BinaryDumpInFile(aFp,anObj.PourCent());
}

cElXMLTree * ToXMLTree(const cThomBidouille & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ThomBidouille",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("VMin"),anObj.VMin())->ReTagThis("VMin"));
   aRes->AddFils(::ToXMLTree(std::string("PourCent"),anObj.PourCent())->ReTagThis("PourCent"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cThomBidouille & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.VMin(),aTree->Get("VMin",1)); //tototo 

   xml_init(anObj.PourCent(),aTree->Get("PourCent",1)); //tototo 
}

std::string  Mangling( cThomBidouille *) {return "6601C656A02E6188FF3F";};


double & cMPDBidouille::EcartMin()
{
   return mEcartMin;
}

const double & cMPDBidouille::EcartMin()const 
{
   return mEcartMin;
}

void  BinaryUnDumpFromFile(cMPDBidouille & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.EcartMin(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMPDBidouille & anObj)
{
    BinaryDumpInFile(aFp,anObj.EcartMin());
}

cElXMLTree * ToXMLTree(const cMPDBidouille & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MPDBidouille",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("EcartMin"),anObj.EcartMin())->ReTagThis("EcartMin"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMPDBidouille & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.EcartMin(),aTree->Get("EcartMin",1)); //tototo 
}

std::string  Mangling( cMPDBidouille *) {return "9BADCA47336E99E1FE3F";};


double & cThomAgreg::VMin()
{
   return ThomBidouille().Val().VMin();
}

const double & cThomAgreg::VMin()const 
{
   return ThomBidouille().Val().VMin();
}


double & cThomAgreg::PourCent()
{
   return ThomBidouille().Val().PourCent();
}

const double & cThomAgreg::PourCent()const 
{
   return ThomBidouille().Val().PourCent();
}


cTplValGesInit< cThomBidouille > & cThomAgreg::ThomBidouille()
{
   return mThomBidouille;
}

const cTplValGesInit< cThomBidouille > & cThomAgreg::ThomBidouille()const 
{
   return mThomBidouille;
}


double & cThomAgreg::EcartMin()
{
   return MPDBidouille().Val().EcartMin();
}

const double & cThomAgreg::EcartMin()const 
{
   return MPDBidouille().Val().EcartMin();
}


cTplValGesInit< cMPDBidouille > & cThomAgreg::MPDBidouille()
{
   return mMPDBidouille;
}

const cTplValGesInit< cMPDBidouille > & cThomAgreg::MPDBidouille()const 
{
   return mMPDBidouille;
}

void  BinaryUnDumpFromFile(cThomAgreg & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ThomBidouille().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ThomBidouille().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ThomBidouille().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MPDBidouille().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MPDBidouille().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MPDBidouille().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cThomAgreg & anObj)
{
    BinaryDumpInFile(aFp,anObj.ThomBidouille().IsInit());
    if (anObj.ThomBidouille().IsInit()) BinaryDumpInFile(aFp,anObj.ThomBidouille().Val());
    BinaryDumpInFile(aFp,anObj.MPDBidouille().IsInit());
    if (anObj.MPDBidouille().IsInit()) BinaryDumpInFile(aFp,anObj.MPDBidouille().Val());
}

cElXMLTree * ToXMLTree(const cThomAgreg & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ThomAgreg",eXMLBranche);
   if (anObj.ThomBidouille().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ThomBidouille().Val())->ReTagThis("ThomBidouille"));
   if (anObj.MPDBidouille().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MPDBidouille().Val())->ReTagThis("MPDBidouille"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cThomAgreg & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ThomBidouille(),aTree->Get("ThomBidouille",1)); //tototo 

   xml_init(anObj.MPDBidouille(),aTree->Get("MPDBidouille",1)); //tototo 
}

std::string  Mangling( cThomAgreg *) {return "E385B308140DB4D7FE3F";};


cTplValGesInit< double > & cImResultCC_Thom::PondExp()
{
   return PondThom().PondExp();
}

const cTplValGesInit< double > & cImResultCC_Thom::PondExp()const 
{
   return PondThom().PondExp();
}


cTplValGesInit< int > & cImResultCC_Thom::PondCste()
{
   return PondThom().PondCste();
}

const cTplValGesInit< int > & cImResultCC_Thom::PondCste()const 
{
   return PondThom().PondCste();
}


cPondThom & cImResultCC_Thom::PondThom()
{
   return mPondThom;
}

const cPondThom & cImResultCC_Thom::PondThom()const 
{
   return mPondThom;
}


cTplValGesInit< int > & cImResultCC_Thom::NbIterPond()
{
   return mNbIterPond;
}

const cTplValGesInit< int > & cImResultCC_Thom::NbIterPond()const 
{
   return mNbIterPond;
}


cTplValGesInit< bool > & cImResultCC_Thom::SupressCentre()
{
   return mSupressCentre;
}

const cTplValGesInit< bool > & cImResultCC_Thom::SupressCentre()const 
{
   return mSupressCentre;
}


cTplValGesInit< int > & cImResultCC_Thom::ChannelHF()
{
   return mChannelHF;
}

const cTplValGesInit< int > & cImResultCC_Thom::ChannelHF()const 
{
   return mChannelHF;
}


cTplValGesInit< std::vector<int> > & cImResultCC_Thom::ChannelBF()
{
   return mChannelBF;
}

const cTplValGesInit< std::vector<int> > & cImResultCC_Thom::ChannelBF()const 
{
   return mChannelBF;
}


double & cImResultCC_Thom::VMin()
{
   return ThomAgreg().ThomBidouille().Val().VMin();
}

const double & cImResultCC_Thom::VMin()const 
{
   return ThomAgreg().ThomBidouille().Val().VMin();
}


double & cImResultCC_Thom::PourCent()
{
   return ThomAgreg().ThomBidouille().Val().PourCent();
}

const double & cImResultCC_Thom::PourCent()const 
{
   return ThomAgreg().ThomBidouille().Val().PourCent();
}


cTplValGesInit< cThomBidouille > & cImResultCC_Thom::ThomBidouille()
{
   return ThomAgreg().ThomBidouille();
}

const cTplValGesInit< cThomBidouille > & cImResultCC_Thom::ThomBidouille()const 
{
   return ThomAgreg().ThomBidouille();
}


double & cImResultCC_Thom::EcartMin()
{
   return ThomAgreg().MPDBidouille().Val().EcartMin();
}

const double & cImResultCC_Thom::EcartMin()const 
{
   return ThomAgreg().MPDBidouille().Val().EcartMin();
}


cTplValGesInit< cMPDBidouille > & cImResultCC_Thom::MPDBidouille()
{
   return ThomAgreg().MPDBidouille();
}

const cTplValGesInit< cMPDBidouille > & cImResultCC_Thom::MPDBidouille()const 
{
   return ThomAgreg().MPDBidouille();
}


cThomAgreg & cImResultCC_Thom::ThomAgreg()
{
   return mThomAgreg;
}

const cThomAgreg & cImResultCC_Thom::ThomAgreg()const 
{
   return mThomAgreg;
}

void  BinaryUnDumpFromFile(cImResultCC_Thom & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.PondThom(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbIterPond().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbIterPond().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbIterPond().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SupressCentre().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SupressCentre().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SupressCentre().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ChannelHF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ChannelHF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ChannelHF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ChannelBF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ChannelBF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ChannelBF().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.ThomAgreg(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC_Thom & anObj)
{
    BinaryDumpInFile(aFp,anObj.PondThom());
    BinaryDumpInFile(aFp,anObj.NbIterPond().IsInit());
    if (anObj.NbIterPond().IsInit()) BinaryDumpInFile(aFp,anObj.NbIterPond().Val());
    BinaryDumpInFile(aFp,anObj.SupressCentre().IsInit());
    if (anObj.SupressCentre().IsInit()) BinaryDumpInFile(aFp,anObj.SupressCentre().Val());
    BinaryDumpInFile(aFp,anObj.ChannelHF().IsInit());
    if (anObj.ChannelHF().IsInit()) BinaryDumpInFile(aFp,anObj.ChannelHF().Val());
    BinaryDumpInFile(aFp,anObj.ChannelBF().IsInit());
    if (anObj.ChannelBF().IsInit()) BinaryDumpInFile(aFp,anObj.ChannelBF().Val());
    BinaryDumpInFile(aFp,anObj.ThomAgreg());
}

cElXMLTree * ToXMLTree(const cImResultCC_Thom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC_Thom",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.PondThom())->ReTagThis("PondThom"));
   if (anObj.NbIterPond().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbIterPond"),anObj.NbIterPond().Val())->ReTagThis("NbIterPond"));
   if (anObj.SupressCentre().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SupressCentre"),anObj.SupressCentre().Val())->ReTagThis("SupressCentre"));
   if (anObj.ChannelHF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ChannelHF"),anObj.ChannelHF().Val())->ReTagThis("ChannelHF"));
   if (anObj.ChannelBF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ChannelBF"),anObj.ChannelBF().Val())->ReTagThis("ChannelBF"));
   aRes->AddFils(ToXMLTree(anObj.ThomAgreg())->ReTagThis("ThomAgreg"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC_Thom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.PondThom(),aTree->Get("PondThom",1)); //tototo 

   xml_init(anObj.NbIterPond(),aTree->Get("NbIterPond",1),int(1)); //tototo 

   xml_init(anObj.SupressCentre(),aTree->Get("SupressCentre",1),bool(false)); //tototo 

   xml_init(anObj.ChannelHF(),aTree->Get("ChannelHF",1),int(3)); //tototo 

   xml_init(anObj.ChannelBF(),aTree->Get("ChannelBF",1)); //tototo 

   xml_init(anObj.ThomAgreg(),aTree->Get("ThomAgreg",1)); //tototo 
}

std::string  Mangling( cImResultCC_Thom *) {return "04A6105963536FB2FEBF";};


cTplValGesInit< cImResultCC_Gray > & cImResultCC::ImResultCC_Gray()
{
   return mImResultCC_Gray;
}

const cTplValGesInit< cImResultCC_Gray > & cImResultCC::ImResultCC_Gray()const 
{
   return mImResultCC_Gray;
}


cTplValGesInit< cImResultCC_RVB > & cImResultCC::ImResultCC_RVB()
{
   return mImResultCC_RVB;
}

const cTplValGesInit< cImResultCC_RVB > & cImResultCC::ImResultCC_RVB()const 
{
   return mImResultCC_RVB;
}


cTplValGesInit< cImResultCC_Cnes > & cImResultCC::ImResultCC_Cnes()
{
   return mImResultCC_Cnes;
}

const cTplValGesInit< cImResultCC_Cnes > & cImResultCC::ImResultCC_Cnes()const 
{
   return mImResultCC_Cnes;
}


cTplValGesInit< cImResultCC_PXs > & cImResultCC::ImResultCC_PXs()
{
   return mImResultCC_PXs;
}

const cTplValGesInit< cImResultCC_PXs > & cImResultCC::ImResultCC_PXs()const 
{
   return mImResultCC_PXs;
}


cTplValGesInit< cImResultCC_Thom > & cImResultCC::ImResultCC_Thom()
{
   return mImResultCC_Thom;
}

const cTplValGesInit< cImResultCC_Thom > & cImResultCC::ImResultCC_Thom()const 
{
   return mImResultCC_Thom;
}

void  BinaryUnDumpFromFile(cImResultCC & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ImResultCC_Gray().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ImResultCC_Gray().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ImResultCC_Gray().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ImResultCC_RVB().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ImResultCC_RVB().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ImResultCC_RVB().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ImResultCC_Cnes().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ImResultCC_Cnes().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ImResultCC_Cnes().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ImResultCC_PXs().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ImResultCC_PXs().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ImResultCC_PXs().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ImResultCC_Thom().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ImResultCC_Thom().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ImResultCC_Thom().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImResultCC & anObj)
{
    BinaryDumpInFile(aFp,anObj.ImResultCC_Gray().IsInit());
    if (anObj.ImResultCC_Gray().IsInit()) BinaryDumpInFile(aFp,anObj.ImResultCC_Gray().Val());
    BinaryDumpInFile(aFp,anObj.ImResultCC_RVB().IsInit());
    if (anObj.ImResultCC_RVB().IsInit()) BinaryDumpInFile(aFp,anObj.ImResultCC_RVB().Val());
    BinaryDumpInFile(aFp,anObj.ImResultCC_Cnes().IsInit());
    if (anObj.ImResultCC_Cnes().IsInit()) BinaryDumpInFile(aFp,anObj.ImResultCC_Cnes().Val());
    BinaryDumpInFile(aFp,anObj.ImResultCC_PXs().IsInit());
    if (anObj.ImResultCC_PXs().IsInit()) BinaryDumpInFile(aFp,anObj.ImResultCC_PXs().Val());
    BinaryDumpInFile(aFp,anObj.ImResultCC_Thom().IsInit());
    if (anObj.ImResultCC_Thom().IsInit()) BinaryDumpInFile(aFp,anObj.ImResultCC_Thom().Val());
}

cElXMLTree * ToXMLTree(const cImResultCC & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImResultCC",eXMLBranche);
   if (anObj.ImResultCC_Gray().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ImResultCC_Gray().Val())->ReTagThis("ImResultCC_Gray"));
   if (anObj.ImResultCC_RVB().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ImResultCC_RVB().Val())->ReTagThis("ImResultCC_RVB"));
   if (anObj.ImResultCC_Cnes().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ImResultCC_Cnes().Val())->ReTagThis("ImResultCC_Cnes"));
   if (anObj.ImResultCC_PXs().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ImResultCC_PXs().Val())->ReTagThis("ImResultCC_PXs"));
   if (anObj.ImResultCC_Thom().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ImResultCC_Thom().Val())->ReTagThis("ImResultCC_Thom"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImResultCC & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ImResultCC_Gray(),aTree->Get("ImResultCC_Gray",1)); //tototo 

   xml_init(anObj.ImResultCC_RVB(),aTree->Get("ImResultCC_RVB",1)); //tototo 

   xml_init(anObj.ImResultCC_Cnes(),aTree->Get("ImResultCC_Cnes",1)); //tototo 

   xml_init(anObj.ImResultCC_PXs(),aTree->Get("ImResultCC_PXs",1)); //tototo 

   xml_init(anObj.ImResultCC_Thom(),aTree->Get("ImResultCC_Thom",1)); //tototo 
}

std::string  Mangling( cImResultCC *) {return "FE9662EEC0039DCFFF3F";};


cTplValGesInit< double > & cResultCompCol::GamaExport()
{
   return mGamaExport;
}

const cTplValGesInit< double > & cResultCompCol::GamaExport()const 
{
   return mGamaExport;
}


cTplValGesInit< double > & cResultCompCol::RefGama()
{
   return mRefGama;
}

const cTplValGesInit< double > & cResultCompCol::RefGama()const 
{
   return mRefGama;
}


cTplValGesInit< cLutConvertion > & cResultCompCol::LutExport()
{
   return mLutExport;
}

const cTplValGesInit< cLutConvertion > & cResultCompCol::LutExport()const 
{
   return mLutExport;
}


std::string & cResultCompCol::KeyName()
{
   return mKeyName;
}

const std::string & cResultCompCol::KeyName()const 
{
   return mKeyName;
}


cTplValGesInit< eTypeNumerique > & cResultCompCol::Type()
{
   return mType;
}

const cTplValGesInit< eTypeNumerique > & cResultCompCol::Type()const 
{
   return mType;
}


cTplValGesInit< cImResultCC_Gray > & cResultCompCol::ImResultCC_Gray()
{
   return ImResultCC().ImResultCC_Gray();
}

const cTplValGesInit< cImResultCC_Gray > & cResultCompCol::ImResultCC_Gray()const 
{
   return ImResultCC().ImResultCC_Gray();
}


cTplValGesInit< cImResultCC_RVB > & cResultCompCol::ImResultCC_RVB()
{
   return ImResultCC().ImResultCC_RVB();
}

const cTplValGesInit< cImResultCC_RVB > & cResultCompCol::ImResultCC_RVB()const 
{
   return ImResultCC().ImResultCC_RVB();
}


cTplValGesInit< cImResultCC_Cnes > & cResultCompCol::ImResultCC_Cnes()
{
   return ImResultCC().ImResultCC_Cnes();
}

const cTplValGesInit< cImResultCC_Cnes > & cResultCompCol::ImResultCC_Cnes()const 
{
   return ImResultCC().ImResultCC_Cnes();
}


cTplValGesInit< cImResultCC_PXs > & cResultCompCol::ImResultCC_PXs()
{
   return ImResultCC().ImResultCC_PXs();
}

const cTplValGesInit< cImResultCC_PXs > & cResultCompCol::ImResultCC_PXs()const 
{
   return ImResultCC().ImResultCC_PXs();
}


cTplValGesInit< cImResultCC_Thom > & cResultCompCol::ImResultCC_Thom()
{
   return ImResultCC().ImResultCC_Thom();
}

const cTplValGesInit< cImResultCC_Thom > & cResultCompCol::ImResultCC_Thom()const 
{
   return ImResultCC().ImResultCC_Thom();
}


cImResultCC & cResultCompCol::ImResultCC()
{
   return mImResultCC;
}

const cImResultCC & cResultCompCol::ImResultCC()const 
{
   return mImResultCC;
}

void  BinaryUnDumpFromFile(cResultCompCol & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.GamaExport().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.GamaExport().ValForcedForUnUmp(),aFp);
        }
        else  anObj.GamaExport().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RefGama().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RefGama().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RefGama().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.LutExport().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.LutExport().ValForcedForUnUmp(),aFp);
        }
        else  anObj.LutExport().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KeyName(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Type().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Type().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Type().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.ImResultCC(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cResultCompCol & anObj)
{
    BinaryDumpInFile(aFp,anObj.GamaExport().IsInit());
    if (anObj.GamaExport().IsInit()) BinaryDumpInFile(aFp,anObj.GamaExport().Val());
    BinaryDumpInFile(aFp,anObj.RefGama().IsInit());
    if (anObj.RefGama().IsInit()) BinaryDumpInFile(aFp,anObj.RefGama().Val());
    BinaryDumpInFile(aFp,anObj.LutExport().IsInit());
    if (anObj.LutExport().IsInit()) BinaryDumpInFile(aFp,anObj.LutExport().Val());
    BinaryDumpInFile(aFp,anObj.KeyName());
    BinaryDumpInFile(aFp,anObj.Type().IsInit());
    if (anObj.Type().IsInit()) BinaryDumpInFile(aFp,anObj.Type().Val());
    BinaryDumpInFile(aFp,anObj.ImResultCC());
}

cElXMLTree * ToXMLTree(const cResultCompCol & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ResultCompCol",eXMLBranche);
   if (anObj.GamaExport().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("GamaExport"),anObj.GamaExport().Val())->ReTagThis("GamaExport"));
   if (anObj.RefGama().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RefGama"),anObj.RefGama().Val())->ReTagThis("RefGama"));
   if (anObj.LutExport().IsInit())
      aRes->AddFils(ToXMLTree(anObj.LutExport().Val())->ReTagThis("LutExport"));
   aRes->AddFils(::ToXMLTree(std::string("KeyName"),anObj.KeyName())->ReTagThis("KeyName"));
   if (anObj.Type().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Type"),anObj.Type().Val())->ReTagThis("Type"));
   aRes->AddFils(ToXMLTree(anObj.ImResultCC())->ReTagThis("ImResultCC"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cResultCompCol & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.GamaExport(),aTree->Get("GamaExport",1)); //tototo 

   xml_init(anObj.RefGama(),aTree->Get("RefGama",1),double(256.0)); //tototo 

   xml_init(anObj.LutExport(),aTree->Get("LutExport",1)); //tototo 

   xml_init(anObj.KeyName(),aTree->Get("KeyName",1)); //tototo 

   xml_init(anObj.Type(),aTree->Get("Type",1),eTypeNumerique(eTN_u_int1)); //tototo 

   xml_init(anObj.ImResultCC(),aTree->Get("ImResultCC",1)); //tototo 
}

std::string  Mangling( cResultCompCol *) {return "B7C26386A7612880FE3F";};


cTplValGesInit< std::string > & cEspaceResultSuperpCol::EnglobImMaitre()
{
   return mEnglobImMaitre;
}

const cTplValGesInit< std::string > & cEspaceResultSuperpCol::EnglobImMaitre()const 
{
   return mEnglobImMaitre;
}


cTplValGesInit< std::string > & cEspaceResultSuperpCol::EnglobAll()
{
   return mEnglobAll;
}

const cTplValGesInit< std::string > & cEspaceResultSuperpCol::EnglobAll()const 
{
   return mEnglobAll;
}


cTplValGesInit< Box2di > & cEspaceResultSuperpCol::EnglobBoxMaitresse()
{
   return mEnglobBoxMaitresse;
}

const cTplValGesInit< Box2di > & cEspaceResultSuperpCol::EnglobBoxMaitresse()const 
{
   return mEnglobBoxMaitresse;
}

void  BinaryUnDumpFromFile(cEspaceResultSuperpCol & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.EnglobImMaitre().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.EnglobImMaitre().ValForcedForUnUmp(),aFp);
        }
        else  anObj.EnglobImMaitre().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.EnglobAll().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.EnglobAll().ValForcedForUnUmp(),aFp);
        }
        else  anObj.EnglobAll().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.EnglobBoxMaitresse().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.EnglobBoxMaitresse().ValForcedForUnUmp(),aFp);
        }
        else  anObj.EnglobBoxMaitresse().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cEspaceResultSuperpCol & anObj)
{
    BinaryDumpInFile(aFp,anObj.EnglobImMaitre().IsInit());
    if (anObj.EnglobImMaitre().IsInit()) BinaryDumpInFile(aFp,anObj.EnglobImMaitre().Val());
    BinaryDumpInFile(aFp,anObj.EnglobAll().IsInit());
    if (anObj.EnglobAll().IsInit()) BinaryDumpInFile(aFp,anObj.EnglobAll().Val());
    BinaryDumpInFile(aFp,anObj.EnglobBoxMaitresse().IsInit());
    if (anObj.EnglobBoxMaitresse().IsInit()) BinaryDumpInFile(aFp,anObj.EnglobBoxMaitresse().Val());
}

cElXMLTree * ToXMLTree(const cEspaceResultSuperpCol & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"EspaceResultSuperpCol",eXMLBranche);
   if (anObj.EnglobImMaitre().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("EnglobImMaitre"),anObj.EnglobImMaitre().Val())->ReTagThis("EnglobImMaitre"));
   if (anObj.EnglobAll().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("EnglobAll"),anObj.EnglobAll().Val())->ReTagThis("EnglobAll"));
   if (anObj.EnglobBoxMaitresse().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("EnglobBoxMaitresse"),anObj.EnglobBoxMaitresse().Val())->ReTagThis("EnglobBoxMaitresse"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cEspaceResultSuperpCol & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.EnglobImMaitre(),aTree->Get("EnglobImMaitre",1)); //tototo 

   xml_init(anObj.EnglobAll(),aTree->Get("EnglobAll",1)); //tototo 

   xml_init(anObj.EnglobBoxMaitresse(),aTree->Get("EnglobBoxMaitresse",1)); //tototo 
}

std::string  Mangling( cEspaceResultSuperpCol *) {return "48417FE08906B58EFE3F";};


std::string & cImages2Verif::X()
{
   return mX;
}

const std::string & cImages2Verif::X()const 
{
   return mX;
}


std::string & cImages2Verif::Y()
{
   return mY;
}

const std::string & cImages2Verif::Y()const 
{
   return mY;
}


double & cImages2Verif::ExagXY()
{
   return mExagXY;
}

const double & cImages2Verif::ExagXY()const 
{
   return mExagXY;
}

void  BinaryUnDumpFromFile(cImages2Verif & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.X(),aFp);
    BinaryUnDumpFromFile(anObj.Y(),aFp);
    BinaryUnDumpFromFile(anObj.ExagXY(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImages2Verif & anObj)
{
    BinaryDumpInFile(aFp,anObj.X());
    BinaryDumpInFile(aFp,anObj.Y());
    BinaryDumpInFile(aFp,anObj.ExagXY());
}

cElXMLTree * ToXMLTree(const cImages2Verif & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"Images2Verif",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("X"),anObj.X())->ReTagThis("X"));
   aRes->AddFils(::ToXMLTree(std::string("Y"),anObj.Y())->ReTagThis("Y"));
   aRes->AddFils(::ToXMLTree(std::string("ExagXY"),anObj.ExagXY())->ReTagThis("ExagXY"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImages2Verif & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.X(),aTree->Get("X",1)); //tototo 

   xml_init(anObj.Y(),aTree->Get("Y",1)); //tototo 

   xml_init(anObj.ExagXY(),aTree->Get("ExagXY",1)); //tototo 
}

std::string  Mangling( cImages2Verif *) {return "DF41A33D4C6DFB8BFE3F";};


double & cVisuEcart::SzW()
{
   return mSzW;
}

const double & cVisuEcart::SzW()const 
{
   return mSzW;
}


double & cVisuEcart::Exag()
{
   return mExag;
}

const double & cVisuEcart::Exag()const 
{
   return mExag;
}


cTplValGesInit< std::string > & cVisuEcart::NameFile()
{
   return mNameFile;
}

const cTplValGesInit< std::string > & cVisuEcart::NameFile()const 
{
   return mNameFile;
}


std::string & cVisuEcart::X()
{
   return Images2Verif().Val().X();
}

const std::string & cVisuEcart::X()const 
{
   return Images2Verif().Val().X();
}


std::string & cVisuEcart::Y()
{
   return Images2Verif().Val().Y();
}

const std::string & cVisuEcart::Y()const 
{
   return Images2Verif().Val().Y();
}


double & cVisuEcart::ExagXY()
{
   return Images2Verif().Val().ExagXY();
}

const double & cVisuEcart::ExagXY()const 
{
   return Images2Verif().Val().ExagXY();
}


cTplValGesInit< cImages2Verif > & cVisuEcart::Images2Verif()
{
   return mImages2Verif;
}

const cTplValGesInit< cImages2Verif > & cVisuEcart::Images2Verif()const 
{
   return mImages2Verif;
}

void  BinaryUnDumpFromFile(cVisuEcart & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.SzW(),aFp);
    BinaryUnDumpFromFile(anObj.Exag(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NameFile().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NameFile().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NameFile().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Images2Verif().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Images2Verif().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Images2Verif().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cVisuEcart & anObj)
{
    BinaryDumpInFile(aFp,anObj.SzW());
    BinaryDumpInFile(aFp,anObj.Exag());
    BinaryDumpInFile(aFp,anObj.NameFile().IsInit());
    if (anObj.NameFile().IsInit()) BinaryDumpInFile(aFp,anObj.NameFile().Val());
    BinaryDumpInFile(aFp,anObj.Images2Verif().IsInit());
    if (anObj.Images2Verif().IsInit()) BinaryDumpInFile(aFp,anObj.Images2Verif().Val());
}

cElXMLTree * ToXMLTree(const cVisuEcart & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"VisuEcart",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("SzW"),anObj.SzW())->ReTagThis("SzW"));
   aRes->AddFils(::ToXMLTree(std::string("Exag"),anObj.Exag())->ReTagThis("Exag"));
   if (anObj.NameFile().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NameFile"),anObj.NameFile().Val())->ReTagThis("NameFile"));
   if (anObj.Images2Verif().IsInit())
      aRes->AddFils(ToXMLTree(anObj.Images2Verif().Val())->ReTagThis("Images2Verif"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cVisuEcart & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SzW(),aTree->Get("SzW",1)); //tototo 

   xml_init(anObj.Exag(),aTree->Get("Exag",1)); //tototo 

   xml_init(anObj.NameFile(),aTree->Get("NameFile",1)); //tototo 

   xml_init(anObj.Images2Verif(),aTree->Get("Images2Verif",1)); //tototo 
}

std::string  Mangling( cVisuEcart *) {return "10ABE23DFA64B1F6FD3F";};


std::string & cVerifHoms::NameOrKeyHomologues()
{
   return mNameOrKeyHomologues;
}

const std::string & cVerifHoms::NameOrKeyHomologues()const 
{
   return mNameOrKeyHomologues;
}


double & cVerifHoms::SzW()
{
   return VisuEcart().Val().SzW();
}

const double & cVerifHoms::SzW()const 
{
   return VisuEcart().Val().SzW();
}


double & cVerifHoms::Exag()
{
   return VisuEcart().Val().Exag();
}

const double & cVerifHoms::Exag()const 
{
   return VisuEcart().Val().Exag();
}


cTplValGesInit< std::string > & cVerifHoms::NameFile()
{
   return VisuEcart().Val().NameFile();
}

const cTplValGesInit< std::string > & cVerifHoms::NameFile()const 
{
   return VisuEcart().Val().NameFile();
}


std::string & cVerifHoms::X()
{
   return VisuEcart().Val().Images2Verif().Val().X();
}

const std::string & cVerifHoms::X()const 
{
   return VisuEcart().Val().Images2Verif().Val().X();
}


std::string & cVerifHoms::Y()
{
   return VisuEcart().Val().Images2Verif().Val().Y();
}

const std::string & cVerifHoms::Y()const 
{
   return VisuEcart().Val().Images2Verif().Val().Y();
}


double & cVerifHoms::ExagXY()
{
   return VisuEcart().Val().Images2Verif().Val().ExagXY();
}

const double & cVerifHoms::ExagXY()const 
{
   return VisuEcart().Val().Images2Verif().Val().ExagXY();
}


cTplValGesInit< cImages2Verif > & cVerifHoms::Images2Verif()
{
   return VisuEcart().Val().Images2Verif();
}

const cTplValGesInit< cImages2Verif > & cVerifHoms::Images2Verif()const 
{
   return VisuEcart().Val().Images2Verif();
}


cTplValGesInit< cVisuEcart > & cVerifHoms::VisuEcart()
{
   return mVisuEcart;
}

const cTplValGesInit< cVisuEcart > & cVerifHoms::VisuEcart()const 
{
   return mVisuEcart;
}

void  BinaryUnDumpFromFile(cVerifHoms & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameOrKeyHomologues(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.VisuEcart().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.VisuEcart().ValForcedForUnUmp(),aFp);
        }
        else  anObj.VisuEcart().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cVerifHoms & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameOrKeyHomologues());
    BinaryDumpInFile(aFp,anObj.VisuEcart().IsInit());
    if (anObj.VisuEcart().IsInit()) BinaryDumpInFile(aFp,anObj.VisuEcart().Val());
}

cElXMLTree * ToXMLTree(const cVerifHoms & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"VerifHoms",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameOrKeyHomologues"),anObj.NameOrKeyHomologues())->ReTagThis("NameOrKeyHomologues"));
   if (anObj.VisuEcart().IsInit())
      aRes->AddFils(ToXMLTree(anObj.VisuEcart().Val())->ReTagThis("VisuEcart"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cVerifHoms & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameOrKeyHomologues(),aTree->Get("NameOrKeyHomologues",1)); //tototo 

   xml_init(anObj.VisuEcart(),aTree->Get("VisuEcart",1)); //tototo 
}

std::string  Mangling( cVerifHoms *) {return "A86FC8193C1CFDD4FF3F";};


cImageCmpCol & cImSec::Im()
{
   return mIm;
}

const cImageCmpCol & cImSec::Im()const 
{
   return mIm;
}


std::string & cImSec::KeyCalcNameCorresp()
{
   return mKeyCalcNameCorresp;
}

const std::string & cImSec::KeyCalcNameCorresp()const 
{
   return mKeyCalcNameCorresp;
}


cTplValGesInit< Pt2dr > & cImSec::OffsetPt()
{
   return mOffsetPt;
}

const cTplValGesInit< Pt2dr > & cImSec::OffsetPt()const 
{
   return mOffsetPt;
}


cTplValGesInit< std::string > & cImSec::DirCalcCorrep()
{
   return mDirCalcCorrep;
}

const cTplValGesInit< std::string > & cImSec::DirCalcCorrep()const 
{
   return mDirCalcCorrep;
}


std::string & cImSec::NameOrKeyHomologues()
{
   return VerifHoms().Val().NameOrKeyHomologues();
}

const std::string & cImSec::NameOrKeyHomologues()const 
{
   return VerifHoms().Val().NameOrKeyHomologues();
}


double & cImSec::SzW()
{
   return VerifHoms().Val().VisuEcart().Val().SzW();
}

const double & cImSec::SzW()const 
{
   return VerifHoms().Val().VisuEcart().Val().SzW();
}


double & cImSec::Exag()
{
   return VerifHoms().Val().VisuEcart().Val().Exag();
}

const double & cImSec::Exag()const 
{
   return VerifHoms().Val().VisuEcart().Val().Exag();
}


cTplValGesInit< std::string > & cImSec::NameFile()
{
   return VerifHoms().Val().VisuEcart().Val().NameFile();
}

const cTplValGesInit< std::string > & cImSec::NameFile()const 
{
   return VerifHoms().Val().VisuEcart().Val().NameFile();
}


std::string & cImSec::X()
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().X();
}

const std::string & cImSec::X()const 
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().X();
}


std::string & cImSec::Y()
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().Y();
}

const std::string & cImSec::Y()const 
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().Y();
}


double & cImSec::ExagXY()
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().ExagXY();
}

const double & cImSec::ExagXY()const 
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif().Val().ExagXY();
}


cTplValGesInit< cImages2Verif > & cImSec::Images2Verif()
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif();
}

const cTplValGesInit< cImages2Verif > & cImSec::Images2Verif()const 
{
   return VerifHoms().Val().VisuEcart().Val().Images2Verif();
}


cTplValGesInit< cVisuEcart > & cImSec::VisuEcart()
{
   return VerifHoms().Val().VisuEcart();
}

const cTplValGesInit< cVisuEcart > & cImSec::VisuEcart()const 
{
   return VerifHoms().Val().VisuEcart();
}


cTplValGesInit< cVerifHoms > & cImSec::VerifHoms()
{
   return mVerifHoms;
}

const cTplValGesInit< cVerifHoms > & cImSec::VerifHoms()const 
{
   return mVerifHoms;
}


cTplValGesInit< int > & cImSec::NbTestRansacEstimH()
{
   return mNbTestRansacEstimH;
}

const cTplValGesInit< int > & cImSec::NbTestRansacEstimH()const 
{
   return mNbTestRansacEstimH;
}


cTplValGesInit< int > & cImSec::NbPtsRansacEstimH()
{
   return mNbPtsRansacEstimH;
}

const cTplValGesInit< int > & cImSec::NbPtsRansacEstimH()const 
{
   return mNbPtsRansacEstimH;
}


cTplValGesInit< bool > & cImSec::L2EstimH()
{
   return mL2EstimH;
}

const cTplValGesInit< bool > & cImSec::L2EstimH()const 
{
   return mL2EstimH;
}


cTplValGesInit< bool > & cImSec::L1EstimH()
{
   return mL1EstimH;
}

const cTplValGesInit< bool > & cImSec::L1EstimH()const 
{
   return mL1EstimH;
}


std::list< Pt2dr > & cImSec::PonderaL2Iter()
{
   return mPonderaL2Iter;
}

const std::list< Pt2dr > & cImSec::PonderaL2Iter()const 
{
   return mPonderaL2Iter;
}

void  BinaryUnDumpFromFile(cImSec & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Im(),aFp);
    BinaryUnDumpFromFile(anObj.KeyCalcNameCorresp(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OffsetPt().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OffsetPt().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OffsetPt().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DirCalcCorrep().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DirCalcCorrep().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DirCalcCorrep().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.VerifHoms().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.VerifHoms().ValForcedForUnUmp(),aFp);
        }
        else  anObj.VerifHoms().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbTestRansacEstimH().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbTestRansacEstimH().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbTestRansacEstimH().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbPtsRansacEstimH().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbPtsRansacEstimH().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbPtsRansacEstimH().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.L2EstimH().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.L2EstimH().ValForcedForUnUmp(),aFp);
        }
        else  anObj.L2EstimH().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.L1EstimH().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.L1EstimH().ValForcedForUnUmp(),aFp);
        }
        else  anObj.L1EstimH().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt2dr aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.PonderaL2Iter().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImSec & anObj)
{
    BinaryDumpInFile(aFp,anObj.Im());
    BinaryDumpInFile(aFp,anObj.KeyCalcNameCorresp());
    BinaryDumpInFile(aFp,anObj.OffsetPt().IsInit());
    if (anObj.OffsetPt().IsInit()) BinaryDumpInFile(aFp,anObj.OffsetPt().Val());
    BinaryDumpInFile(aFp,anObj.DirCalcCorrep().IsInit());
    if (anObj.DirCalcCorrep().IsInit()) BinaryDumpInFile(aFp,anObj.DirCalcCorrep().Val());
    BinaryDumpInFile(aFp,anObj.VerifHoms().IsInit());
    if (anObj.VerifHoms().IsInit()) BinaryDumpInFile(aFp,anObj.VerifHoms().Val());
    BinaryDumpInFile(aFp,anObj.NbTestRansacEstimH().IsInit());
    if (anObj.NbTestRansacEstimH().IsInit()) BinaryDumpInFile(aFp,anObj.NbTestRansacEstimH().Val());
    BinaryDumpInFile(aFp,anObj.NbPtsRansacEstimH().IsInit());
    if (anObj.NbPtsRansacEstimH().IsInit()) BinaryDumpInFile(aFp,anObj.NbPtsRansacEstimH().Val());
    BinaryDumpInFile(aFp,anObj.L2EstimH().IsInit());
    if (anObj.L2EstimH().IsInit()) BinaryDumpInFile(aFp,anObj.L2EstimH().Val());
    BinaryDumpInFile(aFp,anObj.L1EstimH().IsInit());
    if (anObj.L1EstimH().IsInit()) BinaryDumpInFile(aFp,anObj.L1EstimH().Val());
    BinaryDumpInFile(aFp,(int)anObj.PonderaL2Iter().size());
    for(  std::list< Pt2dr >::const_iterator iT=anObj.PonderaL2Iter().begin();
         iT!=anObj.PonderaL2Iter().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cImSec & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImSec",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.Im())->ReTagThis("Im"));
   aRes->AddFils(::ToXMLTree(std::string("KeyCalcNameCorresp"),anObj.KeyCalcNameCorresp())->ReTagThis("KeyCalcNameCorresp"));
   if (anObj.OffsetPt().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OffsetPt"),anObj.OffsetPt().Val())->ReTagThis("OffsetPt"));
   if (anObj.DirCalcCorrep().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DirCalcCorrep"),anObj.DirCalcCorrep().Val())->ReTagThis("DirCalcCorrep"));
   if (anObj.VerifHoms().IsInit())
      aRes->AddFils(ToXMLTree(anObj.VerifHoms().Val())->ReTagThis("VerifHoms"));
   if (anObj.NbTestRansacEstimH().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbTestRansacEstimH"),anObj.NbTestRansacEstimH().Val())->ReTagThis("NbTestRansacEstimH"));
   if (anObj.NbPtsRansacEstimH().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbPtsRansacEstimH"),anObj.NbPtsRansacEstimH().Val())->ReTagThis("NbPtsRansacEstimH"));
   if (anObj.L2EstimH().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("L2EstimH"),anObj.L2EstimH().Val())->ReTagThis("L2EstimH"));
   if (anObj.L1EstimH().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("L1EstimH"),anObj.L1EstimH().Val())->ReTagThis("L1EstimH"));
  for
  (       std::list< Pt2dr >::const_iterator it=anObj.PonderaL2Iter().begin();
      it !=anObj.PonderaL2Iter().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("PonderaL2Iter"),(*it))->ReTagThis("PonderaL2Iter"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImSec & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Im(),aTree->Get("Im",1)); //tototo 

   xml_init(anObj.KeyCalcNameCorresp(),aTree->Get("KeyCalcNameCorresp",1)); //tototo 

   xml_init(anObj.OffsetPt(),aTree->Get("OffsetPt",1)); //tototo 

   xml_init(anObj.DirCalcCorrep(),aTree->Get("DirCalcCorrep",1),std::string("")); //tototo 

   xml_init(anObj.VerifHoms(),aTree->Get("VerifHoms",1)); //tototo 

   xml_init(anObj.NbTestRansacEstimH(),aTree->Get("NbTestRansacEstimH",1),int(30000)); //tototo 

   xml_init(anObj.NbPtsRansacEstimH(),aTree->Get("NbPtsRansacEstimH",1),int(1000)); //tototo 

   xml_init(anObj.L2EstimH(),aTree->Get("L2EstimH",1),bool(false)); //tototo 

   xml_init(anObj.L1EstimH(),aTree->Get("L1EstimH",1),bool(false)); //tototo 

   xml_init(anObj.PonderaL2Iter(),aTree->GetAll("PonderaL2Iter",false,1));
}

std::string  Mangling( cImSec *) {return "8236B45D23FF6CA9FD3F";};


cTplValGesInit< cChantierDescripteur > & cCreateCompColoree::DicoLoc()
{
   return mDicoLoc;
}

const cTplValGesInit< cChantierDescripteur > & cCreateCompColoree::DicoLoc()const 
{
   return mDicoLoc;
}


std::list< cCmdMappeur > & cCreateCompColoree::MapCCC()
{
   return mMapCCC;
}

const std::list< cCmdMappeur > & cCreateCompColoree::MapCCC()const 
{
   return mMapCCC;
}


cTplValGesInit< double > & cCreateCompColoree::ParamBiCub()
{
   return mParamBiCub;
}

const cTplValGesInit< double > & cCreateCompColoree::ParamBiCub()const 
{
   return mParamBiCub;
}


double & cCreateCompColoree::StepGrid()
{
   return mStepGrid;
}

const double & cCreateCompColoree::StepGrid()const 
{
   return mStepGrid;
}


std::string & cCreateCompColoree::WorkDir()
{
   return mWorkDir;
}

const std::string & cCreateCompColoree::WorkDir()const 
{
   return mWorkDir;
}


std::list< cShowCalibsRel > & cCreateCompColoree::ShowCalibsRel()
{
   return mShowCalibsRel;
}

const std::list< cShowCalibsRel > & cCreateCompColoree::ShowCalibsRel()const 
{
   return mShowCalibsRel;
}


std::list< cResultCompCol > & cCreateCompColoree::ResultCompCol()
{
   return mResultCompCol;
}

const std::list< cResultCompCol > & cCreateCompColoree::ResultCompCol()const 
{
   return mResultCompCol;
}


std::string & cCreateCompColoree::KeyCalcNameCalib()
{
   return mKeyCalcNameCalib;
}

const std::string & cCreateCompColoree::KeyCalcNameCalib()const 
{
   return mKeyCalcNameCalib;
}


cTplValGesInit< string > & cCreateCompColoree::FileChantierNameDescripteur()
{
   return mFileChantierNameDescripteur;
}

const cTplValGesInit< string > & cCreateCompColoree::FileChantierNameDescripteur()const 
{
   return mFileChantierNameDescripteur;
}


cImageCmpCol & cCreateCompColoree::ImMaitresse()
{
   return mImMaitresse;
}

const cImageCmpCol & cCreateCompColoree::ImMaitresse()const 
{
   return mImMaitresse;
}


cTplValGesInit< std::string > & cCreateCompColoree::EnglobImMaitre()
{
   return EspaceResultSuperpCol().EnglobImMaitre();
}

const cTplValGesInit< std::string > & cCreateCompColoree::EnglobImMaitre()const 
{
   return EspaceResultSuperpCol().EnglobImMaitre();
}


cTplValGesInit< std::string > & cCreateCompColoree::EnglobAll()
{
   return EspaceResultSuperpCol().EnglobAll();
}

const cTplValGesInit< std::string > & cCreateCompColoree::EnglobAll()const 
{
   return EspaceResultSuperpCol().EnglobAll();
}


cTplValGesInit< Box2di > & cCreateCompColoree::EnglobBoxMaitresse()
{
   return EspaceResultSuperpCol().EnglobBoxMaitresse();
}

const cTplValGesInit< Box2di > & cCreateCompColoree::EnglobBoxMaitresse()const 
{
   return EspaceResultSuperpCol().EnglobBoxMaitresse();
}


cEspaceResultSuperpCol & cCreateCompColoree::EspaceResultSuperpCol()
{
   return mEspaceResultSuperpCol;
}

const cEspaceResultSuperpCol & cCreateCompColoree::EspaceResultSuperpCol()const 
{
   return mEspaceResultSuperpCol;
}


cTplValGesInit< Box2di > & cCreateCompColoree::BoxCalc()
{
   return mBoxCalc;
}

const cTplValGesInit< Box2di > & cCreateCompColoree::BoxCalc()const 
{
   return mBoxCalc;
}


cTplValGesInit< int > & cCreateCompColoree::TailleBloc()
{
   return mTailleBloc;
}

const cTplValGesInit< int > & cCreateCompColoree::TailleBloc()const 
{
   return mTailleBloc;
}


cTplValGesInit< int > & cCreateCompColoree::KBoxParal()
{
   return mKBoxParal;
}

const cTplValGesInit< int > & cCreateCompColoree::KBoxParal()const 
{
   return mKBoxParal;
}


cTplValGesInit< int > & cCreateCompColoree::ByProcess()
{
   return mByProcess;
}

const cTplValGesInit< int > & cCreateCompColoree::ByProcess()const 
{
   return mByProcess;
}


cTplValGesInit< bool > & cCreateCompColoree::CorDist()
{
   return mCorDist;
}

const cTplValGesInit< bool > & cCreateCompColoree::CorDist()const 
{
   return mCorDist;
}


cTplValGesInit< double > & cCreateCompColoree::ScaleFus()
{
   return mScaleFus;
}

const cTplValGesInit< double > & cCreateCompColoree::ScaleFus()const 
{
   return mScaleFus;
}


std::list< cImSec > & cCreateCompColoree::ImSec()
{
   return mImSec;
}

const std::list< cImSec > & cCreateCompColoree::ImSec()const 
{
   return mImSec;
}

void  BinaryUnDumpFromFile(cCreateCompColoree & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DicoLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DicoLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DicoLoc().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cCmdMappeur aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.MapCCC().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ParamBiCub().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ParamBiCub().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ParamBiCub().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.StepGrid(),aFp);
    BinaryUnDumpFromFile(anObj.WorkDir(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cShowCalibsRel aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.ShowCalibsRel().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cResultCompCol aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.ResultCompCol().push_back(aVal);
        }
  } ;
    BinaryUnDumpFromFile(anObj.KeyCalcNameCalib(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FileChantierNameDescripteur().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FileChantierNameDescripteur().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FileChantierNameDescripteur().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.ImMaitresse(),aFp);
    BinaryUnDumpFromFile(anObj.EspaceResultSuperpCol(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.BoxCalc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.BoxCalc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.BoxCalc().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TailleBloc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TailleBloc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TailleBloc().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KBoxParal().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KBoxParal().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KBoxParal().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ByProcess().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ByProcess().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ByProcess().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.CorDist().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.CorDist().ValForcedForUnUmp(),aFp);
        }
        else  anObj.CorDist().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ScaleFus().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ScaleFus().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ScaleFus().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cImSec aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.ImSec().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cCreateCompColoree & anObj)
{
    BinaryDumpInFile(aFp,anObj.DicoLoc().IsInit());
    if (anObj.DicoLoc().IsInit()) BinaryDumpInFile(aFp,anObj.DicoLoc().Val());
    BinaryDumpInFile(aFp,(int)anObj.MapCCC().size());
    for(  std::list< cCmdMappeur >::const_iterator iT=anObj.MapCCC().begin();
         iT!=anObj.MapCCC().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.ParamBiCub().IsInit());
    if (anObj.ParamBiCub().IsInit()) BinaryDumpInFile(aFp,anObj.ParamBiCub().Val());
    BinaryDumpInFile(aFp,anObj.StepGrid());
    BinaryDumpInFile(aFp,anObj.WorkDir());
    BinaryDumpInFile(aFp,(int)anObj.ShowCalibsRel().size());
    for(  std::list< cShowCalibsRel >::const_iterator iT=anObj.ShowCalibsRel().begin();
         iT!=anObj.ShowCalibsRel().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.ResultCompCol().size());
    for(  std::list< cResultCompCol >::const_iterator iT=anObj.ResultCompCol().begin();
         iT!=anObj.ResultCompCol().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.KeyCalcNameCalib());
    BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().IsInit());
    if (anObj.FileChantierNameDescripteur().IsInit()) BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().Val());
    BinaryDumpInFile(aFp,anObj.ImMaitresse());
    BinaryDumpInFile(aFp,anObj.EspaceResultSuperpCol());
    BinaryDumpInFile(aFp,anObj.BoxCalc().IsInit());
    if (anObj.BoxCalc().IsInit()) BinaryDumpInFile(aFp,anObj.BoxCalc().Val());
    BinaryDumpInFile(aFp,anObj.TailleBloc().IsInit());
    if (anObj.TailleBloc().IsInit()) BinaryDumpInFile(aFp,anObj.TailleBloc().Val());
    BinaryDumpInFile(aFp,anObj.KBoxParal().IsInit());
    if (anObj.KBoxParal().IsInit()) BinaryDumpInFile(aFp,anObj.KBoxParal().Val());
    BinaryDumpInFile(aFp,anObj.ByProcess().IsInit());
    if (anObj.ByProcess().IsInit()) BinaryDumpInFile(aFp,anObj.ByProcess().Val());
    BinaryDumpInFile(aFp,anObj.CorDist().IsInit());
    if (anObj.CorDist().IsInit()) BinaryDumpInFile(aFp,anObj.CorDist().Val());
    BinaryDumpInFile(aFp,anObj.ScaleFus().IsInit());
    if (anObj.ScaleFus().IsInit()) BinaryDumpInFile(aFp,anObj.ScaleFus().Val());
    BinaryDumpInFile(aFp,(int)anObj.ImSec().size());
    for(  std::list< cImSec >::const_iterator iT=anObj.ImSec().begin();
         iT!=anObj.ImSec().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cCreateCompColoree & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"CreateCompColoree",eXMLBranche);
   if (anObj.DicoLoc().IsInit())
      aRes->AddFils(ToXMLTree(anObj.DicoLoc().Val())->ReTagThis("DicoLoc"));
  for
  (       std::list< cCmdMappeur >::const_iterator it=anObj.MapCCC().begin();
      it !=anObj.MapCCC().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("MapCCC"));
   if (anObj.ParamBiCub().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ParamBiCub"),anObj.ParamBiCub().Val())->ReTagThis("ParamBiCub"));
   aRes->AddFils(::ToXMLTree(std::string("StepGrid"),anObj.StepGrid())->ReTagThis("StepGrid"));
   aRes->AddFils(::ToXMLTree(std::string("WorkDir"),anObj.WorkDir())->ReTagThis("WorkDir"));
  for
  (       std::list< cShowCalibsRel >::const_iterator it=anObj.ShowCalibsRel().begin();
      it !=anObj.ShowCalibsRel().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("ShowCalibsRel"));
  for
  (       std::list< cResultCompCol >::const_iterator it=anObj.ResultCompCol().begin();
      it !=anObj.ResultCompCol().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("ResultCompCol"));
   aRes->AddFils(::ToXMLTree(std::string("KeyCalcNameCalib"),anObj.KeyCalcNameCalib())->ReTagThis("KeyCalcNameCalib"));
   if (anObj.FileChantierNameDescripteur().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FileChantierNameDescripteur"),anObj.FileChantierNameDescripteur().Val())->ReTagThis("FileChantierNameDescripteur"));
   aRes->AddFils(ToXMLTree(anObj.ImMaitresse())->ReTagThis("ImMaitresse"));
   aRes->AddFils(ToXMLTree(anObj.EspaceResultSuperpCol())->ReTagThis("EspaceResultSuperpCol"));
   if (anObj.BoxCalc().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("BoxCalc"),anObj.BoxCalc().Val())->ReTagThis("BoxCalc"));
   if (anObj.TailleBloc().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TailleBloc"),anObj.TailleBloc().Val())->ReTagThis("TailleBloc"));
   if (anObj.KBoxParal().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KBoxParal"),anObj.KBoxParal().Val())->ReTagThis("KBoxParal"));
   if (anObj.ByProcess().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ByProcess"),anObj.ByProcess().Val())->ReTagThis("ByProcess"));
   if (anObj.CorDist().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("CorDist"),anObj.CorDist().Val())->ReTagThis("CorDist"));
   if (anObj.ScaleFus().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ScaleFus"),anObj.ScaleFus().Val())->ReTagThis("ScaleFus"));
  for
  (       std::list< cImSec >::const_iterator it=anObj.ImSec().begin();
      it !=anObj.ImSec().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("ImSec"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cCreateCompColoree & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DicoLoc(),aTree->Get("DicoLoc",1)); //tototo 

   xml_init(anObj.MapCCC(),aTree->GetAll("MapCCC",false,1));

   xml_init(anObj.ParamBiCub(),aTree->Get("ParamBiCub",1)); //tototo 

   xml_init(anObj.StepGrid(),aTree->Get("StepGrid",1)); //tototo 

   xml_init(anObj.WorkDir(),aTree->Get("WorkDir",1)); //tototo 

   xml_init(anObj.ShowCalibsRel(),aTree->GetAll("ShowCalibsRel",false,1));

   xml_init(anObj.ResultCompCol(),aTree->GetAll("ResultCompCol",false,1));

   xml_init(anObj.KeyCalcNameCalib(),aTree->Get("KeyCalcNameCalib",1)); //tototo 

   xml_init(anObj.FileChantierNameDescripteur(),aTree->Get("FileChantierNameDescripteur",1)); //tototo 

   xml_init(anObj.ImMaitresse(),aTree->Get("ImMaitresse",1)); //tototo 

   xml_init(anObj.EspaceResultSuperpCol(),aTree->Get("EspaceResultSuperpCol",1)); //tototo 

   xml_init(anObj.BoxCalc(),aTree->Get("BoxCalc",1)); //tototo 

   xml_init(anObj.TailleBloc(),aTree->Get("TailleBloc",1)); //tototo 

   xml_init(anObj.KBoxParal(),aTree->Get("KBoxParal",1)); //tototo 

   xml_init(anObj.ByProcess(),aTree->Get("ByProcess",1)); //tototo 

   xml_init(anObj.CorDist(),aTree->Get("CorDist",1),bool(false)); //tototo 

   xml_init(anObj.ScaleFus(),aTree->Get("ScaleFus",1),double(1.0)); //tototo 

   xml_init(anObj.ImSec(),aTree->GetAll("ImSec",false,1));
}

std::string  Mangling( cCreateCompColoree *) {return "6FFFBB645D43BA88FF3F";};


std::string & cSauvegardeMR2A::NameSauvMR2A()
{
   return mNameSauvMR2A;
}

const std::string & cSauvegardeMR2A::NameSauvMR2A()const 
{
   return mNameSauvMR2A;
}


double & cSauvegardeMR2A::StepGridMR2A()
{
   return mStepGridMR2A;
}

const double & cSauvegardeMR2A::StepGridMR2A()const 
{
   return mStepGridMR2A;
}


cTplValGesInit< std::string > & cSauvegardeMR2A::SauvImgMR2A()
{
   return mSauvImgMR2A;
}

const cTplValGesInit< std::string > & cSauvegardeMR2A::SauvImgMR2A()const 
{
   return mSauvImgMR2A;
}

void  BinaryUnDumpFromFile(cSauvegardeMR2A & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameSauvMR2A(),aFp);
    BinaryUnDumpFromFile(anObj.StepGridMR2A(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SauvImgMR2A().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SauvImgMR2A().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SauvImgMR2A().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSauvegardeMR2A & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameSauvMR2A());
    BinaryDumpInFile(aFp,anObj.StepGridMR2A());
    BinaryDumpInFile(aFp,anObj.SauvImgMR2A().IsInit());
    if (anObj.SauvImgMR2A().IsInit()) BinaryDumpInFile(aFp,anObj.SauvImgMR2A().Val());
}

cElXMLTree * ToXMLTree(const cSauvegardeMR2A & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SauvegardeMR2A",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameSauvMR2A"),anObj.NameSauvMR2A())->ReTagThis("NameSauvMR2A"));
   aRes->AddFils(::ToXMLTree(std::string("StepGridMR2A"),anObj.StepGridMR2A())->ReTagThis("StepGridMR2A"));
   if (anObj.SauvImgMR2A().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SauvImgMR2A"),anObj.SauvImgMR2A().Val())->ReTagThis("SauvImgMR2A"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSauvegardeMR2A & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameSauvMR2A(),aTree->Get("NameSauvMR2A",1)); //tototo 

   xml_init(anObj.StepGridMR2A(),aTree->Get("StepGridMR2A",1)); //tototo 

   xml_init(anObj.SauvImgMR2A(),aTree->Get("SauvImgMR2A",1)); //tototo 
}

std::string  Mangling( cSauvegardeMR2A *) {return "2EEC7F3F8CD1D9B1FE3F";};


std::string & cGenereModeleRaster2Analytique::Dir()
{
   return mDir;
}

const std::string & cGenereModeleRaster2Analytique::Dir()const 
{
   return mDir;
}


std::string & cGenereModeleRaster2Analytique::Im1()
{
   return mIm1;
}

const std::string & cGenereModeleRaster2Analytique::Im1()const 
{
   return mIm1;
}


std::string & cGenereModeleRaster2Analytique::Im2()
{
   return mIm2;
}

const std::string & cGenereModeleRaster2Analytique::Im2()const 
{
   return mIm2;
}


double & cGenereModeleRaster2Analytique::SsResol()
{
   return mSsResol;
}

const double & cGenereModeleRaster2Analytique::SsResol()const 
{
   return mSsResol;
}


Pt2dr & cGenereModeleRaster2Analytique::Pas()
{
   return mPas;
}

const Pt2dr & cGenereModeleRaster2Analytique::Pas()const 
{
   return mPas;
}


cTplValGesInit< Pt2dr > & cGenereModeleRaster2Analytique::Tr0()
{
   return mTr0;
}

const cTplValGesInit< Pt2dr > & cGenereModeleRaster2Analytique::Tr0()const 
{
   return mTr0;
}


cTplValGesInit< bool > & cGenereModeleRaster2Analytique::AutoCalcTr0()
{
   return mAutoCalcTr0;
}

const cTplValGesInit< bool > & cGenereModeleRaster2Analytique::AutoCalcTr0()const 
{
   return mAutoCalcTr0;
}


cTplValGesInit< double > & cGenereModeleRaster2Analytique::RoundTr0()
{
   return mRoundTr0;
}

const cTplValGesInit< double > & cGenereModeleRaster2Analytique::RoundTr0()const 
{
   return mRoundTr0;
}


int & cGenereModeleRaster2Analytique::DegPoly()
{
   return mDegPoly;
}

const int & cGenereModeleRaster2Analytique::DegPoly()const 
{
   return mDegPoly;
}


bool & cGenereModeleRaster2Analytique::CLibre()
{
   return mCLibre;
}

const bool & cGenereModeleRaster2Analytique::CLibre()const 
{
   return mCLibre;
}


bool & cGenereModeleRaster2Analytique::Dequant()
{
   return mDequant;
}

const bool & cGenereModeleRaster2Analytique::Dequant()const 
{
   return mDequant;
}


std::string & cGenereModeleRaster2Analytique::NameSauvMR2A()
{
   return SauvegardeMR2A().Val().NameSauvMR2A();
}

const std::string & cGenereModeleRaster2Analytique::NameSauvMR2A()const 
{
   return SauvegardeMR2A().Val().NameSauvMR2A();
}


double & cGenereModeleRaster2Analytique::StepGridMR2A()
{
   return SauvegardeMR2A().Val().StepGridMR2A();
}

const double & cGenereModeleRaster2Analytique::StepGridMR2A()const 
{
   return SauvegardeMR2A().Val().StepGridMR2A();
}


cTplValGesInit< std::string > & cGenereModeleRaster2Analytique::SauvImgMR2A()
{
   return SauvegardeMR2A().Val().SauvImgMR2A();
}

const cTplValGesInit< std::string > & cGenereModeleRaster2Analytique::SauvImgMR2A()const 
{
   return SauvegardeMR2A().Val().SauvImgMR2A();
}


cTplValGesInit< cSauvegardeMR2A > & cGenereModeleRaster2Analytique::SauvegardeMR2A()
{
   return mSauvegardeMR2A;
}

const cTplValGesInit< cSauvegardeMR2A > & cGenereModeleRaster2Analytique::SauvegardeMR2A()const 
{
   return mSauvegardeMR2A;
}

void  BinaryUnDumpFromFile(cGenereModeleRaster2Analytique & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Dir(),aFp);
    BinaryUnDumpFromFile(anObj.Im1(),aFp);
    BinaryUnDumpFromFile(anObj.Im2(),aFp);
    BinaryUnDumpFromFile(anObj.SsResol(),aFp);
    BinaryUnDumpFromFile(anObj.Pas(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Tr0().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Tr0().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Tr0().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AutoCalcTr0().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AutoCalcTr0().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AutoCalcTr0().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RoundTr0().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RoundTr0().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RoundTr0().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.DegPoly(),aFp);
    BinaryUnDumpFromFile(anObj.CLibre(),aFp);
    BinaryUnDumpFromFile(anObj.Dequant(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SauvegardeMR2A().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SauvegardeMR2A().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SauvegardeMR2A().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cGenereModeleRaster2Analytique & anObj)
{
    BinaryDumpInFile(aFp,anObj.Dir());
    BinaryDumpInFile(aFp,anObj.Im1());
    BinaryDumpInFile(aFp,anObj.Im2());
    BinaryDumpInFile(aFp,anObj.SsResol());
    BinaryDumpInFile(aFp,anObj.Pas());
    BinaryDumpInFile(aFp,anObj.Tr0().IsInit());
    if (anObj.Tr0().IsInit()) BinaryDumpInFile(aFp,anObj.Tr0().Val());
    BinaryDumpInFile(aFp,anObj.AutoCalcTr0().IsInit());
    if (anObj.AutoCalcTr0().IsInit()) BinaryDumpInFile(aFp,anObj.AutoCalcTr0().Val());
    BinaryDumpInFile(aFp,anObj.RoundTr0().IsInit());
    if (anObj.RoundTr0().IsInit()) BinaryDumpInFile(aFp,anObj.RoundTr0().Val());
    BinaryDumpInFile(aFp,anObj.DegPoly());
    BinaryDumpInFile(aFp,anObj.CLibre());
    BinaryDumpInFile(aFp,anObj.Dequant());
    BinaryDumpInFile(aFp,anObj.SauvegardeMR2A().IsInit());
    if (anObj.SauvegardeMR2A().IsInit()) BinaryDumpInFile(aFp,anObj.SauvegardeMR2A().Val());
}

cElXMLTree * ToXMLTree(const cGenereModeleRaster2Analytique & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"GenereModeleRaster2Analytique",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Dir"),anObj.Dir())->ReTagThis("Dir"));
   aRes->AddFils(::ToXMLTree(std::string("Im1"),anObj.Im1())->ReTagThis("Im1"));
   aRes->AddFils(::ToXMLTree(std::string("Im2"),anObj.Im2())->ReTagThis("Im2"));
   aRes->AddFils(::ToXMLTree(std::string("SsResol"),anObj.SsResol())->ReTagThis("SsResol"));
   aRes->AddFils(::ToXMLTree(std::string("Pas"),anObj.Pas())->ReTagThis("Pas"));
   if (anObj.Tr0().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Tr0"),anObj.Tr0().Val())->ReTagThis("Tr0"));
   if (anObj.AutoCalcTr0().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AutoCalcTr0"),anObj.AutoCalcTr0().Val())->ReTagThis("AutoCalcTr0"));
   if (anObj.RoundTr0().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RoundTr0"),anObj.RoundTr0().Val())->ReTagThis("RoundTr0"));
   aRes->AddFils(::ToXMLTree(std::string("DegPoly"),anObj.DegPoly())->ReTagThis("DegPoly"));
   aRes->AddFils(::ToXMLTree(std::string("CLibre"),anObj.CLibre())->ReTagThis("CLibre"));
   aRes->AddFils(::ToXMLTree(std::string("Dequant"),anObj.Dequant())->ReTagThis("Dequant"));
   if (anObj.SauvegardeMR2A().IsInit())
      aRes->AddFils(ToXMLTree(anObj.SauvegardeMR2A().Val())->ReTagThis("SauvegardeMR2A"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cGenereModeleRaster2Analytique & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Dir(),aTree->Get("Dir",1)); //tototo 

   xml_init(anObj.Im1(),aTree->Get("Im1",1)); //tototo 

   xml_init(anObj.Im2(),aTree->Get("Im2",1)); //tototo 

   xml_init(anObj.SsResol(),aTree->Get("SsResol",1)); //tototo 

   xml_init(anObj.Pas(),aTree->Get("Pas",1)); //tototo 

   xml_init(anObj.Tr0(),aTree->Get("Tr0",1),Pt2dr(0,0)); //tototo 

   xml_init(anObj.AutoCalcTr0(),aTree->Get("AutoCalcTr0",1),bool(false)); //tototo 

   xml_init(anObj.RoundTr0(),aTree->Get("RoundTr0",1),double(0.5)); //tototo 

   xml_init(anObj.DegPoly(),aTree->Get("DegPoly",1)); //tototo 

   xml_init(anObj.CLibre(),aTree->Get("CLibre",1)); //tototo 

   xml_init(anObj.Dequant(),aTree->Get("Dequant",1)); //tototo 

   xml_init(anObj.SauvegardeMR2A(),aTree->Get("SauvegardeMR2A",1)); //tototo 
}

std::string  Mangling( cGenereModeleRaster2Analytique *) {return "62B7EADB77FC7FC5FD3F";};


std::string & cBayerGridDirecteEtInverse::Ch1()
{
   return mCh1;
}

const std::string & cBayerGridDirecteEtInverse::Ch1()const 
{
   return mCh1;
}


std::string & cBayerGridDirecteEtInverse::Ch2()
{
   return mCh2;
}

const std::string & cBayerGridDirecteEtInverse::Ch2()const 
{
   return mCh2;
}


cGridDirecteEtInverse & cBayerGridDirecteEtInverse::Grid()
{
   return mGrid;
}

const cGridDirecteEtInverse & cBayerGridDirecteEtInverse::Grid()const 
{
   return mGrid;
}

void  BinaryUnDumpFromFile(cBayerGridDirecteEtInverse & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Ch1(),aFp);
    BinaryUnDumpFromFile(anObj.Ch2(),aFp);
    BinaryUnDumpFromFile(anObj.Grid(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cBayerGridDirecteEtInverse & anObj)
{
    BinaryDumpInFile(aFp,anObj.Ch1());
    BinaryDumpInFile(aFp,anObj.Ch2());
    BinaryDumpInFile(aFp,anObj.Grid());
}

cElXMLTree * ToXMLTree(const cBayerGridDirecteEtInverse & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"BayerGridDirecteEtInverse",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Ch1"),anObj.Ch1())->ReTagThis("Ch1"));
   aRes->AddFils(::ToXMLTree(std::string("Ch2"),anObj.Ch2())->ReTagThis("Ch2"));
   aRes->AddFils(ToXMLTree(anObj.Grid())->ReTagThis("Grid"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cBayerGridDirecteEtInverse & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Ch1(),aTree->Get("Ch1",1)); //tototo 

   xml_init(anObj.Ch2(),aTree->Get("Ch2",1)); //tototo 

   xml_init(anObj.Grid(),aTree->Get("Grid",1)); //tototo 
}

std::string  Mangling( cBayerGridDirecteEtInverse *) {return "7B9C943F7BE5698DFE3F";};


std::list< cBayerGridDirecteEtInverse > & cBayerCalibGeom::Grids()
{
   return mGrids;
}

const std::list< cBayerGridDirecteEtInverse > & cBayerCalibGeom::Grids()const 
{
   return mGrids;
}


cTplValGesInit< Pt3dr > & cBayerCalibGeom::WB()
{
   return mWB;
}

const cTplValGesInit< Pt3dr > & cBayerCalibGeom::WB()const 
{
   return mWB;
}


cTplValGesInit< Pt3dr > & cBayerCalibGeom::PG()
{
   return mPG;
}

const cTplValGesInit< Pt3dr > & cBayerCalibGeom::PG()const 
{
   return mPG;
}

void  BinaryUnDumpFromFile(cBayerCalibGeom & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cBayerGridDirecteEtInverse aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.Grids().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.WB().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.WB().ValForcedForUnUmp(),aFp);
        }
        else  anObj.WB().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PG().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PG().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PG().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cBayerCalibGeom & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.Grids().size());
    for(  std::list< cBayerGridDirecteEtInverse >::const_iterator iT=anObj.Grids().begin();
         iT!=anObj.Grids().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.WB().IsInit());
    if (anObj.WB().IsInit()) BinaryDumpInFile(aFp,anObj.WB().Val());
    BinaryDumpInFile(aFp,anObj.PG().IsInit());
    if (anObj.PG().IsInit()) BinaryDumpInFile(aFp,anObj.PG().Val());
}

cElXMLTree * ToXMLTree(const cBayerCalibGeom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"BayerCalibGeom",eXMLBranche);
  for
  (       std::list< cBayerGridDirecteEtInverse >::const_iterator it=anObj.Grids().begin();
      it !=anObj.Grids().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("Grids"));
   if (anObj.WB().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("WB"),anObj.WB().Val())->ReTagThis("WB"));
   if (anObj.PG().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PG"),anObj.PG().Val())->ReTagThis("PG"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cBayerCalibGeom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Grids(),aTree->GetAll("Grids",false,1));

   xml_init(anObj.WB(),aTree->Get("WB",1)); //tototo 

   xml_init(anObj.PG(),aTree->Get("PG",1)); //tototo 
}

std::string  Mangling( cBayerCalibGeom *) {return "4CBB767185763C96FE3F";};


int & cSpecifEtalRelOneChan::DegreOwn()
{
   return mDegreOwn;
}

const int & cSpecifEtalRelOneChan::DegreOwn()const 
{
   return mDegreOwn;
}


int & cSpecifEtalRelOneChan::DegreOther()
{
   return mDegreOther;
}

const int & cSpecifEtalRelOneChan::DegreOther()const 
{
   return mDegreOther;
}

void  BinaryUnDumpFromFile(cSpecifEtalRelOneChan & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.DegreOwn(),aFp);
    BinaryUnDumpFromFile(anObj.DegreOther(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSpecifEtalRelOneChan & anObj)
{
    BinaryDumpInFile(aFp,anObj.DegreOwn());
    BinaryDumpInFile(aFp,anObj.DegreOther());
}

cElXMLTree * ToXMLTree(const cSpecifEtalRelOneChan & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SpecifEtalRelOneChan",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("DegreOwn"),anObj.DegreOwn())->ReTagThis("DegreOwn"));
   aRes->AddFils(::ToXMLTree(std::string("DegreOther"),anObj.DegreOther())->ReTagThis("DegreOther"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSpecifEtalRelOneChan & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DegreOwn(),aTree->Get("DegreOwn",1)); //tototo 

   xml_init(anObj.DegreOther(),aTree->Get("DegreOther",1)); //tototo 
}

std::string  Mangling( cSpecifEtalRelOneChan *) {return "44587022EBDCE097FF3F";};


std::list< cSpecifEtalRelOneChan > & cSpecifEtalRadiom::Channel()
{
   return mChannel;
}

const std::list< cSpecifEtalRelOneChan > & cSpecifEtalRadiom::Channel()const 
{
   return mChannel;
}

void  BinaryUnDumpFromFile(cSpecifEtalRadiom & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cSpecifEtalRelOneChan aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.Channel().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSpecifEtalRadiom & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.Channel().size());
    for(  std::list< cSpecifEtalRelOneChan >::const_iterator iT=anObj.Channel().begin();
         iT!=anObj.Channel().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cSpecifEtalRadiom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SpecifEtalRadiom",eXMLBranche);
  for
  (       std::list< cSpecifEtalRelOneChan >::const_iterator it=anObj.Channel().begin();
      it !=anObj.Channel().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("Channel"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSpecifEtalRadiom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Channel(),aTree->GetAll("Channel",false,1));
}

std::string  Mangling( cSpecifEtalRadiom *) {return "B621139C5322D694FD3F";};


std::vector< int > & cPolyNRadiom::Degre()
{
   return mDegre;
}

const std::vector< int > & cPolyNRadiom::Degre()const 
{
   return mDegre;
}


double & cPolyNRadiom::Val()
{
   return mVal;
}

const double & cPolyNRadiom::Val()const 
{
   return mVal;
}

void  BinaryUnDumpFromFile(cPolyNRadiom & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             int aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.Degre().push_back(aVal);
        }
  } ;
    BinaryUnDumpFromFile(anObj.Val(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPolyNRadiom & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.Degre().size());
    for(  std::vector< int >::const_iterator iT=anObj.Degre().begin();
         iT!=anObj.Degre().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.Val());
}

cElXMLTree * ToXMLTree(const cPolyNRadiom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PolyNRadiom",eXMLBranche);
  for
  (       std::vector< int >::const_iterator it=anObj.Degre().begin();
      it !=anObj.Degre().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("Degre"),(*it))->ReTagThis("Degre"));
   aRes->AddFils(::ToXMLTree(std::string("Val"),anObj.Val())->ReTagThis("Val"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPolyNRadiom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Degre(),aTree->GetAll("Degre",false,1));

   xml_init(anObj.Val(),aTree->Get("Val",1)); //tototo 
}

std::string  Mangling( cPolyNRadiom *) {return "34AD06E19F9AEDB4FD3F";};


std::vector< cPolyNRadiom > & cEtalRelOneChan::PolyNRadiom()
{
   return mPolyNRadiom;
}

const std::vector< cPolyNRadiom > & cEtalRelOneChan::PolyNRadiom()const 
{
   return mPolyNRadiom;
}

void  BinaryUnDumpFromFile(cEtalRelOneChan & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cPolyNRadiom aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.PolyNRadiom().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cEtalRelOneChan & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.PolyNRadiom().size());
    for(  std::vector< cPolyNRadiom >::const_iterator iT=anObj.PolyNRadiom().begin();
         iT!=anObj.PolyNRadiom().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cEtalRelOneChan & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"EtalRelOneChan",eXMLBranche);
  for
  (       std::vector< cPolyNRadiom >::const_iterator it=anObj.PolyNRadiom().begin();
      it !=anObj.PolyNRadiom().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("PolyNRadiom"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cEtalRelOneChan & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.PolyNRadiom(),aTree->GetAll("PolyNRadiom",false,1));
}

std::string  Mangling( cEtalRelOneChan *) {return "549AD0C98D700783FF3F";};


std::vector< cEtalRelOneChan > & cColorCalib::CalibChannel()
{
   return mCalibChannel;
}

const std::vector< cEtalRelOneChan > & cColorCalib::CalibChannel()const 
{
   return mCalibChannel;
}

void  BinaryUnDumpFromFile(cColorCalib & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cEtalRelOneChan aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.CalibChannel().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cColorCalib & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.CalibChannel().size());
    for(  std::vector< cEtalRelOneChan >::const_iterator iT=anObj.CalibChannel().begin();
         iT!=anObj.CalibChannel().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cColorCalib & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ColorCalib",eXMLBranche);
  for
  (       std::vector< cEtalRelOneChan >::const_iterator it=anObj.CalibChannel().begin();
      it !=anObj.CalibChannel().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("CalibChannel"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cColorCalib & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.CalibChannel(),aTree->GetAll("CalibChannel",false,1));
}

std::string  Mangling( cColorCalib *) {return "2CB7DECDCA0F5CCBFC3F";};


std::string & cOneGridECG::Name()
{
   return mName;
}

const std::string & cOneGridECG::Name()const 
{
   return mName;
}


bool & cOneGridECG::Direct()
{
   return mDirect;
}

const bool & cOneGridECG::Direct()const 
{
   return mDirect;
}

void  BinaryUnDumpFromFile(cOneGridECG & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Name(),aFp);
    BinaryUnDumpFromFile(anObj.Direct(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cOneGridECG & anObj)
{
    BinaryDumpInFile(aFp,anObj.Name());
    BinaryDumpInFile(aFp,anObj.Direct());
}

cElXMLTree * ToXMLTree(const cOneGridECG & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"OneGridECG",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Name"),anObj.Name())->ReTagThis("Name"));
   aRes->AddFils(::ToXMLTree(std::string("Direct"),anObj.Direct())->ReTagThis("Direct"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cOneGridECG & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Name(),aTree->Get("Name",1)); //tototo 

   xml_init(anObj.Direct(),aTree->Get("Direct",1)); //tototo 
}

std::string  Mangling( cOneGridECG *) {return "162A63C89FB2C3F8FD3F";};


cTplValGesInit< std::string > & cEvalComposeGrid::Directory()
{
   return mDirectory;
}

const cTplValGesInit< std::string > & cEvalComposeGrid::Directory()const 
{
   return mDirectory;
}


double & cEvalComposeGrid::Dyn()
{
   return mDyn;
}

const double & cEvalComposeGrid::Dyn()const 
{
   return mDyn;
}


double & cEvalComposeGrid::Resol()
{
   return mResol;
}

const double & cEvalComposeGrid::Resol()const 
{
   return mResol;
}


std::list< cOneGridECG > & cEvalComposeGrid::OneGridECG()
{
   return mOneGridECG;
}

const std::list< cOneGridECG > & cEvalComposeGrid::OneGridECG()const 
{
   return mOneGridECG;
}


cTplValGesInit< std::string > & cEvalComposeGrid::NameNorm()
{
   return mNameNorm;
}

const cTplValGesInit< std::string > & cEvalComposeGrid::NameNorm()const 
{
   return mNameNorm;
}

void  BinaryUnDumpFromFile(cEvalComposeGrid & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Directory().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Directory().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Directory().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.Dyn(),aFp);
    BinaryUnDumpFromFile(anObj.Resol(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cOneGridECG aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.OneGridECG().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NameNorm().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NameNorm().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NameNorm().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cEvalComposeGrid & anObj)
{
    BinaryDumpInFile(aFp,anObj.Directory().IsInit());
    if (anObj.Directory().IsInit()) BinaryDumpInFile(aFp,anObj.Directory().Val());
    BinaryDumpInFile(aFp,anObj.Dyn());
    BinaryDumpInFile(aFp,anObj.Resol());
    BinaryDumpInFile(aFp,(int)anObj.OneGridECG().size());
    for(  std::list< cOneGridECG >::const_iterator iT=anObj.OneGridECG().begin();
         iT!=anObj.OneGridECG().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.NameNorm().IsInit());
    if (anObj.NameNorm().IsInit()) BinaryDumpInFile(aFp,anObj.NameNorm().Val());
}

cElXMLTree * ToXMLTree(const cEvalComposeGrid & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"EvalComposeGrid",eXMLBranche);
   if (anObj.Directory().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Directory"),anObj.Directory().Val())->ReTagThis("Directory"));
   aRes->AddFils(::ToXMLTree(std::string("Dyn"),anObj.Dyn())->ReTagThis("Dyn"));
   aRes->AddFils(::ToXMLTree(std::string("Resol"),anObj.Resol())->ReTagThis("Resol"));
  for
  (       std::list< cOneGridECG >::const_iterator it=anObj.OneGridECG().begin();
      it !=anObj.OneGridECG().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("OneGridECG"));
   if (anObj.NameNorm().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NameNorm"),anObj.NameNorm().Val())->ReTagThis("NameNorm"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cEvalComposeGrid & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Directory(),aTree->Get("Directory",1),std::string("")); //tototo 

   xml_init(anObj.Dyn(),aTree->Get("Dyn",1)); //tototo 

   xml_init(anObj.Resol(),aTree->Get("Resol",1)); //tototo 

   xml_init(anObj.OneGridECG(),aTree->GetAll("OneGridECG",false,1));

   xml_init(anObj.NameNorm(),aTree->Get("NameNorm",1)); //tototo 
}

std::string  Mangling( cEvalComposeGrid *) {return "4F4CB5FDACF205ACFE3F";};


std::string & cCalcNomFromCouple::Pattern2Match()
{
   return mPattern2Match;
}

const std::string & cCalcNomFromCouple::Pattern2Match()const 
{
   return mPattern2Match;
}


cTplValGesInit< std::string > & cCalcNomFromCouple::Separateur()
{
   return mSeparateur;
}

const cTplValGesInit< std::string > & cCalcNomFromCouple::Separateur()const 
{
   return mSeparateur;
}


std::string & cCalcNomFromCouple::NameCalculated()
{
   return mNameCalculated;
}

const std::string & cCalcNomFromCouple::NameCalculated()const 
{
   return mNameCalculated;
}

void  BinaryUnDumpFromFile(cCalcNomFromCouple & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Pattern2Match(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Separateur().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Separateur().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Separateur().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.NameCalculated(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cCalcNomFromCouple & anObj)
{
    BinaryDumpInFile(aFp,anObj.Pattern2Match());
    BinaryDumpInFile(aFp,anObj.Separateur().IsInit());
    if (anObj.Separateur().IsInit()) BinaryDumpInFile(aFp,anObj.Separateur().Val());
    BinaryDumpInFile(aFp,anObj.NameCalculated());
}

cElXMLTree * ToXMLTree(const cCalcNomFromCouple & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"CalcNomFromCouple",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Pattern2Match"),anObj.Pattern2Match())->ReTagThis("Pattern2Match"));
   if (anObj.Separateur().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Separateur"),anObj.Separateur().Val())->ReTagThis("Separateur"));
   aRes->AddFils(::ToXMLTree(std::string("NameCalculated"),anObj.NameCalculated())->ReTagThis("NameCalculated"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cCalcNomFromCouple & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Pattern2Match(),aTree->Get("Pattern2Match",1)); //tototo 

   xml_init(anObj.Separateur(),aTree->Get("Separateur",1),std::string("")); //tototo 

   xml_init(anObj.NameCalculated(),aTree->Get("NameCalculated",1)); //tototo 
}

std::string  Mangling( cCalcNomFromCouple *) {return "4C67512850B23C97FD3F";};


std::string & cCalcNomFromOne::Pattern2Match()
{
   return mPattern2Match;
}

const std::string & cCalcNomFromOne::Pattern2Match()const 
{
   return mPattern2Match;
}


std::string & cCalcNomFromOne::NameCalculated()
{
   return mNameCalculated;
}

const std::string & cCalcNomFromOne::NameCalculated()const 
{
   return mNameCalculated;
}

void  BinaryUnDumpFromFile(cCalcNomFromOne & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Pattern2Match(),aFp);
    BinaryUnDumpFromFile(anObj.NameCalculated(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cCalcNomFromOne & anObj)
{
    BinaryDumpInFile(aFp,anObj.Pattern2Match());
    BinaryDumpInFile(aFp,anObj.NameCalculated());
}

cElXMLTree * ToXMLTree(const cCalcNomFromOne & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"CalcNomFromOne",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Pattern2Match"),anObj.Pattern2Match())->ReTagThis("Pattern2Match"));
   aRes->AddFils(::ToXMLTree(std::string("NameCalculated"),anObj.NameCalculated())->ReTagThis("NameCalculated"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cCalcNomFromOne & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Pattern2Match(),aTree->Get("Pattern2Match",1)); //tototo 

   xml_init(anObj.NameCalculated(),aTree->Get("NameCalculated",1)); //tototo 
}

std::string  Mangling( cCalcNomFromOne *) {return "80DEEAE48AE949CCFE3F";};


std::string & cOneResync::Dir()
{
   return mDir;
}

const std::string & cOneResync::Dir()const 
{
   return mDir;
}


std::string & cOneResync::PatSel()
{
   return mPatSel;
}

const std::string & cOneResync::PatSel()const 
{
   return mPatSel;
}


std::string & cOneResync::PatRename()
{
   return mPatRename;
}

const std::string & cOneResync::PatRename()const 
{
   return mPatRename;
}


std::string & cOneResync::Rename()
{
   return mRename;
}

const std::string & cOneResync::Rename()const 
{
   return mRename;
}

void  BinaryUnDumpFromFile(cOneResync & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Dir(),aFp);
    BinaryUnDumpFromFile(anObj.PatSel(),aFp);
    BinaryUnDumpFromFile(anObj.PatRename(),aFp);
    BinaryUnDumpFromFile(anObj.Rename(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cOneResync & anObj)
{
    BinaryDumpInFile(aFp,anObj.Dir());
    BinaryDumpInFile(aFp,anObj.PatSel());
    BinaryDumpInFile(aFp,anObj.PatRename());
    BinaryDumpInFile(aFp,anObj.Rename());
}

cElXMLTree * ToXMLTree(const cOneResync & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"OneResync",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Dir"),anObj.Dir())->ReTagThis("Dir"));
   aRes->AddFils(::ToXMLTree(std::string("PatSel"),anObj.PatSel())->ReTagThis("PatSel"));
   aRes->AddFils(::ToXMLTree(std::string("PatRename"),anObj.PatRename())->ReTagThis("PatRename"));
   aRes->AddFils(::ToXMLTree(std::string("Rename"),anObj.Rename())->ReTagThis("Rename"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cOneResync & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Dir(),aTree->Get("Dir",1)); //tototo 

   xml_init(anObj.PatSel(),aTree->Get("PatSel",1)); //tototo 

   xml_init(anObj.PatRename(),aTree->Get("PatRename",1)); //tototo 

   xml_init(anObj.Rename(),aTree->Get("Rename",1)); //tototo 
}

std::string  Mangling( cOneResync *) {return "52C249F1B01914B2FDBF";};


std::list< cOneResync > & cReSynchronImage::OneResync()
{
   return mOneResync;
}

const std::list< cOneResync > & cReSynchronImage::OneResync()const 
{
   return mOneResync;
}


double & cReSynchronImage::EcartMin()
{
   return mEcartMin;
}

const double & cReSynchronImage::EcartMin()const 
{
   return mEcartMin;
}


double & cReSynchronImage::EcartMax()
{
   return mEcartMax;
}

const double & cReSynchronImage::EcartMax()const 
{
   return mEcartMax;
}


cTplValGesInit< double > & cReSynchronImage::EcartRechAuto()
{
   return mEcartRechAuto;
}

const cTplValGesInit< double > & cReSynchronImage::EcartRechAuto()const 
{
   return mEcartRechAuto;
}


cTplValGesInit< double > & cReSynchronImage::SigmaRechAuto()
{
   return mSigmaRechAuto;
}

const cTplValGesInit< double > & cReSynchronImage::SigmaRechAuto()const 
{
   return mSigmaRechAuto;
}


cTplValGesInit< double > & cReSynchronImage::EcartCalcMoyRechAuto()
{
   return mEcartCalcMoyRechAuto;
}

const cTplValGesInit< double > & cReSynchronImage::EcartCalcMoyRechAuto()const 
{
   return mEcartCalcMoyRechAuto;
}

void  BinaryUnDumpFromFile(cReSynchronImage & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cOneResync aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.OneResync().push_back(aVal);
        }
  } ;
    BinaryUnDumpFromFile(anObj.EcartMin(),aFp);
    BinaryUnDumpFromFile(anObj.EcartMax(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.EcartRechAuto().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.EcartRechAuto().ValForcedForUnUmp(),aFp);
        }
        else  anObj.EcartRechAuto().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SigmaRechAuto().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SigmaRechAuto().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SigmaRechAuto().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.EcartCalcMoyRechAuto().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.EcartCalcMoyRechAuto().ValForcedForUnUmp(),aFp);
        }
        else  anObj.EcartCalcMoyRechAuto().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cReSynchronImage & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.OneResync().size());
    for(  std::list< cOneResync >::const_iterator iT=anObj.OneResync().begin();
         iT!=anObj.OneResync().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.EcartMin());
    BinaryDumpInFile(aFp,anObj.EcartMax());
    BinaryDumpInFile(aFp,anObj.EcartRechAuto().IsInit());
    if (anObj.EcartRechAuto().IsInit()) BinaryDumpInFile(aFp,anObj.EcartRechAuto().Val());
    BinaryDumpInFile(aFp,anObj.SigmaRechAuto().IsInit());
    if (anObj.SigmaRechAuto().IsInit()) BinaryDumpInFile(aFp,anObj.SigmaRechAuto().Val());
    BinaryDumpInFile(aFp,anObj.EcartCalcMoyRechAuto().IsInit());
    if (anObj.EcartCalcMoyRechAuto().IsInit()) BinaryDumpInFile(aFp,anObj.EcartCalcMoyRechAuto().Val());
}

cElXMLTree * ToXMLTree(const cReSynchronImage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ReSynchronImage",eXMLBranche);
  for
  (       std::list< cOneResync >::const_iterator it=anObj.OneResync().begin();
      it !=anObj.OneResync().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("OneResync"));
   aRes->AddFils(::ToXMLTree(std::string("EcartMin"),anObj.EcartMin())->ReTagThis("EcartMin"));
   aRes->AddFils(::ToXMLTree(std::string("EcartMax"),anObj.EcartMax())->ReTagThis("EcartMax"));
   if (anObj.EcartRechAuto().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("EcartRechAuto"),anObj.EcartRechAuto().Val())->ReTagThis("EcartRechAuto"));
   if (anObj.SigmaRechAuto().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SigmaRechAuto"),anObj.SigmaRechAuto().Val())->ReTagThis("SigmaRechAuto"));
   if (anObj.EcartCalcMoyRechAuto().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("EcartCalcMoyRechAuto"),anObj.EcartCalcMoyRechAuto().Val())->ReTagThis("EcartCalcMoyRechAuto"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cReSynchronImage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.OneResync(),aTree->GetAll("OneResync",false,1));

   xml_init(anObj.EcartMin(),aTree->Get("EcartMin",1)); //tototo 

   xml_init(anObj.EcartMax(),aTree->Get("EcartMax",1)); //tototo 

   xml_init(anObj.EcartRechAuto(),aTree->Get("EcartRechAuto",1),double(4.0)); //tototo 

   xml_init(anObj.SigmaRechAuto(),aTree->Get("SigmaRechAuto",1),double(1.0)); //tototo 

   xml_init(anObj.EcartCalcMoyRechAuto(),aTree->Get("EcartCalcMoyRechAuto",1),double(1.5)); //tototo 
}

std::string  Mangling( cReSynchronImage *) {return "4B9F554AF3C6FAB6FF3F";};


Pt3dr & cXmlCylindreRevolution::P0()
{
   return mP0;
}

const Pt3dr & cXmlCylindreRevolution::P0()const 
{
   return mP0;
}


Pt3dr & cXmlCylindreRevolution::P1()
{
   return mP1;
}

const Pt3dr & cXmlCylindreRevolution::P1()const 
{
   return mP1;
}


Pt3dr & cXmlCylindreRevolution::POnCyl()
{
   return mPOnCyl;
}

const Pt3dr & cXmlCylindreRevolution::POnCyl()const 
{
   return mPOnCyl;
}

void  BinaryUnDumpFromFile(cXmlCylindreRevolution & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.P0(),aFp);
    BinaryUnDumpFromFile(anObj.P1(),aFp);
    BinaryUnDumpFromFile(anObj.POnCyl(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlCylindreRevolution & anObj)
{
    BinaryDumpInFile(aFp,anObj.P0());
    BinaryDumpInFile(aFp,anObj.P1());
    BinaryDumpInFile(aFp,anObj.POnCyl());
}

cElXMLTree * ToXMLTree(const cXmlCylindreRevolution & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlCylindreRevolution",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("P0"),anObj.P0())->ReTagThis("P0"));
   aRes->AddFils(::ToXMLTree(std::string("P1"),anObj.P1())->ReTagThis("P1"));
   aRes->AddFils(::ToXMLTree(std::string("POnCyl"),anObj.POnCyl())->ReTagThis("POnCyl"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlCylindreRevolution & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.P0(),aTree->Get("P0",1)); //tototo 

   xml_init(anObj.P1(),aTree->Get("P1",1)); //tototo 

   xml_init(anObj.POnCyl(),aTree->Get("POnCyl",1)); //tototo 
}

std::string  Mangling( cXmlCylindreRevolution *) {return "B027482CA0024D86FF3F";};


cRepereCartesien & cXmlOrthoCyl::Repere()
{
   return mRepere;
}

const cRepereCartesien & cXmlOrthoCyl::Repere()const 
{
   return mRepere;
}


Pt3dr & cXmlOrthoCyl::P0()
{
   return mP0;
}

const Pt3dr & cXmlOrthoCyl::P0()const 
{
   return mP0;
}


Pt3dr & cXmlOrthoCyl::P1()
{
   return mP1;
}

const Pt3dr & cXmlOrthoCyl::P1()const 
{
   return mP1;
}


bool & cXmlOrthoCyl::AngulCorr()
{
   return mAngulCorr;
}

const bool & cXmlOrthoCyl::AngulCorr()const 
{
   return mAngulCorr;
}

void  BinaryUnDumpFromFile(cXmlOrthoCyl & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Repere(),aFp);
    BinaryUnDumpFromFile(anObj.P0(),aFp);
    BinaryUnDumpFromFile(anObj.P1(),aFp);
    BinaryUnDumpFromFile(anObj.AngulCorr(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlOrthoCyl & anObj)
{
    BinaryDumpInFile(aFp,anObj.Repere());
    BinaryDumpInFile(aFp,anObj.P0());
    BinaryDumpInFile(aFp,anObj.P1());
    BinaryDumpInFile(aFp,anObj.AngulCorr());
}

cElXMLTree * ToXMLTree(const cXmlOrthoCyl & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlOrthoCyl",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.Repere())->ReTagThis("Repere"));
   aRes->AddFils(::ToXMLTree(std::string("P0"),anObj.P0())->ReTagThis("P0"));
   aRes->AddFils(::ToXMLTree(std::string("P1"),anObj.P1())->ReTagThis("P1"));
   aRes->AddFils(::ToXMLTree(std::string("AngulCorr"),anObj.AngulCorr())->ReTagThis("AngulCorr"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlOrthoCyl & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Repere(),aTree->Get("Repere",1)); //tototo 

   xml_init(anObj.P0(),aTree->Get("P0",1)); //tototo 

   xml_init(anObj.P1(),aTree->Get("P1",1)); //tototo 

   xml_init(anObj.AngulCorr(),aTree->Get("AngulCorr",1)); //tototo 
}

std::string  Mangling( cXmlOrthoCyl *) {return "9094780688BAA1D3FE3F";};


cTplValGesInit< cXmlCylindreRevolution > & cXmlDescriptionAnalytique::Cyl()
{
   return mCyl;
}

const cTplValGesInit< cXmlCylindreRevolution > & cXmlDescriptionAnalytique::Cyl()const 
{
   return mCyl;
}


cTplValGesInit< cXmlOrthoCyl > & cXmlDescriptionAnalytique::OrthoCyl()
{
   return mOrthoCyl;
}

const cTplValGesInit< cXmlOrthoCyl > & cXmlDescriptionAnalytique::OrthoCyl()const 
{
   return mOrthoCyl;
}

void  BinaryUnDumpFromFile(cXmlDescriptionAnalytique & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Cyl().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Cyl().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Cyl().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OrthoCyl().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OrthoCyl().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OrthoCyl().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlDescriptionAnalytique & anObj)
{
    BinaryDumpInFile(aFp,anObj.Cyl().IsInit());
    if (anObj.Cyl().IsInit()) BinaryDumpInFile(aFp,anObj.Cyl().Val());
    BinaryDumpInFile(aFp,anObj.OrthoCyl().IsInit());
    if (anObj.OrthoCyl().IsInit()) BinaryDumpInFile(aFp,anObj.OrthoCyl().Val());
}

cElXMLTree * ToXMLTree(const cXmlDescriptionAnalytique & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlDescriptionAnalytique",eXMLBranche);
   if (anObj.Cyl().IsInit())
      aRes->AddFils(ToXMLTree(anObj.Cyl().Val())->ReTagThis("Cyl"));
   if (anObj.OrthoCyl().IsInit())
      aRes->AddFils(ToXMLTree(anObj.OrthoCyl().Val())->ReTagThis("OrthoCyl"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlDescriptionAnalytique & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Cyl(),aTree->Get("Cyl",1)); //tototo 

   xml_init(anObj.OrthoCyl(),aTree->Get("OrthoCyl",1)); //tototo 
}

std::string  Mangling( cXmlDescriptionAnalytique *) {return "33D067BA29EF2DFEFC3F";};


cXmlDescriptionAnalytique & cXmlOneSurfaceAnalytique::XmlDescriptionAnalytique()
{
   return mXmlDescriptionAnalytique;
}

const cXmlDescriptionAnalytique & cXmlOneSurfaceAnalytique::XmlDescriptionAnalytique()const 
{
   return mXmlDescriptionAnalytique;
}


std::string & cXmlOneSurfaceAnalytique::Id()
{
   return mId;
}

const std::string & cXmlOneSurfaceAnalytique::Id()const 
{
   return mId;
}


bool & cXmlOneSurfaceAnalytique::VueDeLExterieur()
{
   return mVueDeLExterieur;
}

const bool & cXmlOneSurfaceAnalytique::VueDeLExterieur()const 
{
   return mVueDeLExterieur;
}

void  BinaryUnDumpFromFile(cXmlOneSurfaceAnalytique & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.XmlDescriptionAnalytique(),aFp);
    BinaryUnDumpFromFile(anObj.Id(),aFp);
    BinaryUnDumpFromFile(anObj.VueDeLExterieur(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlOneSurfaceAnalytique & anObj)
{
    BinaryDumpInFile(aFp,anObj.XmlDescriptionAnalytique());
    BinaryDumpInFile(aFp,anObj.Id());
    BinaryDumpInFile(aFp,anObj.VueDeLExterieur());
}

cElXMLTree * ToXMLTree(const cXmlOneSurfaceAnalytique & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlOneSurfaceAnalytique",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.XmlDescriptionAnalytique())->ReTagThis("XmlDescriptionAnalytique"));
   aRes->AddFils(::ToXMLTree(std::string("Id"),anObj.Id())->ReTagThis("Id"));
   aRes->AddFils(::ToXMLTree(std::string("VueDeLExterieur"),anObj.VueDeLExterieur())->ReTagThis("VueDeLExterieur"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlOneSurfaceAnalytique & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.XmlDescriptionAnalytique(),aTree->Get("XmlDescriptionAnalytique",1)); //tototo 

   xml_init(anObj.Id(),aTree->Get("Id",1)); //tototo 

   xml_init(anObj.VueDeLExterieur(),aTree->Get("VueDeLExterieur",1)); //tototo 
}

std::string  Mangling( cXmlOneSurfaceAnalytique *) {return "5A57E8380927CBDEFE3F";};


std::list< cXmlOneSurfaceAnalytique > & cXmlModeleSurfaceComplexe::XmlOneSurfaceAnalytique()
{
   return mXmlOneSurfaceAnalytique;
}

const std::list< cXmlOneSurfaceAnalytique > & cXmlModeleSurfaceComplexe::XmlOneSurfaceAnalytique()const 
{
   return mXmlOneSurfaceAnalytique;
}

void  BinaryUnDumpFromFile(cXmlModeleSurfaceComplexe & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cXmlOneSurfaceAnalytique aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.XmlOneSurfaceAnalytique().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlModeleSurfaceComplexe & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.XmlOneSurfaceAnalytique().size());
    for(  std::list< cXmlOneSurfaceAnalytique >::const_iterator iT=anObj.XmlOneSurfaceAnalytique().begin();
         iT!=anObj.XmlOneSurfaceAnalytique().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cXmlModeleSurfaceComplexe & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlModeleSurfaceComplexe",eXMLBranche);
  for
  (       std::list< cXmlOneSurfaceAnalytique >::const_iterator it=anObj.XmlOneSurfaceAnalytique().begin();
      it !=anObj.XmlOneSurfaceAnalytique().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("XmlOneSurfaceAnalytique"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlModeleSurfaceComplexe & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.XmlOneSurfaceAnalytique(),aTree->GetAll("XmlOneSurfaceAnalytique",false,1));
}

std::string  Mangling( cXmlModeleSurfaceComplexe *) {return "6B5635AEA1FEB282FF3F";};


std::string & cMapByKey::Key()
{
   return mKey;
}

const std::string & cMapByKey::Key()const 
{
   return mKey;
}


cTplValGesInit< bool > & cMapByKey::DefIfFileNotExisting()
{
   return mDefIfFileNotExisting;
}

const cTplValGesInit< bool > & cMapByKey::DefIfFileNotExisting()const 
{
   return mDefIfFileNotExisting;
}

void  BinaryUnDumpFromFile(cMapByKey & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Key(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DefIfFileNotExisting().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DefIfFileNotExisting().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DefIfFileNotExisting().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMapByKey & anObj)
{
    BinaryDumpInFile(aFp,anObj.Key());
    BinaryDumpInFile(aFp,anObj.DefIfFileNotExisting().IsInit());
    if (anObj.DefIfFileNotExisting().IsInit()) BinaryDumpInFile(aFp,anObj.DefIfFileNotExisting().Val());
}

cElXMLTree * ToXMLTree(const cMapByKey & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MapByKey",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Key"),anObj.Key())->ReTagThis("Key"));
   if (anObj.DefIfFileNotExisting().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DefIfFileNotExisting"),anObj.DefIfFileNotExisting().Val())->ReTagThis("DefIfFileNotExisting"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMapByKey & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Key(),aTree->Get("Key",1)); //tototo 

   xml_init(anObj.DefIfFileNotExisting(),aTree->Get("DefIfFileNotExisting",1),bool(false)); //tototo 
}

std::string  Mangling( cMapByKey *) {return "3D87BB7D37F9A0F9FE3F";};


cElRegex_Ptr & cOneAutomMapN2N::MatchPattern()
{
   return mMatchPattern;
}

const cElRegex_Ptr & cOneAutomMapN2N::MatchPattern()const 
{
   return mMatchPattern;
}


cTplValGesInit< cElRegex_Ptr > & cOneAutomMapN2N::AutomSel()
{
   return mAutomSel;
}

const cTplValGesInit< cElRegex_Ptr > & cOneAutomMapN2N::AutomSel()const 
{
   return mAutomSel;
}


std::string & cOneAutomMapN2N::Result()
{
   return mResult;
}

const std::string & cOneAutomMapN2N::Result()const 
{
   return mResult;
}

void  BinaryUnDumpFromFile(cOneAutomMapN2N & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.MatchPattern(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AutomSel().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AutomSel().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AutomSel().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.Result(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cOneAutomMapN2N & anObj)
{
    BinaryDumpInFile(aFp,anObj.MatchPattern());
    BinaryDumpInFile(aFp,anObj.AutomSel().IsInit());
    if (anObj.AutomSel().IsInit()) BinaryDumpInFile(aFp,anObj.AutomSel().Val());
    BinaryDumpInFile(aFp,anObj.Result());
}

cElXMLTree * ToXMLTree(const cOneAutomMapN2N & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"OneAutomMapN2N",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("MatchPattern"),anObj.MatchPattern())->ReTagThis("MatchPattern"));
   if (anObj.AutomSel().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AutomSel"),anObj.AutomSel().Val())->ReTagThis("AutomSel"));
   aRes->AddFils(::ToXMLTree(std::string("Result"),anObj.Result())->ReTagThis("Result"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cOneAutomMapN2N & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MatchPattern(),aTree->Get("MatchPattern",1)); //tototo 

   xml_init(anObj.AutomSel(),aTree->Get("AutomSel",1)); //tototo 

   xml_init(anObj.Result(),aTree->Get("Result",1)); //tototo 
}

std::string  Mangling( cOneAutomMapN2N *) {return "628C727F77C9B5A4FF3F";};


std::vector< cOneAutomMapN2N > & cMapN2NByAutom::OneAutomMapN2N()
{
   return mOneAutomMapN2N;
}

const std::vector< cOneAutomMapN2N > & cMapN2NByAutom::OneAutomMapN2N()const 
{
   return mOneAutomMapN2N;
}

void  BinaryUnDumpFromFile(cMapN2NByAutom & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cOneAutomMapN2N aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.OneAutomMapN2N().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMapN2NByAutom & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.OneAutomMapN2N().size());
    for(  std::vector< cOneAutomMapN2N >::const_iterator iT=anObj.OneAutomMapN2N().begin();
         iT!=anObj.OneAutomMapN2N().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cMapN2NByAutom & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MapN2NByAutom",eXMLBranche);
  for
  (       std::vector< cOneAutomMapN2N >::const_iterator it=anObj.OneAutomMapN2N().begin();
      it !=anObj.OneAutomMapN2N().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("OneAutomMapN2N"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMapN2NByAutom & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.OneAutomMapN2N(),aTree->GetAll("OneAutomMapN2N",false,1));
}

std::string  Mangling( cMapN2NByAutom *) {return "DAF8A8BC2124D1A5FE3F";};


std::string & cMapName2Name::Key()
{
   return MapByKey().Val().Key();
}

const std::string & cMapName2Name::Key()const 
{
   return MapByKey().Val().Key();
}


cTplValGesInit< bool > & cMapName2Name::DefIfFileNotExisting()
{
   return MapByKey().Val().DefIfFileNotExisting();
}

const cTplValGesInit< bool > & cMapName2Name::DefIfFileNotExisting()const 
{
   return MapByKey().Val().DefIfFileNotExisting();
}


cTplValGesInit< cMapByKey > & cMapName2Name::MapByKey()
{
   return mMapByKey;
}

const cTplValGesInit< cMapByKey > & cMapName2Name::MapByKey()const 
{
   return mMapByKey;
}


std::vector< cOneAutomMapN2N > & cMapName2Name::OneAutomMapN2N()
{
   return MapN2NByAutom().Val().OneAutomMapN2N();
}

const std::vector< cOneAutomMapN2N > & cMapName2Name::OneAutomMapN2N()const 
{
   return MapN2NByAutom().Val().OneAutomMapN2N();
}


cTplValGesInit< cMapN2NByAutom > & cMapName2Name::MapN2NByAutom()
{
   return mMapN2NByAutom;
}

const cTplValGesInit< cMapN2NByAutom > & cMapName2Name::MapN2NByAutom()const 
{
   return mMapN2NByAutom;
}

void  BinaryUnDumpFromFile(cMapName2Name & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MapByKey().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MapByKey().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MapByKey().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MapN2NByAutom().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MapN2NByAutom().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MapN2NByAutom().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMapName2Name & anObj)
{
    BinaryDumpInFile(aFp,anObj.MapByKey().IsInit());
    if (anObj.MapByKey().IsInit()) BinaryDumpInFile(aFp,anObj.MapByKey().Val());
    BinaryDumpInFile(aFp,anObj.MapN2NByAutom().IsInit());
    if (anObj.MapN2NByAutom().IsInit()) BinaryDumpInFile(aFp,anObj.MapN2NByAutom().Val());
}

cElXMLTree * ToXMLTree(const cMapName2Name & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MapName2Name",eXMLBranche);
   if (anObj.MapByKey().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MapByKey().Val())->ReTagThis("MapByKey"));
   if (anObj.MapN2NByAutom().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MapN2NByAutom().Val())->ReTagThis("MapN2NByAutom"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMapName2Name & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MapByKey(),aTree->Get("MapByKey",1)); //tototo 

   xml_init(anObj.MapN2NByAutom(),aTree->Get("MapN2NByAutom",1)); //tototo 
}

std::string  Mangling( cMapName2Name *) {return "00C842225F3586A3FB3F";};


std::string & cImage_Point3D::Image()
{
   return mImage;
}

const std::string & cImage_Point3D::Image()const 
{
   return mImage;
}


std::string & cImage_Point3D::Masq()
{
   return mMasq;
}

const std::string & cImage_Point3D::Masq()const 
{
   return mMasq;
}

void  BinaryUnDumpFromFile(cImage_Point3D & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Image(),aFp);
    BinaryUnDumpFromFile(anObj.Masq(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImage_Point3D & anObj)
{
    BinaryDumpInFile(aFp,anObj.Image());
    BinaryDumpInFile(aFp,anObj.Masq());
}

cElXMLTree * ToXMLTree(const cImage_Point3D & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"Image_Point3D",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Image"),anObj.Image())->ReTagThis("Image"));
   aRes->AddFils(::ToXMLTree(std::string("Masq"),anObj.Masq())->ReTagThis("Masq"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImage_Point3D & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Image(),aTree->Get("Image",1)); //tototo 

   xml_init(anObj.Masq(),aTree->Get("Masq",1)); //tototo 
}

std::string  Mangling( cImage_Point3D *) {return "50AC53E1CADCEF9EFE3F";};


std::string & cImage_Profondeur::Image()
{
   return mImage;
}

const std::string & cImage_Profondeur::Image()const 
{
   return mImage;
}


std::string & cImage_Profondeur::Masq()
{
   return mMasq;
}

const std::string & cImage_Profondeur::Masq()const 
{
   return mMasq;
}


cTplValGesInit< std::string > & cImage_Profondeur::Correl()
{
   return mCorrel;
}

const cTplValGesInit< std::string > & cImage_Profondeur::Correl()const 
{
   return mCorrel;
}


double & cImage_Profondeur::OrigineAlti()
{
   return mOrigineAlti;
}

const double & cImage_Profondeur::OrigineAlti()const 
{
   return mOrigineAlti;
}


double & cImage_Profondeur::ResolutionAlti()
{
   return mResolutionAlti;
}

const double & cImage_Profondeur::ResolutionAlti()const 
{
   return mResolutionAlti;
}


eModeGeomMNT & cImage_Profondeur::GeomRestit()
{
   return mGeomRestit;
}

const eModeGeomMNT & cImage_Profondeur::GeomRestit()const 
{
   return mGeomRestit;
}

void  BinaryUnDumpFromFile(cImage_Profondeur & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Image(),aFp);
    BinaryUnDumpFromFile(anObj.Masq(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Correl().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Correl().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Correl().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.OrigineAlti(),aFp);
    BinaryUnDumpFromFile(anObj.ResolutionAlti(),aFp);
    BinaryUnDumpFromFile(anObj.GeomRestit(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImage_Profondeur & anObj)
{
    BinaryDumpInFile(aFp,anObj.Image());
    BinaryDumpInFile(aFp,anObj.Masq());
    BinaryDumpInFile(aFp,anObj.Correl().IsInit());
    if (anObj.Correl().IsInit()) BinaryDumpInFile(aFp,anObj.Correl().Val());
    BinaryDumpInFile(aFp,anObj.OrigineAlti());
    BinaryDumpInFile(aFp,anObj.ResolutionAlti());
    BinaryDumpInFile(aFp,anObj.GeomRestit());
}

cElXMLTree * ToXMLTree(const cImage_Profondeur & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"Image_Profondeur",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Image"),anObj.Image())->ReTagThis("Image"));
   aRes->AddFils(::ToXMLTree(std::string("Masq"),anObj.Masq())->ReTagThis("Masq"));
   if (anObj.Correl().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Correl"),anObj.Correl().Val())->ReTagThis("Correl"));
   aRes->AddFils(::ToXMLTree(std::string("OrigineAlti"),anObj.OrigineAlti())->ReTagThis("OrigineAlti"));
   aRes->AddFils(::ToXMLTree(std::string("ResolutionAlti"),anObj.ResolutionAlti())->ReTagThis("ResolutionAlti"));
   aRes->AddFils(ToXMLTree(std::string("GeomRestit"),anObj.GeomRestit())->ReTagThis("GeomRestit"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImage_Profondeur & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Image(),aTree->Get("Image",1)); //tototo 

   xml_init(anObj.Masq(),aTree->Get("Masq",1)); //tototo 

   xml_init(anObj.Correl(),aTree->Get("Correl",1)); //tototo 

   xml_init(anObj.OrigineAlti(),aTree->Get("OrigineAlti",1)); //tototo 

   xml_init(anObj.ResolutionAlti(),aTree->Get("ResolutionAlti",1)); //tototo 

   xml_init(anObj.GeomRestit(),aTree->Get("GeomRestit",1)); //tototo 
}

std::string  Mangling( cImage_Profondeur *) {return "0C7A6B4922C84398FE3F";};


cTplValGesInit< cImage_Point3D > & cPN3M_Nuage::Image_Point3D()
{
   return mImage_Point3D;
}

const cTplValGesInit< cImage_Point3D > & cPN3M_Nuage::Image_Point3D()const 
{
   return mImage_Point3D;
}


cTplValGesInit< cImage_Profondeur > & cPN3M_Nuage::Image_Profondeur()
{
   return mImage_Profondeur;
}

const cTplValGesInit< cImage_Profondeur > & cPN3M_Nuage::Image_Profondeur()const 
{
   return mImage_Profondeur;
}

void  BinaryUnDumpFromFile(cPN3M_Nuage & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Image_Point3D().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Image_Point3D().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Image_Point3D().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Image_Profondeur().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Image_Profondeur().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Image_Profondeur().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPN3M_Nuage & anObj)
{
    BinaryDumpInFile(aFp,anObj.Image_Point3D().IsInit());
    if (anObj.Image_Point3D().IsInit()) BinaryDumpInFile(aFp,anObj.Image_Point3D().Val());
    BinaryDumpInFile(aFp,anObj.Image_Profondeur().IsInit());
    if (anObj.Image_Profondeur().IsInit()) BinaryDumpInFile(aFp,anObj.Image_Profondeur().Val());
}

cElXMLTree * ToXMLTree(const cPN3M_Nuage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PN3M_Nuage",eXMLBranche);
   if (anObj.Image_Point3D().IsInit())
      aRes->AddFils(ToXMLTree(anObj.Image_Point3D().Val())->ReTagThis("Image_Point3D"));
   if (anObj.Image_Profondeur().IsInit())
      aRes->AddFils(ToXMLTree(anObj.Image_Profondeur().Val())->ReTagThis("Image_Profondeur"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPN3M_Nuage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Image_Point3D(),aTree->Get("Image_Point3D",1)); //tototo 

   xml_init(anObj.Image_Profondeur(),aTree->Get("Image_Profondeur",1)); //tototo 
}

std::string  Mangling( cPN3M_Nuage *) {return "F329FB38EEA3BBABFE3F";};


std::string & cAttributsNuage3D::NameFileImage()
{
   return mNameFileImage;
}

const std::string & cAttributsNuage3D::NameFileImage()const 
{
   return mNameFileImage;
}


cTplValGesInit< bool > & cAttributsNuage3D::AddDir2Name()
{
   return mAddDir2Name;
}

const cTplValGesInit< bool > & cAttributsNuage3D::AddDir2Name()const 
{
   return mAddDir2Name;
}


cTplValGesInit< double > & cAttributsNuage3D::Dyn()
{
   return mDyn;
}

const cTplValGesInit< double > & cAttributsNuage3D::Dyn()const 
{
   return mDyn;
}


cTplValGesInit< double > & cAttributsNuage3D::Scale()
{
   return mScale;
}

const cTplValGesInit< double > & cAttributsNuage3D::Scale()const 
{
   return mScale;
}

void  BinaryUnDumpFromFile(cAttributsNuage3D & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameFileImage(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AddDir2Name().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AddDir2Name().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AddDir2Name().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Dyn().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Dyn().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Dyn().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Scale().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Scale().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Scale().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cAttributsNuage3D & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameFileImage());
    BinaryDumpInFile(aFp,anObj.AddDir2Name().IsInit());
    if (anObj.AddDir2Name().IsInit()) BinaryDumpInFile(aFp,anObj.AddDir2Name().Val());
    BinaryDumpInFile(aFp,anObj.Dyn().IsInit());
    if (anObj.Dyn().IsInit()) BinaryDumpInFile(aFp,anObj.Dyn().Val());
    BinaryDumpInFile(aFp,anObj.Scale().IsInit());
    if (anObj.Scale().IsInit()) BinaryDumpInFile(aFp,anObj.Scale().Val());
}

cElXMLTree * ToXMLTree(const cAttributsNuage3D & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"AttributsNuage3D",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameFileImage"),anObj.NameFileImage())->ReTagThis("NameFileImage"));
   if (anObj.AddDir2Name().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AddDir2Name"),anObj.AddDir2Name().Val())->ReTagThis("AddDir2Name"));
   if (anObj.Dyn().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Dyn"),anObj.Dyn().Val())->ReTagThis("Dyn"));
   if (anObj.Scale().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Scale"),anObj.Scale().Val())->ReTagThis("Scale"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cAttributsNuage3D & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameFileImage(),aTree->Get("NameFileImage",1)); //tototo 

   xml_init(anObj.AddDir2Name(),aTree->Get("AddDir2Name",1),bool(true)); //tototo 

   xml_init(anObj.Dyn(),aTree->Get("Dyn",1),double(1.0)); //tototo 

   xml_init(anObj.Scale(),aTree->Get("Scale",1),double(1.0)); //tototo 
}

std::string  Mangling( cAttributsNuage3D *) {return "6B776A558D457CD7FE3F";};


Pt3dr & cModeFaisceauxImage::DirFaisceaux()
{
   return mDirFaisceaux;
}

const Pt3dr & cModeFaisceauxImage::DirFaisceaux()const 
{
   return mDirFaisceaux;
}


bool & cModeFaisceauxImage::ZIsInverse()
{
   return mZIsInverse;
}

const bool & cModeFaisceauxImage::ZIsInverse()const 
{
   return mZIsInverse;
}


cTplValGesInit< bool > & cModeFaisceauxImage::IsSpherik()
{
   return mIsSpherik;
}

const cTplValGesInit< bool > & cModeFaisceauxImage::IsSpherik()const 
{
   return mIsSpherik;
}


cTplValGesInit< Pt2dr > & cModeFaisceauxImage::DirTrans()
{
   return mDirTrans;
}

const cTplValGesInit< Pt2dr > & cModeFaisceauxImage::DirTrans()const 
{
   return mDirTrans;
}

void  BinaryUnDumpFromFile(cModeFaisceauxImage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.DirFaisceaux(),aFp);
    BinaryUnDumpFromFile(anObj.ZIsInverse(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.IsSpherik().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.IsSpherik().ValForcedForUnUmp(),aFp);
        }
        else  anObj.IsSpherik().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DirTrans().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DirTrans().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DirTrans().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cModeFaisceauxImage & anObj)
{
    BinaryDumpInFile(aFp,anObj.DirFaisceaux());
    BinaryDumpInFile(aFp,anObj.ZIsInverse());
    BinaryDumpInFile(aFp,anObj.IsSpherik().IsInit());
    if (anObj.IsSpherik().IsInit()) BinaryDumpInFile(aFp,anObj.IsSpherik().Val());
    BinaryDumpInFile(aFp,anObj.DirTrans().IsInit());
    if (anObj.DirTrans().IsInit()) BinaryDumpInFile(aFp,anObj.DirTrans().Val());
}

cElXMLTree * ToXMLTree(const cModeFaisceauxImage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ModeFaisceauxImage",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("DirFaisceaux"),anObj.DirFaisceaux())->ReTagThis("DirFaisceaux"));
   aRes->AddFils(::ToXMLTree(std::string("ZIsInverse"),anObj.ZIsInverse())->ReTagThis("ZIsInverse"));
   if (anObj.IsSpherik().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("IsSpherik"),anObj.IsSpherik().Val())->ReTagThis("IsSpherik"));
   if (anObj.DirTrans().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DirTrans"),anObj.DirTrans().Val())->ReTagThis("DirTrans"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cModeFaisceauxImage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DirFaisceaux(),aTree->Get("DirFaisceaux",1)); //tototo 

   xml_init(anObj.ZIsInverse(),aTree->Get("ZIsInverse",1)); //tototo 

   xml_init(anObj.IsSpherik(),aTree->Get("IsSpherik",1),bool(false)); //tototo 

   xml_init(anObj.DirTrans(),aTree->Get("DirTrans",1)); //tototo 
}

std::string  Mangling( cModeFaisceauxImage *) {return "275C9EACD66A2FA3FE3F";};


Pt3dr & cPM3D_ParamSpecifs::DirFaisceaux()
{
   return ModeFaisceauxImage().Val().DirFaisceaux();
}

const Pt3dr & cPM3D_ParamSpecifs::DirFaisceaux()const 
{
   return ModeFaisceauxImage().Val().DirFaisceaux();
}


bool & cPM3D_ParamSpecifs::ZIsInverse()
{
   return ModeFaisceauxImage().Val().ZIsInverse();
}

const bool & cPM3D_ParamSpecifs::ZIsInverse()const 
{
   return ModeFaisceauxImage().Val().ZIsInverse();
}


cTplValGesInit< bool > & cPM3D_ParamSpecifs::IsSpherik()
{
   return ModeFaisceauxImage().Val().IsSpherik();
}

const cTplValGesInit< bool > & cPM3D_ParamSpecifs::IsSpherik()const 
{
   return ModeFaisceauxImage().Val().IsSpherik();
}


cTplValGesInit< Pt2dr > & cPM3D_ParamSpecifs::DirTrans()
{
   return ModeFaisceauxImage().Val().DirTrans();
}

const cTplValGesInit< Pt2dr > & cPM3D_ParamSpecifs::DirTrans()const 
{
   return ModeFaisceauxImage().Val().DirTrans();
}


cTplValGesInit< cModeFaisceauxImage > & cPM3D_ParamSpecifs::ModeFaisceauxImage()
{
   return mModeFaisceauxImage;
}

const cTplValGesInit< cModeFaisceauxImage > & cPM3D_ParamSpecifs::ModeFaisceauxImage()const 
{
   return mModeFaisceauxImage;
}


cTplValGesInit< std::string > & cPM3D_ParamSpecifs::NoParamSpecif()
{
   return mNoParamSpecif;
}

const cTplValGesInit< std::string > & cPM3D_ParamSpecifs::NoParamSpecif()const 
{
   return mNoParamSpecif;
}

void  BinaryUnDumpFromFile(cPM3D_ParamSpecifs & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ModeFaisceauxImage().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ModeFaisceauxImage().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ModeFaisceauxImage().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NoParamSpecif().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NoParamSpecif().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NoParamSpecif().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPM3D_ParamSpecifs & anObj)
{
    BinaryDumpInFile(aFp,anObj.ModeFaisceauxImage().IsInit());
    if (anObj.ModeFaisceauxImage().IsInit()) BinaryDumpInFile(aFp,anObj.ModeFaisceauxImage().Val());
    BinaryDumpInFile(aFp,anObj.NoParamSpecif().IsInit());
    if (anObj.NoParamSpecif().IsInit()) BinaryDumpInFile(aFp,anObj.NoParamSpecif().Val());
}

cElXMLTree * ToXMLTree(const cPM3D_ParamSpecifs & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PM3D_ParamSpecifs",eXMLBranche);
   if (anObj.ModeFaisceauxImage().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ModeFaisceauxImage().Val())->ReTagThis("ModeFaisceauxImage"));
   if (anObj.NoParamSpecif().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NoParamSpecif"),anObj.NoParamSpecif().Val())->ReTagThis("NoParamSpecif"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPM3D_ParamSpecifs & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ModeFaisceauxImage(),aTree->Get("ModeFaisceauxImage",1)); //tototo 

   xml_init(anObj.NoParamSpecif(),aTree->Get("NoParamSpecif",1)); //tototo 
}

std::string  Mangling( cPM3D_ParamSpecifs *) {return "A8A53BF97B6D2DC9FC3F";};


Pt2dr & cVerifNuage::IndIm()
{
   return mIndIm;
}

const Pt2dr & cVerifNuage::IndIm()const 
{
   return mIndIm;
}


double & cVerifNuage::Profondeur()
{
   return mProfondeur;
}

const double & cVerifNuage::Profondeur()const 
{
   return mProfondeur;
}


Pt3dr & cVerifNuage::PointEuclid()
{
   return mPointEuclid;
}

const Pt3dr & cVerifNuage::PointEuclid()const 
{
   return mPointEuclid;
}

void  BinaryUnDumpFromFile(cVerifNuage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.IndIm(),aFp);
    BinaryUnDumpFromFile(anObj.Profondeur(),aFp);
    BinaryUnDumpFromFile(anObj.PointEuclid(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cVerifNuage & anObj)
{
    BinaryDumpInFile(aFp,anObj.IndIm());
    BinaryDumpInFile(aFp,anObj.Profondeur());
    BinaryDumpInFile(aFp,anObj.PointEuclid());
}

cElXMLTree * ToXMLTree(const cVerifNuage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"VerifNuage",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("IndIm"),anObj.IndIm())->ReTagThis("IndIm"));
   aRes->AddFils(::ToXMLTree(std::string("Profondeur"),anObj.Profondeur())->ReTagThis("Profondeur"));
   aRes->AddFils(::ToXMLTree(std::string("PointEuclid"),anObj.PointEuclid())->ReTagThis("PointEuclid"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cVerifNuage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.IndIm(),aTree->Get("IndIm",1)); //tototo 

   xml_init(anObj.Profondeur(),aTree->Get("Profondeur",1)); //tototo 

   xml_init(anObj.PointEuclid(),aTree->Get("PointEuclid",1)); //tototo 
}

std::string  Mangling( cVerifNuage *) {return "EE05230EB0B19FDCFE3F";};


cTplValGesInit< double > & cXML_ParamNuage3DMaille::SsResolRef()
{
   return mSsResolRef;
}

const cTplValGesInit< double > & cXML_ParamNuage3DMaille::SsResolRef()const 
{
   return mSsResolRef;
}


cTplValGesInit< bool > & cXML_ParamNuage3DMaille::Empty()
{
   return mEmpty;
}

const cTplValGesInit< bool > & cXML_ParamNuage3DMaille::Empty()const 
{
   return mEmpty;
}


Pt2di & cXML_ParamNuage3DMaille::NbPixel()
{
   return mNbPixel;
}

const Pt2di & cXML_ParamNuage3DMaille::NbPixel()const 
{
   return mNbPixel;
}


cTplValGesInit< cImage_Point3D > & cXML_ParamNuage3DMaille::Image_Point3D()
{
   return PN3M_Nuage().Image_Point3D();
}

const cTplValGesInit< cImage_Point3D > & cXML_ParamNuage3DMaille::Image_Point3D()const 
{
   return PN3M_Nuage().Image_Point3D();
}


cTplValGesInit< cImage_Profondeur > & cXML_ParamNuage3DMaille::Image_Profondeur()
{
   return PN3M_Nuage().Image_Profondeur();
}

const cTplValGesInit< cImage_Profondeur > & cXML_ParamNuage3DMaille::Image_Profondeur()const 
{
   return PN3M_Nuage().Image_Profondeur();
}


cPN3M_Nuage & cXML_ParamNuage3DMaille::PN3M_Nuage()
{
   return mPN3M_Nuage;
}

const cPN3M_Nuage & cXML_ParamNuage3DMaille::PN3M_Nuage()const 
{
   return mPN3M_Nuage;
}


std::list< cAttributsNuage3D > & cXML_ParamNuage3DMaille::AttributsNuage3D()
{
   return mAttributsNuage3D;
}

const std::list< cAttributsNuage3D > & cXML_ParamNuage3DMaille::AttributsNuage3D()const 
{
   return mAttributsNuage3D;
}


cTplValGesInit< cRepereCartesien > & cXML_ParamNuage3DMaille::RepereGlob()
{
   return mRepereGlob;
}

const cTplValGesInit< cRepereCartesien > & cXML_ParamNuage3DMaille::RepereGlob()const 
{
   return mRepereGlob;
}


cTplValGesInit< cXmlOneSurfaceAnalytique > & cXML_ParamNuage3DMaille::Anam()
{
   return mAnam;
}

const cTplValGesInit< cXmlOneSurfaceAnalytique > & cXML_ParamNuage3DMaille::Anam()const 
{
   return mAnam;
}


cOrientationConique & cXML_ParamNuage3DMaille::Orientation()
{
   return mOrientation;
}

const cOrientationConique & cXML_ParamNuage3DMaille::Orientation()const 
{
   return mOrientation;
}


cTplValGesInit< double > & cXML_ParamNuage3DMaille::RatioResolAltiPlani()
{
   return mRatioResolAltiPlani;
}

const cTplValGesInit< double > & cXML_ParamNuage3DMaille::RatioResolAltiPlani()const 
{
   return mRatioResolAltiPlani;
}


Pt3dr & cXML_ParamNuage3DMaille::DirFaisceaux()
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().DirFaisceaux();
}

const Pt3dr & cXML_ParamNuage3DMaille::DirFaisceaux()const 
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().DirFaisceaux();
}


bool & cXML_ParamNuage3DMaille::ZIsInverse()
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().ZIsInverse();
}

const bool & cXML_ParamNuage3DMaille::ZIsInverse()const 
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().ZIsInverse();
}


cTplValGesInit< bool > & cXML_ParamNuage3DMaille::IsSpherik()
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().IsSpherik();
}

const cTplValGesInit< bool > & cXML_ParamNuage3DMaille::IsSpherik()const 
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().IsSpherik();
}


cTplValGesInit< Pt2dr > & cXML_ParamNuage3DMaille::DirTrans()
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().DirTrans();
}

const cTplValGesInit< Pt2dr > & cXML_ParamNuage3DMaille::DirTrans()const 
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage().Val().DirTrans();
}


cTplValGesInit< cModeFaisceauxImage > & cXML_ParamNuage3DMaille::ModeFaisceauxImage()
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage();
}

const cTplValGesInit< cModeFaisceauxImage > & cXML_ParamNuage3DMaille::ModeFaisceauxImage()const 
{
   return PM3D_ParamSpecifs().ModeFaisceauxImage();
}


cTplValGesInit< std::string > & cXML_ParamNuage3DMaille::NoParamSpecif()
{
   return PM3D_ParamSpecifs().NoParamSpecif();
}

const cTplValGesInit< std::string > & cXML_ParamNuage3DMaille::NoParamSpecif()const 
{
   return PM3D_ParamSpecifs().NoParamSpecif();
}


cPM3D_ParamSpecifs & cXML_ParamNuage3DMaille::PM3D_ParamSpecifs()
{
   return mPM3D_ParamSpecifs;
}

const cPM3D_ParamSpecifs & cXML_ParamNuage3DMaille::PM3D_ParamSpecifs()const 
{
   return mPM3D_ParamSpecifs;
}


cTplValGesInit< double > & cXML_ParamNuage3DMaille::TolVerifNuage()
{
   return mTolVerifNuage;
}

const cTplValGesInit< double > & cXML_ParamNuage3DMaille::TolVerifNuage()const 
{
   return mTolVerifNuage;
}


std::list< cVerifNuage > & cXML_ParamNuage3DMaille::VerifNuage()
{
   return mVerifNuage;
}

const std::list< cVerifNuage > & cXML_ParamNuage3DMaille::VerifNuage()const 
{
   return mVerifNuage;
}

void  BinaryUnDumpFromFile(cXML_ParamNuage3DMaille & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SsResolRef().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SsResolRef().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SsResolRef().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Empty().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Empty().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Empty().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.NbPixel(),aFp);
    BinaryUnDumpFromFile(anObj.PN3M_Nuage(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cAttributsNuage3D aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.AttributsNuage3D().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RepereGlob().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RepereGlob().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RepereGlob().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Anam().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Anam().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Anam().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.Orientation(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RatioResolAltiPlani().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RatioResolAltiPlani().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RatioResolAltiPlani().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.PM3D_ParamSpecifs(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TolVerifNuage().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TolVerifNuage().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TolVerifNuage().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cVerifNuage aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.VerifNuage().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXML_ParamNuage3DMaille & anObj)
{
    BinaryDumpInFile(aFp,anObj.SsResolRef().IsInit());
    if (anObj.SsResolRef().IsInit()) BinaryDumpInFile(aFp,anObj.SsResolRef().Val());
    BinaryDumpInFile(aFp,anObj.Empty().IsInit());
    if (anObj.Empty().IsInit()) BinaryDumpInFile(aFp,anObj.Empty().Val());
    BinaryDumpInFile(aFp,anObj.NbPixel());
    BinaryDumpInFile(aFp,anObj.PN3M_Nuage());
    BinaryDumpInFile(aFp,(int)anObj.AttributsNuage3D().size());
    for(  std::list< cAttributsNuage3D >::const_iterator iT=anObj.AttributsNuage3D().begin();
         iT!=anObj.AttributsNuage3D().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.RepereGlob().IsInit());
    if (anObj.RepereGlob().IsInit()) BinaryDumpInFile(aFp,anObj.RepereGlob().Val());
    BinaryDumpInFile(aFp,anObj.Anam().IsInit());
    if (anObj.Anam().IsInit()) BinaryDumpInFile(aFp,anObj.Anam().Val());
    BinaryDumpInFile(aFp,anObj.Orientation());
    BinaryDumpInFile(aFp,anObj.RatioResolAltiPlani().IsInit());
    if (anObj.RatioResolAltiPlani().IsInit()) BinaryDumpInFile(aFp,anObj.RatioResolAltiPlani().Val());
    BinaryDumpInFile(aFp,anObj.PM3D_ParamSpecifs());
    BinaryDumpInFile(aFp,anObj.TolVerifNuage().IsInit());
    if (anObj.TolVerifNuage().IsInit()) BinaryDumpInFile(aFp,anObj.TolVerifNuage().Val());
    BinaryDumpInFile(aFp,(int)anObj.VerifNuage().size());
    for(  std::list< cVerifNuage >::const_iterator iT=anObj.VerifNuage().begin();
         iT!=anObj.VerifNuage().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cXML_ParamNuage3DMaille & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XML_ParamNuage3DMaille",eXMLBranche);
   if (anObj.SsResolRef().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SsResolRef"),anObj.SsResolRef().Val())->ReTagThis("SsResolRef"));
   if (anObj.Empty().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Empty"),anObj.Empty().Val())->ReTagThis("Empty"));
   aRes->AddFils(::ToXMLTree(std::string("NbPixel"),anObj.NbPixel())->ReTagThis("NbPixel"));
   aRes->AddFils(ToXMLTree(anObj.PN3M_Nuage())->ReTagThis("PN3M_Nuage"));
  for
  (       std::list< cAttributsNuage3D >::const_iterator it=anObj.AttributsNuage3D().begin();
      it !=anObj.AttributsNuage3D().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("AttributsNuage3D"));
   if (anObj.RepereGlob().IsInit())
      aRes->AddFils(ToXMLTree(anObj.RepereGlob().Val())->ReTagThis("RepereGlob"));
   if (anObj.Anam().IsInit())
      aRes->AddFils(ToXMLTree(anObj.Anam().Val())->ReTagThis("Anam"));
   aRes->AddFils(ToXMLTree(anObj.Orientation())->ReTagThis("Orientation"));
   if (anObj.RatioResolAltiPlani().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RatioResolAltiPlani"),anObj.RatioResolAltiPlani().Val())->ReTagThis("RatioResolAltiPlani"));
   aRes->AddFils(ToXMLTree(anObj.PM3D_ParamSpecifs())->ReTagThis("PM3D_ParamSpecifs"));
   if (anObj.TolVerifNuage().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TolVerifNuage"),anObj.TolVerifNuage().Val())->ReTagThis("TolVerifNuage"));
  for
  (       std::list< cVerifNuage >::const_iterator it=anObj.VerifNuage().begin();
      it !=anObj.VerifNuage().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("VerifNuage"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXML_ParamNuage3DMaille & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SsResolRef(),aTree->Get("SsResolRef",1),double(1.0)); //tototo 

   xml_init(anObj.Empty(),aTree->Get("Empty",1),bool(false)); //tototo 

   xml_init(anObj.NbPixel(),aTree->Get("NbPixel",1)); //tototo 

   xml_init(anObj.PN3M_Nuage(),aTree->Get("PN3M_Nuage",1)); //tototo 

   xml_init(anObj.AttributsNuage3D(),aTree->GetAll("AttributsNuage3D",false,1));

   xml_init(anObj.RepereGlob(),aTree->Get("RepereGlob",1)); //tototo 

   xml_init(anObj.Anam(),aTree->Get("Anam",1)); //tototo 

   xml_init(anObj.Orientation(),aTree->Get("Orientation",1)); //tototo 

   xml_init(anObj.RatioResolAltiPlani(),aTree->Get("RatioResolAltiPlani",1),double(1.0)); //tototo 

   xml_init(anObj.PM3D_ParamSpecifs(),aTree->Get("PM3D_ParamSpecifs",1)); //tototo 

   xml_init(anObj.TolVerifNuage(),aTree->Get("TolVerifNuage",1),double(1e-3)); //tototo 

   xml_init(anObj.VerifNuage(),aTree->GetAll("VerifNuage",false,1));
}

std::string  Mangling( cXML_ParamNuage3DMaille *) {return "6AF63B8E2DAD69A2FE3F";};


std::string & cMasqMesures::NameFile()
{
   return mNameFile;
}

const std::string & cMasqMesures::NameFile()const 
{
   return mNameFile;
}


std::string & cMasqMesures::NameMTD()
{
   return mNameMTD;
}

const std::string & cMasqMesures::NameMTD()const 
{
   return mNameMTD;
}

void  BinaryUnDumpFromFile(cMasqMesures & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameFile(),aFp);
    BinaryUnDumpFromFile(anObj.NameMTD(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMasqMesures & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameFile());
    BinaryDumpInFile(aFp,anObj.NameMTD());
}

cElXMLTree * ToXMLTree(const cMasqMesures & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MasqMesures",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameFile"),anObj.NameFile())->ReTagThis("NameFile"));
   aRes->AddFils(::ToXMLTree(std::string("NameMTD"),anObj.NameMTD())->ReTagThis("NameMTD"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMasqMesures & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameFile(),aTree->Get("NameFile",1)); //tototo 

   xml_init(anObj.NameMTD(),aTree->Get("NameMTD",1)); //tototo 
}

std::string  Mangling( cMasqMesures *) {return "4AE433DD0AC67E9EFE3F";};


cTplValGesInit< std::string > & cCielVisible::UnUsed()
{
   return mUnUsed;
}

const cTplValGesInit< std::string > & cCielVisible::UnUsed()const 
{
   return mUnUsed;
}

void  BinaryUnDumpFromFile(cCielVisible & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.UnUsed().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.UnUsed().ValForcedForUnUmp(),aFp);
        }
        else  anObj.UnUsed().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cCielVisible & anObj)
{
    BinaryDumpInFile(aFp,anObj.UnUsed().IsInit());
    if (anObj.UnUsed().IsInit()) BinaryDumpInFile(aFp,anObj.UnUsed().Val());
}

cElXMLTree * ToXMLTree(const cCielVisible & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"CielVisible",eXMLBranche);
   if (anObj.UnUsed().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("UnUsed"),anObj.UnUsed().Val())->ReTagThis("UnUsed"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cCielVisible & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.UnUsed(),aTree->Get("UnUsed",1)); //tototo 
}

std::string  Mangling( cCielVisible *) {return "B480192D296C69C5FCBF";};


cTplValGesInit< int > & cXML_ParamOmbrageNuage::ScaleMaxPyr()
{
   return mScaleMaxPyr;
}

const cTplValGesInit< int > & cXML_ParamOmbrageNuage::ScaleMaxPyr()const 
{
   return mScaleMaxPyr;
}


cTplValGesInit< double > & cXML_ParamOmbrageNuage::StepScale()
{
   return mStepScale;
}

const cTplValGesInit< double > & cXML_ParamOmbrageNuage::StepScale()const 
{
   return mStepScale;
}


cTplValGesInit< double > & cXML_ParamOmbrageNuage::RatioOct()
{
   return mRatioOct;
}

const cTplValGesInit< double > & cXML_ParamOmbrageNuage::RatioOct()const 
{
   return mRatioOct;
}


cTplValGesInit< std::string > & cXML_ParamOmbrageNuage::UnUsed()
{
   return CielVisible().Val().UnUsed();
}

const cTplValGesInit< std::string > & cXML_ParamOmbrageNuage::UnUsed()const 
{
   return CielVisible().Val().UnUsed();
}


cTplValGesInit< cCielVisible > & cXML_ParamOmbrageNuage::CielVisible()
{
   return mCielVisible;
}

const cTplValGesInit< cCielVisible > & cXML_ParamOmbrageNuage::CielVisible()const 
{
   return mCielVisible;
}

void  BinaryUnDumpFromFile(cXML_ParamOmbrageNuage & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ScaleMaxPyr().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ScaleMaxPyr().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ScaleMaxPyr().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.StepScale().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.StepScale().ValForcedForUnUmp(),aFp);
        }
        else  anObj.StepScale().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RatioOct().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RatioOct().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RatioOct().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.CielVisible().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.CielVisible().ValForcedForUnUmp(),aFp);
        }
        else  anObj.CielVisible().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXML_ParamOmbrageNuage & anObj)
{
    BinaryDumpInFile(aFp,anObj.ScaleMaxPyr().IsInit());
    if (anObj.ScaleMaxPyr().IsInit()) BinaryDumpInFile(aFp,anObj.ScaleMaxPyr().Val());
    BinaryDumpInFile(aFp,anObj.StepScale().IsInit());
    if (anObj.StepScale().IsInit()) BinaryDumpInFile(aFp,anObj.StepScale().Val());
    BinaryDumpInFile(aFp,anObj.RatioOct().IsInit());
    if (anObj.RatioOct().IsInit()) BinaryDumpInFile(aFp,anObj.RatioOct().Val());
    BinaryDumpInFile(aFp,anObj.CielVisible().IsInit());
    if (anObj.CielVisible().IsInit()) BinaryDumpInFile(aFp,anObj.CielVisible().Val());
}

cElXMLTree * ToXMLTree(const cXML_ParamOmbrageNuage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XML_ParamOmbrageNuage",eXMLBranche);
   if (anObj.ScaleMaxPyr().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ScaleMaxPyr"),anObj.ScaleMaxPyr().Val())->ReTagThis("ScaleMaxPyr"));
   if (anObj.StepScale().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("StepScale"),anObj.StepScale().Val())->ReTagThis("StepScale"));
   if (anObj.RatioOct().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RatioOct"),anObj.RatioOct().Val())->ReTagThis("RatioOct"));
   if (anObj.CielVisible().IsInit())
      aRes->AddFils(ToXMLTree(anObj.CielVisible().Val())->ReTagThis("CielVisible"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXML_ParamOmbrageNuage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ScaleMaxPyr(),aTree->Get("ScaleMaxPyr",1),int(128)); //tototo 

   xml_init(anObj.StepScale(),aTree->Get("StepScale",1),double(1.414)); //tototo 

   xml_init(anObj.RatioOct(),aTree->Get("RatioOct",1),double(2.0)); //tototo 

   xml_init(anObj.CielVisible(),aTree->Get("CielVisible",1)); //tototo 
}

std::string  Mangling( cXML_ParamOmbrageNuage *) {return "B282C9D697657DFFFD3F";};


double & cFTrajParamInit2Actuelle::Lambda()
{
   return mLambda;
}

const double & cFTrajParamInit2Actuelle::Lambda()const 
{
   return mLambda;
}


cOrientationExterneRigide & cFTrajParamInit2Actuelle::Orient()
{
   return mOrient;
}

const cOrientationExterneRigide & cFTrajParamInit2Actuelle::Orient()const 
{
   return mOrient;
}

void  BinaryUnDumpFromFile(cFTrajParamInit2Actuelle & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Lambda(),aFp);
    BinaryUnDumpFromFile(anObj.Orient(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFTrajParamInit2Actuelle & anObj)
{
    BinaryDumpInFile(aFp,anObj.Lambda());
    BinaryDumpInFile(aFp,anObj.Orient());
}

cElXMLTree * ToXMLTree(const cFTrajParamInit2Actuelle & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"FTrajParamInit2Actuelle",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Lambda"),anObj.Lambda())->ReTagThis("Lambda"));
   aRes->AddFils(ToXMLTree(anObj.Orient())->ReTagThis("Orient"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFTrajParamInit2Actuelle & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Lambda(),aTree->Get("Lambda",1)); //tototo 

   xml_init(anObj.Orient(),aTree->Get("Orient",1)); //tototo 
}

std::string  Mangling( cFTrajParamInit2Actuelle *) {return "373D815F5DCFE48BFF3F";};


Pt3dr & cPtTrajecto::Pt()
{
   return mPt;
}

const Pt3dr & cPtTrajecto::Pt()const 
{
   return mPt;
}


std::string & cPtTrajecto::IdImage()
{
   return mIdImage;
}

const std::string & cPtTrajecto::IdImage()const 
{
   return mIdImage;
}


std::string & cPtTrajecto::IdBande()
{
   return mIdBande;
}

const std::string & cPtTrajecto::IdBande()const 
{
   return mIdBande;
}


double & cPtTrajecto::Time()
{
   return mTime;
}

const double & cPtTrajecto::Time()const 
{
   return mTime;
}

void  BinaryUnDumpFromFile(cPtTrajecto & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Pt(),aFp);
    BinaryUnDumpFromFile(anObj.IdImage(),aFp);
    BinaryUnDumpFromFile(anObj.IdBande(),aFp);
    BinaryUnDumpFromFile(anObj.Time(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPtTrajecto & anObj)
{
    BinaryDumpInFile(aFp,anObj.Pt());
    BinaryDumpInFile(aFp,anObj.IdImage());
    BinaryDumpInFile(aFp,anObj.IdBande());
    BinaryDumpInFile(aFp,anObj.Time());
}

cElXMLTree * ToXMLTree(const cPtTrajecto & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PtTrajecto",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Pt"),anObj.Pt())->ReTagThis("Pt"));
   aRes->AddFils(::ToXMLTree(std::string("IdImage"),anObj.IdImage())->ReTagThis("IdImage"));
   aRes->AddFils(::ToXMLTree(std::string("IdBande"),anObj.IdBande())->ReTagThis("IdBande"));
   aRes->AddFils(::ToXMLTree(std::string("Time"),anObj.Time())->ReTagThis("Time"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPtTrajecto & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Pt(),aTree->Get("Pt",1)); //tototo 

   xml_init(anObj.IdImage(),aTree->Get("IdImage",1)); //tototo 

   xml_init(anObj.IdBande(),aTree->Get("IdBande",1)); //tototo 

   xml_init(anObj.Time(),aTree->Get("Time",1)); //tototo 
}

std::string  Mangling( cPtTrajecto *) {return "08825F6477B696C5FC3F";};


std::string & cFichier_Trajecto::NameInit()
{
   return mNameInit;
}

const std::string & cFichier_Trajecto::NameInit()const 
{
   return mNameInit;
}


double & cFichier_Trajecto::Lambda()
{
   return FTrajParamInit2Actuelle().Lambda();
}

const double & cFichier_Trajecto::Lambda()const 
{
   return FTrajParamInit2Actuelle().Lambda();
}


cOrientationExterneRigide & cFichier_Trajecto::Orient()
{
   return FTrajParamInit2Actuelle().Orient();
}

const cOrientationExterneRigide & cFichier_Trajecto::Orient()const 
{
   return FTrajParamInit2Actuelle().Orient();
}


cFTrajParamInit2Actuelle & cFichier_Trajecto::FTrajParamInit2Actuelle()
{
   return mFTrajParamInit2Actuelle;
}

const cFTrajParamInit2Actuelle & cFichier_Trajecto::FTrajParamInit2Actuelle()const 
{
   return mFTrajParamInit2Actuelle;
}


std::map< std::string,cPtTrajecto > & cFichier_Trajecto::PtTrajecto()
{
   return mPtTrajecto;
}

const std::map< std::string,cPtTrajecto > & cFichier_Trajecto::PtTrajecto()const 
{
   return mPtTrajecto;
}

void  BinaryUnDumpFromFile(cFichier_Trajecto & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameInit(),aFp);
    BinaryUnDumpFromFile(anObj.FTrajParamInit2Actuelle(),aFp);
    ELISE_ASSERT(false,"No Support for this conainer in bin dump");
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFichier_Trajecto & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameInit());
    BinaryDumpInFile(aFp,anObj.FTrajParamInit2Actuelle());
    ELISE_ASSERT(false,"No Support for this conainer in bin dump");
}

cElXMLTree * ToXMLTree(const cFichier_Trajecto & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"Fichier_Trajecto",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameInit"),anObj.NameInit())->ReTagThis("NameInit"));
   aRes->AddFils(ToXMLTree(anObj.FTrajParamInit2Actuelle())->ReTagThis("FTrajParamInit2Actuelle"));
  for
  (       std::map< std::string,cPtTrajecto >::const_iterator it=anObj.PtTrajecto().begin();
      it !=anObj.PtTrajecto().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it).second)->ReTagThis("PtTrajecto"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFichier_Trajecto & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameInit(),aTree->Get("NameInit",1)); //tototo 

   xml_init(anObj.FTrajParamInit2Actuelle(),aTree->Get("FTrajParamInit2Actuelle",1)); //tototo 

   xml_init(anObj.PtTrajecto(),aTree->GetAll("PtTrajecto",false,1),"IdImage");
}

std::string  Mangling( cFichier_Trajecto *) {return "F6D940FBDDCBA483FD3F";};


cTplValGesInit< std::string > & cSectionEntree::FileMNT()
{
   return mFileMNT;
}

const cTplValGesInit< std::string > & cSectionEntree::FileMNT()const 
{
   return mFileMNT;
}


std::string & cSectionEntree::KeySetIm()
{
   return mKeySetIm;
}

const std::string & cSectionEntree::KeySetIm()const 
{
   return mKeySetIm;
}


std::string & cSectionEntree::KeyAssocMetaData()
{
   return mKeyAssocMetaData;
}

const std::string & cSectionEntree::KeyAssocMetaData()const 
{
   return mKeyAssocMetaData;
}


std::string & cSectionEntree::KeyAssocNamePC()
{
   return mKeyAssocNamePC;
}

const std::string & cSectionEntree::KeyAssocNamePC()const 
{
   return mKeyAssocNamePC;
}


std::string & cSectionEntree::KeyAssocNameIncH()
{
   return mKeyAssocNameIncH;
}

const std::string & cSectionEntree::KeyAssocNameIncH()const 
{
   return mKeyAssocNameIncH;
}


cTplValGesInit< std::string > & cSectionEntree::KeyAssocPriorite()
{
   return mKeyAssocPriorite;
}

const cTplValGesInit< std::string > & cSectionEntree::KeyAssocPriorite()const 
{
   return mKeyAssocPriorite;
}


std::list< cMasqMesures > & cSectionEntree::ListMasqMesures()
{
   return mListMasqMesures;
}

const std::list< cMasqMesures > & cSectionEntree::ListMasqMesures()const 
{
   return mListMasqMesures;
}


std::list< std::string > & cSectionEntree::FileExterneMasqMesures()
{
   return mFileExterneMasqMesures;
}

const std::list< std::string > & cSectionEntree::FileExterneMasqMesures()const 
{
   return mFileExterneMasqMesures;
}

void  BinaryUnDumpFromFile(cSectionEntree & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FileMNT().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FileMNT().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FileMNT().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KeySetIm(),aFp);
    BinaryUnDumpFromFile(anObj.KeyAssocMetaData(),aFp);
    BinaryUnDumpFromFile(anObj.KeyAssocNamePC(),aFp);
    BinaryUnDumpFromFile(anObj.KeyAssocNameIncH(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KeyAssocPriorite().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KeyAssocPriorite().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KeyAssocPriorite().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cMasqMesures aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.ListMasqMesures().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.FileExterneMasqMesures().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionEntree & anObj)
{
    BinaryDumpInFile(aFp,anObj.FileMNT().IsInit());
    if (anObj.FileMNT().IsInit()) BinaryDumpInFile(aFp,anObj.FileMNT().Val());
    BinaryDumpInFile(aFp,anObj.KeySetIm());
    BinaryDumpInFile(aFp,anObj.KeyAssocMetaData());
    BinaryDumpInFile(aFp,anObj.KeyAssocNamePC());
    BinaryDumpInFile(aFp,anObj.KeyAssocNameIncH());
    BinaryDumpInFile(aFp,anObj.KeyAssocPriorite().IsInit());
    if (anObj.KeyAssocPriorite().IsInit()) BinaryDumpInFile(aFp,anObj.KeyAssocPriorite().Val());
    BinaryDumpInFile(aFp,(int)anObj.ListMasqMesures().size());
    for(  std::list< cMasqMesures >::const_iterator iT=anObj.ListMasqMesures().begin();
         iT!=anObj.ListMasqMesures().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.FileExterneMasqMesures().size());
    for(  std::list< std::string >::const_iterator iT=anObj.FileExterneMasqMesures().begin();
         iT!=anObj.FileExterneMasqMesures().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cSectionEntree & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionEntree",eXMLBranche);
   if (anObj.FileMNT().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FileMNT"),anObj.FileMNT().Val())->ReTagThis("FileMNT"));
   aRes->AddFils(::ToXMLTree(std::string("KeySetIm"),anObj.KeySetIm())->ReTagThis("KeySetIm"));
   aRes->AddFils(::ToXMLTree(std::string("KeyAssocMetaData"),anObj.KeyAssocMetaData())->ReTagThis("KeyAssocMetaData"));
   aRes->AddFils(::ToXMLTree(std::string("KeyAssocNamePC"),anObj.KeyAssocNamePC())->ReTagThis("KeyAssocNamePC"));
   aRes->AddFils(::ToXMLTree(std::string("KeyAssocNameIncH"),anObj.KeyAssocNameIncH())->ReTagThis("KeyAssocNameIncH"));
   if (anObj.KeyAssocPriorite().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KeyAssocPriorite"),anObj.KeyAssocPriorite().Val())->ReTagThis("KeyAssocPriorite"));
  for
  (       std::list< cMasqMesures >::const_iterator it=anObj.ListMasqMesures().begin();
      it !=anObj.ListMasqMesures().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("ListMasqMesures"));
  for
  (       std::list< std::string >::const_iterator it=anObj.FileExterneMasqMesures().begin();
      it !=anObj.FileExterneMasqMesures().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("FileExterneMasqMesures"),(*it))->ReTagThis("FileExterneMasqMesures"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionEntree & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.FileMNT(),aTree->Get("FileMNT",1)); //tototo 

   xml_init(anObj.KeySetIm(),aTree->Get("KeySetIm",1)); //tototo 

   xml_init(anObj.KeyAssocMetaData(),aTree->Get("KeyAssocMetaData",1)); //tototo 

   xml_init(anObj.KeyAssocNamePC(),aTree->Get("KeyAssocNamePC",1)); //tototo 

   xml_init(anObj.KeyAssocNameIncH(),aTree->Get("KeyAssocNameIncH",1)); //tototo 

   xml_init(anObj.KeyAssocPriorite(),aTree->Get("KeyAssocPriorite",1),std::string("Key-Priorite-Ortho")); //tototo 

   xml_init(anObj.ListMasqMesures(),aTree->GetAll("ListMasqMesures",false,1));

   xml_init(anObj.FileExterneMasqMesures(),aTree->GetAll("FileExterneMasqMesures",false,1));
}

std::string  Mangling( cSectionEntree *) {return "544B8F032890A682FF3F";};


cTplValGesInit< int > & cBoucheTrou::SeuilVisib()
{
   return mSeuilVisib;
}

const cTplValGesInit< int > & cBoucheTrou::SeuilVisib()const 
{
   return mSeuilVisib;
}


cTplValGesInit< int > & cBoucheTrou::SeuilVisibBT()
{
   return mSeuilVisibBT;
}

const cTplValGesInit< int > & cBoucheTrou::SeuilVisibBT()const 
{
   return mSeuilVisibBT;
}


cTplValGesInit< double > & cBoucheTrou::CoeffPondAngul()
{
   return mCoeffPondAngul;
}

const cTplValGesInit< double > & cBoucheTrou::CoeffPondAngul()const 
{
   return mCoeffPondAngul;
}

void  BinaryUnDumpFromFile(cBoucheTrou & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SeuilVisib().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SeuilVisib().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SeuilVisib().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SeuilVisibBT().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SeuilVisibBT().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SeuilVisibBT().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.CoeffPondAngul().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.CoeffPondAngul().ValForcedForUnUmp(),aFp);
        }
        else  anObj.CoeffPondAngul().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cBoucheTrou & anObj)
{
    BinaryDumpInFile(aFp,anObj.SeuilVisib().IsInit());
    if (anObj.SeuilVisib().IsInit()) BinaryDumpInFile(aFp,anObj.SeuilVisib().Val());
    BinaryDumpInFile(aFp,anObj.SeuilVisibBT().IsInit());
    if (anObj.SeuilVisibBT().IsInit()) BinaryDumpInFile(aFp,anObj.SeuilVisibBT().Val());
    BinaryDumpInFile(aFp,anObj.CoeffPondAngul().IsInit());
    if (anObj.CoeffPondAngul().IsInit()) BinaryDumpInFile(aFp,anObj.CoeffPondAngul().Val());
}

cElXMLTree * ToXMLTree(const cBoucheTrou & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"BoucheTrou",eXMLBranche);
   if (anObj.SeuilVisib().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SeuilVisib"),anObj.SeuilVisib().Val())->ReTagThis("SeuilVisib"));
   if (anObj.SeuilVisibBT().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SeuilVisibBT"),anObj.SeuilVisibBT().Val())->ReTagThis("SeuilVisibBT"));
   if (anObj.CoeffPondAngul().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("CoeffPondAngul"),anObj.CoeffPondAngul().Val())->ReTagThis("CoeffPondAngul"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cBoucheTrou & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SeuilVisib(),aTree->Get("SeuilVisib",1),int(10)); //tototo 

   xml_init(anObj.SeuilVisibBT(),aTree->Get("SeuilVisibBT",1),int(3)); //tototo 

   xml_init(anObj.CoeffPondAngul(),aTree->Get("CoeffPondAngul",1),double(1.57)); //tototo 
}

std::string  Mangling( cBoucheTrou *) {return "12D03D771FEB2A83FF3F";};


cTplValGesInit< double > & cSectionFiltrageIn::SaturThreshold()
{
   return mSaturThreshold;
}

const cTplValGesInit< double > & cSectionFiltrageIn::SaturThreshold()const 
{
   return mSaturThreshold;
}


cTplValGesInit< int > & cSectionFiltrageIn::SzDilatPC()
{
   return mSzDilatPC;
}

const cTplValGesInit< int > & cSectionFiltrageIn::SzDilatPC()const 
{
   return mSzDilatPC;
}


cTplValGesInit< int > & cSectionFiltrageIn::SzOuvPC()
{
   return mSzOuvPC;
}

const cTplValGesInit< int > & cSectionFiltrageIn::SzOuvPC()const 
{
   return mSzOuvPC;
}


cTplValGesInit< int > & cSectionFiltrageIn::SeuilVisib()
{
   return BoucheTrou().Val().SeuilVisib();
}

const cTplValGesInit< int > & cSectionFiltrageIn::SeuilVisib()const 
{
   return BoucheTrou().Val().SeuilVisib();
}


cTplValGesInit< int > & cSectionFiltrageIn::SeuilVisibBT()
{
   return BoucheTrou().Val().SeuilVisibBT();
}

const cTplValGesInit< int > & cSectionFiltrageIn::SeuilVisibBT()const 
{
   return BoucheTrou().Val().SeuilVisibBT();
}


cTplValGesInit< double > & cSectionFiltrageIn::CoeffPondAngul()
{
   return BoucheTrou().Val().CoeffPondAngul();
}

const cTplValGesInit< double > & cSectionFiltrageIn::CoeffPondAngul()const 
{
   return BoucheTrou().Val().CoeffPondAngul();
}


cTplValGesInit< cBoucheTrou > & cSectionFiltrageIn::BoucheTrou()
{
   return mBoucheTrou;
}

const cTplValGesInit< cBoucheTrou > & cSectionFiltrageIn::BoucheTrou()const 
{
   return mBoucheTrou;
}

void  BinaryUnDumpFromFile(cSectionFiltrageIn & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SaturThreshold().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SaturThreshold().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SaturThreshold().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzDilatPC().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzDilatPC().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzDilatPC().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzOuvPC().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzOuvPC().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzOuvPC().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.BoucheTrou().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.BoucheTrou().ValForcedForUnUmp(),aFp);
        }
        else  anObj.BoucheTrou().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionFiltrageIn & anObj)
{
    BinaryDumpInFile(aFp,anObj.SaturThreshold().IsInit());
    if (anObj.SaturThreshold().IsInit()) BinaryDumpInFile(aFp,anObj.SaturThreshold().Val());
    BinaryDumpInFile(aFp,anObj.SzDilatPC().IsInit());
    if (anObj.SzDilatPC().IsInit()) BinaryDumpInFile(aFp,anObj.SzDilatPC().Val());
    BinaryDumpInFile(aFp,anObj.SzOuvPC().IsInit());
    if (anObj.SzOuvPC().IsInit()) BinaryDumpInFile(aFp,anObj.SzOuvPC().Val());
    BinaryDumpInFile(aFp,anObj.BoucheTrou().IsInit());
    if (anObj.BoucheTrou().IsInit()) BinaryDumpInFile(aFp,anObj.BoucheTrou().Val());
}

cElXMLTree * ToXMLTree(const cSectionFiltrageIn & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionFiltrageIn",eXMLBranche);
   if (anObj.SaturThreshold().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SaturThreshold"),anObj.SaturThreshold().Val())->ReTagThis("SaturThreshold"));
   if (anObj.SzDilatPC().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzDilatPC"),anObj.SzDilatPC().Val())->ReTagThis("SzDilatPC"));
   if (anObj.SzOuvPC().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzOuvPC"),anObj.SzOuvPC().Val())->ReTagThis("SzOuvPC"));
   if (anObj.BoucheTrou().IsInit())
      aRes->AddFils(ToXMLTree(anObj.BoucheTrou().Val())->ReTagThis("BoucheTrou"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionFiltrageIn & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SaturThreshold(),aTree->Get("SaturThreshold",1)); //tototo 

   xml_init(anObj.SzDilatPC(),aTree->Get("SzDilatPC",1),int(1)); //tototo 

   xml_init(anObj.SzOuvPC(),aTree->Get("SzOuvPC",1),int(2)); //tototo 

   xml_init(anObj.BoucheTrou(),aTree->Get("BoucheTrou",1)); //tototo 
}

std::string  Mangling( cSectionFiltrageIn *) {return "A0CEBD09C24364EEFA3F";};


cTplValGesInit< bool > & cSectionSorties::TestDiff()
{
   return mTestDiff;
}

const cTplValGesInit< bool > & cSectionSorties::TestDiff()const 
{
   return mTestDiff;
}


std::string & cSectionSorties::NameOrtho()
{
   return mNameOrtho;
}

const std::string & cSectionSorties::NameOrtho()const 
{
   return mNameOrtho;
}


cTplValGesInit< std::string > & cSectionSorties::NameLabels()
{
   return mNameLabels;
}

const cTplValGesInit< std::string > & cSectionSorties::NameLabels()const 
{
   return mNameLabels;
}


cTplValGesInit< Box2di > & cSectionSorties::BoxCalc()
{
   return mBoxCalc;
}

const cTplValGesInit< Box2di > & cSectionSorties::BoxCalc()const 
{
   return mBoxCalc;
}


int & cSectionSorties::SzDalle()
{
   return mSzDalle;
}

const int & cSectionSorties::SzDalle()const 
{
   return mSzDalle;
}


int & cSectionSorties::SzBrd()
{
   return mSzBrd;
}

const int & cSectionSorties::SzBrd()const 
{
   return mSzBrd;
}


cTplValGesInit< int > & cSectionSorties::SzTileResult()
{
   return mSzTileResult;
}

const cTplValGesInit< int > & cSectionSorties::SzTileResult()const 
{
   return mSzTileResult;
}


cTplValGesInit< bool > & cSectionSorties::Show()
{
   return mShow;
}

const cTplValGesInit< bool > & cSectionSorties::Show()const 
{
   return mShow;
}


cTplValGesInit< double > & cSectionSorties::DynGlob()
{
   return mDynGlob;
}

const cTplValGesInit< double > & cSectionSorties::DynGlob()const 
{
   return mDynGlob;
}

void  BinaryUnDumpFromFile(cSectionSorties & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TestDiff().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TestDiff().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TestDiff().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.NameOrtho(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NameLabels().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NameLabels().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NameLabels().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.BoxCalc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.BoxCalc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.BoxCalc().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.SzDalle(),aFp);
    BinaryUnDumpFromFile(anObj.SzBrd(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzTileResult().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzTileResult().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzTileResult().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Show().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Show().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Show().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DynGlob().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DynGlob().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DynGlob().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionSorties & anObj)
{
    BinaryDumpInFile(aFp,anObj.TestDiff().IsInit());
    if (anObj.TestDiff().IsInit()) BinaryDumpInFile(aFp,anObj.TestDiff().Val());
    BinaryDumpInFile(aFp,anObj.NameOrtho());
    BinaryDumpInFile(aFp,anObj.NameLabels().IsInit());
    if (anObj.NameLabels().IsInit()) BinaryDumpInFile(aFp,anObj.NameLabels().Val());
    BinaryDumpInFile(aFp,anObj.BoxCalc().IsInit());
    if (anObj.BoxCalc().IsInit()) BinaryDumpInFile(aFp,anObj.BoxCalc().Val());
    BinaryDumpInFile(aFp,anObj.SzDalle());
    BinaryDumpInFile(aFp,anObj.SzBrd());
    BinaryDumpInFile(aFp,anObj.SzTileResult().IsInit());
    if (anObj.SzTileResult().IsInit()) BinaryDumpInFile(aFp,anObj.SzTileResult().Val());
    BinaryDumpInFile(aFp,anObj.Show().IsInit());
    if (anObj.Show().IsInit()) BinaryDumpInFile(aFp,anObj.Show().Val());
    BinaryDumpInFile(aFp,anObj.DynGlob().IsInit());
    if (anObj.DynGlob().IsInit()) BinaryDumpInFile(aFp,anObj.DynGlob().Val());
}

cElXMLTree * ToXMLTree(const cSectionSorties & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionSorties",eXMLBranche);
   if (anObj.TestDiff().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TestDiff"),anObj.TestDiff().Val())->ReTagThis("TestDiff"));
   aRes->AddFils(::ToXMLTree(std::string("NameOrtho"),anObj.NameOrtho())->ReTagThis("NameOrtho"));
   if (anObj.NameLabels().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NameLabels"),anObj.NameLabels().Val())->ReTagThis("NameLabels"));
   if (anObj.BoxCalc().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("BoxCalc"),anObj.BoxCalc().Val())->ReTagThis("BoxCalc"));
   aRes->AddFils(::ToXMLTree(std::string("SzDalle"),anObj.SzDalle())->ReTagThis("SzDalle"));
   aRes->AddFils(::ToXMLTree(std::string("SzBrd"),anObj.SzBrd())->ReTagThis("SzBrd"));
   if (anObj.SzTileResult().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzTileResult"),anObj.SzTileResult().Val())->ReTagThis("SzTileResult"));
   if (anObj.Show().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Show"),anObj.Show().Val())->ReTagThis("Show"));
   if (anObj.DynGlob().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DynGlob"),anObj.DynGlob().Val())->ReTagThis("DynGlob"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionSorties & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.TestDiff(),aTree->Get("TestDiff",1),bool(false)); //tototo 

   xml_init(anObj.NameOrtho(),aTree->Get("NameOrtho",1)); //tototo 

   xml_init(anObj.NameLabels(),aTree->Get("NameLabels",1)); //tototo 

   xml_init(anObj.BoxCalc(),aTree->Get("BoxCalc",1)); //tototo 

   xml_init(anObj.SzDalle(),aTree->Get("SzDalle",1)); //tototo 

   xml_init(anObj.SzBrd(),aTree->Get("SzBrd",1)); //tototo 

   xml_init(anObj.SzTileResult(),aTree->Get("SzTileResult",1),int(17000)); //tototo 

   xml_init(anObj.Show(),aTree->Get("Show",1),bool(false)); //tototo 

   xml_init(anObj.DynGlob(),aTree->Get("DynGlob",1),double(1.0)); //tototo 
}

std::string  Mangling( cSectionSorties *) {return "6826D784A53CA59FFDBF";};


double & cNoiseSSI::Ampl()
{
   return mAmpl;
}

const double & cNoiseSSI::Ampl()const 
{
   return mAmpl;
}


bool & cNoiseSSI::Unif()
{
   return mUnif;
}

const bool & cNoiseSSI::Unif()const 
{
   return mUnif;
}


int & cNoiseSSI::Iter()
{
   return mIter;
}

const int & cNoiseSSI::Iter()const 
{
   return mIter;
}


int & cNoiseSSI::Sz()
{
   return mSz;
}

const int & cNoiseSSI::Sz()const 
{
   return mSz;
}

void  BinaryUnDumpFromFile(cNoiseSSI & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Ampl(),aFp);
    BinaryUnDumpFromFile(anObj.Unif(),aFp);
    BinaryUnDumpFromFile(anObj.Iter(),aFp);
    BinaryUnDumpFromFile(anObj.Sz(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cNoiseSSI & anObj)
{
    BinaryDumpInFile(aFp,anObj.Ampl());
    BinaryDumpInFile(aFp,anObj.Unif());
    BinaryDumpInFile(aFp,anObj.Iter());
    BinaryDumpInFile(aFp,anObj.Sz());
}

cElXMLTree * ToXMLTree(const cNoiseSSI & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"NoiseSSI",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Ampl"),anObj.Ampl())->ReTagThis("Ampl"));
   aRes->AddFils(::ToXMLTree(std::string("Unif"),anObj.Unif())->ReTagThis("Unif"));
   aRes->AddFils(::ToXMLTree(std::string("Iter"),anObj.Iter())->ReTagThis("Iter"));
   aRes->AddFils(::ToXMLTree(std::string("Sz"),anObj.Sz())->ReTagThis("Sz"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cNoiseSSI & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Ampl(),aTree->Get("Ampl",1)); //tototo 

   xml_init(anObj.Unif(),aTree->Get("Unif",1)); //tototo 

   xml_init(anObj.Iter(),aTree->Get("Iter",1)); //tototo 

   xml_init(anObj.Sz(),aTree->Get("Sz",1)); //tototo 
}

std::string  Mangling( cNoiseSSI *) {return "B26AABDFFBE1B8C3FE3F";};


Pt2dr & cSectionSimulImage::Per1()
{
   return mPer1;
}

const Pt2dr & cSectionSimulImage::Per1()const 
{
   return mPer1;
}


cTplValGesInit< Pt2dr > & cSectionSimulImage::Per2()
{
   return mPer2;
}

const cTplValGesInit< Pt2dr > & cSectionSimulImage::Per2()const 
{
   return mPer2;
}


cTplValGesInit< double > & cSectionSimulImage::Ampl()
{
   return mAmpl;
}

const cTplValGesInit< double > & cSectionSimulImage::Ampl()const 
{
   return mAmpl;
}


std::list< cNoiseSSI > & cSectionSimulImage::NoiseSSI()
{
   return mNoiseSSI;
}

const std::list< cNoiseSSI > & cSectionSimulImage::NoiseSSI()const 
{
   return mNoiseSSI;
}

void  BinaryUnDumpFromFile(cSectionSimulImage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Per1(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Per2().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Per2().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Per2().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Ampl().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Ampl().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Ampl().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cNoiseSSI aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.NoiseSSI().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionSimulImage & anObj)
{
    BinaryDumpInFile(aFp,anObj.Per1());
    BinaryDumpInFile(aFp,anObj.Per2().IsInit());
    if (anObj.Per2().IsInit()) BinaryDumpInFile(aFp,anObj.Per2().Val());
    BinaryDumpInFile(aFp,anObj.Ampl().IsInit());
    if (anObj.Ampl().IsInit()) BinaryDumpInFile(aFp,anObj.Ampl().Val());
    BinaryDumpInFile(aFp,(int)anObj.NoiseSSI().size());
    for(  std::list< cNoiseSSI >::const_iterator iT=anObj.NoiseSSI().begin();
         iT!=anObj.NoiseSSI().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cSectionSimulImage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionSimulImage",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Per1"),anObj.Per1())->ReTagThis("Per1"));
   if (anObj.Per2().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Per2"),anObj.Per2().Val())->ReTagThis("Per2"));
   if (anObj.Ampl().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Ampl"),anObj.Ampl().Val())->ReTagThis("Ampl"));
  for
  (       std::list< cNoiseSSI >::const_iterator it=anObj.NoiseSSI().begin();
      it !=anObj.NoiseSSI().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("NoiseSSI"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionSimulImage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Per1(),aTree->Get("Per1",1)); //tototo 

   xml_init(anObj.Per2(),aTree->Get("Per2",1)); //tototo 

   xml_init(anObj.Ampl(),aTree->Get("Ampl",1),double(1.0)); //tototo 

   xml_init(anObj.NoiseSSI(),aTree->GetAll("NoiseSSI",false,1));
}

std::string  Mangling( cSectionSimulImage *) {return "0C0F77B1FFA12080FE3F";};


cTplValGesInit< bool > & cGlobRappInit::DoGlob()
{
   return mDoGlob;
}

const cTplValGesInit< bool > & cGlobRappInit::DoGlob()const 
{
   return mDoGlob;
}


std::vector< Pt2di > & cGlobRappInit::Degres()
{
   return mDegres;
}

const std::vector< Pt2di > & cGlobRappInit::Degres()const 
{
   return mDegres;
}


std::vector< Pt2di > & cGlobRappInit::DegresSec()
{
   return mDegresSec;
}

const std::vector< Pt2di > & cGlobRappInit::DegresSec()const 
{
   return mDegresSec;
}


cTplValGesInit< std::string > & cGlobRappInit::PatternApply()
{
   return mPatternApply;
}

const cTplValGesInit< std::string > & cGlobRappInit::PatternApply()const 
{
   return mPatternApply;
}


cTplValGesInit< bool > & cGlobRappInit::RapelOnEgalPhys()
{
   return mRapelOnEgalPhys;
}

const cTplValGesInit< bool > & cGlobRappInit::RapelOnEgalPhys()const 
{
   return mRapelOnEgalPhys;
}

void  BinaryUnDumpFromFile(cGlobRappInit & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DoGlob().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DoGlob().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DoGlob().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt2di aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.Degres().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt2di aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.DegresSec().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PatternApply().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PatternApply().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PatternApply().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RapelOnEgalPhys().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RapelOnEgalPhys().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RapelOnEgalPhys().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cGlobRappInit & anObj)
{
    BinaryDumpInFile(aFp,anObj.DoGlob().IsInit());
    if (anObj.DoGlob().IsInit()) BinaryDumpInFile(aFp,anObj.DoGlob().Val());
    BinaryDumpInFile(aFp,(int)anObj.Degres().size());
    for(  std::vector< Pt2di >::const_iterator iT=anObj.Degres().begin();
         iT!=anObj.Degres().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.DegresSec().size());
    for(  std::vector< Pt2di >::const_iterator iT=anObj.DegresSec().begin();
         iT!=anObj.DegresSec().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.PatternApply().IsInit());
    if (anObj.PatternApply().IsInit()) BinaryDumpInFile(aFp,anObj.PatternApply().Val());
    BinaryDumpInFile(aFp,anObj.RapelOnEgalPhys().IsInit());
    if (anObj.RapelOnEgalPhys().IsInit()) BinaryDumpInFile(aFp,anObj.RapelOnEgalPhys().Val());
}

cElXMLTree * ToXMLTree(const cGlobRappInit & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"GlobRappInit",eXMLBranche);
   if (anObj.DoGlob().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DoGlob"),anObj.DoGlob().Val())->ReTagThis("DoGlob"));
  for
  (       std::vector< Pt2di >::const_iterator it=anObj.Degres().begin();
      it !=anObj.Degres().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("Degres"),(*it))->ReTagThis("Degres"));
  for
  (       std::vector< Pt2di >::const_iterator it=anObj.DegresSec().begin();
      it !=anObj.DegresSec().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("DegresSec"),(*it))->ReTagThis("DegresSec"));
   if (anObj.PatternApply().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PatternApply"),anObj.PatternApply().Val())->ReTagThis("PatternApply"));
   if (anObj.RapelOnEgalPhys().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RapelOnEgalPhys"),anObj.RapelOnEgalPhys().Val())->ReTagThis("RapelOnEgalPhys"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cGlobRappInit & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DoGlob(),aTree->Get("DoGlob",1),bool(true)); //tototo 

   xml_init(anObj.Degres(),aTree->GetAll("Degres",false,1));

   xml_init(anObj.DegresSec(),aTree->GetAll("DegresSec",false,1));

   xml_init(anObj.PatternApply(),aTree->Get("PatternApply",1),std::string(".*")); //tototo 

   xml_init(anObj.RapelOnEgalPhys(),aTree->Get("RapelOnEgalPhys",1),bool(true)); //tototo 
}

std::string  Mangling( cGlobRappInit *) {return "93EE9CC9D67CB5CEFD3F";};


cTplValGesInit< cMasqTerrain > & cSectionEgalisation::MasqApprent()
{
   return mMasqApprent;
}

const cTplValGesInit< cMasqTerrain > & cSectionEgalisation::MasqApprent()const 
{
   return mMasqApprent;
}


cTplValGesInit< int > & cSectionEgalisation::PeriodEchant()
{
   return mPeriodEchant;
}

const cTplValGesInit< int > & cSectionEgalisation::PeriodEchant()const 
{
   return mPeriodEchant;
}


cTplValGesInit< double > & cSectionEgalisation::NbPEqualMoyPerImage()
{
   return mNbPEqualMoyPerImage;
}

const cTplValGesInit< double > & cSectionEgalisation::NbPEqualMoyPerImage()const 
{
   return mNbPEqualMoyPerImage;
}


int & cSectionEgalisation::SzVois()
{
   return mSzVois;
}

const int & cSectionEgalisation::SzVois()const 
{
   return mSzVois;
}


std::string & cSectionEgalisation::NameFileMesures()
{
   return mNameFileMesures;
}

const std::string & cSectionEgalisation::NameFileMesures()const 
{
   return mNameFileMesures;
}


cTplValGesInit< bool > & cSectionEgalisation::UseFileMesure()
{
   return mUseFileMesure;
}

const cTplValGesInit< bool > & cSectionEgalisation::UseFileMesure()const 
{
   return mUseFileMesure;
}


std::vector< Pt2di > & cSectionEgalisation::DegresEgalVois()
{
   return mDegresEgalVois;
}

const std::vector< Pt2di > & cSectionEgalisation::DegresEgalVois()const 
{
   return mDegresEgalVois;
}


std::vector< Pt2di > & cSectionEgalisation::DegresEgalVoisSec()
{
   return mDegresEgalVoisSec;
}

const std::vector< Pt2di > & cSectionEgalisation::DegresEgalVoisSec()const 
{
   return mDegresEgalVoisSec;
}


cTplValGesInit< double > & cSectionEgalisation::PdsRappelInit()
{
   return mPdsRappelInit;
}

const cTplValGesInit< double > & cSectionEgalisation::PdsRappelInit()const 
{
   return mPdsRappelInit;
}


cTplValGesInit< double > & cSectionEgalisation::PdsSingularite()
{
   return mPdsSingularite;
}

const cTplValGesInit< double > & cSectionEgalisation::PdsSingularite()const 
{
   return mPdsSingularite;
}


cTplValGesInit< bool > & cSectionEgalisation::DoGlob()
{
   return GlobRappInit().DoGlob();
}

const cTplValGesInit< bool > & cSectionEgalisation::DoGlob()const 
{
   return GlobRappInit().DoGlob();
}


std::vector< Pt2di > & cSectionEgalisation::Degres()
{
   return GlobRappInit().Degres();
}

const std::vector< Pt2di > & cSectionEgalisation::Degres()const 
{
   return GlobRappInit().Degres();
}


std::vector< Pt2di > & cSectionEgalisation::DegresSec()
{
   return GlobRappInit().DegresSec();
}

const std::vector< Pt2di > & cSectionEgalisation::DegresSec()const 
{
   return GlobRappInit().DegresSec();
}


cTplValGesInit< std::string > & cSectionEgalisation::PatternApply()
{
   return GlobRappInit().PatternApply();
}

const cTplValGesInit< std::string > & cSectionEgalisation::PatternApply()const 
{
   return GlobRappInit().PatternApply();
}


cTplValGesInit< bool > & cSectionEgalisation::RapelOnEgalPhys()
{
   return GlobRappInit().RapelOnEgalPhys();
}

const cTplValGesInit< bool > & cSectionEgalisation::RapelOnEgalPhys()const 
{
   return GlobRappInit().RapelOnEgalPhys();
}


cGlobRappInit & cSectionEgalisation::GlobRappInit()
{
   return mGlobRappInit;
}

const cGlobRappInit & cSectionEgalisation::GlobRappInit()const 
{
   return mGlobRappInit;
}


bool & cSectionEgalisation::EgaliseSomCh()
{
   return mEgaliseSomCh;
}

const bool & cSectionEgalisation::EgaliseSomCh()const 
{
   return mEgaliseSomCh;
}


cTplValGesInit< int > & cSectionEgalisation::SzMaxVois()
{
   return mSzMaxVois;
}

const cTplValGesInit< int > & cSectionEgalisation::SzMaxVois()const 
{
   return mSzMaxVois;
}


cTplValGesInit< bool > & cSectionEgalisation::Use4Vois()
{
   return mUse4Vois;
}

const cTplValGesInit< bool > & cSectionEgalisation::Use4Vois()const 
{
   return mUse4Vois;
}


cTplValGesInit< double > & cSectionEgalisation::CorrelThreshold()
{
   return mCorrelThreshold;
}

const cTplValGesInit< double > & cSectionEgalisation::CorrelThreshold()const 
{
   return mCorrelThreshold;
}


cTplValGesInit< bool > & cSectionEgalisation::AdjL1ByCple()
{
   return mAdjL1ByCple;
}

const cTplValGesInit< bool > & cSectionEgalisation::AdjL1ByCple()const 
{
   return mAdjL1ByCple;
}


cTplValGesInit< double > & cSectionEgalisation::PercCutAdjL1()
{
   return mPercCutAdjL1;
}

const cTplValGesInit< double > & cSectionEgalisation::PercCutAdjL1()const 
{
   return mPercCutAdjL1;
}


cTplValGesInit< double > & cSectionEgalisation::FactMajorByCutGlob()
{
   return mFactMajorByCutGlob;
}

const cTplValGesInit< double > & cSectionEgalisation::FactMajorByCutGlob()const 
{
   return mFactMajorByCutGlob;
}

void  BinaryUnDumpFromFile(cSectionEgalisation & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MasqApprent().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MasqApprent().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MasqApprent().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PeriodEchant().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PeriodEchant().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PeriodEchant().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbPEqualMoyPerImage().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbPEqualMoyPerImage().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbPEqualMoyPerImage().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.SzVois(),aFp);
    BinaryUnDumpFromFile(anObj.NameFileMesures(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.UseFileMesure().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.UseFileMesure().ValForcedForUnUmp(),aFp);
        }
        else  anObj.UseFileMesure().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt2di aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.DegresEgalVois().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt2di aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.DegresEgalVoisSec().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PdsRappelInit().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PdsRappelInit().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PdsRappelInit().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PdsSingularite().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PdsSingularite().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PdsSingularite().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.GlobRappInit(),aFp);
    BinaryUnDumpFromFile(anObj.EgaliseSomCh(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzMaxVois().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzMaxVois().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzMaxVois().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Use4Vois().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Use4Vois().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Use4Vois().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.CorrelThreshold().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.CorrelThreshold().ValForcedForUnUmp(),aFp);
        }
        else  anObj.CorrelThreshold().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AdjL1ByCple().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AdjL1ByCple().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AdjL1ByCple().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PercCutAdjL1().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PercCutAdjL1().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PercCutAdjL1().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FactMajorByCutGlob().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FactMajorByCutGlob().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FactMajorByCutGlob().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionEgalisation & anObj)
{
    BinaryDumpInFile(aFp,anObj.MasqApprent().IsInit());
    if (anObj.MasqApprent().IsInit()) BinaryDumpInFile(aFp,anObj.MasqApprent().Val());
    BinaryDumpInFile(aFp,anObj.PeriodEchant().IsInit());
    if (anObj.PeriodEchant().IsInit()) BinaryDumpInFile(aFp,anObj.PeriodEchant().Val());
    BinaryDumpInFile(aFp,anObj.NbPEqualMoyPerImage().IsInit());
    if (anObj.NbPEqualMoyPerImage().IsInit()) BinaryDumpInFile(aFp,anObj.NbPEqualMoyPerImage().Val());
    BinaryDumpInFile(aFp,anObj.SzVois());
    BinaryDumpInFile(aFp,anObj.NameFileMesures());
    BinaryDumpInFile(aFp,anObj.UseFileMesure().IsInit());
    if (anObj.UseFileMesure().IsInit()) BinaryDumpInFile(aFp,anObj.UseFileMesure().Val());
    BinaryDumpInFile(aFp,(int)anObj.DegresEgalVois().size());
    for(  std::vector< Pt2di >::const_iterator iT=anObj.DegresEgalVois().begin();
         iT!=anObj.DegresEgalVois().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.DegresEgalVoisSec().size());
    for(  std::vector< Pt2di >::const_iterator iT=anObj.DegresEgalVoisSec().begin();
         iT!=anObj.DegresEgalVoisSec().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.PdsRappelInit().IsInit());
    if (anObj.PdsRappelInit().IsInit()) BinaryDumpInFile(aFp,anObj.PdsRappelInit().Val());
    BinaryDumpInFile(aFp,anObj.PdsSingularite().IsInit());
    if (anObj.PdsSingularite().IsInit()) BinaryDumpInFile(aFp,anObj.PdsSingularite().Val());
    BinaryDumpInFile(aFp,anObj.GlobRappInit());
    BinaryDumpInFile(aFp,anObj.EgaliseSomCh());
    BinaryDumpInFile(aFp,anObj.SzMaxVois().IsInit());
    if (anObj.SzMaxVois().IsInit()) BinaryDumpInFile(aFp,anObj.SzMaxVois().Val());
    BinaryDumpInFile(aFp,anObj.Use4Vois().IsInit());
    if (anObj.Use4Vois().IsInit()) BinaryDumpInFile(aFp,anObj.Use4Vois().Val());
    BinaryDumpInFile(aFp,anObj.CorrelThreshold().IsInit());
    if (anObj.CorrelThreshold().IsInit()) BinaryDumpInFile(aFp,anObj.CorrelThreshold().Val());
    BinaryDumpInFile(aFp,anObj.AdjL1ByCple().IsInit());
    if (anObj.AdjL1ByCple().IsInit()) BinaryDumpInFile(aFp,anObj.AdjL1ByCple().Val());
    BinaryDumpInFile(aFp,anObj.PercCutAdjL1().IsInit());
    if (anObj.PercCutAdjL1().IsInit()) BinaryDumpInFile(aFp,anObj.PercCutAdjL1().Val());
    BinaryDumpInFile(aFp,anObj.FactMajorByCutGlob().IsInit());
    if (anObj.FactMajorByCutGlob().IsInit()) BinaryDumpInFile(aFp,anObj.FactMajorByCutGlob().Val());
}

cElXMLTree * ToXMLTree(const cSectionEgalisation & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionEgalisation",eXMLBranche);
   if (anObj.MasqApprent().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MasqApprent().Val())->ReTagThis("MasqApprent"));
   if (anObj.PeriodEchant().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PeriodEchant"),anObj.PeriodEchant().Val())->ReTagThis("PeriodEchant"));
   if (anObj.NbPEqualMoyPerImage().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbPEqualMoyPerImage"),anObj.NbPEqualMoyPerImage().Val())->ReTagThis("NbPEqualMoyPerImage"));
   aRes->AddFils(::ToXMLTree(std::string("SzVois"),anObj.SzVois())->ReTagThis("SzVois"));
   aRes->AddFils(::ToXMLTree(std::string("NameFileMesures"),anObj.NameFileMesures())->ReTagThis("NameFileMesures"));
   if (anObj.UseFileMesure().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("UseFileMesure"),anObj.UseFileMesure().Val())->ReTagThis("UseFileMesure"));
  for
  (       std::vector< Pt2di >::const_iterator it=anObj.DegresEgalVois().begin();
      it !=anObj.DegresEgalVois().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("DegresEgalVois"),(*it))->ReTagThis("DegresEgalVois"));
  for
  (       std::vector< Pt2di >::const_iterator it=anObj.DegresEgalVoisSec().begin();
      it !=anObj.DegresEgalVoisSec().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("DegresEgalVoisSec"),(*it))->ReTagThis("DegresEgalVoisSec"));
   if (anObj.PdsRappelInit().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PdsRappelInit"),anObj.PdsRappelInit().Val())->ReTagThis("PdsRappelInit"));
   if (anObj.PdsSingularite().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PdsSingularite"),anObj.PdsSingularite().Val())->ReTagThis("PdsSingularite"));
   aRes->AddFils(ToXMLTree(anObj.GlobRappInit())->ReTagThis("GlobRappInit"));
   aRes->AddFils(::ToXMLTree(std::string("EgaliseSomCh"),anObj.EgaliseSomCh())->ReTagThis("EgaliseSomCh"));
   if (anObj.SzMaxVois().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzMaxVois"),anObj.SzMaxVois().Val())->ReTagThis("SzMaxVois"));
   if (anObj.Use4Vois().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Use4Vois"),anObj.Use4Vois().Val())->ReTagThis("Use4Vois"));
   if (anObj.CorrelThreshold().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("CorrelThreshold"),anObj.CorrelThreshold().Val())->ReTagThis("CorrelThreshold"));
   if (anObj.AdjL1ByCple().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AdjL1ByCple"),anObj.AdjL1ByCple().Val())->ReTagThis("AdjL1ByCple"));
   if (anObj.PercCutAdjL1().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PercCutAdjL1"),anObj.PercCutAdjL1().Val())->ReTagThis("PercCutAdjL1"));
   if (anObj.FactMajorByCutGlob().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FactMajorByCutGlob"),anObj.FactMajorByCutGlob().Val())->ReTagThis("FactMajorByCutGlob"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionEgalisation & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MasqApprent(),aTree->Get("MasqApprent",1)); //tototo 

   xml_init(anObj.PeriodEchant(),aTree->Get("PeriodEchant",1)); //tototo 

   xml_init(anObj.NbPEqualMoyPerImage(),aTree->Get("NbPEqualMoyPerImage",1),double(1e4)); //tototo 

   xml_init(anObj.SzVois(),aTree->Get("SzVois",1)); //tototo 

   xml_init(anObj.NameFileMesures(),aTree->Get("NameFileMesures",1)); //tototo 

   xml_init(anObj.UseFileMesure(),aTree->Get("UseFileMesure",1),bool(false)); //tototo 

   xml_init(anObj.DegresEgalVois(),aTree->GetAll("DegresEgalVois",false,1));

   xml_init(anObj.DegresEgalVoisSec(),aTree->GetAll("DegresEgalVoisSec",false,1));

   xml_init(anObj.PdsRappelInit(),aTree->Get("PdsRappelInit",1),double(1e-3)); //tototo 

   xml_init(anObj.PdsSingularite(),aTree->Get("PdsSingularite",1),double(1e-6)); //tototo 

   xml_init(anObj.GlobRappInit(),aTree->Get("GlobRappInit",1)); //tototo 

   xml_init(anObj.EgaliseSomCh(),aTree->Get("EgaliseSomCh",1)); //tototo 

   xml_init(anObj.SzMaxVois(),aTree->Get("SzMaxVois",1),int(5)); //tototo 

   xml_init(anObj.Use4Vois(),aTree->Get("Use4Vois",1),bool(true)); //tototo 

   xml_init(anObj.CorrelThreshold(),aTree->Get("CorrelThreshold",1),double(0.7)); //tototo 

   xml_init(anObj.AdjL1ByCple(),aTree->Get("AdjL1ByCple",1),bool(true)); //tototo 

   xml_init(anObj.PercCutAdjL1(),aTree->Get("PercCutAdjL1",1),double(70)); //tototo 

   xml_init(anObj.FactMajorByCutGlob(),aTree->Get("FactMajorByCutGlob",1),double(1.5)); //tototo 
}

std::string  Mangling( cSectionEgalisation *) {return "60301049B08A7094FABF";};


cTplValGesInit< cChantierDescripteur > & cCreateOrtho::DicoLoc()
{
   return mDicoLoc;
}

const cTplValGesInit< cChantierDescripteur > & cCreateOrtho::DicoLoc()const 
{
   return mDicoLoc;
}


cTplValGesInit< string > & cCreateOrtho::FileChantierNameDescripteur()
{
   return mFileChantierNameDescripteur;
}

const cTplValGesInit< string > & cCreateOrtho::FileChantierNameDescripteur()const 
{
   return mFileChantierNameDescripteur;
}


std::string & cCreateOrtho::WorkDir()
{
   return mWorkDir;
}

const std::string & cCreateOrtho::WorkDir()const 
{
   return mWorkDir;
}


cTplValGesInit< int > & cCreateOrtho::KBox0()
{
   return mKBox0;
}

const cTplValGesInit< int > & cCreateOrtho::KBox0()const 
{
   return mKBox0;
}


cTplValGesInit< std::string > & cCreateOrtho::FileMNT()
{
   return SectionEntree().FileMNT();
}

const cTplValGesInit< std::string > & cCreateOrtho::FileMNT()const 
{
   return SectionEntree().FileMNT();
}


std::string & cCreateOrtho::KeySetIm()
{
   return SectionEntree().KeySetIm();
}

const std::string & cCreateOrtho::KeySetIm()const 
{
   return SectionEntree().KeySetIm();
}


std::string & cCreateOrtho::KeyAssocMetaData()
{
   return SectionEntree().KeyAssocMetaData();
}

const std::string & cCreateOrtho::KeyAssocMetaData()const 
{
   return SectionEntree().KeyAssocMetaData();
}


std::string & cCreateOrtho::KeyAssocNamePC()
{
   return SectionEntree().KeyAssocNamePC();
}

const std::string & cCreateOrtho::KeyAssocNamePC()const 
{
   return SectionEntree().KeyAssocNamePC();
}


std::string & cCreateOrtho::KeyAssocNameIncH()
{
   return SectionEntree().KeyAssocNameIncH();
}

const std::string & cCreateOrtho::KeyAssocNameIncH()const 
{
   return SectionEntree().KeyAssocNameIncH();
}


cTplValGesInit< std::string > & cCreateOrtho::KeyAssocPriorite()
{
   return SectionEntree().KeyAssocPriorite();
}

const cTplValGesInit< std::string > & cCreateOrtho::KeyAssocPriorite()const 
{
   return SectionEntree().KeyAssocPriorite();
}


std::list< cMasqMesures > & cCreateOrtho::ListMasqMesures()
{
   return SectionEntree().ListMasqMesures();
}

const std::list< cMasqMesures > & cCreateOrtho::ListMasqMesures()const 
{
   return SectionEntree().ListMasqMesures();
}


std::list< std::string > & cCreateOrtho::FileExterneMasqMesures()
{
   return SectionEntree().FileExterneMasqMesures();
}

const std::list< std::string > & cCreateOrtho::FileExterneMasqMesures()const 
{
   return SectionEntree().FileExterneMasqMesures();
}


cSectionEntree & cCreateOrtho::SectionEntree()
{
   return mSectionEntree;
}

const cSectionEntree & cCreateOrtho::SectionEntree()const 
{
   return mSectionEntree;
}


cTplValGesInit< double > & cCreateOrtho::SaturThreshold()
{
   return SectionFiltrageIn().SaturThreshold();
}

const cTplValGesInit< double > & cCreateOrtho::SaturThreshold()const 
{
   return SectionFiltrageIn().SaturThreshold();
}


cTplValGesInit< int > & cCreateOrtho::SzDilatPC()
{
   return SectionFiltrageIn().SzDilatPC();
}

const cTplValGesInit< int > & cCreateOrtho::SzDilatPC()const 
{
   return SectionFiltrageIn().SzDilatPC();
}


cTplValGesInit< int > & cCreateOrtho::SzOuvPC()
{
   return SectionFiltrageIn().SzOuvPC();
}

const cTplValGesInit< int > & cCreateOrtho::SzOuvPC()const 
{
   return SectionFiltrageIn().SzOuvPC();
}


cTplValGesInit< int > & cCreateOrtho::SeuilVisib()
{
   return SectionFiltrageIn().BoucheTrou().Val().SeuilVisib();
}

const cTplValGesInit< int > & cCreateOrtho::SeuilVisib()const 
{
   return SectionFiltrageIn().BoucheTrou().Val().SeuilVisib();
}


cTplValGesInit< int > & cCreateOrtho::SeuilVisibBT()
{
   return SectionFiltrageIn().BoucheTrou().Val().SeuilVisibBT();
}

const cTplValGesInit< int > & cCreateOrtho::SeuilVisibBT()const 
{
   return SectionFiltrageIn().BoucheTrou().Val().SeuilVisibBT();
}


cTplValGesInit< double > & cCreateOrtho::CoeffPondAngul()
{
   return SectionFiltrageIn().BoucheTrou().Val().CoeffPondAngul();
}

const cTplValGesInit< double > & cCreateOrtho::CoeffPondAngul()const 
{
   return SectionFiltrageIn().BoucheTrou().Val().CoeffPondAngul();
}


cTplValGesInit< cBoucheTrou > & cCreateOrtho::BoucheTrou()
{
   return SectionFiltrageIn().BoucheTrou();
}

const cTplValGesInit< cBoucheTrou > & cCreateOrtho::BoucheTrou()const 
{
   return SectionFiltrageIn().BoucheTrou();
}


cSectionFiltrageIn & cCreateOrtho::SectionFiltrageIn()
{
   return mSectionFiltrageIn;
}

const cSectionFiltrageIn & cCreateOrtho::SectionFiltrageIn()const 
{
   return mSectionFiltrageIn;
}


cTplValGesInit< bool > & cCreateOrtho::TestDiff()
{
   return SectionSorties().TestDiff();
}

const cTplValGesInit< bool > & cCreateOrtho::TestDiff()const 
{
   return SectionSorties().TestDiff();
}


std::string & cCreateOrtho::NameOrtho()
{
   return SectionSorties().NameOrtho();
}

const std::string & cCreateOrtho::NameOrtho()const 
{
   return SectionSorties().NameOrtho();
}


cTplValGesInit< std::string > & cCreateOrtho::NameLabels()
{
   return SectionSorties().NameLabels();
}

const cTplValGesInit< std::string > & cCreateOrtho::NameLabels()const 
{
   return SectionSorties().NameLabels();
}


cTplValGesInit< Box2di > & cCreateOrtho::BoxCalc()
{
   return SectionSorties().BoxCalc();
}

const cTplValGesInit< Box2di > & cCreateOrtho::BoxCalc()const 
{
   return SectionSorties().BoxCalc();
}


int & cCreateOrtho::SzDalle()
{
   return SectionSorties().SzDalle();
}

const int & cCreateOrtho::SzDalle()const 
{
   return SectionSorties().SzDalle();
}


int & cCreateOrtho::SzBrd()
{
   return SectionSorties().SzBrd();
}

const int & cCreateOrtho::SzBrd()const 
{
   return SectionSorties().SzBrd();
}


cTplValGesInit< int > & cCreateOrtho::SzTileResult()
{
   return SectionSorties().SzTileResult();
}

const cTplValGesInit< int > & cCreateOrtho::SzTileResult()const 
{
   return SectionSorties().SzTileResult();
}


cTplValGesInit< bool > & cCreateOrtho::Show()
{
   return SectionSorties().Show();
}

const cTplValGesInit< bool > & cCreateOrtho::Show()const 
{
   return SectionSorties().Show();
}


cTplValGesInit< double > & cCreateOrtho::DynGlob()
{
   return SectionSorties().DynGlob();
}

const cTplValGesInit< double > & cCreateOrtho::DynGlob()const 
{
   return SectionSorties().DynGlob();
}


cSectionSorties & cCreateOrtho::SectionSorties()
{
   return mSectionSorties;
}

const cSectionSorties & cCreateOrtho::SectionSorties()const 
{
   return mSectionSorties;
}


Pt2dr & cCreateOrtho::Per1()
{
   return SectionSimulImage().Val().Per1();
}

const Pt2dr & cCreateOrtho::Per1()const 
{
   return SectionSimulImage().Val().Per1();
}


cTplValGesInit< Pt2dr > & cCreateOrtho::Per2()
{
   return SectionSimulImage().Val().Per2();
}

const cTplValGesInit< Pt2dr > & cCreateOrtho::Per2()const 
{
   return SectionSimulImage().Val().Per2();
}


cTplValGesInit< double > & cCreateOrtho::Ampl()
{
   return SectionSimulImage().Val().Ampl();
}

const cTplValGesInit< double > & cCreateOrtho::Ampl()const 
{
   return SectionSimulImage().Val().Ampl();
}


std::list< cNoiseSSI > & cCreateOrtho::NoiseSSI()
{
   return SectionSimulImage().Val().NoiseSSI();
}

const std::list< cNoiseSSI > & cCreateOrtho::NoiseSSI()const 
{
   return SectionSimulImage().Val().NoiseSSI();
}


cTplValGesInit< cSectionSimulImage > & cCreateOrtho::SectionSimulImage()
{
   return mSectionSimulImage;
}

const cTplValGesInit< cSectionSimulImage > & cCreateOrtho::SectionSimulImage()const 
{
   return mSectionSimulImage;
}


cTplValGesInit< cMasqTerrain > & cCreateOrtho::MasqApprent()
{
   return SectionEgalisation().Val().MasqApprent();
}

const cTplValGesInit< cMasqTerrain > & cCreateOrtho::MasqApprent()const 
{
   return SectionEgalisation().Val().MasqApprent();
}


cTplValGesInit< int > & cCreateOrtho::PeriodEchant()
{
   return SectionEgalisation().Val().PeriodEchant();
}

const cTplValGesInit< int > & cCreateOrtho::PeriodEchant()const 
{
   return SectionEgalisation().Val().PeriodEchant();
}


cTplValGesInit< double > & cCreateOrtho::NbPEqualMoyPerImage()
{
   return SectionEgalisation().Val().NbPEqualMoyPerImage();
}

const cTplValGesInit< double > & cCreateOrtho::NbPEqualMoyPerImage()const 
{
   return SectionEgalisation().Val().NbPEqualMoyPerImage();
}


int & cCreateOrtho::SzVois()
{
   return SectionEgalisation().Val().SzVois();
}

const int & cCreateOrtho::SzVois()const 
{
   return SectionEgalisation().Val().SzVois();
}


std::string & cCreateOrtho::NameFileMesures()
{
   return SectionEgalisation().Val().NameFileMesures();
}

const std::string & cCreateOrtho::NameFileMesures()const 
{
   return SectionEgalisation().Val().NameFileMesures();
}


cTplValGesInit< bool > & cCreateOrtho::UseFileMesure()
{
   return SectionEgalisation().Val().UseFileMesure();
}

const cTplValGesInit< bool > & cCreateOrtho::UseFileMesure()const 
{
   return SectionEgalisation().Val().UseFileMesure();
}


std::vector< Pt2di > & cCreateOrtho::DegresEgalVois()
{
   return SectionEgalisation().Val().DegresEgalVois();
}

const std::vector< Pt2di > & cCreateOrtho::DegresEgalVois()const 
{
   return SectionEgalisation().Val().DegresEgalVois();
}


std::vector< Pt2di > & cCreateOrtho::DegresEgalVoisSec()
{
   return SectionEgalisation().Val().DegresEgalVoisSec();
}

const std::vector< Pt2di > & cCreateOrtho::DegresEgalVoisSec()const 
{
   return SectionEgalisation().Val().DegresEgalVoisSec();
}


cTplValGesInit< double > & cCreateOrtho::PdsRappelInit()
{
   return SectionEgalisation().Val().PdsRappelInit();
}

const cTplValGesInit< double > & cCreateOrtho::PdsRappelInit()const 
{
   return SectionEgalisation().Val().PdsRappelInit();
}


cTplValGesInit< double > & cCreateOrtho::PdsSingularite()
{
   return SectionEgalisation().Val().PdsSingularite();
}

const cTplValGesInit< double > & cCreateOrtho::PdsSingularite()const 
{
   return SectionEgalisation().Val().PdsSingularite();
}


cTplValGesInit< bool > & cCreateOrtho::DoGlob()
{
   return SectionEgalisation().Val().GlobRappInit().DoGlob();
}

const cTplValGesInit< bool > & cCreateOrtho::DoGlob()const 
{
   return SectionEgalisation().Val().GlobRappInit().DoGlob();
}


std::vector< Pt2di > & cCreateOrtho::Degres()
{
   return SectionEgalisation().Val().GlobRappInit().Degres();
}

const std::vector< Pt2di > & cCreateOrtho::Degres()const 
{
   return SectionEgalisation().Val().GlobRappInit().Degres();
}


std::vector< Pt2di > & cCreateOrtho::DegresSec()
{
   return SectionEgalisation().Val().GlobRappInit().DegresSec();
}

const std::vector< Pt2di > & cCreateOrtho::DegresSec()const 
{
   return SectionEgalisation().Val().GlobRappInit().DegresSec();
}


cTplValGesInit< std::string > & cCreateOrtho::PatternApply()
{
   return SectionEgalisation().Val().GlobRappInit().PatternApply();
}

const cTplValGesInit< std::string > & cCreateOrtho::PatternApply()const 
{
   return SectionEgalisation().Val().GlobRappInit().PatternApply();
}


cTplValGesInit< bool > & cCreateOrtho::RapelOnEgalPhys()
{
   return SectionEgalisation().Val().GlobRappInit().RapelOnEgalPhys();
}

const cTplValGesInit< bool > & cCreateOrtho::RapelOnEgalPhys()const 
{
   return SectionEgalisation().Val().GlobRappInit().RapelOnEgalPhys();
}


cGlobRappInit & cCreateOrtho::GlobRappInit()
{
   return SectionEgalisation().Val().GlobRappInit();
}

const cGlobRappInit & cCreateOrtho::GlobRappInit()const 
{
   return SectionEgalisation().Val().GlobRappInit();
}


bool & cCreateOrtho::EgaliseSomCh()
{
   return SectionEgalisation().Val().EgaliseSomCh();
}

const bool & cCreateOrtho::EgaliseSomCh()const 
{
   return SectionEgalisation().Val().EgaliseSomCh();
}


cTplValGesInit< int > & cCreateOrtho::SzMaxVois()
{
   return SectionEgalisation().Val().SzMaxVois();
}

const cTplValGesInit< int > & cCreateOrtho::SzMaxVois()const 
{
   return SectionEgalisation().Val().SzMaxVois();
}


cTplValGesInit< bool > & cCreateOrtho::Use4Vois()
{
   return SectionEgalisation().Val().Use4Vois();
}

const cTplValGesInit< bool > & cCreateOrtho::Use4Vois()const 
{
   return SectionEgalisation().Val().Use4Vois();
}


cTplValGesInit< double > & cCreateOrtho::CorrelThreshold()
{
   return SectionEgalisation().Val().CorrelThreshold();
}

const cTplValGesInit< double > & cCreateOrtho::CorrelThreshold()const 
{
   return SectionEgalisation().Val().CorrelThreshold();
}


cTplValGesInit< bool > & cCreateOrtho::AdjL1ByCple()
{
   return SectionEgalisation().Val().AdjL1ByCple();
}

const cTplValGesInit< bool > & cCreateOrtho::AdjL1ByCple()const 
{
   return SectionEgalisation().Val().AdjL1ByCple();
}


cTplValGesInit< double > & cCreateOrtho::PercCutAdjL1()
{
   return SectionEgalisation().Val().PercCutAdjL1();
}

const cTplValGesInit< double > & cCreateOrtho::PercCutAdjL1()const 
{
   return SectionEgalisation().Val().PercCutAdjL1();
}


cTplValGesInit< double > & cCreateOrtho::FactMajorByCutGlob()
{
   return SectionEgalisation().Val().FactMajorByCutGlob();
}

const cTplValGesInit< double > & cCreateOrtho::FactMajorByCutGlob()const 
{
   return SectionEgalisation().Val().FactMajorByCutGlob();
}


cTplValGesInit< cSectionEgalisation > & cCreateOrtho::SectionEgalisation()
{
   return mSectionEgalisation;
}

const cTplValGesInit< cSectionEgalisation > & cCreateOrtho::SectionEgalisation()const 
{
   return mSectionEgalisation;
}

void  BinaryUnDumpFromFile(cCreateOrtho & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DicoLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DicoLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DicoLoc().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FileChantierNameDescripteur().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FileChantierNameDescripteur().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FileChantierNameDescripteur().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.WorkDir(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KBox0().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KBox0().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KBox0().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.SectionEntree(),aFp);
    BinaryUnDumpFromFile(anObj.SectionFiltrageIn(),aFp);
    BinaryUnDumpFromFile(anObj.SectionSorties(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SectionSimulImage().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SectionSimulImage().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SectionSimulImage().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SectionEgalisation().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SectionEgalisation().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SectionEgalisation().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cCreateOrtho & anObj)
{
    BinaryDumpInFile(aFp,anObj.DicoLoc().IsInit());
    if (anObj.DicoLoc().IsInit()) BinaryDumpInFile(aFp,anObj.DicoLoc().Val());
    BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().IsInit());
    if (anObj.FileChantierNameDescripteur().IsInit()) BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().Val());
    BinaryDumpInFile(aFp,anObj.WorkDir());
    BinaryDumpInFile(aFp,anObj.KBox0().IsInit());
    if (anObj.KBox0().IsInit()) BinaryDumpInFile(aFp,anObj.KBox0().Val());
    BinaryDumpInFile(aFp,anObj.SectionEntree());
    BinaryDumpInFile(aFp,anObj.SectionFiltrageIn());
    BinaryDumpInFile(aFp,anObj.SectionSorties());
    BinaryDumpInFile(aFp,anObj.SectionSimulImage().IsInit());
    if (anObj.SectionSimulImage().IsInit()) BinaryDumpInFile(aFp,anObj.SectionSimulImage().Val());
    BinaryDumpInFile(aFp,anObj.SectionEgalisation().IsInit());
    if (anObj.SectionEgalisation().IsInit()) BinaryDumpInFile(aFp,anObj.SectionEgalisation().Val());
}

cElXMLTree * ToXMLTree(const cCreateOrtho & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"CreateOrtho",eXMLBranche);
   if (anObj.DicoLoc().IsInit())
      aRes->AddFils(ToXMLTree(anObj.DicoLoc().Val())->ReTagThis("DicoLoc"));
   if (anObj.FileChantierNameDescripteur().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FileChantierNameDescripteur"),anObj.FileChantierNameDescripteur().Val())->ReTagThis("FileChantierNameDescripteur"));
   aRes->AddFils(::ToXMLTree(std::string("WorkDir"),anObj.WorkDir())->ReTagThis("WorkDir"));
   if (anObj.KBox0().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KBox0"),anObj.KBox0().Val())->ReTagThis("KBox0"));
   aRes->AddFils(ToXMLTree(anObj.SectionEntree())->ReTagThis("SectionEntree"));
   aRes->AddFils(ToXMLTree(anObj.SectionFiltrageIn())->ReTagThis("SectionFiltrageIn"));
   aRes->AddFils(ToXMLTree(anObj.SectionSorties())->ReTagThis("SectionSorties"));
   if (anObj.SectionSimulImage().IsInit())
      aRes->AddFils(ToXMLTree(anObj.SectionSimulImage().Val())->ReTagThis("SectionSimulImage"));
   if (anObj.SectionEgalisation().IsInit())
      aRes->AddFils(ToXMLTree(anObj.SectionEgalisation().Val())->ReTagThis("SectionEgalisation"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cCreateOrtho & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DicoLoc(),aTree->Get("DicoLoc",1)); //tototo 

   xml_init(anObj.FileChantierNameDescripteur(),aTree->Get("FileChantierNameDescripteur",1)); //tototo 

   xml_init(anObj.WorkDir(),aTree->Get("WorkDir",1)); //tototo 

   xml_init(anObj.KBox0(),aTree->Get("KBox0",1),int(0)); //tototo 

   xml_init(anObj.SectionEntree(),aTree->Get("SectionEntree",1)); //tototo 

   xml_init(anObj.SectionFiltrageIn(),aTree->Get("SectionFiltrageIn",1)); //tototo 

   xml_init(anObj.SectionSorties(),aTree->Get("SectionSorties",1)); //tototo 

   xml_init(anObj.SectionSimulImage(),aTree->Get("SectionSimulImage",1)); //tototo 

   xml_init(anObj.SectionEgalisation(),aTree->Get("SectionEgalisation",1)); //tototo 
}

std::string  Mangling( cCreateOrtho *) {return "296BE6ED3DF1BEA2FE3F";};


bool & cMetaDataPartiesCachees::Done()
{
   return mDone;
}

const bool & cMetaDataPartiesCachees::Done()const 
{
   return mDone;
}


Pt2di & cMetaDataPartiesCachees::Offset()
{
   return mOffset;
}

const Pt2di & cMetaDataPartiesCachees::Offset()const 
{
   return mOffset;
}


Pt2di & cMetaDataPartiesCachees::Sz()
{
   return mSz;
}

const Pt2di & cMetaDataPartiesCachees::Sz()const 
{
   return mSz;
}


double & cMetaDataPartiesCachees::Pas()
{
   return mPas;
}

const double & cMetaDataPartiesCachees::Pas()const 
{
   return mPas;
}


int & cMetaDataPartiesCachees::SeuilUse()
{
   return mSeuilUse;
}

const int & cMetaDataPartiesCachees::SeuilUse()const 
{
   return mSeuilUse;
}


cTplValGesInit< double > & cMetaDataPartiesCachees::SsResolIncH()
{
   return mSsResolIncH;
}

const cTplValGesInit< double > & cMetaDataPartiesCachees::SsResolIncH()const 
{
   return mSsResolIncH;
}

void  BinaryUnDumpFromFile(cMetaDataPartiesCachees & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Done(),aFp);
    BinaryUnDumpFromFile(anObj.Offset(),aFp);
    BinaryUnDumpFromFile(anObj.Sz(),aFp);
    BinaryUnDumpFromFile(anObj.Pas(),aFp);
    BinaryUnDumpFromFile(anObj.SeuilUse(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SsResolIncH().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SsResolIncH().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SsResolIncH().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMetaDataPartiesCachees & anObj)
{
    BinaryDumpInFile(aFp,anObj.Done());
    BinaryDumpInFile(aFp,anObj.Offset());
    BinaryDumpInFile(aFp,anObj.Sz());
    BinaryDumpInFile(aFp,anObj.Pas());
    BinaryDumpInFile(aFp,anObj.SeuilUse());
    BinaryDumpInFile(aFp,anObj.SsResolIncH().IsInit());
    if (anObj.SsResolIncH().IsInit()) BinaryDumpInFile(aFp,anObj.SsResolIncH().Val());
}

cElXMLTree * ToXMLTree(const cMetaDataPartiesCachees & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MetaDataPartiesCachees",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Done"),anObj.Done())->ReTagThis("Done"));
   aRes->AddFils(::ToXMLTree(std::string("Offset"),anObj.Offset())->ReTagThis("Offset"));
   aRes->AddFils(::ToXMLTree(std::string("Sz"),anObj.Sz())->ReTagThis("Sz"));
   aRes->AddFils(::ToXMLTree(std::string("Pas"),anObj.Pas())->ReTagThis("Pas"));
   aRes->AddFils(::ToXMLTree(std::string("SeuilUse"),anObj.SeuilUse())->ReTagThis("SeuilUse"));
   if (anObj.SsResolIncH().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SsResolIncH"),anObj.SsResolIncH().Val())->ReTagThis("SsResolIncH"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMetaDataPartiesCachees & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Done(),aTree->Get("Done",1)); //tototo 

   xml_init(anObj.Offset(),aTree->Get("Offset",1)); //tototo 

   xml_init(anObj.Sz(),aTree->Get("Sz",1)); //tototo 

   xml_init(anObj.Pas(),aTree->Get("Pas",1)); //tototo 

   xml_init(anObj.SeuilUse(),aTree->Get("SeuilUse",1)); //tototo 

   xml_init(anObj.SsResolIncH(),aTree->Get("SsResolIncH",1)); //tototo 
}

std::string  Mangling( cMetaDataPartiesCachees *) {return "E62A8B99A87274E1FE3F";};


cTplValGesInit< Pt3dr > & cPVPN_Orientation::AngleCardan()
{
   return mAngleCardan;
}

const cTplValGesInit< Pt3dr > & cPVPN_Orientation::AngleCardan()const 
{
   return mAngleCardan;
}

void  BinaryUnDumpFromFile(cPVPN_Orientation & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AngleCardan().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AngleCardan().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AngleCardan().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPVPN_Orientation & anObj)
{
    BinaryDumpInFile(aFp,anObj.AngleCardan().IsInit());
    if (anObj.AngleCardan().IsInit()) BinaryDumpInFile(aFp,anObj.AngleCardan().Val());
}

cElXMLTree * ToXMLTree(const cPVPN_Orientation & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PVPN_Orientation",eXMLBranche);
   if (anObj.AngleCardan().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AngleCardan"),anObj.AngleCardan().Val())->ReTagThis("AngleCardan"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPVPN_Orientation & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.AngleCardan(),aTree->Get("AngleCardan",1)); //tototo 
}

std::string  Mangling( cPVPN_Orientation *) {return "00014487CC007498FA3F";};


cPVPN_Orientation & cPVPN_ImFixe::Orient()
{
   return mOrient;
}

const cPVPN_Orientation & cPVPN_ImFixe::Orient()const 
{
   return mOrient;
}


std::string & cPVPN_ImFixe::Name()
{
   return mName;
}

const std::string & cPVPN_ImFixe::Name()const 
{
   return mName;
}

void  BinaryUnDumpFromFile(cPVPN_ImFixe & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Orient(),aFp);
    BinaryUnDumpFromFile(anObj.Name(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPVPN_ImFixe & anObj)
{
    BinaryDumpInFile(aFp,anObj.Orient());
    BinaryDumpInFile(aFp,anObj.Name());
}

cElXMLTree * ToXMLTree(const cPVPN_ImFixe & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PVPN_ImFixe",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.Orient())->ReTagThis("Orient"));
   aRes->AddFils(::ToXMLTree(std::string("Name"),anObj.Name())->ReTagThis("Name"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPVPN_ImFixe & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Orient(),aTree->Get("Orient",1)); //tototo 

   xml_init(anObj.Name(),aTree->Get("Name",1)); //tototo 
}

std::string  Mangling( cPVPN_ImFixe *) {return "C4ECB2ADA0B81CEDFC3F";};


Pt2di & cPVPN_Camera::NbPixel()
{
   return mNbPixel;
}

const Pt2di & cPVPN_Camera::NbPixel()const 
{
   return mNbPixel;
}


double & cPVPN_Camera::AngleDiag()
{
   return mAngleDiag;
}

const double & cPVPN_Camera::AngleDiag()const 
{
   return mAngleDiag;
}

void  BinaryUnDumpFromFile(cPVPN_Camera & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NbPixel(),aFp);
    BinaryUnDumpFromFile(anObj.AngleDiag(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPVPN_Camera & anObj)
{
    BinaryDumpInFile(aFp,anObj.NbPixel());
    BinaryDumpInFile(aFp,anObj.AngleDiag());
}

cElXMLTree * ToXMLTree(const cPVPN_Camera & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PVPN_Camera",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NbPixel"),anObj.NbPixel())->ReTagThis("NbPixel"));
   aRes->AddFils(::ToXMLTree(std::string("AngleDiag"),anObj.AngleDiag())->ReTagThis("AngleDiag"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPVPN_Camera & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NbPixel(),aTree->Get("NbPixel",1)); //tototo 

   xml_init(anObj.AngleDiag(),aTree->Get("AngleDiag",1)); //tototo 
}

std::string  Mangling( cPVPN_Camera *) {return "E0F83CF87DD9A4A7FA3F";};


cTplValGesInit< Pt3dr > & cPVPN_Fond::FondConstant()
{
   return mFondConstant;
}

const cTplValGesInit< Pt3dr > & cPVPN_Fond::FondConstant()const 
{
   return mFondConstant;
}

void  BinaryUnDumpFromFile(cPVPN_Fond & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FondConstant().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FondConstant().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FondConstant().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPVPN_Fond & anObj)
{
    BinaryDumpInFile(aFp,anObj.FondConstant().IsInit());
    if (anObj.FondConstant().IsInit()) BinaryDumpInFile(aFp,anObj.FondConstant().Val());
}

cElXMLTree * ToXMLTree(const cPVPN_Fond & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PVPN_Fond",eXMLBranche);
   if (anObj.FondConstant().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FondConstant"),anObj.FondConstant().Val())->ReTagThis("FondConstant"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPVPN_Fond & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.FondConstant(),aTree->Get("FondConstant",1)); //tototo 
}

std::string  Mangling( cPVPN_Fond *) {return "D396D528DEB1798AFEBF";};


std::string & cPVPN_Nuages::Name()
{
   return mName;
}

const std::string & cPVPN_Nuages::Name()const 
{
   return mName;
}

void  BinaryUnDumpFromFile(cPVPN_Nuages & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Name(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPVPN_Nuages & anObj)
{
    BinaryDumpInFile(aFp,anObj.Name());
}

cElXMLTree * ToXMLTree(const cPVPN_Nuages & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PVPN_Nuages",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Name"),anObj.Name())->ReTagThis("Name"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPVPN_Nuages & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Name(),aTree->Get("Name",1)); //tototo 
}

std::string  Mangling( cPVPN_Nuages *) {return "7E2532E6E57E618DFF3F";};


std::string & cParamVisuProjNuage::WorkDir()
{
   return mWorkDir;
}

const std::string & cParamVisuProjNuage::WorkDir()const 
{
   return mWorkDir;
}


cTplValGesInit< cChantierDescripteur > & cParamVisuProjNuage::DicoLoc()
{
   return mDicoLoc;
}

const cTplValGesInit< cChantierDescripteur > & cParamVisuProjNuage::DicoLoc()const 
{
   return mDicoLoc;
}


cTplValGesInit< string > & cParamVisuProjNuage::FileChantierNameDescripteur()
{
   return mFileChantierNameDescripteur;
}

const cTplValGesInit< string > & cParamVisuProjNuage::FileChantierNameDescripteur()const 
{
   return mFileChantierNameDescripteur;
}


cPVPN_Orientation & cParamVisuProjNuage::Orient()
{
   return PVPN_ImFixe().Val().Orient();
}

const cPVPN_Orientation & cParamVisuProjNuage::Orient()const 
{
   return PVPN_ImFixe().Val().Orient();
}


std::string & cParamVisuProjNuage::Name()
{
   return PVPN_ImFixe().Val().Name();
}

const std::string & cParamVisuProjNuage::Name()const 
{
   return PVPN_ImFixe().Val().Name();
}


cTplValGesInit< cPVPN_ImFixe > & cParamVisuProjNuage::PVPN_ImFixe()
{
   return mPVPN_ImFixe;
}

const cTplValGesInit< cPVPN_ImFixe > & cParamVisuProjNuage::PVPN_ImFixe()const 
{
   return mPVPN_ImFixe;
}


Pt2di & cParamVisuProjNuage::NbPixel()
{
   return PVPN_Camera().NbPixel();
}

const Pt2di & cParamVisuProjNuage::NbPixel()const 
{
   return PVPN_Camera().NbPixel();
}


double & cParamVisuProjNuage::AngleDiag()
{
   return PVPN_Camera().AngleDiag();
}

const double & cParamVisuProjNuage::AngleDiag()const 
{
   return PVPN_Camera().AngleDiag();
}


cPVPN_Camera & cParamVisuProjNuage::PVPN_Camera()
{
   return mPVPN_Camera;
}

const cPVPN_Camera & cParamVisuProjNuage::PVPN_Camera()const 
{
   return mPVPN_Camera;
}


cTplValGesInit< Pt3dr > & cParamVisuProjNuage::FondConstant()
{
   return PVPN_Fond().FondConstant();
}

const cTplValGesInit< Pt3dr > & cParamVisuProjNuage::FondConstant()const 
{
   return PVPN_Fond().FondConstant();
}


cPVPN_Fond & cParamVisuProjNuage::PVPN_Fond()
{
   return mPVPN_Fond;
}

const cPVPN_Fond & cParamVisuProjNuage::PVPN_Fond()const 
{
   return mPVPN_Fond;
}


std::list< cPVPN_Nuages > & cParamVisuProjNuage::PVPN_Nuages()
{
   return mPVPN_Nuages;
}

const std::list< cPVPN_Nuages > & cParamVisuProjNuage::PVPN_Nuages()const 
{
   return mPVPN_Nuages;
}


cTplValGesInit< double > & cParamVisuProjNuage::SousEchQuickN()
{
   return mSousEchQuickN;
}

const cTplValGesInit< double > & cParamVisuProjNuage::SousEchQuickN()const 
{
   return mSousEchQuickN;
}

void  BinaryUnDumpFromFile(cParamVisuProjNuage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.WorkDir(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DicoLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DicoLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DicoLoc().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FileChantierNameDescripteur().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FileChantierNameDescripteur().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FileChantierNameDescripteur().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PVPN_ImFixe().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PVPN_ImFixe().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PVPN_ImFixe().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.PVPN_Camera(),aFp);
    BinaryUnDumpFromFile(anObj.PVPN_Fond(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cPVPN_Nuages aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.PVPN_Nuages().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SousEchQuickN().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SousEchQuickN().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SousEchQuickN().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamVisuProjNuage & anObj)
{
    BinaryDumpInFile(aFp,anObj.WorkDir());
    BinaryDumpInFile(aFp,anObj.DicoLoc().IsInit());
    if (anObj.DicoLoc().IsInit()) BinaryDumpInFile(aFp,anObj.DicoLoc().Val());
    BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().IsInit());
    if (anObj.FileChantierNameDescripteur().IsInit()) BinaryDumpInFile(aFp,anObj.FileChantierNameDescripteur().Val());
    BinaryDumpInFile(aFp,anObj.PVPN_ImFixe().IsInit());
    if (anObj.PVPN_ImFixe().IsInit()) BinaryDumpInFile(aFp,anObj.PVPN_ImFixe().Val());
    BinaryDumpInFile(aFp,anObj.PVPN_Camera());
    BinaryDumpInFile(aFp,anObj.PVPN_Fond());
    BinaryDumpInFile(aFp,(int)anObj.PVPN_Nuages().size());
    for(  std::list< cPVPN_Nuages >::const_iterator iT=anObj.PVPN_Nuages().begin();
         iT!=anObj.PVPN_Nuages().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.SousEchQuickN().IsInit());
    if (anObj.SousEchQuickN().IsInit()) BinaryDumpInFile(aFp,anObj.SousEchQuickN().Val());
}

cElXMLTree * ToXMLTree(const cParamVisuProjNuage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamVisuProjNuage",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("WorkDir"),anObj.WorkDir())->ReTagThis("WorkDir"));
   if (anObj.DicoLoc().IsInit())
      aRes->AddFils(ToXMLTree(anObj.DicoLoc().Val())->ReTagThis("DicoLoc"));
   if (anObj.FileChantierNameDescripteur().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("FileChantierNameDescripteur"),anObj.FileChantierNameDescripteur().Val())->ReTagThis("FileChantierNameDescripteur"));
   if (anObj.PVPN_ImFixe().IsInit())
      aRes->AddFils(ToXMLTree(anObj.PVPN_ImFixe().Val())->ReTagThis("PVPN_ImFixe"));
   aRes->AddFils(ToXMLTree(anObj.PVPN_Camera())->ReTagThis("PVPN_Camera"));
   aRes->AddFils(ToXMLTree(anObj.PVPN_Fond())->ReTagThis("PVPN_Fond"));
  for
  (       std::list< cPVPN_Nuages >::const_iterator it=anObj.PVPN_Nuages().begin();
      it !=anObj.PVPN_Nuages().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("PVPN_Nuages"));
   if (anObj.SousEchQuickN().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SousEchQuickN"),anObj.SousEchQuickN().Val())->ReTagThis("SousEchQuickN"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamVisuProjNuage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.WorkDir(),aTree->Get("WorkDir",1)); //tototo 

   xml_init(anObj.DicoLoc(),aTree->Get("DicoLoc",1)); //tototo 

   xml_init(anObj.FileChantierNameDescripteur(),aTree->Get("FileChantierNameDescripteur",1)); //tototo 

   xml_init(anObj.PVPN_ImFixe(),aTree->Get("PVPN_ImFixe",1)); //tototo 

   xml_init(anObj.PVPN_Camera(),aTree->Get("PVPN_Camera",1)); //tototo 

   xml_init(anObj.PVPN_Fond(),aTree->Get("PVPN_Fond",1)); //tototo 

   xml_init(anObj.PVPN_Nuages(),aTree->GetAll("PVPN_Nuages",false,1));

   xml_init(anObj.SousEchQuickN(),aTree->Get("SousEchQuickN",1),double(10)); //tototo 
}

std::string  Mangling( cParamVisuProjNuage *) {return "ABCE413C3BD24DC5FE3F";};


double & cPoinAvionJaune::x()
{
   return mx;
}

const double & cPoinAvionJaune::x()const 
{
   return mx;
}


double & cPoinAvionJaune::y()
{
   return my;
}

const double & cPoinAvionJaune::y()const 
{
   return my;
}

void  BinaryUnDumpFromFile(cPoinAvionJaune & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.x(),aFp);
    BinaryUnDumpFromFile(anObj.y(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPoinAvionJaune & anObj)
{
    BinaryDumpInFile(aFp,anObj.x());
    BinaryDumpInFile(aFp,anObj.y());
}

cElXMLTree * ToXMLTree(const cPoinAvionJaune & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PoinAvionJaune",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("x"),anObj.x())->ReTagThis("x"));
   aRes->AddFils(::ToXMLTree(std::string("y"),anObj.y())->ReTagThis("y"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPoinAvionJaune & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.x(),aTree->Get("x",1)); //tototo 

   xml_init(anObj.y(),aTree->Get("y",1)); //tototo 
}

std::string  Mangling( cPoinAvionJaune *) {return "9CBD7A1A2DB6C79AFB3F";};


std::string & cValueAvionJaune::unit()
{
   return munit;
}

const std::string & cValueAvionJaune::unit()const 
{
   return munit;
}


cTplValGesInit< std::string > & cValueAvionJaune::source()
{
   return msource;
}

const cTplValGesInit< std::string > & cValueAvionJaune::source()const 
{
   return msource;
}


cTplValGesInit< double > & cValueAvionJaune::biaisCorrige()
{
   return mbiaisCorrige;
}

const cTplValGesInit< double > & cValueAvionJaune::biaisCorrige()const 
{
   return mbiaisCorrige;
}


double & cValueAvionJaune::value()
{
   return mvalue;
}

const double & cValueAvionJaune::value()const 
{
   return mvalue;
}

void  BinaryUnDumpFromFile(cValueAvionJaune & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.unit(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.source().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.source().ValForcedForUnUmp(),aFp);
        }
        else  anObj.source().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.biaisCorrige().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.biaisCorrige().ValForcedForUnUmp(),aFp);
        }
        else  anObj.biaisCorrige().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.value(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cValueAvionJaune & anObj)
{
    BinaryDumpInFile(aFp,anObj.unit());
    BinaryDumpInFile(aFp,anObj.source().IsInit());
    if (anObj.source().IsInit()) BinaryDumpInFile(aFp,anObj.source().Val());
    BinaryDumpInFile(aFp,anObj.biaisCorrige().IsInit());
    if (anObj.biaisCorrige().IsInit()) BinaryDumpInFile(aFp,anObj.biaisCorrige().Val());
    BinaryDumpInFile(aFp,anObj.value());
}

cElXMLTree * ToXMLTree(const cValueAvionJaune & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ValueAvionJaune",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("unit"),anObj.unit())->ReTagThis("unit"));
   if (anObj.source().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("source"),anObj.source().Val())->ReTagThis("source"));
   if (anObj.biaisCorrige().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("biaisCorrige"),anObj.biaisCorrige().Val())->ReTagThis("biaisCorrige"));
   aRes->AddFils(::ToXMLTree(std::string("value"),anObj.value())->ReTagThis("value"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cValueAvionJaune & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.unit(),aTree->Get("unit",1)); //tototo 

   xml_init(anObj.source(),aTree->Get("source",1)); //tototo 

   xml_init(anObj.biaisCorrige(),aTree->Get("biaisCorrige",1)); //tototo 

   xml_init(anObj.value(),aTree->Get("value",1)); //tototo 
}

std::string  Mangling( cValueAvionJaune *) {return "C92231F1159DA8DEFE3F";};


std::string & cValueXYAvionJaune::unit()
{
   return munit;
}

const std::string & cValueXYAvionJaune::unit()const 
{
   return munit;
}


cTplValGesInit< std::string > & cValueXYAvionJaune::source()
{
   return msource;
}

const cTplValGesInit< std::string > & cValueXYAvionJaune::source()const 
{
   return msource;
}


cTplValGesInit< double > & cValueXYAvionJaune::biaisCorrige()
{
   return mbiaisCorrige;
}

const cTplValGesInit< double > & cValueXYAvionJaune::biaisCorrige()const 
{
   return mbiaisCorrige;
}


double & cValueXYAvionJaune::xvalue()
{
   return mxvalue;
}

const double & cValueXYAvionJaune::xvalue()const 
{
   return mxvalue;
}


double & cValueXYAvionJaune::yvalue()
{
   return myvalue;
}

const double & cValueXYAvionJaune::yvalue()const 
{
   return myvalue;
}

void  BinaryUnDumpFromFile(cValueXYAvionJaune & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.unit(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.source().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.source().ValForcedForUnUmp(),aFp);
        }
        else  anObj.source().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.biaisCorrige().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.biaisCorrige().ValForcedForUnUmp(),aFp);
        }
        else  anObj.biaisCorrige().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.xvalue(),aFp);
    BinaryUnDumpFromFile(anObj.yvalue(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cValueXYAvionJaune & anObj)
{
    BinaryDumpInFile(aFp,anObj.unit());
    BinaryDumpInFile(aFp,anObj.source().IsInit());
    if (anObj.source().IsInit()) BinaryDumpInFile(aFp,anObj.source().Val());
    BinaryDumpInFile(aFp,anObj.biaisCorrige().IsInit());
    if (anObj.biaisCorrige().IsInit()) BinaryDumpInFile(aFp,anObj.biaisCorrige().Val());
    BinaryDumpInFile(aFp,anObj.xvalue());
    BinaryDumpInFile(aFp,anObj.yvalue());
}

cElXMLTree * ToXMLTree(const cValueXYAvionJaune & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ValueXYAvionJaune",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("unit"),anObj.unit())->ReTagThis("unit"));
   if (anObj.source().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("source"),anObj.source().Val())->ReTagThis("source"));
   if (anObj.biaisCorrige().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("biaisCorrige"),anObj.biaisCorrige().Val())->ReTagThis("biaisCorrige"));
   aRes->AddFils(::ToXMLTree(std::string("xvalue"),anObj.xvalue())->ReTagThis("xvalue"));
   aRes->AddFils(::ToXMLTree(std::string("yvalue"),anObj.yvalue())->ReTagThis("yvalue"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cValueXYAvionJaune & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.unit(),aTree->Get("unit",1)); //tototo 

   xml_init(anObj.source(),aTree->Get("source",1)); //tototo 

   xml_init(anObj.biaisCorrige(),aTree->Get("biaisCorrige",1)); //tototo 

   xml_init(anObj.xvalue(),aTree->Get("xvalue",1)); //tototo 

   xml_init(anObj.yvalue(),aTree->Get("yvalue",1)); //tototo 
}

std::string  Mangling( cValueXYAvionJaune *) {return "940FEB2309586589FE3F";};


std::string & cnavigation::systemeGeodesique()
{
   return msystemeGeodesique;
}

const std::string & cnavigation::systemeGeodesique()const 
{
   return msystemeGeodesique;
}


std::string & cnavigation::projection()
{
   return mprojection;
}

const std::string & cnavigation::projection()const 
{
   return mprojection;
}


cPoinAvionJaune & cnavigation::sommet()
{
   return msommet;
}

const cPoinAvionJaune & cnavigation::sommet()const 
{
   return msommet;
}


cValueAvionJaune & cnavigation::altitude()
{
   return maltitude;
}

const cValueAvionJaune & cnavigation::altitude()const 
{
   return maltitude;
}


cValueAvionJaune & cnavigation::capAvion()
{
   return mcapAvion;
}

const cValueAvionJaune & cnavigation::capAvion()const 
{
   return mcapAvion;
}


cValueAvionJaune & cnavigation::roulisAvion()
{
   return mroulisAvion;
}

const cValueAvionJaune & cnavigation::roulisAvion()const 
{
   return mroulisAvion;
}


cValueAvionJaune & cnavigation::tangageAvion()
{
   return mtangageAvion;
}

const cValueAvionJaune & cnavigation::tangageAvion()const 
{
   return mtangageAvion;
}


cValueAvionJaune & cnavigation::tempsAutopilote()
{
   return mtempsAutopilote;
}

const cValueAvionJaune & cnavigation::tempsAutopilote()const 
{
   return mtempsAutopilote;
}

void  BinaryUnDumpFromFile(cnavigation & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.systemeGeodesique(),aFp);
    BinaryUnDumpFromFile(anObj.projection(),aFp);
    BinaryUnDumpFromFile(anObj.sommet(),aFp);
    BinaryUnDumpFromFile(anObj.altitude(),aFp);
    BinaryUnDumpFromFile(anObj.capAvion(),aFp);
    BinaryUnDumpFromFile(anObj.roulisAvion(),aFp);
    BinaryUnDumpFromFile(anObj.tangageAvion(),aFp);
    BinaryUnDumpFromFile(anObj.tempsAutopilote(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cnavigation & anObj)
{
    BinaryDumpInFile(aFp,anObj.systemeGeodesique());
    BinaryDumpInFile(aFp,anObj.projection());
    BinaryDumpInFile(aFp,anObj.sommet());
    BinaryDumpInFile(aFp,anObj.altitude());
    BinaryDumpInFile(aFp,anObj.capAvion());
    BinaryDumpInFile(aFp,anObj.roulisAvion());
    BinaryDumpInFile(aFp,anObj.tangageAvion());
    BinaryDumpInFile(aFp,anObj.tempsAutopilote());
}

cElXMLTree * ToXMLTree(const cnavigation & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"navigation",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("systemeGeodesique"),anObj.systemeGeodesique())->ReTagThis("systemeGeodesique"));
   aRes->AddFils(::ToXMLTree(std::string("projection"),anObj.projection())->ReTagThis("projection"));
   aRes->AddFils(ToXMLTree(anObj.sommet())->ReTagThis("sommet"));
   aRes->AddFils(ToXMLTree(anObj.altitude())->ReTagThis("altitude"));
   aRes->AddFils(ToXMLTree(anObj.capAvion())->ReTagThis("capAvion"));
   aRes->AddFils(ToXMLTree(anObj.roulisAvion())->ReTagThis("roulisAvion"));
   aRes->AddFils(ToXMLTree(anObj.tangageAvion())->ReTagThis("tangageAvion"));
   aRes->AddFils(ToXMLTree(anObj.tempsAutopilote())->ReTagThis("tempsAutopilote"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cnavigation & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.systemeGeodesique(),aTree->Get("systemeGeodesique",1)); //tototo 

   xml_init(anObj.projection(),aTree->Get("projection",1)); //tototo 

   xml_init(anObj.sommet(),aTree->Get("sommet",1)); //tototo 

   xml_init(anObj.altitude(),aTree->Get("altitude",1)); //tototo 

   xml_init(anObj.capAvion(),aTree->Get("capAvion",1)); //tototo 

   xml_init(anObj.roulisAvion(),aTree->Get("roulisAvion",1)); //tototo 

   xml_init(anObj.tangageAvion(),aTree->Get("tangageAvion",1)); //tototo 

   xml_init(anObj.tempsAutopilote(),aTree->Get("tempsAutopilote",1)); //tototo 
}

std::string  Mangling( cnavigation *) {return "474656894BEE8FA0FE3F";};


cValueAvionJaune & cimage::focale()
{
   return mfocale;
}

const cValueAvionJaune & cimage::focale()const 
{
   return mfocale;
}


cValueAvionJaune & cimage::ouverture()
{
   return mouverture;
}

const cValueAvionJaune & cimage::ouverture()const 
{
   return mouverture;
}


cValueAvionJaune & cimage::tempsDExposition()
{
   return mtempsDExposition;
}

const cValueAvionJaune & cimage::tempsDExposition()const 
{
   return mtempsDExposition;
}

void  BinaryUnDumpFromFile(cimage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.focale(),aFp);
    BinaryUnDumpFromFile(anObj.ouverture(),aFp);
    BinaryUnDumpFromFile(anObj.tempsDExposition(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cimage & anObj)
{
    BinaryDumpInFile(aFp,anObj.focale());
    BinaryDumpInFile(aFp,anObj.ouverture());
    BinaryDumpInFile(aFp,anObj.tempsDExposition());
}

cElXMLTree * ToXMLTree(const cimage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"image",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.focale())->ReTagThis("focale"));
   aRes->AddFils(ToXMLTree(anObj.ouverture())->ReTagThis("ouverture"));
   aRes->AddFils(ToXMLTree(anObj.tempsDExposition())->ReTagThis("tempsDExposition"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cimage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.focale(),aTree->Get("focale",1)); //tototo 

   xml_init(anObj.ouverture(),aTree->Get("ouverture",1)); //tototo 

   xml_init(anObj.tempsDExposition(),aTree->Get("tempsDExposition",1)); //tototo 
}

std::string  Mangling( cimage *) {return "6C74FB5580BD46DCFBBF";};


cValueAvionJaune & cgeometrieAPriori::hauteur()
{
   return mhauteur;
}

const cValueAvionJaune & cgeometrieAPriori::hauteur()const 
{
   return mhauteur;
}


cValueXYAvionJaune & cgeometrieAPriori::resolution()
{
   return mresolution;
}

const cValueXYAvionJaune & cgeometrieAPriori::resolution()const 
{
   return mresolution;
}


cValueAvionJaune & cgeometrieAPriori::orientationAPN()
{
   return morientationAPN;
}

const cValueAvionJaune & cgeometrieAPriori::orientationAPN()const 
{
   return morientationAPN;
}


std::vector< cPoinAvionJaune > & cgeometrieAPriori::coin()
{
   return mcoin;
}

const std::vector< cPoinAvionJaune > & cgeometrieAPriori::coin()const 
{
   return mcoin;
}

void  BinaryUnDumpFromFile(cgeometrieAPriori & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.hauteur(),aFp);
    BinaryUnDumpFromFile(anObj.resolution(),aFp);
    BinaryUnDumpFromFile(anObj.orientationAPN(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cPoinAvionJaune aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.coin().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cgeometrieAPriori & anObj)
{
    BinaryDumpInFile(aFp,anObj.hauteur());
    BinaryDumpInFile(aFp,anObj.resolution());
    BinaryDumpInFile(aFp,anObj.orientationAPN());
    BinaryDumpInFile(aFp,(int)anObj.coin().size());
    for(  std::vector< cPoinAvionJaune >::const_iterator iT=anObj.coin().begin();
         iT!=anObj.coin().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cgeometrieAPriori & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"geometrieAPriori",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.hauteur())->ReTagThis("hauteur"));
   aRes->AddFils(ToXMLTree(anObj.resolution())->ReTagThis("resolution"));
   aRes->AddFils(ToXMLTree(anObj.orientationAPN())->ReTagThis("orientationAPN"));
  for
  (       std::vector< cPoinAvionJaune >::const_iterator it=anObj.coin().begin();
      it !=anObj.coin().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("coin"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cgeometrieAPriori & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.hauteur(),aTree->Get("hauteur",1)); //tototo 

   xml_init(anObj.resolution(),aTree->Get("resolution",1)); //tototo 

   xml_init(anObj.orientationAPN(),aTree->Get("orientationAPN",1)); //tototo 

   xml_init(anObj.coin(),aTree->GetAll("coin",false,1));
}

std::string  Mangling( cgeometrieAPriori *) {return "BFB660A494D21BF6FC3F";};


std::string & cAvionJauneDocument::numeroImage()
{
   return mnumeroImage;
}

const std::string & cAvionJauneDocument::numeroImage()const 
{
   return mnumeroImage;
}


std::string & cAvionJauneDocument::systemeGeodesique()
{
   return navigation().systemeGeodesique();
}

const std::string & cAvionJauneDocument::systemeGeodesique()const 
{
   return navigation().systemeGeodesique();
}


std::string & cAvionJauneDocument::projection()
{
   return navigation().projection();
}

const std::string & cAvionJauneDocument::projection()const 
{
   return navigation().projection();
}


cPoinAvionJaune & cAvionJauneDocument::sommet()
{
   return navigation().sommet();
}

const cPoinAvionJaune & cAvionJauneDocument::sommet()const 
{
   return navigation().sommet();
}


cValueAvionJaune & cAvionJauneDocument::altitude()
{
   return navigation().altitude();
}

const cValueAvionJaune & cAvionJauneDocument::altitude()const 
{
   return navigation().altitude();
}


cValueAvionJaune & cAvionJauneDocument::capAvion()
{
   return navigation().capAvion();
}

const cValueAvionJaune & cAvionJauneDocument::capAvion()const 
{
   return navigation().capAvion();
}


cValueAvionJaune & cAvionJauneDocument::roulisAvion()
{
   return navigation().roulisAvion();
}

const cValueAvionJaune & cAvionJauneDocument::roulisAvion()const 
{
   return navigation().roulisAvion();
}


cValueAvionJaune & cAvionJauneDocument::tangageAvion()
{
   return navigation().tangageAvion();
}

const cValueAvionJaune & cAvionJauneDocument::tangageAvion()const 
{
   return navigation().tangageAvion();
}


cValueAvionJaune & cAvionJauneDocument::tempsAutopilote()
{
   return navigation().tempsAutopilote();
}

const cValueAvionJaune & cAvionJauneDocument::tempsAutopilote()const 
{
   return navigation().tempsAutopilote();
}


cnavigation & cAvionJauneDocument::navigation()
{
   return mnavigation;
}

const cnavigation & cAvionJauneDocument::navigation()const 
{
   return mnavigation;
}


cValueAvionJaune & cAvionJauneDocument::focale()
{
   return image().focale();
}

const cValueAvionJaune & cAvionJauneDocument::focale()const 
{
   return image().focale();
}


cValueAvionJaune & cAvionJauneDocument::ouverture()
{
   return image().ouverture();
}

const cValueAvionJaune & cAvionJauneDocument::ouverture()const 
{
   return image().ouverture();
}


cValueAvionJaune & cAvionJauneDocument::tempsDExposition()
{
   return image().tempsDExposition();
}

const cValueAvionJaune & cAvionJauneDocument::tempsDExposition()const 
{
   return image().tempsDExposition();
}


cimage & cAvionJauneDocument::image()
{
   return mimage;
}

const cimage & cAvionJauneDocument::image()const 
{
   return mimage;
}


cValueAvionJaune & cAvionJauneDocument::hauteur()
{
   return geometrieAPriori().hauteur();
}

const cValueAvionJaune & cAvionJauneDocument::hauteur()const 
{
   return geometrieAPriori().hauteur();
}


cValueXYAvionJaune & cAvionJauneDocument::resolution()
{
   return geometrieAPriori().resolution();
}

const cValueXYAvionJaune & cAvionJauneDocument::resolution()const 
{
   return geometrieAPriori().resolution();
}


cValueAvionJaune & cAvionJauneDocument::orientationAPN()
{
   return geometrieAPriori().orientationAPN();
}

const cValueAvionJaune & cAvionJauneDocument::orientationAPN()const 
{
   return geometrieAPriori().orientationAPN();
}


std::vector< cPoinAvionJaune > & cAvionJauneDocument::coin()
{
   return geometrieAPriori().coin();
}

const std::vector< cPoinAvionJaune > & cAvionJauneDocument::coin()const 
{
   return geometrieAPriori().coin();
}


cgeometrieAPriori & cAvionJauneDocument::geometrieAPriori()
{
   return mgeometrieAPriori;
}

const cgeometrieAPriori & cAvionJauneDocument::geometrieAPriori()const 
{
   return mgeometrieAPriori;
}

void  BinaryUnDumpFromFile(cAvionJauneDocument & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.numeroImage(),aFp);
    BinaryUnDumpFromFile(anObj.navigation(),aFp);
    BinaryUnDumpFromFile(anObj.image(),aFp);
    BinaryUnDumpFromFile(anObj.geometrieAPriori(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cAvionJauneDocument & anObj)
{
    BinaryDumpInFile(aFp,anObj.numeroImage());
    BinaryDumpInFile(aFp,anObj.navigation());
    BinaryDumpInFile(aFp,anObj.image());
    BinaryDumpInFile(aFp,anObj.geometrieAPriori());
}

cElXMLTree * ToXMLTree(const cAvionJauneDocument & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"AvionJauneDocument",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("numeroImage"),anObj.numeroImage())->ReTagThis("numeroImage"));
   aRes->AddFils(ToXMLTree(anObj.navigation())->ReTagThis("navigation"));
   aRes->AddFils(ToXMLTree(anObj.image())->ReTagThis("image"));
   aRes->AddFils(ToXMLTree(anObj.geometrieAPriori())->ReTagThis("geometrieAPriori"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cAvionJauneDocument & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.numeroImage(),aTree->Get("numeroImage",1)); //tototo 

   xml_init(anObj.navigation(),aTree->Get("navigation",1)); //tototo 

   xml_init(anObj.image(),aTree->Get("image",1)); //tototo 

   xml_init(anObj.geometrieAPriori(),aTree->Get("geometrieAPriori",1)); //tototo 
}

std::string  Mangling( cAvionJauneDocument *) {return "96022D9D95D8C3AAFD3F";};


cTplValGesInit< bool > & cTrAJ2_GenerateOrient::Teta1FromCap()
{
   return mTeta1FromCap;
}

const cTplValGesInit< bool > & cTrAJ2_GenerateOrient::Teta1FromCap()const 
{
   return mTeta1FromCap;
}


cTplValGesInit< double > & cTrAJ2_GenerateOrient::CorrecDelayGps()
{
   return mCorrecDelayGps;
}

const cTplValGesInit< double > & cTrAJ2_GenerateOrient::CorrecDelayGps()const 
{
   return mCorrecDelayGps;
}


cTplValGesInit< bool > & cTrAJ2_GenerateOrient::ModeMatrix()
{
   return mModeMatrix;
}

const cTplValGesInit< bool > & cTrAJ2_GenerateOrient::ModeMatrix()const 
{
   return mModeMatrix;
}


std::list< std::string > & cTrAJ2_GenerateOrient::KeyName()
{
   return mKeyName;
}

const std::list< std::string > & cTrAJ2_GenerateOrient::KeyName()const 
{
   return mKeyName;
}


cSystemeCoord & cTrAJ2_GenerateOrient::SysCible()
{
   return mSysCible;
}

const cSystemeCoord & cTrAJ2_GenerateOrient::SysCible()const 
{
   return mSysCible;
}


std::string & cTrAJ2_GenerateOrient::NameCalib()
{
   return mNameCalib;
}

const std::string & cTrAJ2_GenerateOrient::NameCalib()const 
{
   return mNameCalib;
}


double & cTrAJ2_GenerateOrient::AltiSol()
{
   return mAltiSol;
}

const double & cTrAJ2_GenerateOrient::AltiSol()const 
{
   return mAltiSol;
}

void  BinaryUnDumpFromFile(cTrAJ2_GenerateOrient & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Teta1FromCap().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Teta1FromCap().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Teta1FromCap().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.CorrecDelayGps().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.CorrecDelayGps().ValForcedForUnUmp(),aFp);
        }
        else  anObj.CorrecDelayGps().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ModeMatrix().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ModeMatrix().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ModeMatrix().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeyName().push_back(aVal);
        }
  } ;
    BinaryUnDumpFromFile(anObj.SysCible(),aFp);
    BinaryUnDumpFromFile(anObj.NameCalib(),aFp);
    BinaryUnDumpFromFile(anObj.AltiSol(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_GenerateOrient & anObj)
{
    BinaryDumpInFile(aFp,anObj.Teta1FromCap().IsInit());
    if (anObj.Teta1FromCap().IsInit()) BinaryDumpInFile(aFp,anObj.Teta1FromCap().Val());
    BinaryDumpInFile(aFp,anObj.CorrecDelayGps().IsInit());
    if (anObj.CorrecDelayGps().IsInit()) BinaryDumpInFile(aFp,anObj.CorrecDelayGps().Val());
    BinaryDumpInFile(aFp,anObj.ModeMatrix().IsInit());
    if (anObj.ModeMatrix().IsInit()) BinaryDumpInFile(aFp,anObj.ModeMatrix().Val());
    BinaryDumpInFile(aFp,(int)anObj.KeyName().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeyName().begin();
         iT!=anObj.KeyName().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.SysCible());
    BinaryDumpInFile(aFp,anObj.NameCalib());
    BinaryDumpInFile(aFp,anObj.AltiSol());
}

cElXMLTree * ToXMLTree(const cTrAJ2_GenerateOrient & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_GenerateOrient",eXMLBranche);
   if (anObj.Teta1FromCap().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Teta1FromCap"),anObj.Teta1FromCap().Val())->ReTagThis("Teta1FromCap"));
   if (anObj.CorrecDelayGps().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("CorrecDelayGps"),anObj.CorrecDelayGps().Val())->ReTagThis("CorrecDelayGps"));
   if (anObj.ModeMatrix().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ModeMatrix"),anObj.ModeMatrix().Val())->ReTagThis("ModeMatrix"));
  for
  (       std::list< std::string >::const_iterator it=anObj.KeyName().begin();
      it !=anObj.KeyName().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeyName"),(*it))->ReTagThis("KeyName"));
   aRes->AddFils(ToXMLTree(anObj.SysCible())->ReTagThis("SysCible"));
   aRes->AddFils(::ToXMLTree(std::string("NameCalib"),anObj.NameCalib())->ReTagThis("NameCalib"));
   aRes->AddFils(::ToXMLTree(std::string("AltiSol"),anObj.AltiSol())->ReTagThis("AltiSol"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_GenerateOrient & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Teta1FromCap(),aTree->Get("Teta1FromCap",1),bool(false)); //tototo 

   xml_init(anObj.CorrecDelayGps(),aTree->Get("CorrecDelayGps",1)); //tototo 

   xml_init(anObj.ModeMatrix(),aTree->Get("ModeMatrix",1),bool(false)); //tototo 

   xml_init(anObj.KeyName(),aTree->GetAll("KeyName",false,1));

   xml_init(anObj.SysCible(),aTree->Get("SysCible",1)); //tototo 

   xml_init(anObj.NameCalib(),aTree->Get("NameCalib",1)); //tototo 

   xml_init(anObj.AltiSol(),aTree->Get("AltiSol",1)); //tototo 
}

std::string  Mangling( cTrAJ2_GenerateOrient *) {return "D2C94581C21B4AAEFE3F";};


double & cTrAJ2_ModeliseVitesse::DeltaTimeMax()
{
   return mDeltaTimeMax;
}

const double & cTrAJ2_ModeliseVitesse::DeltaTimeMax()const 
{
   return mDeltaTimeMax;
}

void  BinaryUnDumpFromFile(cTrAJ2_ModeliseVitesse & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.DeltaTimeMax(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_ModeliseVitesse & anObj)
{
    BinaryDumpInFile(aFp,anObj.DeltaTimeMax());
}

cElXMLTree * ToXMLTree(const cTrAJ2_ModeliseVitesse & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_ModeliseVitesse",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("DeltaTimeMax"),anObj.DeltaTimeMax())->ReTagThis("DeltaTimeMax"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_ModeliseVitesse & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DeltaTimeMax(),aTree->Get("DeltaTimeMax",1)); //tototo 
}

std::string  Mangling( cTrAJ2_ModeliseVitesse *) {return "362FD3F11CC7BDC9FDBF";};


cTplValGesInit< eConventionsOrientation > & cTrAJ2_SectionImages::ConvOrCam()
{
   return mConvOrCam;
}

const cTplValGesInit< eConventionsOrientation > & cTrAJ2_SectionImages::ConvOrCam()const 
{
   return mConvOrCam;
}


cRotationVect & cTrAJ2_SectionImages::OrientationCamera()
{
   return mOrientationCamera;
}

const cRotationVect & cTrAJ2_SectionImages::OrientationCamera()const 
{
   return mOrientationCamera;
}


std::string & cTrAJ2_SectionImages::KeySetIm()
{
   return mKeySetIm;
}

const std::string & cTrAJ2_SectionImages::KeySetIm()const 
{
   return mKeySetIm;
}


std::string & cTrAJ2_SectionImages::Id()
{
   return mId;
}

const std::string & cTrAJ2_SectionImages::Id()const 
{
   return mId;
}

void  BinaryUnDumpFromFile(cTrAJ2_SectionImages & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ConvOrCam().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ConvOrCam().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ConvOrCam().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.OrientationCamera(),aFp);
    BinaryUnDumpFromFile(anObj.KeySetIm(),aFp);
    BinaryUnDumpFromFile(anObj.Id(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_SectionImages & anObj)
{
    BinaryDumpInFile(aFp,anObj.ConvOrCam().IsInit());
    if (anObj.ConvOrCam().IsInit()) BinaryDumpInFile(aFp,anObj.ConvOrCam().Val());
    BinaryDumpInFile(aFp,anObj.OrientationCamera());
    BinaryDumpInFile(aFp,anObj.KeySetIm());
    BinaryDumpInFile(aFp,anObj.Id());
}

cElXMLTree * ToXMLTree(const cTrAJ2_SectionImages & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_SectionImages",eXMLBranche);
   if (anObj.ConvOrCam().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ConvOrCam"),anObj.ConvOrCam().Val())->ReTagThis("ConvOrCam"));
   aRes->AddFils(ToXMLTree(anObj.OrientationCamera())->ReTagThis("OrientationCamera"));
   aRes->AddFils(::ToXMLTree(std::string("KeySetIm"),anObj.KeySetIm())->ReTagThis("KeySetIm"));
   aRes->AddFils(::ToXMLTree(std::string("Id"),anObj.Id())->ReTagThis("Id"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_SectionImages & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ConvOrCam(),aTree->Get("ConvOrCam",1),eConventionsOrientation(eConvOriLib)); //tototo 

   xml_init(anObj.OrientationCamera(),aTree->Get("OrientationCamera",1)); //tototo 

   xml_init(anObj.KeySetIm(),aTree->Get("KeySetIm",1)); //tototo 

   xml_init(anObj.Id(),aTree->Get("Id",1)); //tototo 
}

std::string  Mangling( cTrAJ2_SectionImages *) {return "38922D719AC40CB8FD3F";};


std::string & cGenerateTabExemple::Name()
{
   return mName;
}

const std::string & cGenerateTabExemple::Name()const 
{
   return mName;
}


Pt3di & cGenerateTabExemple::Nb()
{
   return mNb;
}

const Pt3di & cGenerateTabExemple::Nb()const 
{
   return mNb;
}


cTplValGesInit< double > & cGenerateTabExemple::ZMin()
{
   return mZMin;
}

const cTplValGesInit< double > & cGenerateTabExemple::ZMin()const 
{
   return mZMin;
}


cTplValGesInit< double > & cGenerateTabExemple::ZMax()
{
   return mZMax;
}

const cTplValGesInit< double > & cGenerateTabExemple::ZMax()const 
{
   return mZMax;
}


cTplValGesInit< double > & cGenerateTabExemple::DIntervZ()
{
   return mDIntervZ;
}

const cTplValGesInit< double > & cGenerateTabExemple::DIntervZ()const 
{
   return mDIntervZ;
}


cTplValGesInit< bool > & cGenerateTabExemple::RandomXY()
{
   return mRandomXY;
}

const cTplValGesInit< bool > & cGenerateTabExemple::RandomXY()const 
{
   return mRandomXY;
}


cTplValGesInit< bool > & cGenerateTabExemple::RandomZ()
{
   return mRandomZ;
}

const cTplValGesInit< bool > & cGenerateTabExemple::RandomZ()const 
{
   return mRandomZ;
}

void  BinaryUnDumpFromFile(cGenerateTabExemple & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Name(),aFp);
    BinaryUnDumpFromFile(anObj.Nb(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ZMin().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ZMin().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ZMin().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ZMax().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ZMax().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ZMax().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DIntervZ().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DIntervZ().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DIntervZ().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RandomXY().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RandomXY().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RandomXY().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RandomZ().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RandomZ().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RandomZ().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cGenerateTabExemple & anObj)
{
    BinaryDumpInFile(aFp,anObj.Name());
    BinaryDumpInFile(aFp,anObj.Nb());
    BinaryDumpInFile(aFp,anObj.ZMin().IsInit());
    if (anObj.ZMin().IsInit()) BinaryDumpInFile(aFp,anObj.ZMin().Val());
    BinaryDumpInFile(aFp,anObj.ZMax().IsInit());
    if (anObj.ZMax().IsInit()) BinaryDumpInFile(aFp,anObj.ZMax().Val());
    BinaryDumpInFile(aFp,anObj.DIntervZ().IsInit());
    if (anObj.DIntervZ().IsInit()) BinaryDumpInFile(aFp,anObj.DIntervZ().Val());
    BinaryDumpInFile(aFp,anObj.RandomXY().IsInit());
    if (anObj.RandomXY().IsInit()) BinaryDumpInFile(aFp,anObj.RandomXY().Val());
    BinaryDumpInFile(aFp,anObj.RandomZ().IsInit());
    if (anObj.RandomZ().IsInit()) BinaryDumpInFile(aFp,anObj.RandomZ().Val());
}

cElXMLTree * ToXMLTree(const cGenerateTabExemple & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"GenerateTabExemple",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Name"),anObj.Name())->ReTagThis("Name"));
   aRes->AddFils(::ToXMLTree(std::string("Nb"),anObj.Nb())->ReTagThis("Nb"));
   if (anObj.ZMin().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ZMin"),anObj.ZMin().Val())->ReTagThis("ZMin"));
   if (anObj.ZMax().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ZMax"),anObj.ZMax().Val())->ReTagThis("ZMax"));
   if (anObj.DIntervZ().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DIntervZ"),anObj.DIntervZ().Val())->ReTagThis("DIntervZ"));
   if (anObj.RandomXY().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RandomXY"),anObj.RandomXY().Val())->ReTagThis("RandomXY"));
   if (anObj.RandomZ().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RandomZ"),anObj.RandomZ().Val())->ReTagThis("RandomZ"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cGenerateTabExemple & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Name(),aTree->Get("Name",1)); //tototo 

   xml_init(anObj.Nb(),aTree->Get("Nb",1)); //tototo 

   xml_init(anObj.ZMin(),aTree->Get("ZMin",1)); //tototo 

   xml_init(anObj.ZMax(),aTree->Get("ZMax",1)); //tototo 

   xml_init(anObj.DIntervZ(),aTree->Get("DIntervZ",1),double(0.0)); //tototo 

   xml_init(anObj.RandomXY(),aTree->Get("RandomXY",1),bool(true)); //tototo 

   xml_init(anObj.RandomZ(),aTree->Get("RandomZ",1),bool(true)); //tototo 
}

std::string  Mangling( cGenerateTabExemple *) {return "682DF34E0F989D89FA3F";};


cTplValGesInit< int > & cFullDate::KYear()
{
   return mKYear;
}

const cTplValGesInit< int > & cFullDate::KYear()const 
{
   return mKYear;
}


cTplValGesInit< int > & cFullDate::DefYear()
{
   return mDefYear;
}

const cTplValGesInit< int > & cFullDate::DefYear()const 
{
   return mDefYear;
}


cTplValGesInit< int > & cFullDate::KMonth()
{
   return mKMonth;
}

const cTplValGesInit< int > & cFullDate::KMonth()const 
{
   return mKMonth;
}


cTplValGesInit< int > & cFullDate::DefMonth()
{
   return mDefMonth;
}

const cTplValGesInit< int > & cFullDate::DefMonth()const 
{
   return mDefMonth;
}


cTplValGesInit< int > & cFullDate::KDay()
{
   return mKDay;
}

const cTplValGesInit< int > & cFullDate::KDay()const 
{
   return mKDay;
}


cTplValGesInit< int > & cFullDate::DefDay()
{
   return mDefDay;
}

const cTplValGesInit< int > & cFullDate::DefDay()const 
{
   return mDefDay;
}


int & cFullDate::KHour()
{
   return mKHour;
}

const int & cFullDate::KHour()const 
{
   return mKHour;
}


int & cFullDate::KMin()
{
   return mKMin;
}

const int & cFullDate::KMin()const 
{
   return mKMin;
}


int & cFullDate::KSec()
{
   return mKSec;
}

const int & cFullDate::KSec()const 
{
   return mKSec;
}


cTplValGesInit< double > & cFullDate::DivSec()
{
   return mDivSec;
}

const cTplValGesInit< double > & cFullDate::DivSec()const 
{
   return mDivSec;
}


cTplValGesInit< int > & cFullDate::KMiliSec()
{
   return mKMiliSec;
}

const cTplValGesInit< int > & cFullDate::KMiliSec()const 
{
   return mKMiliSec;
}


cTplValGesInit< double > & cFullDate::DivMiliSec()
{
   return mDivMiliSec;
}

const cTplValGesInit< double > & cFullDate::DivMiliSec()const 
{
   return mDivMiliSec;
}

void  BinaryUnDumpFromFile(cFullDate & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KYear().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KYear().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KYear().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DefYear().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DefYear().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DefYear().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KMonth().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KMonth().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KMonth().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DefMonth().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DefMonth().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DefMonth().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KDay().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KDay().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KDay().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DefDay().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DefDay().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DefDay().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KHour(),aFp);
    BinaryUnDumpFromFile(anObj.KMin(),aFp);
    BinaryUnDumpFromFile(anObj.KSec(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DivSec().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DivSec().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DivSec().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KMiliSec().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KMiliSec().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KMiliSec().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DivMiliSec().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DivMiliSec().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DivMiliSec().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFullDate & anObj)
{
    BinaryDumpInFile(aFp,anObj.KYear().IsInit());
    if (anObj.KYear().IsInit()) BinaryDumpInFile(aFp,anObj.KYear().Val());
    BinaryDumpInFile(aFp,anObj.DefYear().IsInit());
    if (anObj.DefYear().IsInit()) BinaryDumpInFile(aFp,anObj.DefYear().Val());
    BinaryDumpInFile(aFp,anObj.KMonth().IsInit());
    if (anObj.KMonth().IsInit()) BinaryDumpInFile(aFp,anObj.KMonth().Val());
    BinaryDumpInFile(aFp,anObj.DefMonth().IsInit());
    if (anObj.DefMonth().IsInit()) BinaryDumpInFile(aFp,anObj.DefMonth().Val());
    BinaryDumpInFile(aFp,anObj.KDay().IsInit());
    if (anObj.KDay().IsInit()) BinaryDumpInFile(aFp,anObj.KDay().Val());
    BinaryDumpInFile(aFp,anObj.DefDay().IsInit());
    if (anObj.DefDay().IsInit()) BinaryDumpInFile(aFp,anObj.DefDay().Val());
    BinaryDumpInFile(aFp,anObj.KHour());
    BinaryDumpInFile(aFp,anObj.KMin());
    BinaryDumpInFile(aFp,anObj.KSec());
    BinaryDumpInFile(aFp,anObj.DivSec().IsInit());
    if (anObj.DivSec().IsInit()) BinaryDumpInFile(aFp,anObj.DivSec().Val());
    BinaryDumpInFile(aFp,anObj.KMiliSec().IsInit());
    if (anObj.KMiliSec().IsInit()) BinaryDumpInFile(aFp,anObj.KMiliSec().Val());
    BinaryDumpInFile(aFp,anObj.DivMiliSec().IsInit());
    if (anObj.DivMiliSec().IsInit()) BinaryDumpInFile(aFp,anObj.DivMiliSec().Val());
}

cElXMLTree * ToXMLTree(const cFullDate & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"FullDate",eXMLBranche);
   if (anObj.KYear().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KYear"),anObj.KYear().Val())->ReTagThis("KYear"));
   if (anObj.DefYear().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DefYear"),anObj.DefYear().Val())->ReTagThis("DefYear"));
   if (anObj.KMonth().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KMonth"),anObj.KMonth().Val())->ReTagThis("KMonth"));
   if (anObj.DefMonth().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DefMonth"),anObj.DefMonth().Val())->ReTagThis("DefMonth"));
   if (anObj.KDay().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KDay"),anObj.KDay().Val())->ReTagThis("KDay"));
   if (anObj.DefDay().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DefDay"),anObj.DefDay().Val())->ReTagThis("DefDay"));
   aRes->AddFils(::ToXMLTree(std::string("KHour"),anObj.KHour())->ReTagThis("KHour"));
   aRes->AddFils(::ToXMLTree(std::string("KMin"),anObj.KMin())->ReTagThis("KMin"));
   aRes->AddFils(::ToXMLTree(std::string("KSec"),anObj.KSec())->ReTagThis("KSec"));
   if (anObj.DivSec().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DivSec"),anObj.DivSec().Val())->ReTagThis("DivSec"));
   if (anObj.KMiliSec().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KMiliSec"),anObj.KMiliSec().Val())->ReTagThis("KMiliSec"));
   if (anObj.DivMiliSec().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DivMiliSec"),anObj.DivMiliSec().Val())->ReTagThis("DivMiliSec"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFullDate & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KYear(),aTree->Get("KYear",1)); //tototo 

   xml_init(anObj.DefYear(),aTree->Get("DefYear",1),int(2011)); //tototo 

   xml_init(anObj.KMonth(),aTree->Get("KMonth",1)); //tototo 

   xml_init(anObj.DefMonth(),aTree->Get("DefMonth",1),int(1)); //tototo 

   xml_init(anObj.KDay(),aTree->Get("KDay",1)); //tototo 

   xml_init(anObj.DefDay(),aTree->Get("DefDay",1),int(1)); //tototo 

   xml_init(anObj.KHour(),aTree->Get("KHour",1)); //tototo 

   xml_init(anObj.KMin(),aTree->Get("KMin",1)); //tototo 

   xml_init(anObj.KSec(),aTree->Get("KSec",1)); //tototo 

   xml_init(anObj.DivSec(),aTree->Get("DivSec",1),double(1.0)); //tototo 

   xml_init(anObj.KMiliSec(),aTree->Get("KMiliSec",1)); //tototo 

   xml_init(anObj.DivMiliSec(),aTree->Get("DivMiliSec",1),double(1.0)); //tototo 
}

std::string  Mangling( cFullDate *) {return "592CF4A69B387CC5FD3F";};


cTplValGesInit< std::string > & cSectionTime::NoTime()
{
   return mNoTime;
}

const cTplValGesInit< std::string > & cSectionTime::NoTime()const 
{
   return mNoTime;
}


cTplValGesInit< int > & cSectionTime::KTime()
{
   return mKTime;
}

const cTplValGesInit< int > & cSectionTime::KTime()const 
{
   return mKTime;
}


cTplValGesInit< int > & cSectionTime::KYear()
{
   return FullDate().Val().KYear();
}

const cTplValGesInit< int > & cSectionTime::KYear()const 
{
   return FullDate().Val().KYear();
}


cTplValGesInit< int > & cSectionTime::DefYear()
{
   return FullDate().Val().DefYear();
}

const cTplValGesInit< int > & cSectionTime::DefYear()const 
{
   return FullDate().Val().DefYear();
}


cTplValGesInit< int > & cSectionTime::KMonth()
{
   return FullDate().Val().KMonth();
}

const cTplValGesInit< int > & cSectionTime::KMonth()const 
{
   return FullDate().Val().KMonth();
}


cTplValGesInit< int > & cSectionTime::DefMonth()
{
   return FullDate().Val().DefMonth();
}

const cTplValGesInit< int > & cSectionTime::DefMonth()const 
{
   return FullDate().Val().DefMonth();
}


cTplValGesInit< int > & cSectionTime::KDay()
{
   return FullDate().Val().KDay();
}

const cTplValGesInit< int > & cSectionTime::KDay()const 
{
   return FullDate().Val().KDay();
}


cTplValGesInit< int > & cSectionTime::DefDay()
{
   return FullDate().Val().DefDay();
}

const cTplValGesInit< int > & cSectionTime::DefDay()const 
{
   return FullDate().Val().DefDay();
}


int & cSectionTime::KHour()
{
   return FullDate().Val().KHour();
}

const int & cSectionTime::KHour()const 
{
   return FullDate().Val().KHour();
}


int & cSectionTime::KMin()
{
   return FullDate().Val().KMin();
}

const int & cSectionTime::KMin()const 
{
   return FullDate().Val().KMin();
}


int & cSectionTime::KSec()
{
   return FullDate().Val().KSec();
}

const int & cSectionTime::KSec()const 
{
   return FullDate().Val().KSec();
}


cTplValGesInit< double > & cSectionTime::DivSec()
{
   return FullDate().Val().DivSec();
}

const cTplValGesInit< double > & cSectionTime::DivSec()const 
{
   return FullDate().Val().DivSec();
}


cTplValGesInit< int > & cSectionTime::KMiliSec()
{
   return FullDate().Val().KMiliSec();
}

const cTplValGesInit< int > & cSectionTime::KMiliSec()const 
{
   return FullDate().Val().KMiliSec();
}


cTplValGesInit< double > & cSectionTime::DivMiliSec()
{
   return FullDate().Val().DivMiliSec();
}

const cTplValGesInit< double > & cSectionTime::DivMiliSec()const 
{
   return FullDate().Val().DivMiliSec();
}


cTplValGesInit< cFullDate > & cSectionTime::FullDate()
{
   return mFullDate;
}

const cTplValGesInit< cFullDate > & cSectionTime::FullDate()const 
{
   return mFullDate;
}

void  BinaryUnDumpFromFile(cSectionTime & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NoTime().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NoTime().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NoTime().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KTime().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KTime().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KTime().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FullDate().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FullDate().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FullDate().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionTime & anObj)
{
    BinaryDumpInFile(aFp,anObj.NoTime().IsInit());
    if (anObj.NoTime().IsInit()) BinaryDumpInFile(aFp,anObj.NoTime().Val());
    BinaryDumpInFile(aFp,anObj.KTime().IsInit());
    if (anObj.KTime().IsInit()) BinaryDumpInFile(aFp,anObj.KTime().Val());
    BinaryDumpInFile(aFp,anObj.FullDate().IsInit());
    if (anObj.FullDate().IsInit()) BinaryDumpInFile(aFp,anObj.FullDate().Val());
}

cElXMLTree * ToXMLTree(const cSectionTime & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionTime",eXMLBranche);
   if (anObj.NoTime().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NoTime"),anObj.NoTime().Val())->ReTagThis("NoTime"));
   if (anObj.KTime().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KTime"),anObj.KTime().Val())->ReTagThis("KTime"));
   if (anObj.FullDate().IsInit())
      aRes->AddFils(ToXMLTree(anObj.FullDate().Val())->ReTagThis("FullDate"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionTime & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NoTime(),aTree->Get("NoTime",1)); //tototo 

   xml_init(anObj.KTime(),aTree->Get("KTime",1)); //tototo 

   xml_init(anObj.FullDate(),aTree->Get("FullDate",1)); //tototo 
}

std::string  Mangling( cSectionTime *) {return "B06DD15D734939FDFABF";};


eUniteAngulaire & cTrajAngles::Unites()
{
   return mUnites;
}

const eUniteAngulaire & cTrajAngles::Unites()const 
{
   return mUnites;
}


eConventionsOrientation & cTrajAngles::ConvOr()
{
   return mConvOr;
}

const eConventionsOrientation & cTrajAngles::ConvOr()const 
{
   return mConvOr;
}


int & cTrajAngles::KTeta1()
{
   return mKTeta1;
}

const int & cTrajAngles::KTeta1()const 
{
   return mKTeta1;
}


int & cTrajAngles::KTeta2()
{
   return mKTeta2;
}

const int & cTrajAngles::KTeta2()const 
{
   return mKTeta2;
}


int & cTrajAngles::KTeta3()
{
   return mKTeta3;
}

const int & cTrajAngles::KTeta3()const 
{
   return mKTeta3;
}


cTplValGesInit< double > & cTrajAngles::OffsetTeta1()
{
   return mOffsetTeta1;
}

const cTplValGesInit< double > & cTrajAngles::OffsetTeta1()const 
{
   return mOffsetTeta1;
}


cTplValGesInit< double > & cTrajAngles::OffsetTeta2()
{
   return mOffsetTeta2;
}

const cTplValGesInit< double > & cTrajAngles::OffsetTeta2()const 
{
   return mOffsetTeta2;
}


cTplValGesInit< double > & cTrajAngles::OffsetTeta3()
{
   return mOffsetTeta3;
}

const cTplValGesInit< double > & cTrajAngles::OffsetTeta3()const 
{
   return mOffsetTeta3;
}


cTplValGesInit< cRotationVect > & cTrajAngles::RefOrTrajI2C()
{
   return mRefOrTrajI2C;
}

const cTplValGesInit< cRotationVect > & cTrajAngles::RefOrTrajI2C()const 
{
   return mRefOrTrajI2C;
}

void  BinaryUnDumpFromFile(cTrajAngles & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Unites(),aFp);
    BinaryUnDumpFromFile(anObj.ConvOr(),aFp);
    BinaryUnDumpFromFile(anObj.KTeta1(),aFp);
    BinaryUnDumpFromFile(anObj.KTeta2(),aFp);
    BinaryUnDumpFromFile(anObj.KTeta3(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OffsetTeta1().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OffsetTeta1().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OffsetTeta1().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OffsetTeta2().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OffsetTeta2().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OffsetTeta2().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OffsetTeta3().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OffsetTeta3().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OffsetTeta3().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RefOrTrajI2C().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RefOrTrajI2C().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RefOrTrajI2C().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrajAngles & anObj)
{
    BinaryDumpInFile(aFp,anObj.Unites());
    BinaryDumpInFile(aFp,anObj.ConvOr());
    BinaryDumpInFile(aFp,anObj.KTeta1());
    BinaryDumpInFile(aFp,anObj.KTeta2());
    BinaryDumpInFile(aFp,anObj.KTeta3());
    BinaryDumpInFile(aFp,anObj.OffsetTeta1().IsInit());
    if (anObj.OffsetTeta1().IsInit()) BinaryDumpInFile(aFp,anObj.OffsetTeta1().Val());
    BinaryDumpInFile(aFp,anObj.OffsetTeta2().IsInit());
    if (anObj.OffsetTeta2().IsInit()) BinaryDumpInFile(aFp,anObj.OffsetTeta2().Val());
    BinaryDumpInFile(aFp,anObj.OffsetTeta3().IsInit());
    if (anObj.OffsetTeta3().IsInit()) BinaryDumpInFile(aFp,anObj.OffsetTeta3().Val());
    BinaryDumpInFile(aFp,anObj.RefOrTrajI2C().IsInit());
    if (anObj.RefOrTrajI2C().IsInit()) BinaryDumpInFile(aFp,anObj.RefOrTrajI2C().Val());
}

cElXMLTree * ToXMLTree(const cTrajAngles & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrajAngles",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Unites"),anObj.Unites())->ReTagThis("Unites"));
   aRes->AddFils(::ToXMLTree(std::string("ConvOr"),anObj.ConvOr())->ReTagThis("ConvOr"));
   aRes->AddFils(::ToXMLTree(std::string("KTeta1"),anObj.KTeta1())->ReTagThis("KTeta1"));
   aRes->AddFils(::ToXMLTree(std::string("KTeta2"),anObj.KTeta2())->ReTagThis("KTeta2"));
   aRes->AddFils(::ToXMLTree(std::string("KTeta3"),anObj.KTeta3())->ReTagThis("KTeta3"));
   if (anObj.OffsetTeta1().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OffsetTeta1"),anObj.OffsetTeta1().Val())->ReTagThis("OffsetTeta1"));
   if (anObj.OffsetTeta2().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OffsetTeta2"),anObj.OffsetTeta2().Val())->ReTagThis("OffsetTeta2"));
   if (anObj.OffsetTeta3().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OffsetTeta3"),anObj.OffsetTeta3().Val())->ReTagThis("OffsetTeta3"));
   if (anObj.RefOrTrajI2C().IsInit())
      aRes->AddFils(ToXMLTree(anObj.RefOrTrajI2C().Val())->ReTagThis("RefOrTrajI2C"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrajAngles & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Unites(),aTree->Get("Unites",1)); //tototo 

   xml_init(anObj.ConvOr(),aTree->Get("ConvOr",1)); //tototo 

   xml_init(anObj.KTeta1(),aTree->Get("KTeta1",1)); //tototo 

   xml_init(anObj.KTeta2(),aTree->Get("KTeta2",1)); //tototo 

   xml_init(anObj.KTeta3(),aTree->Get("KTeta3",1)); //tototo 

   xml_init(anObj.OffsetTeta1(),aTree->Get("OffsetTeta1",1),double(0)); //tototo 

   xml_init(anObj.OffsetTeta2(),aTree->Get("OffsetTeta2",1),double(0)); //tototo 

   xml_init(anObj.OffsetTeta3(),aTree->Get("OffsetTeta3",1),double(0)); //tototo 

   xml_init(anObj.RefOrTrajI2C(),aTree->Get("RefOrTrajI2C",1)); //tototo 
}

std::string  Mangling( cTrajAngles *) {return "83F1799157BE5F94FE3F";};


int & cGetImInLog::KIm()
{
   return mKIm;
}

const int & cGetImInLog::KIm()const 
{
   return mKIm;
}

void  BinaryUnDumpFromFile(cGetImInLog & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.KIm(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cGetImInLog & anObj)
{
    BinaryDumpInFile(aFp,anObj.KIm());
}

cElXMLTree * ToXMLTree(const cGetImInLog & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"GetImInLog",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("KIm"),anObj.KIm())->ReTagThis("KIm"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cGetImInLog & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KIm(),aTree->Get("KIm",1)); //tototo 
}

std::string  Mangling( cGetImInLog *) {return "38467EE0DC0A7187FF3F";};


std::list< cGenerateTabExemple > & cTrAJ2_SectionLog::GenerateTabExemple()
{
   return mGenerateTabExemple;
}

const std::list< cGenerateTabExemple > & cTrAJ2_SectionLog::GenerateTabExemple()const 
{
   return mGenerateTabExemple;
}


cTplValGesInit< double > & cTrAJ2_SectionLog::TimeMin()
{
   return mTimeMin;
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::TimeMin()const 
{
   return mTimeMin;
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KLogT0()
{
   return mKLogT0;
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KLogT0()const 
{
   return mKLogT0;
}


std::string & cTrAJ2_SectionLog::File()
{
   return mFile;
}

const std::string & cTrAJ2_SectionLog::File()const 
{
   return mFile;
}


std::string & cTrAJ2_SectionLog::Autom()
{
   return mAutom;
}

const std::string & cTrAJ2_SectionLog::Autom()const 
{
   return mAutom;
}


cSystemeCoord & cTrAJ2_SectionLog::SysCoord()
{
   return mSysCoord;
}

const cSystemeCoord & cTrAJ2_SectionLog::SysCoord()const 
{
   return mSysCoord;
}


std::string & cTrAJ2_SectionLog::Id()
{
   return mId;
}

const std::string & cTrAJ2_SectionLog::Id()const 
{
   return mId;
}


cTplValGesInit< std::string > & cTrAJ2_SectionLog::NoTime()
{
   return SectionTime().NoTime();
}

const cTplValGesInit< std::string > & cTrAJ2_SectionLog::NoTime()const 
{
   return SectionTime().NoTime();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KTime()
{
   return SectionTime().KTime();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KTime()const 
{
   return SectionTime().KTime();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KYear()
{
   return SectionTime().FullDate().Val().KYear();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KYear()const 
{
   return SectionTime().FullDate().Val().KYear();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::DefYear()
{
   return SectionTime().FullDate().Val().DefYear();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::DefYear()const 
{
   return SectionTime().FullDate().Val().DefYear();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KMonth()
{
   return SectionTime().FullDate().Val().KMonth();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KMonth()const 
{
   return SectionTime().FullDate().Val().KMonth();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::DefMonth()
{
   return SectionTime().FullDate().Val().DefMonth();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::DefMonth()const 
{
   return SectionTime().FullDate().Val().DefMonth();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KDay()
{
   return SectionTime().FullDate().Val().KDay();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KDay()const 
{
   return SectionTime().FullDate().Val().KDay();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::DefDay()
{
   return SectionTime().FullDate().Val().DefDay();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::DefDay()const 
{
   return SectionTime().FullDate().Val().DefDay();
}


int & cTrAJ2_SectionLog::KHour()
{
   return SectionTime().FullDate().Val().KHour();
}

const int & cTrAJ2_SectionLog::KHour()const 
{
   return SectionTime().FullDate().Val().KHour();
}


int & cTrAJ2_SectionLog::KMin()
{
   return SectionTime().FullDate().Val().KMin();
}

const int & cTrAJ2_SectionLog::KMin()const 
{
   return SectionTime().FullDate().Val().KMin();
}


int & cTrAJ2_SectionLog::KSec()
{
   return SectionTime().FullDate().Val().KSec();
}

const int & cTrAJ2_SectionLog::KSec()const 
{
   return SectionTime().FullDate().Val().KSec();
}


cTplValGesInit< double > & cTrAJ2_SectionLog::DivSec()
{
   return SectionTime().FullDate().Val().DivSec();
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::DivSec()const 
{
   return SectionTime().FullDate().Val().DivSec();
}


cTplValGesInit< int > & cTrAJ2_SectionLog::KMiliSec()
{
   return SectionTime().FullDate().Val().KMiliSec();
}

const cTplValGesInit< int > & cTrAJ2_SectionLog::KMiliSec()const 
{
   return SectionTime().FullDate().Val().KMiliSec();
}


cTplValGesInit< double > & cTrAJ2_SectionLog::DivMiliSec()
{
   return SectionTime().FullDate().Val().DivMiliSec();
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::DivMiliSec()const 
{
   return SectionTime().FullDate().Val().DivMiliSec();
}


cTplValGesInit< cFullDate > & cTrAJ2_SectionLog::FullDate()
{
   return SectionTime().FullDate();
}

const cTplValGesInit< cFullDate > & cTrAJ2_SectionLog::FullDate()const 
{
   return SectionTime().FullDate();
}


cSectionTime & cTrAJ2_SectionLog::SectionTime()
{
   return mSectionTime;
}

const cSectionTime & cTrAJ2_SectionLog::SectionTime()const 
{
   return mSectionTime;
}


int & cTrAJ2_SectionLog::KCoord1()
{
   return mKCoord1;
}

const int & cTrAJ2_SectionLog::KCoord1()const 
{
   return mKCoord1;
}


cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord1()
{
   return mDivCoord1;
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord1()const 
{
   return mDivCoord1;
}


int & cTrAJ2_SectionLog::KCoord2()
{
   return mKCoord2;
}

const int & cTrAJ2_SectionLog::KCoord2()const 
{
   return mKCoord2;
}


cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord2()
{
   return mDivCoord2;
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord2()const 
{
   return mDivCoord2;
}


int & cTrAJ2_SectionLog::KCoord3()
{
   return mKCoord3;
}

const int & cTrAJ2_SectionLog::KCoord3()const 
{
   return mKCoord3;
}


cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord3()
{
   return mDivCoord3;
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::DivCoord3()const 
{
   return mDivCoord3;
}


std::vector< eUniteAngulaire > & cTrAJ2_SectionLog::UnitesCoord()
{
   return mUnitesCoord;
}

const std::vector< eUniteAngulaire > & cTrAJ2_SectionLog::UnitesCoord()const 
{
   return mUnitesCoord;
}


eUniteAngulaire & cTrAJ2_SectionLog::Unites()
{
   return TrajAngles().Val().Unites();
}

const eUniteAngulaire & cTrAJ2_SectionLog::Unites()const 
{
   return TrajAngles().Val().Unites();
}


eConventionsOrientation & cTrAJ2_SectionLog::ConvOr()
{
   return TrajAngles().Val().ConvOr();
}

const eConventionsOrientation & cTrAJ2_SectionLog::ConvOr()const 
{
   return TrajAngles().Val().ConvOr();
}


int & cTrAJ2_SectionLog::KTeta1()
{
   return TrajAngles().Val().KTeta1();
}

const int & cTrAJ2_SectionLog::KTeta1()const 
{
   return TrajAngles().Val().KTeta1();
}


int & cTrAJ2_SectionLog::KTeta2()
{
   return TrajAngles().Val().KTeta2();
}

const int & cTrAJ2_SectionLog::KTeta2()const 
{
   return TrajAngles().Val().KTeta2();
}


int & cTrAJ2_SectionLog::KTeta3()
{
   return TrajAngles().Val().KTeta3();
}

const int & cTrAJ2_SectionLog::KTeta3()const 
{
   return TrajAngles().Val().KTeta3();
}


cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta1()
{
   return TrajAngles().Val().OffsetTeta1();
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta1()const 
{
   return TrajAngles().Val().OffsetTeta1();
}


cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta2()
{
   return TrajAngles().Val().OffsetTeta2();
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta2()const 
{
   return TrajAngles().Val().OffsetTeta2();
}


cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta3()
{
   return TrajAngles().Val().OffsetTeta3();
}

const cTplValGesInit< double > & cTrAJ2_SectionLog::OffsetTeta3()const 
{
   return TrajAngles().Val().OffsetTeta3();
}


cTplValGesInit< cRotationVect > & cTrAJ2_SectionLog::RefOrTrajI2C()
{
   return TrajAngles().Val().RefOrTrajI2C();
}

const cTplValGesInit< cRotationVect > & cTrAJ2_SectionLog::RefOrTrajI2C()const 
{
   return TrajAngles().Val().RefOrTrajI2C();
}


cTplValGesInit< cTrajAngles > & cTrAJ2_SectionLog::TrajAngles()
{
   return mTrajAngles;
}

const cTplValGesInit< cTrajAngles > & cTrAJ2_SectionLog::TrajAngles()const 
{
   return mTrajAngles;
}


int & cTrAJ2_SectionLog::KIm()
{
   return GetImInLog().Val().KIm();
}

const int & cTrAJ2_SectionLog::KIm()const 
{
   return GetImInLog().Val().KIm();
}


cTplValGesInit< cGetImInLog > & cTrAJ2_SectionLog::GetImInLog()
{
   return mGetImInLog;
}

const cTplValGesInit< cGetImInLog > & cTrAJ2_SectionLog::GetImInLog()const 
{
   return mGetImInLog;
}

void  BinaryUnDumpFromFile(cTrAJ2_SectionLog & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cGenerateTabExemple aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.GenerateTabExemple().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TimeMin().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TimeMin().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TimeMin().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KLogT0().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KLogT0().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KLogT0().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.File(),aFp);
    BinaryUnDumpFromFile(anObj.Autom(),aFp);
    BinaryUnDumpFromFile(anObj.SysCoord(),aFp);
    BinaryUnDumpFromFile(anObj.Id(),aFp);
    BinaryUnDumpFromFile(anObj.SectionTime(),aFp);
    BinaryUnDumpFromFile(anObj.KCoord1(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DivCoord1().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DivCoord1().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DivCoord1().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KCoord2(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DivCoord2().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DivCoord2().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DivCoord2().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KCoord3(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DivCoord3().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DivCoord3().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DivCoord3().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             eUniteAngulaire aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.UnitesCoord().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TrajAngles().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TrajAngles().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TrajAngles().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.GetImInLog().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.GetImInLog().ValForcedForUnUmp(),aFp);
        }
        else  anObj.GetImInLog().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_SectionLog & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.GenerateTabExemple().size());
    for(  std::list< cGenerateTabExemple >::const_iterator iT=anObj.GenerateTabExemple().begin();
         iT!=anObj.GenerateTabExemple().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.TimeMin().IsInit());
    if (anObj.TimeMin().IsInit()) BinaryDumpInFile(aFp,anObj.TimeMin().Val());
    BinaryDumpInFile(aFp,anObj.KLogT0().IsInit());
    if (anObj.KLogT0().IsInit()) BinaryDumpInFile(aFp,anObj.KLogT0().Val());
    BinaryDumpInFile(aFp,anObj.File());
    BinaryDumpInFile(aFp,anObj.Autom());
    BinaryDumpInFile(aFp,anObj.SysCoord());
    BinaryDumpInFile(aFp,anObj.Id());
    BinaryDumpInFile(aFp,anObj.SectionTime());
    BinaryDumpInFile(aFp,anObj.KCoord1());
    BinaryDumpInFile(aFp,anObj.DivCoord1().IsInit());
    if (anObj.DivCoord1().IsInit()) BinaryDumpInFile(aFp,anObj.DivCoord1().Val());
    BinaryDumpInFile(aFp,anObj.KCoord2());
    BinaryDumpInFile(aFp,anObj.DivCoord2().IsInit());
    if (anObj.DivCoord2().IsInit()) BinaryDumpInFile(aFp,anObj.DivCoord2().Val());
    BinaryDumpInFile(aFp,anObj.KCoord3());
    BinaryDumpInFile(aFp,anObj.DivCoord3().IsInit());
    if (anObj.DivCoord3().IsInit()) BinaryDumpInFile(aFp,anObj.DivCoord3().Val());
    BinaryDumpInFile(aFp,(int)anObj.UnitesCoord().size());
    for(  std::vector< eUniteAngulaire >::const_iterator iT=anObj.UnitesCoord().begin();
         iT!=anObj.UnitesCoord().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.TrajAngles().IsInit());
    if (anObj.TrajAngles().IsInit()) BinaryDumpInFile(aFp,anObj.TrajAngles().Val());
    BinaryDumpInFile(aFp,anObj.GetImInLog().IsInit());
    if (anObj.GetImInLog().IsInit()) BinaryDumpInFile(aFp,anObj.GetImInLog().Val());
}

cElXMLTree * ToXMLTree(const cTrAJ2_SectionLog & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_SectionLog",eXMLBranche);
  for
  (       std::list< cGenerateTabExemple >::const_iterator it=anObj.GenerateTabExemple().begin();
      it !=anObj.GenerateTabExemple().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("GenerateTabExemple"));
   if (anObj.TimeMin().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TimeMin"),anObj.TimeMin().Val())->ReTagThis("TimeMin"));
   if (anObj.KLogT0().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KLogT0"),anObj.KLogT0().Val())->ReTagThis("KLogT0"));
   aRes->AddFils(::ToXMLTree(std::string("File"),anObj.File())->ReTagThis("File"));
   aRes->AddFils(::ToXMLTree(std::string("Autom"),anObj.Autom())->ReTagThis("Autom"));
   aRes->AddFils(ToXMLTree(anObj.SysCoord())->ReTagThis("SysCoord"));
   aRes->AddFils(::ToXMLTree(std::string("Id"),anObj.Id())->ReTagThis("Id"));
   aRes->AddFils(ToXMLTree(anObj.SectionTime())->ReTagThis("SectionTime"));
   aRes->AddFils(::ToXMLTree(std::string("KCoord1"),anObj.KCoord1())->ReTagThis("KCoord1"));
   if (anObj.DivCoord1().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DivCoord1"),anObj.DivCoord1().Val())->ReTagThis("DivCoord1"));
   aRes->AddFils(::ToXMLTree(std::string("KCoord2"),anObj.KCoord2())->ReTagThis("KCoord2"));
   if (anObj.DivCoord2().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DivCoord2"),anObj.DivCoord2().Val())->ReTagThis("DivCoord2"));
   aRes->AddFils(::ToXMLTree(std::string("KCoord3"),anObj.KCoord3())->ReTagThis("KCoord3"));
   if (anObj.DivCoord3().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("DivCoord3"),anObj.DivCoord3().Val())->ReTagThis("DivCoord3"));
  for
  (       std::vector< eUniteAngulaire >::const_iterator it=anObj.UnitesCoord().begin();
      it !=anObj.UnitesCoord().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("UnitesCoord"),(*it))->ReTagThis("UnitesCoord"));
   if (anObj.TrajAngles().IsInit())
      aRes->AddFils(ToXMLTree(anObj.TrajAngles().Val())->ReTagThis("TrajAngles"));
   if (anObj.GetImInLog().IsInit())
      aRes->AddFils(ToXMLTree(anObj.GetImInLog().Val())->ReTagThis("GetImInLog"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_SectionLog & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.GenerateTabExemple(),aTree->GetAll("GenerateTabExemple",false,1));

   xml_init(anObj.TimeMin(),aTree->Get("TimeMin",1)); //tototo 

   xml_init(anObj.KLogT0(),aTree->Get("KLogT0",1),int(0)); //tototo 

   xml_init(anObj.File(),aTree->Get("File",1)); //tototo 

   xml_init(anObj.Autom(),aTree->Get("Autom",1)); //tototo 

   xml_init(anObj.SysCoord(),aTree->Get("SysCoord",1)); //tototo 

   xml_init(anObj.Id(),aTree->Get("Id",1)); //tototo 

   xml_init(anObj.SectionTime(),aTree->Get("SectionTime",1)); //tototo 

   xml_init(anObj.KCoord1(),aTree->Get("KCoord1",1)); //tototo 

   xml_init(anObj.DivCoord1(),aTree->Get("DivCoord1",1),double(1.0)); //tototo 

   xml_init(anObj.KCoord2(),aTree->Get("KCoord2",1)); //tototo 

   xml_init(anObj.DivCoord2(),aTree->Get("DivCoord2",1),double(1.0)); //tototo 

   xml_init(anObj.KCoord3(),aTree->Get("KCoord3",1)); //tototo 

   xml_init(anObj.DivCoord3(),aTree->Get("DivCoord3",1),double(1.0)); //tototo 

   xml_init(anObj.UnitesCoord(),aTree->GetAll("UnitesCoord",false,1));

   xml_init(anObj.TrajAngles(),aTree->Get("TrajAngles",1)); //tototo 

   xml_init(anObj.GetImInLog(),aTree->Get("GetImInLog",1)); //tototo 
}

std::string  Mangling( cTrAJ2_SectionLog *) {return "9C81330CE14C8D93FF3F";};


std::string & cLearnByExample::Im0()
{
   return mIm0;
}

const std::string & cLearnByExample::Im0()const 
{
   return mIm0;
}


int & cLearnByExample::Log0()
{
   return mLog0;
}

const int & cLearnByExample::Log0()const 
{
   return mLog0;
}


int & cLearnByExample::DeltaMinRech()
{
   return mDeltaMinRech;
}

const int & cLearnByExample::DeltaMinRech()const 
{
   return mDeltaMinRech;
}


int & cLearnByExample::DeltaMaxRech()
{
   return mDeltaMaxRech;
}

const int & cLearnByExample::DeltaMaxRech()const 
{
   return mDeltaMaxRech;
}


cTplValGesInit< bool > & cLearnByExample::Show()
{
   return mShow;
}

const cTplValGesInit< bool > & cLearnByExample::Show()const 
{
   return mShow;
}


cTplValGesInit< bool > & cLearnByExample::ShowPerc()
{
   return mShowPerc;
}

const cTplValGesInit< bool > & cLearnByExample::ShowPerc()const 
{
   return mShowPerc;
}

void  BinaryUnDumpFromFile(cLearnByExample & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Im0(),aFp);
    BinaryUnDumpFromFile(anObj.Log0(),aFp);
    BinaryUnDumpFromFile(anObj.DeltaMinRech(),aFp);
    BinaryUnDumpFromFile(anObj.DeltaMaxRech(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Show().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Show().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Show().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ShowPerc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ShowPerc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ShowPerc().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cLearnByExample & anObj)
{
    BinaryDumpInFile(aFp,anObj.Im0());
    BinaryDumpInFile(aFp,anObj.Log0());
    BinaryDumpInFile(aFp,anObj.DeltaMinRech());
    BinaryDumpInFile(aFp,anObj.DeltaMaxRech());
    BinaryDumpInFile(aFp,anObj.Show().IsInit());
    if (anObj.Show().IsInit()) BinaryDumpInFile(aFp,anObj.Show().Val());
    BinaryDumpInFile(aFp,anObj.ShowPerc().IsInit());
    if (anObj.ShowPerc().IsInit()) BinaryDumpInFile(aFp,anObj.ShowPerc().Val());
}

cElXMLTree * ToXMLTree(const cLearnByExample & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"LearnByExample",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Im0"),anObj.Im0())->ReTagThis("Im0"));
   aRes->AddFils(::ToXMLTree(std::string("Log0"),anObj.Log0())->ReTagThis("Log0"));
   aRes->AddFils(::ToXMLTree(std::string("DeltaMinRech"),anObj.DeltaMinRech())->ReTagThis("DeltaMinRech"));
   aRes->AddFils(::ToXMLTree(std::string("DeltaMaxRech"),anObj.DeltaMaxRech())->ReTagThis("DeltaMaxRech"));
   if (anObj.Show().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Show"),anObj.Show().Val())->ReTagThis("Show"));
   if (anObj.ShowPerc().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ShowPerc"),anObj.ShowPerc().Val())->ReTagThis("ShowPerc"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cLearnByExample & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Im0(),aTree->Get("Im0",1)); //tototo 

   xml_init(anObj.Log0(),aTree->Get("Log0",1)); //tototo 

   xml_init(anObj.DeltaMinRech(),aTree->Get("DeltaMinRech",1)); //tototo 

   xml_init(anObj.DeltaMaxRech(),aTree->Get("DeltaMaxRech",1)); //tototo 

   xml_init(anObj.Show(),aTree->Get("Show",1),bool(false)); //tototo 

   xml_init(anObj.ShowPerc(),aTree->Get("ShowPerc",1),bool(true)); //tototo 
}

std::string  Mangling( cLearnByExample *) {return "5C57E1E6AC07F9D7FE3F";};


cTplValGesInit< double > & cLearnByStatDiff::MaxEcart()
{
   return mMaxEcart;
}

const cTplValGesInit< double > & cLearnByStatDiff::MaxEcart()const 
{
   return mMaxEcart;
}

void  BinaryUnDumpFromFile(cLearnByStatDiff & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MaxEcart().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MaxEcart().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MaxEcart().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cLearnByStatDiff & anObj)
{
    BinaryDumpInFile(aFp,anObj.MaxEcart().IsInit());
    if (anObj.MaxEcart().IsInit()) BinaryDumpInFile(aFp,anObj.MaxEcart().Val());
}

cElXMLTree * ToXMLTree(const cLearnByStatDiff & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"LearnByStatDiff",eXMLBranche);
   if (anObj.MaxEcart().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("MaxEcart"),anObj.MaxEcart().Val())->ReTagThis("MaxEcart"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cLearnByStatDiff & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MaxEcart(),aTree->Get("MaxEcart",1),double(0.52)); //tototo 
}

std::string  Mangling( cLearnByStatDiff *) {return "B0C40F93BF8DE5B7FA3F";};


std::string & cLearnOffset::Im0()
{
   return LearnByExample().Val().Im0();
}

const std::string & cLearnOffset::Im0()const 
{
   return LearnByExample().Val().Im0();
}


int & cLearnOffset::Log0()
{
   return LearnByExample().Val().Log0();
}

const int & cLearnOffset::Log0()const 
{
   return LearnByExample().Val().Log0();
}


int & cLearnOffset::DeltaMinRech()
{
   return LearnByExample().Val().DeltaMinRech();
}

const int & cLearnOffset::DeltaMinRech()const 
{
   return LearnByExample().Val().DeltaMinRech();
}


int & cLearnOffset::DeltaMaxRech()
{
   return LearnByExample().Val().DeltaMaxRech();
}

const int & cLearnOffset::DeltaMaxRech()const 
{
   return LearnByExample().Val().DeltaMaxRech();
}


cTplValGesInit< bool > & cLearnOffset::Show()
{
   return LearnByExample().Val().Show();
}

const cTplValGesInit< bool > & cLearnOffset::Show()const 
{
   return LearnByExample().Val().Show();
}


cTplValGesInit< bool > & cLearnOffset::ShowPerc()
{
   return LearnByExample().Val().ShowPerc();
}

const cTplValGesInit< bool > & cLearnOffset::ShowPerc()const 
{
   return LearnByExample().Val().ShowPerc();
}


cTplValGesInit< cLearnByExample > & cLearnOffset::LearnByExample()
{
   return mLearnByExample;
}

const cTplValGesInit< cLearnByExample > & cLearnOffset::LearnByExample()const 
{
   return mLearnByExample;
}


cTplValGesInit< double > & cLearnOffset::MaxEcart()
{
   return LearnByStatDiff().Val().MaxEcart();
}

const cTplValGesInit< double > & cLearnOffset::MaxEcart()const 
{
   return LearnByStatDiff().Val().MaxEcart();
}


cTplValGesInit< cLearnByStatDiff > & cLearnOffset::LearnByStatDiff()
{
   return mLearnByStatDiff;
}

const cTplValGesInit< cLearnByStatDiff > & cLearnOffset::LearnByStatDiff()const 
{
   return mLearnByStatDiff;
}

void  BinaryUnDumpFromFile(cLearnOffset & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.LearnByExample().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.LearnByExample().ValForcedForUnUmp(),aFp);
        }
        else  anObj.LearnByExample().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.LearnByStatDiff().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.LearnByStatDiff().ValForcedForUnUmp(),aFp);
        }
        else  anObj.LearnByStatDiff().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cLearnOffset & anObj)
{
    BinaryDumpInFile(aFp,anObj.LearnByExample().IsInit());
    if (anObj.LearnByExample().IsInit()) BinaryDumpInFile(aFp,anObj.LearnByExample().Val());
    BinaryDumpInFile(aFp,anObj.LearnByStatDiff().IsInit());
    if (anObj.LearnByStatDiff().IsInit()) BinaryDumpInFile(aFp,anObj.LearnByStatDiff().Val());
}

cElXMLTree * ToXMLTree(const cLearnOffset & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"LearnOffset",eXMLBranche);
   if (anObj.LearnByExample().IsInit())
      aRes->AddFils(ToXMLTree(anObj.LearnByExample().Val())->ReTagThis("LearnByExample"));
   if (anObj.LearnByStatDiff().IsInit())
      aRes->AddFils(ToXMLTree(anObj.LearnByStatDiff().Val())->ReTagThis("LearnByStatDiff"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cLearnOffset & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.LearnByExample(),aTree->Get("LearnByExample",1)); //tototo 

   xml_init(anObj.LearnByStatDiff(),aTree->Get("LearnByStatDiff",1)); //tototo 
}

std::string  Mangling( cLearnOffset *) {return "962AF73DBD3680A5FF3F";};


double & cMatchNearestIm::TolMatch()
{
   return mTolMatch;
}

const double & cMatchNearestIm::TolMatch()const 
{
   return mTolMatch;
}


double & cMatchNearestIm::TolAmbig()
{
   return mTolAmbig;
}

const double & cMatchNearestIm::TolAmbig()const 
{
   return mTolAmbig;
}

void  BinaryUnDumpFromFile(cMatchNearestIm & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.TolMatch(),aFp);
    BinaryUnDumpFromFile(anObj.TolAmbig(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMatchNearestIm & anObj)
{
    BinaryDumpInFile(aFp,anObj.TolMatch());
    BinaryDumpInFile(aFp,anObj.TolAmbig());
}

cElXMLTree * ToXMLTree(const cMatchNearestIm & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MatchNearestIm",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("TolMatch"),anObj.TolMatch())->ReTagThis("TolMatch"));
   aRes->AddFils(::ToXMLTree(std::string("TolAmbig"),anObj.TolAmbig())->ReTagThis("TolAmbig"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMatchNearestIm & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.TolMatch(),aTree->Get("TolMatch",1)); //tototo 

   xml_init(anObj.TolAmbig(),aTree->Get("TolAmbig",1)); //tototo 
}

std::string  Mangling( cMatchNearestIm *) {return "88E611851B4AF5ECFB3F";};


std::string & cMatchByName::KeyLog2Im()
{
   return mKeyLog2Im;
}

const std::string & cMatchByName::KeyLog2Im()const 
{
   return mKeyLog2Im;
}

void  BinaryUnDumpFromFile(cMatchByName & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.KeyLog2Im(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cMatchByName & anObj)
{
    BinaryDumpInFile(aFp,anObj.KeyLog2Im());
}

cElXMLTree * ToXMLTree(const cMatchByName & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"MatchByName",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("KeyLog2Im"),anObj.KeyLog2Im())->ReTagThis("KeyLog2Im"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cMatchByName & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KeyLog2Im(),aTree->Get("KeyLog2Im",1)); //tototo 
}

std::string  Mangling( cMatchByName *) {return "F23B5B0FA2E3C8A9FD3F";};


double & cAlgoMatch::TolMatch()
{
   return MatchNearestIm().Val().TolMatch();
}

const double & cAlgoMatch::TolMatch()const 
{
   return MatchNearestIm().Val().TolMatch();
}


double & cAlgoMatch::TolAmbig()
{
   return MatchNearestIm().Val().TolAmbig();
}

const double & cAlgoMatch::TolAmbig()const 
{
   return MatchNearestIm().Val().TolAmbig();
}


cTplValGesInit< cMatchNearestIm > & cAlgoMatch::MatchNearestIm()
{
   return mMatchNearestIm;
}

const cTplValGesInit< cMatchNearestIm > & cAlgoMatch::MatchNearestIm()const 
{
   return mMatchNearestIm;
}


std::string & cAlgoMatch::KeyLog2Im()
{
   return MatchByName().Val().KeyLog2Im();
}

const std::string & cAlgoMatch::KeyLog2Im()const 
{
   return MatchByName().Val().KeyLog2Im();
}


cTplValGesInit< cMatchByName > & cAlgoMatch::MatchByName()
{
   return mMatchByName;
}

const cTplValGesInit< cMatchByName > & cAlgoMatch::MatchByName()const 
{
   return mMatchByName;
}

void  BinaryUnDumpFromFile(cAlgoMatch & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MatchNearestIm().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MatchNearestIm().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MatchNearestIm().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MatchByName().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MatchByName().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MatchByName().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cAlgoMatch & anObj)
{
    BinaryDumpInFile(aFp,anObj.MatchNearestIm().IsInit());
    if (anObj.MatchNearestIm().IsInit()) BinaryDumpInFile(aFp,anObj.MatchNearestIm().Val());
    BinaryDumpInFile(aFp,anObj.MatchByName().IsInit());
    if (anObj.MatchByName().IsInit()) BinaryDumpInFile(aFp,anObj.MatchByName().Val());
}

cElXMLTree * ToXMLTree(const cAlgoMatch & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"AlgoMatch",eXMLBranche);
   if (anObj.MatchNearestIm().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MatchNearestIm().Val())->ReTagThis("MatchNearestIm"));
   if (anObj.MatchByName().IsInit())
      aRes->AddFils(ToXMLTree(anObj.MatchByName().Val())->ReTagThis("MatchByName"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cAlgoMatch & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MatchNearestIm(),aTree->Get("MatchNearestIm",1)); //tototo 

   xml_init(anObj.MatchByName(),aTree->Get("MatchByName",1)); //tototo 
}

std::string  Mangling( cAlgoMatch *) {return "D56D52A62DAE7CC5FE3F";};


std::string & cTrAJ2_SectionMatch::IdIm()
{
   return mIdIm;
}

const std::string & cTrAJ2_SectionMatch::IdIm()const 
{
   return mIdIm;
}


std::string & cTrAJ2_SectionMatch::IdLog()
{
   return mIdLog;
}

const std::string & cTrAJ2_SectionMatch::IdLog()const 
{
   return mIdLog;
}


std::string & cTrAJ2_SectionMatch::Im0()
{
   return LearnOffset().Val().LearnByExample().Val().Im0();
}

const std::string & cTrAJ2_SectionMatch::Im0()const 
{
   return LearnOffset().Val().LearnByExample().Val().Im0();
}


int & cTrAJ2_SectionMatch::Log0()
{
   return LearnOffset().Val().LearnByExample().Val().Log0();
}

const int & cTrAJ2_SectionMatch::Log0()const 
{
   return LearnOffset().Val().LearnByExample().Val().Log0();
}


int & cTrAJ2_SectionMatch::DeltaMinRech()
{
   return LearnOffset().Val().LearnByExample().Val().DeltaMinRech();
}

const int & cTrAJ2_SectionMatch::DeltaMinRech()const 
{
   return LearnOffset().Val().LearnByExample().Val().DeltaMinRech();
}


int & cTrAJ2_SectionMatch::DeltaMaxRech()
{
   return LearnOffset().Val().LearnByExample().Val().DeltaMaxRech();
}

const int & cTrAJ2_SectionMatch::DeltaMaxRech()const 
{
   return LearnOffset().Val().LearnByExample().Val().DeltaMaxRech();
}


cTplValGesInit< bool > & cTrAJ2_SectionMatch::Show()
{
   return LearnOffset().Val().LearnByExample().Val().Show();
}

const cTplValGesInit< bool > & cTrAJ2_SectionMatch::Show()const 
{
   return LearnOffset().Val().LearnByExample().Val().Show();
}


cTplValGesInit< bool > & cTrAJ2_SectionMatch::ShowPerc()
{
   return LearnOffset().Val().LearnByExample().Val().ShowPerc();
}

const cTplValGesInit< bool > & cTrAJ2_SectionMatch::ShowPerc()const 
{
   return LearnOffset().Val().LearnByExample().Val().ShowPerc();
}


cTplValGesInit< cLearnByExample > & cTrAJ2_SectionMatch::LearnByExample()
{
   return LearnOffset().Val().LearnByExample();
}

const cTplValGesInit< cLearnByExample > & cTrAJ2_SectionMatch::LearnByExample()const 
{
   return LearnOffset().Val().LearnByExample();
}


cTplValGesInit< double > & cTrAJ2_SectionMatch::MaxEcart()
{
   return LearnOffset().Val().LearnByStatDiff().Val().MaxEcart();
}

const cTplValGesInit< double > & cTrAJ2_SectionMatch::MaxEcart()const 
{
   return LearnOffset().Val().LearnByStatDiff().Val().MaxEcart();
}


cTplValGesInit< cLearnByStatDiff > & cTrAJ2_SectionMatch::LearnByStatDiff()
{
   return LearnOffset().Val().LearnByStatDiff();
}

const cTplValGesInit< cLearnByStatDiff > & cTrAJ2_SectionMatch::LearnByStatDiff()const 
{
   return LearnOffset().Val().LearnByStatDiff();
}


cTplValGesInit< cLearnOffset > & cTrAJ2_SectionMatch::LearnOffset()
{
   return mLearnOffset;
}

const cTplValGesInit< cLearnOffset > & cTrAJ2_SectionMatch::LearnOffset()const 
{
   return mLearnOffset;
}


double & cTrAJ2_SectionMatch::TolMatch()
{
   return AlgoMatch().MatchNearestIm().Val().TolMatch();
}

const double & cTrAJ2_SectionMatch::TolMatch()const 
{
   return AlgoMatch().MatchNearestIm().Val().TolMatch();
}


double & cTrAJ2_SectionMatch::TolAmbig()
{
   return AlgoMatch().MatchNearestIm().Val().TolAmbig();
}

const double & cTrAJ2_SectionMatch::TolAmbig()const 
{
   return AlgoMatch().MatchNearestIm().Val().TolAmbig();
}


cTplValGesInit< cMatchNearestIm > & cTrAJ2_SectionMatch::MatchNearestIm()
{
   return AlgoMatch().MatchNearestIm();
}

const cTplValGesInit< cMatchNearestIm > & cTrAJ2_SectionMatch::MatchNearestIm()const 
{
   return AlgoMatch().MatchNearestIm();
}


std::string & cTrAJ2_SectionMatch::KeyLog2Im()
{
   return AlgoMatch().MatchByName().Val().KeyLog2Im();
}

const std::string & cTrAJ2_SectionMatch::KeyLog2Im()const 
{
   return AlgoMatch().MatchByName().Val().KeyLog2Im();
}


cTplValGesInit< cMatchByName > & cTrAJ2_SectionMatch::MatchByName()
{
   return AlgoMatch().MatchByName();
}

const cTplValGesInit< cMatchByName > & cTrAJ2_SectionMatch::MatchByName()const 
{
   return AlgoMatch().MatchByName();
}


cAlgoMatch & cTrAJ2_SectionMatch::AlgoMatch()
{
   return mAlgoMatch;
}

const cAlgoMatch & cTrAJ2_SectionMatch::AlgoMatch()const 
{
   return mAlgoMatch;
}


cTplValGesInit< cTrAJ2_ModeliseVitesse > & cTrAJ2_SectionMatch::ModeliseVitesse()
{
   return mModeliseVitesse;
}

const cTplValGesInit< cTrAJ2_ModeliseVitesse > & cTrAJ2_SectionMatch::ModeliseVitesse()const 
{
   return mModeliseVitesse;
}


cTplValGesInit< cTrAJ2_GenerateOrient > & cTrAJ2_SectionMatch::GenerateOrient()
{
   return mGenerateOrient;
}

const cTplValGesInit< cTrAJ2_GenerateOrient > & cTrAJ2_SectionMatch::GenerateOrient()const 
{
   return mGenerateOrient;
}

void  BinaryUnDumpFromFile(cTrAJ2_SectionMatch & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.IdIm(),aFp);
    BinaryUnDumpFromFile(anObj.IdLog(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.LearnOffset().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.LearnOffset().ValForcedForUnUmp(),aFp);
        }
        else  anObj.LearnOffset().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.AlgoMatch(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ModeliseVitesse().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ModeliseVitesse().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ModeliseVitesse().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.GenerateOrient().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.GenerateOrient().ValForcedForUnUmp(),aFp);
        }
        else  anObj.GenerateOrient().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_SectionMatch & anObj)
{
    BinaryDumpInFile(aFp,anObj.IdIm());
    BinaryDumpInFile(aFp,anObj.IdLog());
    BinaryDumpInFile(aFp,anObj.LearnOffset().IsInit());
    if (anObj.LearnOffset().IsInit()) BinaryDumpInFile(aFp,anObj.LearnOffset().Val());
    BinaryDumpInFile(aFp,anObj.AlgoMatch());
    BinaryDumpInFile(aFp,anObj.ModeliseVitesse().IsInit());
    if (anObj.ModeliseVitesse().IsInit()) BinaryDumpInFile(aFp,anObj.ModeliseVitesse().Val());
    BinaryDumpInFile(aFp,anObj.GenerateOrient().IsInit());
    if (anObj.GenerateOrient().IsInit()) BinaryDumpInFile(aFp,anObj.GenerateOrient().Val());
}

cElXMLTree * ToXMLTree(const cTrAJ2_SectionMatch & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_SectionMatch",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("IdIm"),anObj.IdIm())->ReTagThis("IdIm"));
   aRes->AddFils(::ToXMLTree(std::string("IdLog"),anObj.IdLog())->ReTagThis("IdLog"));
   if (anObj.LearnOffset().IsInit())
      aRes->AddFils(ToXMLTree(anObj.LearnOffset().Val())->ReTagThis("LearnOffset"));
   aRes->AddFils(ToXMLTree(anObj.AlgoMatch())->ReTagThis("AlgoMatch"));
   if (anObj.ModeliseVitesse().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ModeliseVitesse().Val())->ReTagThis("ModeliseVitesse"));
   if (anObj.GenerateOrient().IsInit())
      aRes->AddFils(ToXMLTree(anObj.GenerateOrient().Val())->ReTagThis("GenerateOrient"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_SectionMatch & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.IdIm(),aTree->Get("IdIm",1)); //tototo 

   xml_init(anObj.IdLog(),aTree->Get("IdLog",1)); //tototo 

   xml_init(anObj.LearnOffset(),aTree->Get("LearnOffset",1)); //tototo 

   xml_init(anObj.AlgoMatch(),aTree->Get("AlgoMatch",1)); //tototo 

   xml_init(anObj.ModeliseVitesse(),aTree->Get("ModeliseVitesse",1)); //tototo 

   xml_init(anObj.GenerateOrient(),aTree->Get("GenerateOrient",1)); //tototo 
}

std::string  Mangling( cTrAJ2_SectionMatch *) {return "D8D7788FD47B1795FBBF";};


std::string & cTraJ2_FilesInputi_Appuis::KeySetOrPat()
{
   return mKeySetOrPat;
}

const std::string & cTraJ2_FilesInputi_Appuis::KeySetOrPat()const 
{
   return mKeySetOrPat;
}


cElRegex_Ptr & cTraJ2_FilesInputi_Appuis::Autom()
{
   return mAutom;
}

const cElRegex_Ptr & cTraJ2_FilesInputi_Appuis::Autom()const 
{
   return mAutom;
}


bool & cTraJ2_FilesInputi_Appuis::GetMesTer()
{
   return mGetMesTer;
}

const bool & cTraJ2_FilesInputi_Appuis::GetMesTer()const 
{
   return mGetMesTer;
}


bool & cTraJ2_FilesInputi_Appuis::GetMesIm()
{
   return mGetMesIm;
}

const bool & cTraJ2_FilesInputi_Appuis::GetMesIm()const 
{
   return mGetMesIm;
}


int & cTraJ2_FilesInputi_Appuis::KIdPt()
{
   return mKIdPt;
}

const int & cTraJ2_FilesInputi_Appuis::KIdPt()const 
{
   return mKIdPt;
}

void  BinaryUnDumpFromFile(cTraJ2_FilesInputi_Appuis & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.KeySetOrPat(),aFp);
    BinaryUnDumpFromFile(anObj.Autom(),aFp);
    BinaryUnDumpFromFile(anObj.GetMesTer(),aFp);
    BinaryUnDumpFromFile(anObj.GetMesIm(),aFp);
    BinaryUnDumpFromFile(anObj.KIdPt(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTraJ2_FilesInputi_Appuis & anObj)
{
    BinaryDumpInFile(aFp,anObj.KeySetOrPat());
    BinaryDumpInFile(aFp,anObj.Autom());
    BinaryDumpInFile(aFp,anObj.GetMesTer());
    BinaryDumpInFile(aFp,anObj.GetMesIm());
    BinaryDumpInFile(aFp,anObj.KIdPt());
}

cElXMLTree * ToXMLTree(const cTraJ2_FilesInputi_Appuis & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TraJ2_FilesInputi_Appuis",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("KeySetOrPat"),anObj.KeySetOrPat())->ReTagThis("KeySetOrPat"));
   aRes->AddFils(::ToXMLTree(std::string("Autom"),anObj.Autom())->ReTagThis("Autom"));
   aRes->AddFils(::ToXMLTree(std::string("GetMesTer"),anObj.GetMesTer())->ReTagThis("GetMesTer"));
   aRes->AddFils(::ToXMLTree(std::string("GetMesIm"),anObj.GetMesIm())->ReTagThis("GetMesIm"));
   aRes->AddFils(::ToXMLTree(std::string("KIdPt"),anObj.KIdPt())->ReTagThis("KIdPt"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTraJ2_FilesInputi_Appuis & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KeySetOrPat(),aTree->Get("KeySetOrPat",1)); //tototo 

   xml_init(anObj.Autom(),aTree->Get("Autom",1)); //tototo 

   xml_init(anObj.GetMesTer(),aTree->Get("GetMesTer",1)); //tototo 

   xml_init(anObj.GetMesIm(),aTree->Get("GetMesIm",1)); //tototo 

   xml_init(anObj.KIdPt(),aTree->Get("KIdPt",1)); //tototo 
}

std::string  Mangling( cTraJ2_FilesInputi_Appuis *) {return "70087AABFA2053FDFE3F";};


std::string & cTrAJ2_ConvertionAppuis::Id()
{
   return mId;
}

const std::string & cTrAJ2_ConvertionAppuis::Id()const 
{
   return mId;
}


std::list< cTraJ2_FilesInputi_Appuis > & cTrAJ2_ConvertionAppuis::TraJ2_FilesInputi_Appuis()
{
   return mTraJ2_FilesInputi_Appuis;
}

const std::list< cTraJ2_FilesInputi_Appuis > & cTrAJ2_ConvertionAppuis::TraJ2_FilesInputi_Appuis()const 
{
   return mTraJ2_FilesInputi_Appuis;
}


cTplValGesInit< std::string > & cTrAJ2_ConvertionAppuis::OutMesTer()
{
   return mOutMesTer;
}

const cTplValGesInit< std::string > & cTrAJ2_ConvertionAppuis::OutMesTer()const 
{
   return mOutMesTer;
}


cTplValGesInit< std::string > & cTrAJ2_ConvertionAppuis::OutMesIm()
{
   return mOutMesIm;
}

const cTplValGesInit< std::string > & cTrAJ2_ConvertionAppuis::OutMesIm()const 
{
   return mOutMesIm;
}


cTplValGesInit< cElRegex_Ptr > & cTrAJ2_ConvertionAppuis::AutomComment()
{
   return mAutomComment;
}

const cTplValGesInit< cElRegex_Ptr > & cTrAJ2_ConvertionAppuis::AutomComment()const 
{
   return mAutomComment;
}


std::vector< eUniteAngulaire > & cTrAJ2_ConvertionAppuis::UnitesCoord()
{
   return mUnitesCoord;
}

const std::vector< eUniteAngulaire > & cTrAJ2_ConvertionAppuis::UnitesCoord()const 
{
   return mUnitesCoord;
}


cTplValGesInit< int > & cTrAJ2_ConvertionAppuis::KIncertPlani()
{
   return mKIncertPlani;
}

const cTplValGesInit< int > & cTrAJ2_ConvertionAppuis::KIncertPlani()const 
{
   return mKIncertPlani;
}


cTplValGesInit< int > & cTrAJ2_ConvertionAppuis::KIncertAlti()
{
   return mKIncertAlti;
}

const cTplValGesInit< int > & cTrAJ2_ConvertionAppuis::KIncertAlti()const 
{
   return mKIncertAlti;
}


cTplValGesInit< double > & cTrAJ2_ConvertionAppuis::ValIncertPlani()
{
   return mValIncertPlani;
}

const cTplValGesInit< double > & cTrAJ2_ConvertionAppuis::ValIncertPlani()const 
{
   return mValIncertPlani;
}


cTplValGesInit< double > & cTrAJ2_ConvertionAppuis::ValIncertAlti()
{
   return mValIncertAlti;
}

const cTplValGesInit< double > & cTrAJ2_ConvertionAppuis::ValIncertAlti()const 
{
   return mValIncertAlti;
}


int & cTrAJ2_ConvertionAppuis::KxTer()
{
   return mKxTer;
}

const int & cTrAJ2_ConvertionAppuis::KxTer()const 
{
   return mKxTer;
}


int & cTrAJ2_ConvertionAppuis::KyTer()
{
   return mKyTer;
}

const int & cTrAJ2_ConvertionAppuis::KyTer()const 
{
   return mKyTer;
}


int & cTrAJ2_ConvertionAppuis::KzTer()
{
   return mKzTer;
}

const int & cTrAJ2_ConvertionAppuis::KzTer()const 
{
   return mKzTer;
}


int & cTrAJ2_ConvertionAppuis::KIIm()
{
   return mKIIm;
}

const int & cTrAJ2_ConvertionAppuis::KIIm()const 
{
   return mKIIm;
}


int & cTrAJ2_ConvertionAppuis::KJIm()
{
   return mKJIm;
}

const int & cTrAJ2_ConvertionAppuis::KJIm()const 
{
   return mKJIm;
}


int & cTrAJ2_ConvertionAppuis::KIdIm()
{
   return mKIdIm;
}

const int & cTrAJ2_ConvertionAppuis::KIdIm()const 
{
   return mKIdIm;
}


cTplValGesInit< Pt2di > & cTrAJ2_ConvertionAppuis::OffsetIm()
{
   return mOffsetIm;
}

const cTplValGesInit< Pt2di > & cTrAJ2_ConvertionAppuis::OffsetIm()const 
{
   return mOffsetIm;
}


std::string & cTrAJ2_ConvertionAppuis::KeyId2Im()
{
   return mKeyId2Im;
}

const std::string & cTrAJ2_ConvertionAppuis::KeyId2Im()const 
{
   return mKeyId2Im;
}


cSystemeCoord & cTrAJ2_ConvertionAppuis::SystemeIn()
{
   return mSystemeIn;
}

const cSystemeCoord & cTrAJ2_ConvertionAppuis::SystemeIn()const 
{
   return mSystemeIn;
}


cSystemeCoord & cTrAJ2_ConvertionAppuis::SystemeOut()
{
   return mSystemeOut;
}

const cSystemeCoord & cTrAJ2_ConvertionAppuis::SystemeOut()const 
{
   return mSystemeOut;
}

void  BinaryUnDumpFromFile(cTrAJ2_ConvertionAppuis & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Id(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTraJ2_FilesInputi_Appuis aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TraJ2_FilesInputi_Appuis().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OutMesTer().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OutMesTer().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OutMesTer().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OutMesIm().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OutMesIm().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OutMesIm().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AutomComment().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AutomComment().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AutomComment().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             eUniteAngulaire aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.UnitesCoord().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KIncertPlani().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KIncertPlani().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KIncertPlani().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KIncertAlti().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KIncertAlti().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KIncertAlti().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ValIncertPlani().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ValIncertPlani().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ValIncertPlani().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ValIncertAlti().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ValIncertAlti().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ValIncertAlti().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KxTer(),aFp);
    BinaryUnDumpFromFile(anObj.KyTer(),aFp);
    BinaryUnDumpFromFile(anObj.KzTer(),aFp);
    BinaryUnDumpFromFile(anObj.KIIm(),aFp);
    BinaryUnDumpFromFile(anObj.KJIm(),aFp);
    BinaryUnDumpFromFile(anObj.KIdIm(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.OffsetIm().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.OffsetIm().ValForcedForUnUmp(),aFp);
        }
        else  anObj.OffsetIm().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.KeyId2Im(),aFp);
    BinaryUnDumpFromFile(anObj.SystemeIn(),aFp);
    BinaryUnDumpFromFile(anObj.SystemeOut(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_ConvertionAppuis & anObj)
{
    BinaryDumpInFile(aFp,anObj.Id());
    BinaryDumpInFile(aFp,(int)anObj.TraJ2_FilesInputi_Appuis().size());
    for(  std::list< cTraJ2_FilesInputi_Appuis >::const_iterator iT=anObj.TraJ2_FilesInputi_Appuis().begin();
         iT!=anObj.TraJ2_FilesInputi_Appuis().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.OutMesTer().IsInit());
    if (anObj.OutMesTer().IsInit()) BinaryDumpInFile(aFp,anObj.OutMesTer().Val());
    BinaryDumpInFile(aFp,anObj.OutMesIm().IsInit());
    if (anObj.OutMesIm().IsInit()) BinaryDumpInFile(aFp,anObj.OutMesIm().Val());
    BinaryDumpInFile(aFp,anObj.AutomComment().IsInit());
    if (anObj.AutomComment().IsInit()) BinaryDumpInFile(aFp,anObj.AutomComment().Val());
    BinaryDumpInFile(aFp,(int)anObj.UnitesCoord().size());
    for(  std::vector< eUniteAngulaire >::const_iterator iT=anObj.UnitesCoord().begin();
         iT!=anObj.UnitesCoord().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.KIncertPlani().IsInit());
    if (anObj.KIncertPlani().IsInit()) BinaryDumpInFile(aFp,anObj.KIncertPlani().Val());
    BinaryDumpInFile(aFp,anObj.KIncertAlti().IsInit());
    if (anObj.KIncertAlti().IsInit()) BinaryDumpInFile(aFp,anObj.KIncertAlti().Val());
    BinaryDumpInFile(aFp,anObj.ValIncertPlani().IsInit());
    if (anObj.ValIncertPlani().IsInit()) BinaryDumpInFile(aFp,anObj.ValIncertPlani().Val());
    BinaryDumpInFile(aFp,anObj.ValIncertAlti().IsInit());
    if (anObj.ValIncertAlti().IsInit()) BinaryDumpInFile(aFp,anObj.ValIncertAlti().Val());
    BinaryDumpInFile(aFp,anObj.KxTer());
    BinaryDumpInFile(aFp,anObj.KyTer());
    BinaryDumpInFile(aFp,anObj.KzTer());
    BinaryDumpInFile(aFp,anObj.KIIm());
    BinaryDumpInFile(aFp,anObj.KJIm());
    BinaryDumpInFile(aFp,anObj.KIdIm());
    BinaryDumpInFile(aFp,anObj.OffsetIm().IsInit());
    if (anObj.OffsetIm().IsInit()) BinaryDumpInFile(aFp,anObj.OffsetIm().Val());
    BinaryDumpInFile(aFp,anObj.KeyId2Im());
    BinaryDumpInFile(aFp,anObj.SystemeIn());
    BinaryDumpInFile(aFp,anObj.SystemeOut());
}

cElXMLTree * ToXMLTree(const cTrAJ2_ConvertionAppuis & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_ConvertionAppuis",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Id"),anObj.Id())->ReTagThis("Id"));
  for
  (       std::list< cTraJ2_FilesInputi_Appuis >::const_iterator it=anObj.TraJ2_FilesInputi_Appuis().begin();
      it !=anObj.TraJ2_FilesInputi_Appuis().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TraJ2_FilesInputi_Appuis"));
   if (anObj.OutMesTer().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OutMesTer"),anObj.OutMesTer().Val())->ReTagThis("OutMesTer"));
   if (anObj.OutMesIm().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OutMesIm"),anObj.OutMesIm().Val())->ReTagThis("OutMesIm"));
   if (anObj.AutomComment().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AutomComment"),anObj.AutomComment().Val())->ReTagThis("AutomComment"));
  for
  (       std::vector< eUniteAngulaire >::const_iterator it=anObj.UnitesCoord().begin();
      it !=anObj.UnitesCoord().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("UnitesCoord"),(*it))->ReTagThis("UnitesCoord"));
   if (anObj.KIncertPlani().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KIncertPlani"),anObj.KIncertPlani().Val())->ReTagThis("KIncertPlani"));
   if (anObj.KIncertAlti().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KIncertAlti"),anObj.KIncertAlti().Val())->ReTagThis("KIncertAlti"));
   if (anObj.ValIncertPlani().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ValIncertPlani"),anObj.ValIncertPlani().Val())->ReTagThis("ValIncertPlani"));
   if (anObj.ValIncertAlti().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ValIncertAlti"),anObj.ValIncertAlti().Val())->ReTagThis("ValIncertAlti"));
   aRes->AddFils(::ToXMLTree(std::string("KxTer"),anObj.KxTer())->ReTagThis("KxTer"));
   aRes->AddFils(::ToXMLTree(std::string("KyTer"),anObj.KyTer())->ReTagThis("KyTer"));
   aRes->AddFils(::ToXMLTree(std::string("KzTer"),anObj.KzTer())->ReTagThis("KzTer"));
   aRes->AddFils(::ToXMLTree(std::string("KIIm"),anObj.KIIm())->ReTagThis("KIIm"));
   aRes->AddFils(::ToXMLTree(std::string("KJIm"),anObj.KJIm())->ReTagThis("KJIm"));
   aRes->AddFils(::ToXMLTree(std::string("KIdIm"),anObj.KIdIm())->ReTagThis("KIdIm"));
   if (anObj.OffsetIm().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("OffsetIm"),anObj.OffsetIm().Val())->ReTagThis("OffsetIm"));
   aRes->AddFils(::ToXMLTree(std::string("KeyId2Im"),anObj.KeyId2Im())->ReTagThis("KeyId2Im"));
   aRes->AddFils(ToXMLTree(anObj.SystemeIn())->ReTagThis("SystemeIn"));
   aRes->AddFils(ToXMLTree(anObj.SystemeOut())->ReTagThis("SystemeOut"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_ConvertionAppuis & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Id(),aTree->Get("Id",1)); //tototo 

   xml_init(anObj.TraJ2_FilesInputi_Appuis(),aTree->GetAll("TraJ2_FilesInputi_Appuis",false,1));

   xml_init(anObj.OutMesTer(),aTree->Get("OutMesTer",1)); //tototo 

   xml_init(anObj.OutMesIm(),aTree->Get("OutMesIm",1)); //tototo 

   xml_init(anObj.AutomComment(),aTree->Get("AutomComment",1)); //tototo 

   xml_init(anObj.UnitesCoord(),aTree->GetAll("UnitesCoord",false,1));

   xml_init(anObj.KIncertPlani(),aTree->Get("KIncertPlani",1),int(-1)); //tototo 

   xml_init(anObj.KIncertAlti(),aTree->Get("KIncertAlti",1),int(-1)); //tototo 

   xml_init(anObj.ValIncertPlani(),aTree->Get("ValIncertPlani",1),double(1.0)); //tototo 

   xml_init(anObj.ValIncertAlti(),aTree->Get("ValIncertAlti",1),double(1.0)); //tototo 

   xml_init(anObj.KxTer(),aTree->Get("KxTer",1)); //tototo 

   xml_init(anObj.KyTer(),aTree->Get("KyTer",1)); //tototo 

   xml_init(anObj.KzTer(),aTree->Get("KzTer",1)); //tototo 

   xml_init(anObj.KIIm(),aTree->Get("KIIm",1)); //tototo 

   xml_init(anObj.KJIm(),aTree->Get("KJIm",1)); //tototo 

   xml_init(anObj.KIdIm(),aTree->Get("KIdIm",1)); //tototo 

   xml_init(anObj.OffsetIm(),aTree->Get("OffsetIm",1),Pt2di(Pt2di(0,0))); //tototo 

   xml_init(anObj.KeyId2Im(),aTree->Get("KeyId2Im",1)); //tototo 

   xml_init(anObj.SystemeIn(),aTree->Get("SystemeIn",1)); //tototo 

   xml_init(anObj.SystemeOut(),aTree->Get("SystemeOut",1)); //tototo 
}

std::string  Mangling( cTrAJ2_ConvertionAppuis *) {return "FF2E2EB4BFE7CB8EFF3F";};


std::string & cTrAJ2_ExportProjImage::NameFileOut()
{
   return mNameFileOut;
}

const std::string & cTrAJ2_ExportProjImage::NameFileOut()const 
{
   return mNameFileOut;
}


std::string & cTrAJ2_ExportProjImage::KeySetOrPatIm()
{
   return mKeySetOrPatIm;
}

const std::string & cTrAJ2_ExportProjImage::KeySetOrPatIm()const 
{
   return mKeySetOrPatIm;
}


std::string & cTrAJ2_ExportProjImage::NameAppuis()
{
   return mNameAppuis;
}

const std::string & cTrAJ2_ExportProjImage::NameAppuis()const 
{
   return mNameAppuis;
}


std::string & cTrAJ2_ExportProjImage::KeyAssocIm2Or()
{
   return mKeyAssocIm2Or;
}

const std::string & cTrAJ2_ExportProjImage::KeyAssocIm2Or()const 
{
   return mKeyAssocIm2Or;
}


cTplValGesInit< std::string > & cTrAJ2_ExportProjImage::KeyGenerateTxt()
{
   return mKeyGenerateTxt;
}

const cTplValGesInit< std::string > & cTrAJ2_ExportProjImage::KeyGenerateTxt()const 
{
   return mKeyGenerateTxt;
}

void  BinaryUnDumpFromFile(cTrAJ2_ExportProjImage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.NameFileOut(),aFp);
    BinaryUnDumpFromFile(anObj.KeySetOrPatIm(),aFp);
    BinaryUnDumpFromFile(anObj.NameAppuis(),aFp);
    BinaryUnDumpFromFile(anObj.KeyAssocIm2Or(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.KeyGenerateTxt().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.KeyGenerateTxt().ValForcedForUnUmp(),aFp);
        }
        else  anObj.KeyGenerateTxt().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cTrAJ2_ExportProjImage & anObj)
{
    BinaryDumpInFile(aFp,anObj.NameFileOut());
    BinaryDumpInFile(aFp,anObj.KeySetOrPatIm());
    BinaryDumpInFile(aFp,anObj.NameAppuis());
    BinaryDumpInFile(aFp,anObj.KeyAssocIm2Or());
    BinaryDumpInFile(aFp,anObj.KeyGenerateTxt().IsInit());
    if (anObj.KeyGenerateTxt().IsInit()) BinaryDumpInFile(aFp,anObj.KeyGenerateTxt().Val());
}

cElXMLTree * ToXMLTree(const cTrAJ2_ExportProjImage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"TrAJ2_ExportProjImage",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("NameFileOut"),anObj.NameFileOut())->ReTagThis("NameFileOut"));
   aRes->AddFils(::ToXMLTree(std::string("KeySetOrPatIm"),anObj.KeySetOrPatIm())->ReTagThis("KeySetOrPatIm"));
   aRes->AddFils(::ToXMLTree(std::string("NameAppuis"),anObj.NameAppuis())->ReTagThis("NameAppuis"));
   aRes->AddFils(::ToXMLTree(std::string("KeyAssocIm2Or"),anObj.KeyAssocIm2Or())->ReTagThis("KeyAssocIm2Or"));
   if (anObj.KeyGenerateTxt().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("KeyGenerateTxt"),anObj.KeyGenerateTxt().Val())->ReTagThis("KeyGenerateTxt"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cTrAJ2_ExportProjImage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.NameFileOut(),aTree->Get("NameFileOut",1)); //tototo 

   xml_init(anObj.KeySetOrPatIm(),aTree->Get("KeySetOrPatIm",1)); //tototo 

   xml_init(anObj.NameAppuis(),aTree->Get("NameAppuis",1)); //tototo 

   xml_init(anObj.KeyAssocIm2Or(),aTree->Get("KeyAssocIm2Or",1)); //tototo 

   xml_init(anObj.KeyGenerateTxt(),aTree->Get("KeyGenerateTxt",1)); //tototo 
}

std::string  Mangling( cTrAJ2_ExportProjImage *) {return "7704A0852B45EC97FE3F";};


cTplValGesInit< cChantierDescripteur > & cParam_Traj_AJ::DicoLoc()
{
   return mDicoLoc;
}

const cTplValGesInit< cChantierDescripteur > & cParam_Traj_AJ::DicoLoc()const 
{
   return mDicoLoc;
}


std::list< cTrAJ2_SectionImages > & cParam_Traj_AJ::TrAJ2_SectionImages()
{
   return mTrAJ2_SectionImages;
}

const std::list< cTrAJ2_SectionImages > & cParam_Traj_AJ::TrAJ2_SectionImages()const 
{
   return mTrAJ2_SectionImages;
}


cTplValGesInit< cElRegex_Ptr > & cParam_Traj_AJ::TraceImages()
{
   return mTraceImages;
}

const cTplValGesInit< cElRegex_Ptr > & cParam_Traj_AJ::TraceImages()const 
{
   return mTraceImages;
}


cTplValGesInit< cElRegex_Ptr > & cParam_Traj_AJ::TraceLogs()
{
   return mTraceLogs;
}

const cTplValGesInit< cElRegex_Ptr > & cParam_Traj_AJ::TraceLogs()const 
{
   return mTraceLogs;
}


std::list< cTrAJ2_SectionLog > & cParam_Traj_AJ::TrAJ2_SectionLog()
{
   return mTrAJ2_SectionLog;
}

const std::list< cTrAJ2_SectionLog > & cParam_Traj_AJ::TrAJ2_SectionLog()const 
{
   return mTrAJ2_SectionLog;
}


std::list< cTrAJ2_SectionMatch > & cParam_Traj_AJ::TrAJ2_SectionMatch()
{
   return mTrAJ2_SectionMatch;
}

const std::list< cTrAJ2_SectionMatch > & cParam_Traj_AJ::TrAJ2_SectionMatch()const 
{
   return mTrAJ2_SectionMatch;
}


std::list< cTrAJ2_ConvertionAppuis > & cParam_Traj_AJ::TrAJ2_ConvertionAppuis()
{
   return mTrAJ2_ConvertionAppuis;
}

const std::list< cTrAJ2_ConvertionAppuis > & cParam_Traj_AJ::TrAJ2_ConvertionAppuis()const 
{
   return mTrAJ2_ConvertionAppuis;
}


std::list< cTrAJ2_ExportProjImage > & cParam_Traj_AJ::TrAJ2_ExportProjImage()
{
   return mTrAJ2_ExportProjImage;
}

const std::list< cTrAJ2_ExportProjImage > & cParam_Traj_AJ::TrAJ2_ExportProjImage()const 
{
   return mTrAJ2_ExportProjImage;
}

void  BinaryUnDumpFromFile(cParam_Traj_AJ & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DicoLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DicoLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DicoLoc().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTrAJ2_SectionImages aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TrAJ2_SectionImages().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TraceImages().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TraceImages().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TraceImages().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TraceLogs().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TraceLogs().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TraceLogs().SetNoInit();
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTrAJ2_SectionLog aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TrAJ2_SectionLog().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTrAJ2_SectionMatch aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TrAJ2_SectionMatch().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTrAJ2_ConvertionAppuis aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TrAJ2_ConvertionAppuis().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             cTrAJ2_ExportProjImage aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.TrAJ2_ExportProjImage().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParam_Traj_AJ & anObj)
{
    BinaryDumpInFile(aFp,anObj.DicoLoc().IsInit());
    if (anObj.DicoLoc().IsInit()) BinaryDumpInFile(aFp,anObj.DicoLoc().Val());
    BinaryDumpInFile(aFp,(int)anObj.TrAJ2_SectionImages().size());
    for(  std::list< cTrAJ2_SectionImages >::const_iterator iT=anObj.TrAJ2_SectionImages().begin();
         iT!=anObj.TrAJ2_SectionImages().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.TraceImages().IsInit());
    if (anObj.TraceImages().IsInit()) BinaryDumpInFile(aFp,anObj.TraceImages().Val());
    BinaryDumpInFile(aFp,anObj.TraceLogs().IsInit());
    if (anObj.TraceLogs().IsInit()) BinaryDumpInFile(aFp,anObj.TraceLogs().Val());
    BinaryDumpInFile(aFp,(int)anObj.TrAJ2_SectionLog().size());
    for(  std::list< cTrAJ2_SectionLog >::const_iterator iT=anObj.TrAJ2_SectionLog().begin();
         iT!=anObj.TrAJ2_SectionLog().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.TrAJ2_SectionMatch().size());
    for(  std::list< cTrAJ2_SectionMatch >::const_iterator iT=anObj.TrAJ2_SectionMatch().begin();
         iT!=anObj.TrAJ2_SectionMatch().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.TrAJ2_ConvertionAppuis().size());
    for(  std::list< cTrAJ2_ConvertionAppuis >::const_iterator iT=anObj.TrAJ2_ConvertionAppuis().begin();
         iT!=anObj.TrAJ2_ConvertionAppuis().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.TrAJ2_ExportProjImage().size());
    for(  std::list< cTrAJ2_ExportProjImage >::const_iterator iT=anObj.TrAJ2_ExportProjImage().begin();
         iT!=anObj.TrAJ2_ExportProjImage().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cParam_Traj_AJ & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"Param_Traj_AJ",eXMLBranche);
   if (anObj.DicoLoc().IsInit())
      aRes->AddFils(ToXMLTree(anObj.DicoLoc().Val())->ReTagThis("DicoLoc"));
  for
  (       std::list< cTrAJ2_SectionImages >::const_iterator it=anObj.TrAJ2_SectionImages().begin();
      it !=anObj.TrAJ2_SectionImages().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TrAJ2_SectionImages"));
   if (anObj.TraceImages().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TraceImages"),anObj.TraceImages().Val())->ReTagThis("TraceImages"));
   if (anObj.TraceLogs().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TraceLogs"),anObj.TraceLogs().Val())->ReTagThis("TraceLogs"));
  for
  (       std::list< cTrAJ2_SectionLog >::const_iterator it=anObj.TrAJ2_SectionLog().begin();
      it !=anObj.TrAJ2_SectionLog().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TrAJ2_SectionLog"));
  for
  (       std::list< cTrAJ2_SectionMatch >::const_iterator it=anObj.TrAJ2_SectionMatch().begin();
      it !=anObj.TrAJ2_SectionMatch().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TrAJ2_SectionMatch"));
  for
  (       std::list< cTrAJ2_ConvertionAppuis >::const_iterator it=anObj.TrAJ2_ConvertionAppuis().begin();
      it !=anObj.TrAJ2_ConvertionAppuis().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TrAJ2_ConvertionAppuis"));
  for
  (       std::list< cTrAJ2_ExportProjImage >::const_iterator it=anObj.TrAJ2_ExportProjImage().begin();
      it !=anObj.TrAJ2_ExportProjImage().end();
      it++
  ) 
      aRes->AddFils(ToXMLTree((*it))->ReTagThis("TrAJ2_ExportProjImage"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParam_Traj_AJ & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DicoLoc(),aTree->Get("DicoLoc",1)); //tototo 

   xml_init(anObj.TrAJ2_SectionImages(),aTree->GetAll("TrAJ2_SectionImages",false,1));

   xml_init(anObj.TraceImages(),aTree->Get("TraceImages",1)); //tototo 

   xml_init(anObj.TraceLogs(),aTree->Get("TraceLogs",1)); //tototo 

   xml_init(anObj.TrAJ2_SectionLog(),aTree->GetAll("TrAJ2_SectionLog",false,1));

   xml_init(anObj.TrAJ2_SectionMatch(),aTree->GetAll("TrAJ2_SectionMatch",false,1));

   xml_init(anObj.TrAJ2_ConvertionAppuis(),aTree->GetAll("TrAJ2_ConvertionAppuis",false,1));

   xml_init(anObj.TrAJ2_ExportProjImage(),aTree->GetAll("TrAJ2_ExportProjImage",false,1));
}

std::string  Mangling( cParam_Traj_AJ *) {return "AC00832AB44F8BCBFCBF";};


std::list< std::string > & cParamGenereStr::KeySet()
{
   return mKeySet;
}

const std::list< std::string > & cParamGenereStr::KeySet()const 
{
   return mKeySet;
}


std::list< std::string > & cParamGenereStr::KeyString()
{
   return mKeyString;
}

const std::list< std::string > & cParamGenereStr::KeyString()const 
{
   return mKeyString;
}

void  BinaryUnDumpFromFile(cParamGenereStr & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeySet().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeyString().push_back(aVal);
        }
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamGenereStr & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.KeySet().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeySet().begin();
         iT!=anObj.KeySet().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.KeyString().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeyString().begin();
         iT!=anObj.KeyString().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
}

cElXMLTree * ToXMLTree(const cParamGenereStr & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamGenereStr",eXMLBranche);
  for
  (       std::list< std::string >::const_iterator it=anObj.KeySet().begin();
      it !=anObj.KeySet().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeySet"),(*it))->ReTagThis("KeySet"));
  for
  (       std::list< std::string >::const_iterator it=anObj.KeyString().begin();
      it !=anObj.KeyString().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeyString"),(*it))->ReTagThis("KeyString"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamGenereStr & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KeySet(),aTree->GetAll("KeySet",false,1));

   xml_init(anObj.KeyString(),aTree->GetAll("KeyString",false,1));
}

std::string  Mangling( cParamGenereStr *) {return "A7386BF2F0267BBCFE3F";};


std::list< std::string > & cParamGenereStrVois::KeyRel()
{
   return mKeyRel;
}

const std::list< std::string > & cParamGenereStrVois::KeyRel()const 
{
   return mKeyRel;
}


std::list< std::string > & cParamGenereStrVois::KeyString()
{
   return mKeyString;
}

const std::list< std::string > & cParamGenereStrVois::KeyString()const 
{
   return mKeyString;
}


std::list< std::string > & cParamGenereStrVois::KeySet()
{
   return mKeySet;
}

const std::list< std::string > & cParamGenereStrVois::KeySet()const 
{
   return mKeySet;
}


cTplValGesInit< bool > & cParamGenereStrVois::UseIt()
{
   return mUseIt;
}

const cTplValGesInit< bool > & cParamGenereStrVois::UseIt()const 
{
   return mUseIt;
}

void  BinaryUnDumpFromFile(cParamGenereStrVois & anObj,ELISE_fp & aFp)
{
   { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeyRel().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeyString().push_back(aVal);
        }
  } ;
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             std::string aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.KeySet().push_back(aVal);
        }
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.UseIt().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.UseIt().ValForcedForUnUmp(),aFp);
        }
        else  anObj.UseIt().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamGenereStrVois & anObj)
{
    BinaryDumpInFile(aFp,(int)anObj.KeyRel().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeyRel().begin();
         iT!=anObj.KeyRel().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.KeyString().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeyString().begin();
         iT!=anObj.KeyString().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,(int)anObj.KeySet().size());
    for(  std::list< std::string >::const_iterator iT=anObj.KeySet().begin();
         iT!=anObj.KeySet().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.UseIt().IsInit());
    if (anObj.UseIt().IsInit()) BinaryDumpInFile(aFp,anObj.UseIt().Val());
}

cElXMLTree * ToXMLTree(const cParamGenereStrVois & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamGenereStrVois",eXMLBranche);
  for
  (       std::list< std::string >::const_iterator it=anObj.KeyRel().begin();
      it !=anObj.KeyRel().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeyRel"),(*it))->ReTagThis("KeyRel"));
  for
  (       std::list< std::string >::const_iterator it=anObj.KeyString().begin();
      it !=anObj.KeyString().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeyString"),(*it))->ReTagThis("KeyString"));
  for
  (       std::list< std::string >::const_iterator it=anObj.KeySet().begin();
      it !=anObj.KeySet().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("KeySet"),(*it))->ReTagThis("KeySet"));
   if (anObj.UseIt().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("UseIt"),anObj.UseIt().Val())->ReTagThis("UseIt"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamGenereStrVois & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KeyRel(),aTree->GetAll("KeyRel",false,1));

   xml_init(anObj.KeyString(),aTree->GetAll("KeyString",false,1));

   xml_init(anObj.KeySet(),aTree->GetAll("KeySet",false,1));

   xml_init(anObj.UseIt(),aTree->Get("UseIt",1),bool(false)); //tototo 
}

std::string  Mangling( cParamGenereStrVois *) {return "5602F34AB62664E3FF3F";};


cTplValGesInit< int > & cParamFiltreDetecRegulProf::SzCC()
{
   return mSzCC;
}

const cTplValGesInit< int > & cParamFiltreDetecRegulProf::SzCC()const 
{
   return mSzCC;
}


cTplValGesInit< double > & cParamFiltreDetecRegulProf::PondZ()
{
   return mPondZ;
}

const cTplValGesInit< double > & cParamFiltreDetecRegulProf::PondZ()const 
{
   return mPondZ;
}


cTplValGesInit< double > & cParamFiltreDetecRegulProf::Pente()
{
   return mPente;
}

const cTplValGesInit< double > & cParamFiltreDetecRegulProf::Pente()const 
{
   return mPente;
}


cTplValGesInit< double > & cParamFiltreDetecRegulProf::SeuilReg()
{
   return mSeuilReg;
}

const cTplValGesInit< double > & cParamFiltreDetecRegulProf::SeuilReg()const 
{
   return mSeuilReg;
}


cTplValGesInit< bool > & cParamFiltreDetecRegulProf::V4()
{
   return mV4;
}

const cTplValGesInit< bool > & cParamFiltreDetecRegulProf::V4()const 
{
   return mV4;
}


cTplValGesInit< int > & cParamFiltreDetecRegulProf::NbCCInit()
{
   return mNbCCInit;
}

const cTplValGesInit< int > & cParamFiltreDetecRegulProf::NbCCInit()const 
{
   return mNbCCInit;
}


cTplValGesInit< std::string > & cParamFiltreDetecRegulProf::NameTest()
{
   return mNameTest;
}

const cTplValGesInit< std::string > & cParamFiltreDetecRegulProf::NameTest()const 
{
   return mNameTest;
}

void  BinaryUnDumpFromFile(cParamFiltreDetecRegulProf & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzCC().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzCC().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzCC().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PondZ().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PondZ().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PondZ().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.Pente().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.Pente().ValForcedForUnUmp(),aFp);
        }
        else  anObj.Pente().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SeuilReg().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SeuilReg().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SeuilReg().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.V4().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.V4().ValForcedForUnUmp(),aFp);
        }
        else  anObj.V4().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NbCCInit().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NbCCInit().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NbCCInit().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NameTest().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NameTest().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NameTest().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamFiltreDetecRegulProf & anObj)
{
    BinaryDumpInFile(aFp,anObj.SzCC().IsInit());
    if (anObj.SzCC().IsInit()) BinaryDumpInFile(aFp,anObj.SzCC().Val());
    BinaryDumpInFile(aFp,anObj.PondZ().IsInit());
    if (anObj.PondZ().IsInit()) BinaryDumpInFile(aFp,anObj.PondZ().Val());
    BinaryDumpInFile(aFp,anObj.Pente().IsInit());
    if (anObj.Pente().IsInit()) BinaryDumpInFile(aFp,anObj.Pente().Val());
    BinaryDumpInFile(aFp,anObj.SeuilReg().IsInit());
    if (anObj.SeuilReg().IsInit()) BinaryDumpInFile(aFp,anObj.SeuilReg().Val());
    BinaryDumpInFile(aFp,anObj.V4().IsInit());
    if (anObj.V4().IsInit()) BinaryDumpInFile(aFp,anObj.V4().Val());
    BinaryDumpInFile(aFp,anObj.NbCCInit().IsInit());
    if (anObj.NbCCInit().IsInit()) BinaryDumpInFile(aFp,anObj.NbCCInit().Val());
    BinaryDumpInFile(aFp,anObj.NameTest().IsInit());
    if (anObj.NameTest().IsInit()) BinaryDumpInFile(aFp,anObj.NameTest().Val());
}

cElXMLTree * ToXMLTree(const cParamFiltreDetecRegulProf & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamFiltreDetecRegulProf",eXMLBranche);
   if (anObj.SzCC().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzCC"),anObj.SzCC().Val())->ReTagThis("SzCC"));
   if (anObj.PondZ().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PondZ"),anObj.PondZ().Val())->ReTagThis("PondZ"));
   if (anObj.Pente().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("Pente"),anObj.Pente().Val())->ReTagThis("Pente"));
   if (anObj.SeuilReg().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SeuilReg"),anObj.SeuilReg().Val())->ReTagThis("SeuilReg"));
   if (anObj.V4().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("V4"),anObj.V4().Val())->ReTagThis("V4"));
   if (anObj.NbCCInit().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NbCCInit"),anObj.NbCCInit().Val())->ReTagThis("NbCCInit"));
   if (anObj.NameTest().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NameTest"),anObj.NameTest().Val())->ReTagThis("NameTest"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamFiltreDetecRegulProf & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SzCC(),aTree->Get("SzCC",1),int(2)); //tototo 

   xml_init(anObj.PondZ(),aTree->Get("PondZ",1),double(2.0)); //tototo 

   xml_init(anObj.Pente(),aTree->Get("Pente",1),double(0.5)); //tototo 

   xml_init(anObj.SeuilReg(),aTree->Get("SeuilReg",1),double(0.5)); //tototo 

   xml_init(anObj.V4(),aTree->Get("V4",1),bool(false)); //tototo 

   xml_init(anObj.NbCCInit(),aTree->Get("NbCCInit",1),int(5)); //tototo 

   xml_init(anObj.NameTest(),aTree->Get("NameTest",1)); //tototo 
}

std::string  Mangling( cParamFiltreDetecRegulProf *) {return "C0E06AF186A5CD90F8BF";};


std::string & cSectionName::KeyNuage()
{
   return mKeyNuage;
}

const std::string & cSectionName::KeyNuage()const 
{
   return mKeyNuage;
}


std::string & cSectionName::KeyResult()
{
   return mKeyResult;
}

const std::string & cSectionName::KeyResult()const 
{
   return mKeyResult;
}


cTplValGesInit< std::string > & cSectionName::ModeleNuageResult()
{
   return mModeleNuageResult;
}

const cTplValGesInit< std::string > & cSectionName::ModeleNuageResult()const 
{
   return mModeleNuageResult;
}

void  BinaryUnDumpFromFile(cSectionName & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.KeyNuage(),aFp);
    BinaryUnDumpFromFile(anObj.KeyResult(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ModeleNuageResult().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ModeleNuageResult().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ModeleNuageResult().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionName & anObj)
{
    BinaryDumpInFile(aFp,anObj.KeyNuage());
    BinaryDumpInFile(aFp,anObj.KeyResult());
    BinaryDumpInFile(aFp,anObj.ModeleNuageResult().IsInit());
    if (anObj.ModeleNuageResult().IsInit()) BinaryDumpInFile(aFp,anObj.ModeleNuageResult().Val());
}

cElXMLTree * ToXMLTree(const cSectionName & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionName",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("KeyNuage"),anObj.KeyNuage())->ReTagThis("KeyNuage"));
   aRes->AddFils(::ToXMLTree(std::string("KeyResult"),anObj.KeyResult())->ReTagThis("KeyResult"));
   if (anObj.ModeleNuageResult().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ModeleNuageResult"),anObj.ModeleNuageResult().Val())->ReTagThis("ModeleNuageResult"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionName & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.KeyNuage(),aTree->Get("KeyNuage",1)); //tototo 

   xml_init(anObj.KeyResult(),aTree->Get("KeyResult",1)); //tototo 

   xml_init(anObj.ModeleNuageResult(),aTree->Get("ModeleNuageResult",1)); //tototo 
}

std::string  Mangling( cSectionName *) {return "5B912DF9925F0398FE3F";};


cTplValGesInit< bool > & cScoreMM1P::MakeFileResult()
{
   return mMakeFileResult;
}

const cTplValGesInit< bool > & cScoreMM1P::MakeFileResult()const 
{
   return mMakeFileResult;
}


cTplValGesInit< double > & cScoreMM1P::PdsAR()
{
   return mPdsAR;
}

const cTplValGesInit< double > & cScoreMM1P::PdsAR()const 
{
   return mPdsAR;
}


cTplValGesInit< double > & cScoreMM1P::PdsDistor()
{
   return mPdsDistor;
}

const cTplValGesInit< double > & cScoreMM1P::PdsDistor()const 
{
   return mPdsDistor;
}


cTplValGesInit< double > & cScoreMM1P::AmplImDistor()
{
   return mAmplImDistor;
}

const cTplValGesInit< double > & cScoreMM1P::AmplImDistor()const 
{
   return mAmplImDistor;
}


cTplValGesInit< double > & cScoreMM1P::SeuilDist()
{
   return mSeuilDist;
}

const cTplValGesInit< double > & cScoreMM1P::SeuilDist()const 
{
   return mSeuilDist;
}


cTplValGesInit< double > & cScoreMM1P::PdsDistBord()
{
   return mPdsDistBord;
}

const cTplValGesInit< double > & cScoreMM1P::PdsDistBord()const 
{
   return mPdsDistBord;
}


cTplValGesInit< double > & cScoreMM1P::SeuilDisBord()
{
   return mSeuilDisBord;
}

const cTplValGesInit< double > & cScoreMM1P::SeuilDisBord()const 
{
   return mSeuilDisBord;
}

void  BinaryUnDumpFromFile(cScoreMM1P & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MakeFileResult().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MakeFileResult().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MakeFileResult().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PdsAR().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PdsAR().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PdsAR().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PdsDistor().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PdsDistor().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PdsDistor().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.AmplImDistor().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.AmplImDistor().ValForcedForUnUmp(),aFp);
        }
        else  anObj.AmplImDistor().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SeuilDist().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SeuilDist().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SeuilDist().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.PdsDistBord().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.PdsDistBord().ValForcedForUnUmp(),aFp);
        }
        else  anObj.PdsDistBord().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SeuilDisBord().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SeuilDisBord().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SeuilDisBord().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cScoreMM1P & anObj)
{
    BinaryDumpInFile(aFp,anObj.MakeFileResult().IsInit());
    if (anObj.MakeFileResult().IsInit()) BinaryDumpInFile(aFp,anObj.MakeFileResult().Val());
    BinaryDumpInFile(aFp,anObj.PdsAR().IsInit());
    if (anObj.PdsAR().IsInit()) BinaryDumpInFile(aFp,anObj.PdsAR().Val());
    BinaryDumpInFile(aFp,anObj.PdsDistor().IsInit());
    if (anObj.PdsDistor().IsInit()) BinaryDumpInFile(aFp,anObj.PdsDistor().Val());
    BinaryDumpInFile(aFp,anObj.AmplImDistor().IsInit());
    if (anObj.AmplImDistor().IsInit()) BinaryDumpInFile(aFp,anObj.AmplImDistor().Val());
    BinaryDumpInFile(aFp,anObj.SeuilDist().IsInit());
    if (anObj.SeuilDist().IsInit()) BinaryDumpInFile(aFp,anObj.SeuilDist().Val());
    BinaryDumpInFile(aFp,anObj.PdsDistBord().IsInit());
    if (anObj.PdsDistBord().IsInit()) BinaryDumpInFile(aFp,anObj.PdsDistBord().Val());
    BinaryDumpInFile(aFp,anObj.SeuilDisBord().IsInit());
    if (anObj.SeuilDisBord().IsInit()) BinaryDumpInFile(aFp,anObj.SeuilDisBord().Val());
}

cElXMLTree * ToXMLTree(const cScoreMM1P & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ScoreMM1P",eXMLBranche);
   if (anObj.MakeFileResult().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("MakeFileResult"),anObj.MakeFileResult().Val())->ReTagThis("MakeFileResult"));
   if (anObj.PdsAR().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PdsAR"),anObj.PdsAR().Val())->ReTagThis("PdsAR"));
   if (anObj.PdsDistor().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PdsDistor"),anObj.PdsDistor().Val())->ReTagThis("PdsDistor"));
   if (anObj.AmplImDistor().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("AmplImDistor"),anObj.AmplImDistor().Val())->ReTagThis("AmplImDistor"));
   if (anObj.SeuilDist().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SeuilDist"),anObj.SeuilDist().Val())->ReTagThis("SeuilDist"));
   if (anObj.PdsDistBord().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("PdsDistBord"),anObj.PdsDistBord().Val())->ReTagThis("PdsDistBord"));
   if (anObj.SeuilDisBord().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SeuilDisBord"),anObj.SeuilDisBord().Val())->ReTagThis("SeuilDisBord"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cScoreMM1P & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.MakeFileResult(),aTree->Get("MakeFileResult",1),bool(false)); //tototo 

   xml_init(anObj.PdsAR(),aTree->Get("PdsAR",1),double(1.0)); //tototo 

   xml_init(anObj.PdsDistor(),aTree->Get("PdsDistor",1),double(0.5)); //tototo 

   xml_init(anObj.AmplImDistor(),aTree->Get("AmplImDistor",1),double(100.0)); //tototo 

   xml_init(anObj.SeuilDist(),aTree->Get("SeuilDist",1),double(0.5)); //tototo 

   xml_init(anObj.PdsDistBord(),aTree->Get("PdsDistBord",1),double(0.25)); //tototo 

   xml_init(anObj.SeuilDisBord(),aTree->Get("SeuilDisBord",1),double(3.0)); //tototo 
}

std::string  Mangling( cScoreMM1P *) {return "E0AFC1629CC7EA80F93F";};


cTplValGesInit< bool > & cSectionScoreQualite::MakeFileResult()
{
   return ScoreMM1P().Val().MakeFileResult();
}

const cTplValGesInit< bool > & cSectionScoreQualite::MakeFileResult()const 
{
   return ScoreMM1P().Val().MakeFileResult();
}


cTplValGesInit< double > & cSectionScoreQualite::PdsAR()
{
   return ScoreMM1P().Val().PdsAR();
}

const cTplValGesInit< double > & cSectionScoreQualite::PdsAR()const 
{
   return ScoreMM1P().Val().PdsAR();
}


cTplValGesInit< double > & cSectionScoreQualite::PdsDistor()
{
   return ScoreMM1P().Val().PdsDistor();
}

const cTplValGesInit< double > & cSectionScoreQualite::PdsDistor()const 
{
   return ScoreMM1P().Val().PdsDistor();
}


cTplValGesInit< double > & cSectionScoreQualite::AmplImDistor()
{
   return ScoreMM1P().Val().AmplImDistor();
}

const cTplValGesInit< double > & cSectionScoreQualite::AmplImDistor()const 
{
   return ScoreMM1P().Val().AmplImDistor();
}


cTplValGesInit< double > & cSectionScoreQualite::SeuilDist()
{
   return ScoreMM1P().Val().SeuilDist();
}

const cTplValGesInit< double > & cSectionScoreQualite::SeuilDist()const 
{
   return ScoreMM1P().Val().SeuilDist();
}


cTplValGesInit< double > & cSectionScoreQualite::PdsDistBord()
{
   return ScoreMM1P().Val().PdsDistBord();
}

const cTplValGesInit< double > & cSectionScoreQualite::PdsDistBord()const 
{
   return ScoreMM1P().Val().PdsDistBord();
}


cTplValGesInit< double > & cSectionScoreQualite::SeuilDisBord()
{
   return ScoreMM1P().Val().SeuilDisBord();
}

const cTplValGesInit< double > & cSectionScoreQualite::SeuilDisBord()const 
{
   return ScoreMM1P().Val().SeuilDisBord();
}


cTplValGesInit< cScoreMM1P > & cSectionScoreQualite::ScoreMM1P()
{
   return mScoreMM1P;
}

const cTplValGesInit< cScoreMM1P > & cSectionScoreQualite::ScoreMM1P()const 
{
   return mScoreMM1P;
}

void  BinaryUnDumpFromFile(cSectionScoreQualite & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ScoreMM1P().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ScoreMM1P().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ScoreMM1P().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionScoreQualite & anObj)
{
    BinaryDumpInFile(aFp,anObj.ScoreMM1P().IsInit());
    if (anObj.ScoreMM1P().IsInit()) BinaryDumpInFile(aFp,anObj.ScoreMM1P().Val());
}

cElXMLTree * ToXMLTree(const cSectionScoreQualite & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionScoreQualite",eXMLBranche);
   if (anObj.ScoreMM1P().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ScoreMM1P().Val())->ReTagThis("ScoreMM1P"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionScoreQualite & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.ScoreMM1P(),aTree->Get("ScoreMM1P",1)); //tototo 
}

std::string  Mangling( cSectionScoreQualite *) {return "FFCCF5B2999648F7FE3F";};


double & cFMNT_GesNoVal::PenteMax()
{
   return mPenteMax;
}

const double & cFMNT_GesNoVal::PenteMax()const 
{
   return mPenteMax;
}


double & cFMNT_GesNoVal::CostNoVal()
{
   return mCostNoVal;
}

const double & cFMNT_GesNoVal::CostNoVal()const 
{
   return mCostNoVal;
}


double & cFMNT_GesNoVal::Trans()
{
   return mTrans;
}

const double & cFMNT_GesNoVal::Trans()const 
{
   return mTrans;
}

void  BinaryUnDumpFromFile(cFMNT_GesNoVal & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.PenteMax(),aFp);
    BinaryUnDumpFromFile(anObj.CostNoVal(),aFp);
    BinaryUnDumpFromFile(anObj.Trans(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFMNT_GesNoVal & anObj)
{
    BinaryDumpInFile(aFp,anObj.PenteMax());
    BinaryDumpInFile(aFp,anObj.CostNoVal());
    BinaryDumpInFile(aFp,anObj.Trans());
}

cElXMLTree * ToXMLTree(const cFMNT_GesNoVal & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"FMNT_GesNoVal",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("PenteMax"),anObj.PenteMax())->ReTagThis("PenteMax"));
   aRes->AddFils(::ToXMLTree(std::string("CostNoVal"),anObj.CostNoVal())->ReTagThis("CostNoVal"));
   aRes->AddFils(::ToXMLTree(std::string("Trans"),anObj.Trans())->ReTagThis("Trans"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFMNT_GesNoVal & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.PenteMax(),aTree->Get("PenteMax",1)); //tototo 

   xml_init(anObj.CostNoVal(),aTree->Get("CostNoVal",1)); //tototo 

   xml_init(anObj.Trans(),aTree->Get("Trans",1)); //tototo 
}

std::string  Mangling( cFMNT_GesNoVal *) {return "503C4A997C39D7ADFF3F";};


double & cFMNT_ProgDyn::Regul()
{
   return mRegul;
}

const double & cFMNT_ProgDyn::Regul()const 
{
   return mRegul;
}


double & cFMNT_ProgDyn::Sigma0()
{
   return mSigma0;
}

const double & cFMNT_ProgDyn::Sigma0()const 
{
   return mSigma0;
}


int & cFMNT_ProgDyn::NbDir()
{
   return mNbDir;
}

const int & cFMNT_ProgDyn::NbDir()const 
{
   return mNbDir;
}


double & cFMNT_ProgDyn::PenteMax()
{
   return FMNT_GesNoVal().Val().PenteMax();
}

const double & cFMNT_ProgDyn::PenteMax()const 
{
   return FMNT_GesNoVal().Val().PenteMax();
}


double & cFMNT_ProgDyn::CostNoVal()
{
   return FMNT_GesNoVal().Val().CostNoVal();
}

const double & cFMNT_ProgDyn::CostNoVal()const 
{
   return FMNT_GesNoVal().Val().CostNoVal();
}


double & cFMNT_ProgDyn::Trans()
{
   return FMNT_GesNoVal().Val().Trans();
}

const double & cFMNT_ProgDyn::Trans()const 
{
   return FMNT_GesNoVal().Val().Trans();
}


cTplValGesInit< cFMNT_GesNoVal > & cFMNT_ProgDyn::FMNT_GesNoVal()
{
   return mFMNT_GesNoVal;
}

const cTplValGesInit< cFMNT_GesNoVal > & cFMNT_ProgDyn::FMNT_GesNoVal()const 
{
   return mFMNT_GesNoVal;
}

void  BinaryUnDumpFromFile(cFMNT_ProgDyn & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Regul(),aFp);
    BinaryUnDumpFromFile(anObj.Sigma0(),aFp);
    BinaryUnDumpFromFile(anObj.NbDir(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FMNT_GesNoVal().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FMNT_GesNoVal().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FMNT_GesNoVal().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cFMNT_ProgDyn & anObj)
{
    BinaryDumpInFile(aFp,anObj.Regul());
    BinaryDumpInFile(aFp,anObj.Sigma0());
    BinaryDumpInFile(aFp,anObj.NbDir());
    BinaryDumpInFile(aFp,anObj.FMNT_GesNoVal().IsInit());
    if (anObj.FMNT_GesNoVal().IsInit()) BinaryDumpInFile(aFp,anObj.FMNT_GesNoVal().Val());
}

cElXMLTree * ToXMLTree(const cFMNT_ProgDyn & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"FMNT_ProgDyn",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("Regul"),anObj.Regul())->ReTagThis("Regul"));
   aRes->AddFils(::ToXMLTree(std::string("Sigma0"),anObj.Sigma0())->ReTagThis("Sigma0"));
   aRes->AddFils(::ToXMLTree(std::string("NbDir"),anObj.NbDir())->ReTagThis("NbDir"));
   if (anObj.FMNT_GesNoVal().IsInit())
      aRes->AddFils(ToXMLTree(anObj.FMNT_GesNoVal().Val())->ReTagThis("FMNT_GesNoVal"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cFMNT_ProgDyn & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Regul(),aTree->Get("Regul",1)); //tototo 

   xml_init(anObj.Sigma0(),aTree->Get("Sigma0",1)); //tototo 

   xml_init(anObj.NbDir(),aTree->Get("NbDir",1)); //tototo 

   xml_init(anObj.FMNT_GesNoVal(),aTree->Get("FMNT_GesNoVal",1)); //tototo 
}

std::string  Mangling( cFMNT_ProgDyn *) {return "B6FDC4C5B4D7F9C1FE3F";};


double & cSpecAlgoFMNT::SigmaPds()
{
   return mSigmaPds;
}

const double & cSpecAlgoFMNT::SigmaPds()const 
{
   return mSigmaPds;
}


cTplValGesInit< double > & cSpecAlgoFMNT::SigmaZ()
{
   return mSigmaZ;
}

const cTplValGesInit< double > & cSpecAlgoFMNT::SigmaZ()const 
{
   return mSigmaZ;
}


double & cSpecAlgoFMNT::SeuilMaxLoc()
{
   return mSeuilMaxLoc;
}

const double & cSpecAlgoFMNT::SeuilMaxLoc()const 
{
   return mSeuilMaxLoc;
}


double & cSpecAlgoFMNT::SeuilCptOk()
{
   return mSeuilCptOk;
}

const double & cSpecAlgoFMNT::SeuilCptOk()const 
{
   return mSeuilCptOk;
}


cTplValGesInit< double > & cSpecAlgoFMNT::MaxDif()
{
   return mMaxDif;
}

const cTplValGesInit< double > & cSpecAlgoFMNT::MaxDif()const 
{
   return mMaxDif;
}


cTplValGesInit< int > & cSpecAlgoFMNT::NBMaxMaxLoc()
{
   return mNBMaxMaxLoc;
}

const cTplValGesInit< int > & cSpecAlgoFMNT::NBMaxMaxLoc()const 
{
   return mNBMaxMaxLoc;
}


cTplValGesInit< bool > & cSpecAlgoFMNT::QuickExp()
{
   return mQuickExp;
}

const cTplValGesInit< bool > & cSpecAlgoFMNT::QuickExp()const 
{
   return mQuickExp;
}


double & cSpecAlgoFMNT::Regul()
{
   return FMNT_ProgDyn().Val().Regul();
}

const double & cSpecAlgoFMNT::Regul()const 
{
   return FMNT_ProgDyn().Val().Regul();
}


double & cSpecAlgoFMNT::Sigma0()
{
   return FMNT_ProgDyn().Val().Sigma0();
}

const double & cSpecAlgoFMNT::Sigma0()const 
{
   return FMNT_ProgDyn().Val().Sigma0();
}


int & cSpecAlgoFMNT::NbDir()
{
   return FMNT_ProgDyn().Val().NbDir();
}

const int & cSpecAlgoFMNT::NbDir()const 
{
   return FMNT_ProgDyn().Val().NbDir();
}


double & cSpecAlgoFMNT::PenteMax()
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}

const double & cSpecAlgoFMNT::PenteMax()const 
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}


double & cSpecAlgoFMNT::CostNoVal()
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}

const double & cSpecAlgoFMNT::CostNoVal()const 
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}


double & cSpecAlgoFMNT::Trans()
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}

const double & cSpecAlgoFMNT::Trans()const 
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}


cTplValGesInit< cFMNT_GesNoVal > & cSpecAlgoFMNT::FMNT_GesNoVal()
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal();
}

const cTplValGesInit< cFMNT_GesNoVal > & cSpecAlgoFMNT::FMNT_GesNoVal()const 
{
   return FMNT_ProgDyn().Val().FMNT_GesNoVal();
}


cTplValGesInit< cFMNT_ProgDyn > & cSpecAlgoFMNT::FMNT_ProgDyn()
{
   return mFMNT_ProgDyn;
}

const cTplValGesInit< cFMNT_ProgDyn > & cSpecAlgoFMNT::FMNT_ProgDyn()const 
{
   return mFMNT_ProgDyn;
}


cTplValGesInit< cParamFiltreDetecRegulProf > & cSpecAlgoFMNT::ParamRegProf()
{
   return mParamRegProf;
}

const cTplValGesInit< cParamFiltreDetecRegulProf > & cSpecAlgoFMNT::ParamRegProf()const 
{
   return mParamRegProf;
}

void  BinaryUnDumpFromFile(cSpecAlgoFMNT & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.SigmaPds(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SigmaZ().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SigmaZ().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SigmaZ().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.SeuilMaxLoc(),aFp);
    BinaryUnDumpFromFile(anObj.SeuilCptOk(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MaxDif().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MaxDif().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MaxDif().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.NBMaxMaxLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.NBMaxMaxLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.NBMaxMaxLoc().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.QuickExp().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.QuickExp().ValForcedForUnUmp(),aFp);
        }
        else  anObj.QuickExp().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.FMNT_ProgDyn().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.FMNT_ProgDyn().ValForcedForUnUmp(),aFp);
        }
        else  anObj.FMNT_ProgDyn().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ParamRegProf().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ParamRegProf().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ParamRegProf().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSpecAlgoFMNT & anObj)
{
    BinaryDumpInFile(aFp,anObj.SigmaPds());
    BinaryDumpInFile(aFp,anObj.SigmaZ().IsInit());
    if (anObj.SigmaZ().IsInit()) BinaryDumpInFile(aFp,anObj.SigmaZ().Val());
    BinaryDumpInFile(aFp,anObj.SeuilMaxLoc());
    BinaryDumpInFile(aFp,anObj.SeuilCptOk());
    BinaryDumpInFile(aFp,anObj.MaxDif().IsInit());
    if (anObj.MaxDif().IsInit()) BinaryDumpInFile(aFp,anObj.MaxDif().Val());
    BinaryDumpInFile(aFp,anObj.NBMaxMaxLoc().IsInit());
    if (anObj.NBMaxMaxLoc().IsInit()) BinaryDumpInFile(aFp,anObj.NBMaxMaxLoc().Val());
    BinaryDumpInFile(aFp,anObj.QuickExp().IsInit());
    if (anObj.QuickExp().IsInit()) BinaryDumpInFile(aFp,anObj.QuickExp().Val());
    BinaryDumpInFile(aFp,anObj.FMNT_ProgDyn().IsInit());
    if (anObj.FMNT_ProgDyn().IsInit()) BinaryDumpInFile(aFp,anObj.FMNT_ProgDyn().Val());
    BinaryDumpInFile(aFp,anObj.ParamRegProf().IsInit());
    if (anObj.ParamRegProf().IsInit()) BinaryDumpInFile(aFp,anObj.ParamRegProf().Val());
}

cElXMLTree * ToXMLTree(const cSpecAlgoFMNT & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SpecAlgoFMNT",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("SigmaPds"),anObj.SigmaPds())->ReTagThis("SigmaPds"));
   if (anObj.SigmaZ().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SigmaZ"),anObj.SigmaZ().Val())->ReTagThis("SigmaZ"));
   aRes->AddFils(::ToXMLTree(std::string("SeuilMaxLoc"),anObj.SeuilMaxLoc())->ReTagThis("SeuilMaxLoc"));
   aRes->AddFils(::ToXMLTree(std::string("SeuilCptOk"),anObj.SeuilCptOk())->ReTagThis("SeuilCptOk"));
   if (anObj.MaxDif().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("MaxDif"),anObj.MaxDif().Val())->ReTagThis("MaxDif"));
   if (anObj.NBMaxMaxLoc().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("NBMaxMaxLoc"),anObj.NBMaxMaxLoc().Val())->ReTagThis("NBMaxMaxLoc"));
   if (anObj.QuickExp().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("QuickExp"),anObj.QuickExp().Val())->ReTagThis("QuickExp"));
   if (anObj.FMNT_ProgDyn().IsInit())
      aRes->AddFils(ToXMLTree(anObj.FMNT_ProgDyn().Val())->ReTagThis("FMNT_ProgDyn"));
   if (anObj.ParamRegProf().IsInit())
      aRes->AddFils(ToXMLTree(anObj.ParamRegProf().Val())->ReTagThis("ParamRegProf"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSpecAlgoFMNT & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SigmaPds(),aTree->Get("SigmaPds",1)); //tototo 

   xml_init(anObj.SigmaZ(),aTree->Get("SigmaZ",1)); //tototo 

   xml_init(anObj.SeuilMaxLoc(),aTree->Get("SeuilMaxLoc",1)); //tototo 

   xml_init(anObj.SeuilCptOk(),aTree->Get("SeuilCptOk",1)); //tototo 

   xml_init(anObj.MaxDif(),aTree->Get("MaxDif",1),double(1e9)); //tototo 

   xml_init(anObj.NBMaxMaxLoc(),aTree->Get("NBMaxMaxLoc",1),int(5)); //tototo 

   xml_init(anObj.QuickExp(),aTree->Get("QuickExp",1),bool(false)); //tototo 

   xml_init(anObj.FMNT_ProgDyn(),aTree->Get("FMNT_ProgDyn",1)); //tototo 

   xml_init(anObj.ParamRegProf(),aTree->Get("ParamRegProf",1)); //tototo 
}

std::string  Mangling( cSpecAlgoFMNT *) {return "E05BB1244C2A88AEFC3F";};


double & cParamAlgoFusionMNT::FMNTSeuilCorrel()
{
   return mFMNTSeuilCorrel;
}

const double & cParamAlgoFusionMNT::FMNTSeuilCorrel()const 
{
   return mFMNTSeuilCorrel;
}


double & cParamAlgoFusionMNT::FMNTGammaCorrel()
{
   return mFMNTGammaCorrel;
}

const double & cParamAlgoFusionMNT::FMNTGammaCorrel()const 
{
   return mFMNTGammaCorrel;
}


double & cParamAlgoFusionMNT::SigmaPds()
{
   return SpecAlgoFMNT().SigmaPds();
}

const double & cParamAlgoFusionMNT::SigmaPds()const 
{
   return SpecAlgoFMNT().SigmaPds();
}


cTplValGesInit< double > & cParamAlgoFusionMNT::SigmaZ()
{
   return SpecAlgoFMNT().SigmaZ();
}

const cTplValGesInit< double > & cParamAlgoFusionMNT::SigmaZ()const 
{
   return SpecAlgoFMNT().SigmaZ();
}


double & cParamAlgoFusionMNT::SeuilMaxLoc()
{
   return SpecAlgoFMNT().SeuilMaxLoc();
}

const double & cParamAlgoFusionMNT::SeuilMaxLoc()const 
{
   return SpecAlgoFMNT().SeuilMaxLoc();
}


double & cParamAlgoFusionMNT::SeuilCptOk()
{
   return SpecAlgoFMNT().SeuilCptOk();
}

const double & cParamAlgoFusionMNT::SeuilCptOk()const 
{
   return SpecAlgoFMNT().SeuilCptOk();
}


cTplValGesInit< double > & cParamAlgoFusionMNT::MaxDif()
{
   return SpecAlgoFMNT().MaxDif();
}

const cTplValGesInit< double > & cParamAlgoFusionMNT::MaxDif()const 
{
   return SpecAlgoFMNT().MaxDif();
}


cTplValGesInit< int > & cParamAlgoFusionMNT::NBMaxMaxLoc()
{
   return SpecAlgoFMNT().NBMaxMaxLoc();
}

const cTplValGesInit< int > & cParamAlgoFusionMNT::NBMaxMaxLoc()const 
{
   return SpecAlgoFMNT().NBMaxMaxLoc();
}


cTplValGesInit< bool > & cParamAlgoFusionMNT::QuickExp()
{
   return SpecAlgoFMNT().QuickExp();
}

const cTplValGesInit< bool > & cParamAlgoFusionMNT::QuickExp()const 
{
   return SpecAlgoFMNT().QuickExp();
}


double & cParamAlgoFusionMNT::Regul()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().Regul();
}

const double & cParamAlgoFusionMNT::Regul()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().Regul();
}


double & cParamAlgoFusionMNT::Sigma0()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().Sigma0();
}

const double & cParamAlgoFusionMNT::Sigma0()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().Sigma0();
}


int & cParamAlgoFusionMNT::NbDir()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().NbDir();
}

const int & cParamAlgoFusionMNT::NbDir()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().NbDir();
}


double & cParamAlgoFusionMNT::PenteMax()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}

const double & cParamAlgoFusionMNT::PenteMax()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}


double & cParamAlgoFusionMNT::CostNoVal()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}

const double & cParamAlgoFusionMNT::CostNoVal()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}


double & cParamAlgoFusionMNT::Trans()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}

const double & cParamAlgoFusionMNT::Trans()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}


cTplValGesInit< cFMNT_GesNoVal > & cParamAlgoFusionMNT::FMNT_GesNoVal()
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal();
}

const cTplValGesInit< cFMNT_GesNoVal > & cParamAlgoFusionMNT::FMNT_GesNoVal()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal();
}


cTplValGesInit< cFMNT_ProgDyn > & cParamAlgoFusionMNT::FMNT_ProgDyn()
{
   return SpecAlgoFMNT().FMNT_ProgDyn();
}

const cTplValGesInit< cFMNT_ProgDyn > & cParamAlgoFusionMNT::FMNT_ProgDyn()const 
{
   return SpecAlgoFMNT().FMNT_ProgDyn();
}


cTplValGesInit< cParamFiltreDetecRegulProf > & cParamAlgoFusionMNT::ParamRegProf()
{
   return SpecAlgoFMNT().ParamRegProf();
}

const cTplValGesInit< cParamFiltreDetecRegulProf > & cParamAlgoFusionMNT::ParamRegProf()const 
{
   return SpecAlgoFMNT().ParamRegProf();
}


cSpecAlgoFMNT & cParamAlgoFusionMNT::SpecAlgoFMNT()
{
   return mSpecAlgoFMNT;
}

const cSpecAlgoFMNT & cParamAlgoFusionMNT::SpecAlgoFMNT()const 
{
   return mSpecAlgoFMNT;
}

void  BinaryUnDumpFromFile(cParamAlgoFusionMNT & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.FMNTSeuilCorrel(),aFp);
    BinaryUnDumpFromFile(anObj.FMNTGammaCorrel(),aFp);
    BinaryUnDumpFromFile(anObj.SpecAlgoFMNT(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamAlgoFusionMNT & anObj)
{
    BinaryDumpInFile(aFp,anObj.FMNTSeuilCorrel());
    BinaryDumpInFile(aFp,anObj.FMNTGammaCorrel());
    BinaryDumpInFile(aFp,anObj.SpecAlgoFMNT());
}

cElXMLTree * ToXMLTree(const cParamAlgoFusionMNT & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamAlgoFusionMNT",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("FMNTSeuilCorrel"),anObj.FMNTSeuilCorrel())->ReTagThis("FMNTSeuilCorrel"));
   aRes->AddFils(::ToXMLTree(std::string("FMNTGammaCorrel"),anObj.FMNTGammaCorrel())->ReTagThis("FMNTGammaCorrel"));
   aRes->AddFils(ToXMLTree(anObj.SpecAlgoFMNT())->ReTagThis("SpecAlgoFMNT"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamAlgoFusionMNT & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.FMNTSeuilCorrel(),aTree->Get("FMNTSeuilCorrel",1)); //tototo 

   xml_init(anObj.FMNTGammaCorrel(),aTree->Get("FMNTGammaCorrel",1)); //tototo 

   xml_init(anObj.SpecAlgoFMNT(),aTree->Get("SpecAlgoFMNT",1)); //tototo 
}

std::string  Mangling( cParamAlgoFusionMNT *) {return "7E33E6777BC045CFFE3F";};


cTplValGesInit< int > & cSectionGestionChantier::SzDalles()
{
   return mSzDalles;
}

const cTplValGesInit< int > & cSectionGestionChantier::SzDalles()const 
{
   return mSzDalles;
}


cTplValGesInit< int > & cSectionGestionChantier::RecouvrtDalles()
{
   return mRecouvrtDalles;
}

const cTplValGesInit< int > & cSectionGestionChantier::RecouvrtDalles()const 
{
   return mRecouvrtDalles;
}


cTplValGesInit< std::string > & cSectionGestionChantier::ParalMkF()
{
   return mParalMkF;
}

const cTplValGesInit< std::string > & cSectionGestionChantier::ParalMkF()const 
{
   return mParalMkF;
}


cTplValGesInit< bool > & cSectionGestionChantier::ByProcess()
{
   return mByProcess;
}

const cTplValGesInit< bool > & cSectionGestionChantier::ByProcess()const 
{
   return mByProcess;
}


cTplValGesInit< bool > & cSectionGestionChantier::InterneCalledByProcess()
{
   return mInterneCalledByProcess;
}

const cTplValGesInit< bool > & cSectionGestionChantier::InterneCalledByProcess()const 
{
   return mInterneCalledByProcess;
}


cTplValGesInit< std::string > & cSectionGestionChantier::InterneSingleImage()
{
   return mInterneSingleImage;
}

const cTplValGesInit< std::string > & cSectionGestionChantier::InterneSingleImage()const 
{
   return mInterneSingleImage;
}


cTplValGesInit< int > & cSectionGestionChantier::InterneSingleBox()
{
   return mInterneSingleBox;
}

const cTplValGesInit< int > & cSectionGestionChantier::InterneSingleBox()const 
{
   return mInterneSingleBox;
}


cTplValGesInit< std::string > & cSectionGestionChantier::WorkDirPFM()
{
   return mWorkDirPFM;
}

const cTplValGesInit< std::string > & cSectionGestionChantier::WorkDirPFM()const 
{
   return mWorkDirPFM;
}


cTplValGesInit< Box2di > & cSectionGestionChantier::BoxTest()
{
   return mBoxTest;
}

const cTplValGesInit< Box2di > & cSectionGestionChantier::BoxTest()const 
{
   return mBoxTest;
}

void  BinaryUnDumpFromFile(cSectionGestionChantier & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzDalles().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzDalles().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzDalles().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RecouvrtDalles().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RecouvrtDalles().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RecouvrtDalles().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ParalMkF().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ParalMkF().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ParalMkF().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ByProcess().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ByProcess().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ByProcess().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.InterneCalledByProcess().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.InterneCalledByProcess().ValForcedForUnUmp(),aFp);
        }
        else  anObj.InterneCalledByProcess().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.InterneSingleImage().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.InterneSingleImage().ValForcedForUnUmp(),aFp);
        }
        else  anObj.InterneSingleImage().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.InterneSingleBox().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.InterneSingleBox().ValForcedForUnUmp(),aFp);
        }
        else  anObj.InterneSingleBox().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.WorkDirPFM().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.WorkDirPFM().ValForcedForUnUmp(),aFp);
        }
        else  anObj.WorkDirPFM().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.BoxTest().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.BoxTest().ValForcedForUnUmp(),aFp);
        }
        else  anObj.BoxTest().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cSectionGestionChantier & anObj)
{
    BinaryDumpInFile(aFp,anObj.SzDalles().IsInit());
    if (anObj.SzDalles().IsInit()) BinaryDumpInFile(aFp,anObj.SzDalles().Val());
    BinaryDumpInFile(aFp,anObj.RecouvrtDalles().IsInit());
    if (anObj.RecouvrtDalles().IsInit()) BinaryDumpInFile(aFp,anObj.RecouvrtDalles().Val());
    BinaryDumpInFile(aFp,anObj.ParalMkF().IsInit());
    if (anObj.ParalMkF().IsInit()) BinaryDumpInFile(aFp,anObj.ParalMkF().Val());
    BinaryDumpInFile(aFp,anObj.ByProcess().IsInit());
    if (anObj.ByProcess().IsInit()) BinaryDumpInFile(aFp,anObj.ByProcess().Val());
    BinaryDumpInFile(aFp,anObj.InterneCalledByProcess().IsInit());
    if (anObj.InterneCalledByProcess().IsInit()) BinaryDumpInFile(aFp,anObj.InterneCalledByProcess().Val());
    BinaryDumpInFile(aFp,anObj.InterneSingleImage().IsInit());
    if (anObj.InterneSingleImage().IsInit()) BinaryDumpInFile(aFp,anObj.InterneSingleImage().Val());
    BinaryDumpInFile(aFp,anObj.InterneSingleBox().IsInit());
    if (anObj.InterneSingleBox().IsInit()) BinaryDumpInFile(aFp,anObj.InterneSingleBox().Val());
    BinaryDumpInFile(aFp,anObj.WorkDirPFM().IsInit());
    if (anObj.WorkDirPFM().IsInit()) BinaryDumpInFile(aFp,anObj.WorkDirPFM().Val());
    BinaryDumpInFile(aFp,anObj.BoxTest().IsInit());
    if (anObj.BoxTest().IsInit()) BinaryDumpInFile(aFp,anObj.BoxTest().Val());
}

cElXMLTree * ToXMLTree(const cSectionGestionChantier & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"SectionGestionChantier",eXMLBranche);
   if (anObj.SzDalles().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzDalles"),anObj.SzDalles().Val())->ReTagThis("SzDalles"));
   if (anObj.RecouvrtDalles().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RecouvrtDalles"),anObj.RecouvrtDalles().Val())->ReTagThis("RecouvrtDalles"));
   if (anObj.ParalMkF().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ParalMkF"),anObj.ParalMkF().Val())->ReTagThis("ParalMkF"));
   if (anObj.ByProcess().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ByProcess"),anObj.ByProcess().Val())->ReTagThis("ByProcess"));
   if (anObj.InterneCalledByProcess().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("InterneCalledByProcess"),anObj.InterneCalledByProcess().Val())->ReTagThis("InterneCalledByProcess"));
   if (anObj.InterneSingleImage().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("InterneSingleImage"),anObj.InterneSingleImage().Val())->ReTagThis("InterneSingleImage"));
   if (anObj.InterneSingleBox().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("InterneSingleBox"),anObj.InterneSingleBox().Val())->ReTagThis("InterneSingleBox"));
   if (anObj.WorkDirPFM().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("WorkDirPFM"),anObj.WorkDirPFM().Val())->ReTagThis("WorkDirPFM"));
   if (anObj.BoxTest().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("BoxTest"),anObj.BoxTest().Val())->ReTagThis("BoxTest"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cSectionGestionChantier & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SzDalles(),aTree->Get("SzDalles",1),int(2000)); //tototo 

   xml_init(anObj.RecouvrtDalles(),aTree->Get("RecouvrtDalles",1),int(40)); //tototo 

   xml_init(anObj.ParalMkF(),aTree->Get("ParalMkF",1)); //tototo 

   xml_init(anObj.ByProcess(),aTree->Get("ByProcess",1),bool(false)); //tototo 

   xml_init(anObj.InterneCalledByProcess(),aTree->Get("InterneCalledByProcess",1),bool(false)); //tototo 

   xml_init(anObj.InterneSingleImage(),aTree->Get("InterneSingleImage",1),std::string("")); //tototo 

   xml_init(anObj.InterneSingleBox(),aTree->Get("InterneSingleBox",1),int(-1)); //tototo 

   xml_init(anObj.WorkDirPFM(),aTree->Get("WorkDirPFM",1)); //tototo 

   xml_init(anObj.BoxTest(),aTree->Get("BoxTest",1)); //tototo 
}

std::string  Mangling( cSectionGestionChantier *) {return "9CEFA3D91C2089A3FD3F";};


cTplValGesInit< cChantierDescripteur > & cParamFusionMNT::DicoLoc()
{
   return mDicoLoc;
}

const cTplValGesInit< cChantierDescripteur > & cParamFusionMNT::DicoLoc()const 
{
   return mDicoLoc;
}


std::string & cParamFusionMNT::KeyNuage()
{
   return SectionName().KeyNuage();
}

const std::string & cParamFusionMNT::KeyNuage()const 
{
   return SectionName().KeyNuage();
}


std::string & cParamFusionMNT::KeyResult()
{
   return SectionName().KeyResult();
}

const std::string & cParamFusionMNT::KeyResult()const 
{
   return SectionName().KeyResult();
}


cTplValGesInit< std::string > & cParamFusionMNT::ModeleNuageResult()
{
   return SectionName().ModeleNuageResult();
}

const cTplValGesInit< std::string > & cParamFusionMNT::ModeleNuageResult()const 
{
   return SectionName().ModeleNuageResult();
}


cSectionName & cParamFusionMNT::SectionName()
{
   return mSectionName;
}

const cSectionName & cParamFusionMNT::SectionName()const 
{
   return mSectionName;
}


cTplValGesInit< bool > & cParamFusionMNT::MakeFileResult()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().MakeFileResult();
}

const cTplValGesInit< bool > & cParamFusionMNT::MakeFileResult()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().MakeFileResult();
}


cTplValGesInit< double > & cParamFusionMNT::PdsAR()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsAR();
}

const cTplValGesInit< double > & cParamFusionMNT::PdsAR()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsAR();
}


cTplValGesInit< double > & cParamFusionMNT::PdsDistor()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsDistor();
}

const cTplValGesInit< double > & cParamFusionMNT::PdsDistor()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsDistor();
}


cTplValGesInit< double > & cParamFusionMNT::AmplImDistor()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().AmplImDistor();
}

const cTplValGesInit< double > & cParamFusionMNT::AmplImDistor()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().AmplImDistor();
}


cTplValGesInit< double > & cParamFusionMNT::SeuilDist()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().SeuilDist();
}

const cTplValGesInit< double > & cParamFusionMNT::SeuilDist()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().SeuilDist();
}


cTplValGesInit< double > & cParamFusionMNT::PdsDistBord()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsDistBord();
}

const cTplValGesInit< double > & cParamFusionMNT::PdsDistBord()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().PdsDistBord();
}


cTplValGesInit< double > & cParamFusionMNT::SeuilDisBord()
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().SeuilDisBord();
}

const cTplValGesInit< double > & cParamFusionMNT::SeuilDisBord()const 
{
   return SectionScoreQualite().Val().ScoreMM1P().Val().SeuilDisBord();
}


cTplValGesInit< cScoreMM1P > & cParamFusionMNT::ScoreMM1P()
{
   return SectionScoreQualite().Val().ScoreMM1P();
}

const cTplValGesInit< cScoreMM1P > & cParamFusionMNT::ScoreMM1P()const 
{
   return SectionScoreQualite().Val().ScoreMM1P();
}


cTplValGesInit< cSectionScoreQualite > & cParamFusionMNT::SectionScoreQualite()
{
   return mSectionScoreQualite;
}

const cTplValGesInit< cSectionScoreQualite > & cParamFusionMNT::SectionScoreQualite()const 
{
   return mSectionScoreQualite;
}


double & cParamFusionMNT::FMNTSeuilCorrel()
{
   return ParamAlgoFusionMNT().FMNTSeuilCorrel();
}

const double & cParamFusionMNT::FMNTSeuilCorrel()const 
{
   return ParamAlgoFusionMNT().FMNTSeuilCorrel();
}


double & cParamFusionMNT::FMNTGammaCorrel()
{
   return ParamAlgoFusionMNT().FMNTGammaCorrel();
}

const double & cParamFusionMNT::FMNTGammaCorrel()const 
{
   return ParamAlgoFusionMNT().FMNTGammaCorrel();
}


double & cParamFusionMNT::SigmaPds()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SigmaPds();
}

const double & cParamFusionMNT::SigmaPds()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SigmaPds();
}


cTplValGesInit< double > & cParamFusionMNT::SigmaZ()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SigmaZ();
}

const cTplValGesInit< double > & cParamFusionMNT::SigmaZ()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SigmaZ();
}


double & cParamFusionMNT::SeuilMaxLoc()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SeuilMaxLoc();
}

const double & cParamFusionMNT::SeuilMaxLoc()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SeuilMaxLoc();
}


double & cParamFusionMNT::SeuilCptOk()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SeuilCptOk();
}

const double & cParamFusionMNT::SeuilCptOk()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().SeuilCptOk();
}


cTplValGesInit< double > & cParamFusionMNT::MaxDif()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().MaxDif();
}

const cTplValGesInit< double > & cParamFusionMNT::MaxDif()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().MaxDif();
}


cTplValGesInit< int > & cParamFusionMNT::NBMaxMaxLoc()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().NBMaxMaxLoc();
}

const cTplValGesInit< int > & cParamFusionMNT::NBMaxMaxLoc()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().NBMaxMaxLoc();
}


cTplValGesInit< bool > & cParamFusionMNT::QuickExp()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().QuickExp();
}

const cTplValGesInit< bool > & cParamFusionMNT::QuickExp()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().QuickExp();
}


double & cParamFusionMNT::Regul()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().Regul();
}

const double & cParamFusionMNT::Regul()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().Regul();
}


double & cParamFusionMNT::Sigma0()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().Sigma0();
}

const double & cParamFusionMNT::Sigma0()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().Sigma0();
}


int & cParamFusionMNT::NbDir()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().NbDir();
}

const int & cParamFusionMNT::NbDir()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().NbDir();
}


double & cParamFusionMNT::PenteMax()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}

const double & cParamFusionMNT::PenteMax()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().PenteMax();
}


double & cParamFusionMNT::CostNoVal()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}

const double & cParamFusionMNT::CostNoVal()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().CostNoVal();
}


double & cParamFusionMNT::Trans()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}

const double & cParamFusionMNT::Trans()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal().Val().Trans();
}


cTplValGesInit< cFMNT_GesNoVal > & cParamFusionMNT::FMNT_GesNoVal()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal();
}

const cTplValGesInit< cFMNT_GesNoVal > & cParamFusionMNT::FMNT_GesNoVal()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn().Val().FMNT_GesNoVal();
}


cTplValGesInit< cFMNT_ProgDyn > & cParamFusionMNT::FMNT_ProgDyn()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn();
}

const cTplValGesInit< cFMNT_ProgDyn > & cParamFusionMNT::FMNT_ProgDyn()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().FMNT_ProgDyn();
}


cTplValGesInit< cParamFiltreDetecRegulProf > & cParamFusionMNT::ParamRegProf()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().ParamRegProf();
}

const cTplValGesInit< cParamFiltreDetecRegulProf > & cParamFusionMNT::ParamRegProf()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT().ParamRegProf();
}


cSpecAlgoFMNT & cParamFusionMNT::SpecAlgoFMNT()
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT();
}

const cSpecAlgoFMNT & cParamFusionMNT::SpecAlgoFMNT()const 
{
   return ParamAlgoFusionMNT().SpecAlgoFMNT();
}


cParamAlgoFusionMNT & cParamFusionMNT::ParamAlgoFusionMNT()
{
   return mParamAlgoFusionMNT;
}

const cParamAlgoFusionMNT & cParamFusionMNT::ParamAlgoFusionMNT()const 
{
   return mParamAlgoFusionMNT;
}


cParamGenereStr & cParamFusionMNT::GenereRes()
{
   return mGenereRes;
}

const cParamGenereStr & cParamFusionMNT::GenereRes()const 
{
   return mGenereRes;
}


cParamGenereStrVois & cParamFusionMNT::GenereInput()
{
   return mGenereInput;
}

const cParamGenereStrVois & cParamFusionMNT::GenereInput()const 
{
   return mGenereInput;
}


cTplValGesInit< int > & cParamFusionMNT::SzDalles()
{
   return SectionGestionChantier().SzDalles();
}

const cTplValGesInit< int > & cParamFusionMNT::SzDalles()const 
{
   return SectionGestionChantier().SzDalles();
}


cTplValGesInit< int > & cParamFusionMNT::RecouvrtDalles()
{
   return SectionGestionChantier().RecouvrtDalles();
}

const cTplValGesInit< int > & cParamFusionMNT::RecouvrtDalles()const 
{
   return SectionGestionChantier().RecouvrtDalles();
}


cTplValGesInit< std::string > & cParamFusionMNT::ParalMkF()
{
   return SectionGestionChantier().ParalMkF();
}

const cTplValGesInit< std::string > & cParamFusionMNT::ParalMkF()const 
{
   return SectionGestionChantier().ParalMkF();
}


cTplValGesInit< bool > & cParamFusionMNT::ByProcess()
{
   return SectionGestionChantier().ByProcess();
}

const cTplValGesInit< bool > & cParamFusionMNT::ByProcess()const 
{
   return SectionGestionChantier().ByProcess();
}


cTplValGesInit< bool > & cParamFusionMNT::InterneCalledByProcess()
{
   return SectionGestionChantier().InterneCalledByProcess();
}

const cTplValGesInit< bool > & cParamFusionMNT::InterneCalledByProcess()const 
{
   return SectionGestionChantier().InterneCalledByProcess();
}


cTplValGesInit< std::string > & cParamFusionMNT::InterneSingleImage()
{
   return SectionGestionChantier().InterneSingleImage();
}

const cTplValGesInit< std::string > & cParamFusionMNT::InterneSingleImage()const 
{
   return SectionGestionChantier().InterneSingleImage();
}


cTplValGesInit< int > & cParamFusionMNT::InterneSingleBox()
{
   return SectionGestionChantier().InterneSingleBox();
}

const cTplValGesInit< int > & cParamFusionMNT::InterneSingleBox()const 
{
   return SectionGestionChantier().InterneSingleBox();
}


cTplValGesInit< std::string > & cParamFusionMNT::WorkDirPFM()
{
   return SectionGestionChantier().WorkDirPFM();
}

const cTplValGesInit< std::string > & cParamFusionMNT::WorkDirPFM()const 
{
   return SectionGestionChantier().WorkDirPFM();
}


cTplValGesInit< Box2di > & cParamFusionMNT::BoxTest()
{
   return SectionGestionChantier().BoxTest();
}

const cTplValGesInit< Box2di > & cParamFusionMNT::BoxTest()const 
{
   return SectionGestionChantier().BoxTest();
}


cSectionGestionChantier & cParamFusionMNT::SectionGestionChantier()
{
   return mSectionGestionChantier;
}

const cSectionGestionChantier & cParamFusionMNT::SectionGestionChantier()const 
{
   return mSectionGestionChantier;
}

void  BinaryUnDumpFromFile(cParamFusionMNT & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.DicoLoc().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.DicoLoc().ValForcedForUnUmp(),aFp);
        }
        else  anObj.DicoLoc().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.SectionName(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SectionScoreQualite().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SectionScoreQualite().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SectionScoreQualite().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.ParamAlgoFusionMNT(),aFp);
    BinaryUnDumpFromFile(anObj.GenereRes(),aFp);
    BinaryUnDumpFromFile(anObj.GenereInput(),aFp);
    BinaryUnDumpFromFile(anObj.SectionGestionChantier(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamFusionMNT & anObj)
{
    BinaryDumpInFile(aFp,anObj.DicoLoc().IsInit());
    if (anObj.DicoLoc().IsInit()) BinaryDumpInFile(aFp,anObj.DicoLoc().Val());
    BinaryDumpInFile(aFp,anObj.SectionName());
    BinaryDumpInFile(aFp,anObj.SectionScoreQualite().IsInit());
    if (anObj.SectionScoreQualite().IsInit()) BinaryDumpInFile(aFp,anObj.SectionScoreQualite().Val());
    BinaryDumpInFile(aFp,anObj.ParamAlgoFusionMNT());
    BinaryDumpInFile(aFp,anObj.GenereRes());
    BinaryDumpInFile(aFp,anObj.GenereInput());
    BinaryDumpInFile(aFp,anObj.SectionGestionChantier());
}

cElXMLTree * ToXMLTree(const cParamFusionMNT & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamFusionMNT",eXMLBranche);
   if (anObj.DicoLoc().IsInit())
      aRes->AddFils(ToXMLTree(anObj.DicoLoc().Val())->ReTagThis("DicoLoc"));
   aRes->AddFils(ToXMLTree(anObj.SectionName())->ReTagThis("SectionName"));
   if (anObj.SectionScoreQualite().IsInit())
      aRes->AddFils(ToXMLTree(anObj.SectionScoreQualite().Val())->ReTagThis("SectionScoreQualite"));
   aRes->AddFils(ToXMLTree(anObj.ParamAlgoFusionMNT())->ReTagThis("ParamAlgoFusionMNT"));
   aRes->AddFils(ToXMLTree(anObj.GenereRes())->ReTagThis("GenereRes"));
   aRes->AddFils(ToXMLTree(anObj.GenereInput())->ReTagThis("GenereInput"));
   aRes->AddFils(ToXMLTree(anObj.SectionGestionChantier())->ReTagThis("SectionGestionChantier"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamFusionMNT & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.DicoLoc(),aTree->Get("DicoLoc",1)); //tototo 

   xml_init(anObj.SectionName(),aTree->Get("SectionName",1)); //tototo 

   xml_init(anObj.SectionScoreQualite(),aTree->Get("SectionScoreQualite",1)); //tototo 

   xml_init(anObj.ParamAlgoFusionMNT(),aTree->Get("ParamAlgoFusionMNT",1)); //tototo 

   xml_init(anObj.GenereRes(),aTree->Get("GenereRes",1)); //tototo 

   xml_init(anObj.GenereInput(),aTree->Get("GenereInput",1)); //tototo 

   xml_init(anObj.SectionGestionChantier(),aTree->Get("SectionGestionChantier",1)); //tototo 
}

std::string  Mangling( cParamFusionMNT *) {return "EEFB3C27EDE371C7FE3F";};


cTplValGesInit< Pt2di > & cPFNMiseAuPoint::SzVisu()
{
   return mSzVisu;
}

const cTplValGesInit< Pt2di > & cPFNMiseAuPoint::SzVisu()const 
{
   return mSzVisu;
}


cTplValGesInit< bool > & cPFNMiseAuPoint::TestImageDif()
{
   return mTestImageDif;
}

const cTplValGesInit< bool > & cPFNMiseAuPoint::TestImageDif()const 
{
   return mTestImageDif;
}

void  BinaryUnDumpFromFile(cPFNMiseAuPoint & anObj,ELISE_fp & aFp)
{
   { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.SzVisu().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.SzVisu().ValForcedForUnUmp(),aFp);
        }
        else  anObj.SzVisu().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.TestImageDif().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.TestImageDif().ValForcedForUnUmp(),aFp);
        }
        else  anObj.TestImageDif().SetNoInit();
  } ;
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cPFNMiseAuPoint & anObj)
{
    BinaryDumpInFile(aFp,anObj.SzVisu().IsInit());
    if (anObj.SzVisu().IsInit()) BinaryDumpInFile(aFp,anObj.SzVisu().Val());
    BinaryDumpInFile(aFp,anObj.TestImageDif().IsInit());
    if (anObj.TestImageDif().IsInit()) BinaryDumpInFile(aFp,anObj.TestImageDif().Val());
}

cElXMLTree * ToXMLTree(const cPFNMiseAuPoint & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"PFNMiseAuPoint",eXMLBranche);
   if (anObj.SzVisu().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("SzVisu"),anObj.SzVisu().Val())->ReTagThis("SzVisu"));
   if (anObj.TestImageDif().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("TestImageDif"),anObj.TestImageDif().Val())->ReTagThis("TestImageDif"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cPFNMiseAuPoint & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.SzVisu(),aTree->Get("SzVisu",1)); //tototo 

   xml_init(anObj.TestImageDif(),aTree->Get("TestImageDif",1),bool(false)); //tototo 
}

std::string  Mangling( cPFNMiseAuPoint *) {return "18C9B4E47D773A82FE3F";};


double & cGrapheRecouvrt::TauxRecMin()
{
   return mTauxRecMin;
}

const double & cGrapheRecouvrt::TauxRecMin()const 
{
   return mTauxRecMin;
}


cTplValGesInit< std::string > & cGrapheRecouvrt::ExtHom()
{
   return mExtHom;
}

const cTplValGesInit< std::string > & cGrapheRecouvrt::ExtHom()const 
{
   return mExtHom;
}


cTplValGesInit< int > & cGrapheRecouvrt::MinSzFilHom()
{
   return mMinSzFilHom;
}

const cTplValGesInit< int > & cGrapheRecouvrt::MinSzFilHom()const 
{
   return mMinSzFilHom;
}


cTplValGesInit< double > & cGrapheRecouvrt::RecSeuilDistProf()
{
   return mRecSeuilDistProf;
}

const cTplValGesInit< double > & cGrapheRecouvrt::RecSeuilDistProf()const 
{
   return mRecSeuilDistProf;
}


int & cGrapheRecouvrt::NbPtsLowResume()
{
   return mNbPtsLowResume;
}

const int & cGrapheRecouvrt::NbPtsLowResume()const 
{
   return mNbPtsLowResume;
}

void  BinaryUnDumpFromFile(cGrapheRecouvrt & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.TauxRecMin(),aFp);
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.ExtHom().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.ExtHom().ValForcedForUnUmp(),aFp);
        }
        else  anObj.ExtHom().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.MinSzFilHom().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.MinSzFilHom().ValForcedForUnUmp(),aFp);
        }
        else  anObj.MinSzFilHom().SetNoInit();
  } ;
  { bool IsInit;
       BinaryUnDumpFromFile(IsInit,aFp);
        if (IsInit) {
             anObj.RecSeuilDistProf().SetInitForUnUmp();
             BinaryUnDumpFromFile(anObj.RecSeuilDistProf().ValForcedForUnUmp(),aFp);
        }
        else  anObj.RecSeuilDistProf().SetNoInit();
  } ;
    BinaryUnDumpFromFile(anObj.NbPtsLowResume(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cGrapheRecouvrt & anObj)
{
    BinaryDumpInFile(aFp,anObj.TauxRecMin());
    BinaryDumpInFile(aFp,anObj.ExtHom().IsInit());
    if (anObj.ExtHom().IsInit()) BinaryDumpInFile(aFp,anObj.ExtHom().Val());
    BinaryDumpInFile(aFp,anObj.MinSzFilHom().IsInit());
    if (anObj.MinSzFilHom().IsInit()) BinaryDumpInFile(aFp,anObj.MinSzFilHom().Val());
    BinaryDumpInFile(aFp,anObj.RecSeuilDistProf().IsInit());
    if (anObj.RecSeuilDistProf().IsInit()) BinaryDumpInFile(aFp,anObj.RecSeuilDistProf().Val());
    BinaryDumpInFile(aFp,anObj.NbPtsLowResume());
}

cElXMLTree * ToXMLTree(const cGrapheRecouvrt & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"GrapheRecouvrt",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("TauxRecMin"),anObj.TauxRecMin())->ReTagThis("TauxRecMin"));
   if (anObj.ExtHom().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("ExtHom"),anObj.ExtHom().Val())->ReTagThis("ExtHom"));
   if (anObj.MinSzFilHom().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("MinSzFilHom"),anObj.MinSzFilHom().Val())->ReTagThis("MinSzFilHom"));
   if (anObj.RecSeuilDistProf().IsInit())
      aRes->AddFils(::ToXMLTree(std::string("RecSeuilDistProf"),anObj.RecSeuilDistProf().Val())->ReTagThis("RecSeuilDistProf"));
   aRes->AddFils(::ToXMLTree(std::string("NbPtsLowResume"),anObj.NbPtsLowResume())->ReTagThis("NbPtsLowResume"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cGrapheRecouvrt & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.TauxRecMin(),aTree->Get("TauxRecMin",1)); //tototo 

   xml_init(anObj.ExtHom(),aTree->Get("ExtHom",1),std::string("dat")); //tototo 

   xml_init(anObj.MinSzFilHom(),aTree->Get("MinSzFilHom",1),int(1000)); //tototo 

   xml_init(anObj.RecSeuilDistProf(),aTree->Get("RecSeuilDistProf",1),double(1.0)); //tototo 

   xml_init(anObj.NbPtsLowResume(),aTree->Get("NbPtsLowResume",1)); //tototo 
}

std::string  Mangling( cGrapheRecouvrt *) {return "E01EE48299349EFBFE3F";};


bool & cImageVariations::V4Vois()
{
   return mV4Vois;
}

const bool & cImageVariations::V4Vois()const 
{
   return mV4Vois;
}


int & cImageVariations::DistVois()
{
   return mDistVois;
}

const int & cImageVariations::DistVois()const 
{
   return mDistVois;
}


double & cImageVariations::DynAngul()
{
   return mDynAngul;
}

const double & cImageVariations::DynAngul()const 
{
   return mDynAngul;
}


double & cImageVariations::SeuilStrictVarIma()
{
   return mSeuilStrictVarIma;
}

const double & cImageVariations::SeuilStrictVarIma()const 
{
   return mSeuilStrictVarIma;
}

void  BinaryUnDumpFromFile(cImageVariations & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.V4Vois(),aFp);
    BinaryUnDumpFromFile(anObj.DistVois(),aFp);
    BinaryUnDumpFromFile(anObj.DynAngul(),aFp);
    BinaryUnDumpFromFile(anObj.SeuilStrictVarIma(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cImageVariations & anObj)
{
    BinaryDumpInFile(aFp,anObj.V4Vois());
    BinaryDumpInFile(aFp,anObj.DistVois());
    BinaryDumpInFile(aFp,anObj.DynAngul());
    BinaryDumpInFile(aFp,anObj.SeuilStrictVarIma());
}

cElXMLTree * ToXMLTree(const cImageVariations & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ImageVariations",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("V4Vois"),anObj.V4Vois())->ReTagThis("V4Vois"));
   aRes->AddFils(::ToXMLTree(std::string("DistVois"),anObj.DistVois())->ReTagThis("DistVois"));
   aRes->AddFils(::ToXMLTree(std::string("DynAngul"),anObj.DynAngul())->ReTagThis("DynAngul"));
   aRes->AddFils(::ToXMLTree(std::string("SeuilStrictVarIma"),anObj.SeuilStrictVarIma())->ReTagThis("SeuilStrictVarIma"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cImageVariations & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.V4Vois(),aTree->Get("V4Vois",1)); //tototo 

   xml_init(anObj.DistVois(),aTree->Get("DistVois",1)); //tototo 

   xml_init(anObj.DynAngul(),aTree->Get("DynAngul",1)); //tototo 

   xml_init(anObj.SeuilStrictVarIma(),aTree->Get("SeuilStrictVarIma",1)); //tototo 
}

std::string  Mangling( cImageVariations *) {return "027A10F782622E84FF3F";};


cTplValGesInit< Pt2di > & cParamFusionNuage::SzVisu()
{
   return PFNMiseAuPoint().SzVisu();
}

const cTplValGesInit< Pt2di > & cParamFusionNuage::SzVisu()const 
{
   return PFNMiseAuPoint().SzVisu();
}


cTplValGesInit< bool > & cParamFusionNuage::TestImageDif()
{
   return PFNMiseAuPoint().TestImageDif();
}

const cTplValGesInit< bool > & cParamFusionNuage::TestImageDif()const 
{
   return PFNMiseAuPoint().TestImageDif();
}


cPFNMiseAuPoint & cParamFusionNuage::PFNMiseAuPoint()
{
   return mPFNMiseAuPoint;
}

const cPFNMiseAuPoint & cParamFusionNuage::PFNMiseAuPoint()const 
{
   return mPFNMiseAuPoint;
}


double & cParamFusionNuage::TauxRecMin()
{
   return GrapheRecouvrt().TauxRecMin();
}

const double & cParamFusionNuage::TauxRecMin()const 
{
   return GrapheRecouvrt().TauxRecMin();
}


cTplValGesInit< std::string > & cParamFusionNuage::ExtHom()
{
   return GrapheRecouvrt().ExtHom();
}

const cTplValGesInit< std::string > & cParamFusionNuage::ExtHom()const 
{
   return GrapheRecouvrt().ExtHom();
}


cTplValGesInit< int > & cParamFusionNuage::MinSzFilHom()
{
   return GrapheRecouvrt().MinSzFilHom();
}

const cTplValGesInit< int > & cParamFusionNuage::MinSzFilHom()const 
{
   return GrapheRecouvrt().MinSzFilHom();
}


cTplValGesInit< double > & cParamFusionNuage::RecSeuilDistProf()
{
   return GrapheRecouvrt().RecSeuilDistProf();
}

const cTplValGesInit< double > & cParamFusionNuage::RecSeuilDistProf()const 
{
   return GrapheRecouvrt().RecSeuilDistProf();
}


int & cParamFusionNuage::NbPtsLowResume()
{
   return GrapheRecouvrt().NbPtsLowResume();
}

const int & cParamFusionNuage::NbPtsLowResume()const 
{
   return GrapheRecouvrt().NbPtsLowResume();
}


cGrapheRecouvrt & cParamFusionNuage::GrapheRecouvrt()
{
   return mGrapheRecouvrt;
}

const cGrapheRecouvrt & cParamFusionNuage::GrapheRecouvrt()const 
{
   return mGrapheRecouvrt;
}


bool & cParamFusionNuage::V4Vois()
{
   return ImageVariations().V4Vois();
}

const bool & cParamFusionNuage::V4Vois()const 
{
   return ImageVariations().V4Vois();
}


int & cParamFusionNuage::DistVois()
{
   return ImageVariations().DistVois();
}

const int & cParamFusionNuage::DistVois()const 
{
   return ImageVariations().DistVois();
}


double & cParamFusionNuage::DynAngul()
{
   return ImageVariations().DynAngul();
}

const double & cParamFusionNuage::DynAngul()const 
{
   return ImageVariations().DynAngul();
}


double & cParamFusionNuage::SeuilStrictVarIma()
{
   return ImageVariations().SeuilStrictVarIma();
}

const double & cParamFusionNuage::SeuilStrictVarIma()const 
{
   return ImageVariations().SeuilStrictVarIma();
}


cImageVariations & cParamFusionNuage::ImageVariations()
{
   return mImageVariations;
}

const cImageVariations & cParamFusionNuage::ImageVariations()const 
{
   return mImageVariations;
}

void  BinaryUnDumpFromFile(cParamFusionNuage & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.PFNMiseAuPoint(),aFp);
    BinaryUnDumpFromFile(anObj.GrapheRecouvrt(),aFp);
    BinaryUnDumpFromFile(anObj.ImageVariations(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cParamFusionNuage & anObj)
{
    BinaryDumpInFile(aFp,anObj.PFNMiseAuPoint());
    BinaryDumpInFile(aFp,anObj.GrapheRecouvrt());
    BinaryDumpInFile(aFp,anObj.ImageVariations());
}

cElXMLTree * ToXMLTree(const cParamFusionNuage & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"ParamFusionNuage",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.PFNMiseAuPoint())->ReTagThis("PFNMiseAuPoint"));
   aRes->AddFils(ToXMLTree(anObj.GrapheRecouvrt())->ReTagThis("GrapheRecouvrt"));
   aRes->AddFils(ToXMLTree(anObj.ImageVariations())->ReTagThis("ImageVariations"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cParamFusionNuage & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.PFNMiseAuPoint(),aTree->Get("PFNMiseAuPoint",1)); //tototo 

   xml_init(anObj.GrapheRecouvrt(),aTree->Get("GrapheRecouvrt",1)); //tototo 

   xml_init(anObj.ImageVariations(),aTree->Get("ImageVariations",1)); //tototo 
}

std::string  Mangling( cParamFusionNuage *) {return "3ECDC482AA9973E0FD3F";};


double & cXmlAffinR2ToR::CoeffX()
{
   return mCoeffX;
}

const double & cXmlAffinR2ToR::CoeffX()const 
{
   return mCoeffX;
}


double & cXmlAffinR2ToR::CoeffY()
{
   return mCoeffY;
}

const double & cXmlAffinR2ToR::CoeffY()const 
{
   return mCoeffY;
}


double & cXmlAffinR2ToR::Coeff1()
{
   return mCoeff1;
}

const double & cXmlAffinR2ToR::Coeff1()const 
{
   return mCoeff1;
}

void  BinaryUnDumpFromFile(cXmlAffinR2ToR & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.CoeffX(),aFp);
    BinaryUnDumpFromFile(anObj.CoeffY(),aFp);
    BinaryUnDumpFromFile(anObj.Coeff1(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlAffinR2ToR & anObj)
{
    BinaryDumpInFile(aFp,anObj.CoeffX());
    BinaryDumpInFile(aFp,anObj.CoeffY());
    BinaryDumpInFile(aFp,anObj.Coeff1());
}

cElXMLTree * ToXMLTree(const cXmlAffinR2ToR & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlAffinR2ToR",eXMLBranche);
   aRes->AddFils(::ToXMLTree(std::string("CoeffX"),anObj.CoeffX())->ReTagThis("CoeffX"));
   aRes->AddFils(::ToXMLTree(std::string("CoeffY"),anObj.CoeffY())->ReTagThis("CoeffY"));
   aRes->AddFils(::ToXMLTree(std::string("Coeff1"),anObj.Coeff1())->ReTagThis("Coeff1"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlAffinR2ToR & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.CoeffX(),aTree->Get("CoeffX",1)); //tototo 

   xml_init(anObj.CoeffY(),aTree->Get("CoeffY",1)); //tototo 

   xml_init(anObj.Coeff1(),aTree->Get("Coeff1",1)); //tototo 
}

std::string  Mangling( cXmlAffinR2ToR *) {return "76E58C6D92DE03F4FC3F";};


cXmlAffinR2ToR & cXmlHomogr::X()
{
   return mX;
}

const cXmlAffinR2ToR & cXmlHomogr::X()const 
{
   return mX;
}


cXmlAffinR2ToR & cXmlHomogr::Y()
{
   return mY;
}

const cXmlAffinR2ToR & cXmlHomogr::Y()const 
{
   return mY;
}


cXmlAffinR2ToR & cXmlHomogr::Z()
{
   return mZ;
}

const cXmlAffinR2ToR & cXmlHomogr::Z()const 
{
   return mZ;
}

void  BinaryUnDumpFromFile(cXmlHomogr & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.X(),aFp);
    BinaryUnDumpFromFile(anObj.Y(),aFp);
    BinaryUnDumpFromFile(anObj.Z(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlHomogr & anObj)
{
    BinaryDumpInFile(aFp,anObj.X());
    BinaryDumpInFile(aFp,anObj.Y());
    BinaryDumpInFile(aFp,anObj.Z());
}

cElXMLTree * ToXMLTree(const cXmlHomogr & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlHomogr",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.X())->ReTagThis("X"));
   aRes->AddFils(ToXMLTree(anObj.Y())->ReTagThis("Y"));
   aRes->AddFils(ToXMLTree(anObj.Z())->ReTagThis("Z"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlHomogr & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.X(),aTree->Get("X",1)); //tototo 

   xml_init(anObj.Y(),aTree->Get("Y",1)); //tototo 

   xml_init(anObj.Z(),aTree->Get("Z",1)); //tototo 
}

std::string  Mangling( cXmlHomogr *) {return "9F10F42A64CD10A7FB3F";};


cXmlHomogr & cXmlRHHResLnk::Hom12()
{
   return mHom12;
}

const cXmlHomogr & cXmlRHHResLnk::Hom12()const 
{
   return mHom12;
}


bool & cXmlRHHResLnk::Ok()
{
   return mOk;
}

const bool & cXmlRHHResLnk::Ok()const 
{
   return mOk;
}


double & cXmlRHHResLnk::Qual()
{
   return mQual;
}

const double & cXmlRHHResLnk::Qual()const 
{
   return mQual;
}


int & cXmlRHHResLnk::NbPts()
{
   return mNbPts;
}

const int & cXmlRHHResLnk::NbPts()const 
{
   return mNbPts;
}


std::vector< Pt3dr > & cXmlRHHResLnk::EchRepP1()
{
   return mEchRepP1;
}

const std::vector< Pt3dr > & cXmlRHHResLnk::EchRepP1()const 
{
   return mEchRepP1;
}


Pt3dr & cXmlRHHResLnk::PRep()
{
   return mPRep;
}

const Pt3dr & cXmlRHHResLnk::PRep()const 
{
   return mPRep;
}

void  BinaryUnDumpFromFile(cXmlRHHResLnk & anObj,ELISE_fp & aFp)
{
     BinaryUnDumpFromFile(anObj.Hom12(),aFp);
    BinaryUnDumpFromFile(anObj.Ok(),aFp);
    BinaryUnDumpFromFile(anObj.Qual(),aFp);
    BinaryUnDumpFromFile(anObj.NbPts(),aFp);
  { int aNb;
    BinaryUnDumpFromFile(aNb,aFp);
        for(  int aK=0 ; aK<aNb ; aK++)
        {
             Pt3dr aVal;
              BinaryUnDumpFromFile(aVal,aFp);
              anObj.EchRepP1().push_back(aVal);
        }
  } ;
    BinaryUnDumpFromFile(anObj.PRep(),aFp);
}

void  BinaryDumpInFile(ELISE_fp & aFp,const cXmlRHHResLnk & anObj)
{
    BinaryDumpInFile(aFp,anObj.Hom12());
    BinaryDumpInFile(aFp,anObj.Ok());
    BinaryDumpInFile(aFp,anObj.Qual());
    BinaryDumpInFile(aFp,anObj.NbPts());
    BinaryDumpInFile(aFp,(int)anObj.EchRepP1().size());
    for(  std::vector< Pt3dr >::const_iterator iT=anObj.EchRepP1().begin();
         iT!=anObj.EchRepP1().end();
          iT++
    )
        BinaryDumpInFile(aFp,*iT);
    BinaryDumpInFile(aFp,anObj.PRep());
}

cElXMLTree * ToXMLTree(const cXmlRHHResLnk & anObj)
{
  XMLPushContext(anObj.mGXml);
  cElXMLTree * aRes = new cElXMLTree((cElXMLTree *)0,"XmlRHHResLnk",eXMLBranche);
   aRes->AddFils(ToXMLTree(anObj.Hom12())->ReTagThis("Hom12"));
   aRes->AddFils(::ToXMLTree(std::string("Ok"),anObj.Ok())->ReTagThis("Ok"));
   aRes->AddFils(::ToXMLTree(std::string("Qual"),anObj.Qual())->ReTagThis("Qual"));
   aRes->AddFils(::ToXMLTree(std::string("NbPts"),anObj.NbPts())->ReTagThis("NbPts"));
  for
  (       std::vector< Pt3dr >::const_iterator it=anObj.EchRepP1().begin();
      it !=anObj.EchRepP1().end();
      it++
  ) 
      aRes->AddFils(::ToXMLTree(std::string("EchRepP1"),(*it))->ReTagThis("EchRepP1"));
   aRes->AddFils(::ToXMLTree(std::string("PRep"),anObj.PRep())->ReTagThis("PRep"));
  aRes->mGXml = anObj.mGXml;
  XMLPopContext(anObj.mGXml);
  return aRes;
}

void xml_init(cXmlRHHResLnk & anObj,cElXMLTree * aTree)
{
   anObj.mGXml = aTree->mGXml;
   if (aTree==0) return;

   xml_init(anObj.Hom12(),aTree->Get("Hom12",1)); //tototo 

   xml_init(anObj.Ok(),aTree->Get("Ok",1)); //tototo 

   xml_init(anObj.Qual(),aTree->Get("Qual",1)); //tototo 

   xml_init(anObj.NbPts(),aTree->Get("NbPts",1)); //tototo 

   xml_init(anObj.EchRepP1(),aTree->GetAll("EchRepP1",false,1));

   xml_init(anObj.PRep(),aTree->Get("PRep",1)); //tototo 
}

std::string  Mangling( cXmlRHHResLnk *) {return "78404523C7B28EC0FD3F";};

// };
