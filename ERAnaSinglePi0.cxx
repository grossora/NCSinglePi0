#ifndef ERTOOL_ERANASINGLEPI0_CXX
#define ERTOOL_ERANASINGLEPI0_CXX

#include "ERAnaSinglePi0.h"

namespace ertool {

  ERAnaSinglePi0::ERAnaSinglePi0() : AnaBase()
  {
    _name     = "ERAnaSinglePi0";
  }

  void ERAnaSinglePi0::Reset()
  {}

  bool ERAnaSinglePi0::Analyze(const EventData &data, const ParticleSet &ps)
  { return true; }

}

#endif
