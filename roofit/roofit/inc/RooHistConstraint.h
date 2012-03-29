/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOHISTCONSTRAINT
#define ROOHISTCONSTRAINT

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
#include "RooListProxy.h"

class RooParamHistFunc ;
 
class RooHistConstraint : public RooAbsPdf {
public:
  RooHistConstraint() {} ; 
  RooHistConstraint(const char *name, const char *title, const RooArgSet& phfSet, Int_t threshold=1000000);
  RooHistConstraint(const RooHistConstraint& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooHistConstraint(*this,newname); }
  inline virtual ~RooHistConstraint() { }

  Double_t getLogVal(const RooArgSet* set=0) const ;

protected:

  Double_t logSum(Int_t i) const ;

  RooListProxy _gamma ;
  RooListProxy _nominal ;
  RooListProxy _nominalErr ;
  Bool_t _relParam ;
  
  Double_t evaluate() const ;

private:

  ClassDef(RooHistConstraint,1) // Your description goes here...
};
 
#endif