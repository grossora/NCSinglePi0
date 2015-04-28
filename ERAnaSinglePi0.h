/**
 * \file ERAnaSinglePi0.h
 *
 * \ingroup NCSinglePi0
 * 
 * \brief Class def header for a class ERAnaSinglePi0
 *
 * @author ryan
 */

/** \addtogroup NCSinglePi0

    @{*/

#ifndef ERTOOL_ERANASINGLEPI0_H
#define ERTOOL_ERANASINGLEPI0_H

#include "ERTool/Base/AnaBase.h"

namespace ertool {

  /**
     \class ERAnaSinglePi0
     User custom Analysis class made by kazuhiro
   */
  class ERAnaSinglePi0 : public AnaBase {
  
  public:

    /// Default constructor
    ERAnaSinglePi0();

    /// Default destructor
    virtual ~ERAnaSinglePi0(){}

    /// Reset function
    virtual void Reset();

    /// Called @ before processing the first event sample
    virtual void ProcessBegin(){}

    /// Function to evaluate input showers and determine a score
    virtual bool Analyze(const EventData &data, const ParticleSet &ps);

    /// Called after processing the last event sample
    virtual void ProcessEnd(TFile* fout=nullptr) {}

  };
}
#endif

/** @} */ // end of doxygen group 
