// @(#)root/roostats:$Id$
// Authors: Kevin Belasco        17/06/2009
// Authors: Kyle Cranmer         17/06/2009
/*************************************************************************
 * Copyright (C) 1995-2008, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *                                                                       *
 * This code was autogenerated by RooClassFactory                        * 
 *************************************************************************/
//_________________________________________________
/*
BEGIN_HTML
Represents the Heavyside function.
Evaluates to 1.0 when ((Double_t)x) >= ((Double_t)c), 0.0 otherwise.
END_HTML
*/
//_________________________________________________

#ifndef RooStats_Heavyside
#include "RooStats/Heavyside.h"
#endif
#ifndef ROO_ABS_REAL
#include "RooAbsReal.h"
#endif

ClassImp(RooStats::Heavyside)

using namespace RooFit;
using namespace RooStats;

Heavyside::Heavyside(const char *name, const char *title, 
                       RooAbsReal& _x,
                       RooAbsReal& _c) :
  RooAbsReal(name,title), 
  x("x","x",this,_x),
  c("c","c",this,_c)
{ 
} 

Heavyside::Heavyside(const Heavyside& other, const char* name) :  
  RooAbsReal(other,name), 
  x("x",this,other.x),
  c("c",this,other.c)
{ 
} 

Double_t Heavyside::evaluate() const 
{ 
  // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
  if (((Double_t)x) >= ((Double_t)c))
     return 1.0;
  else
     return 0.0;
}
