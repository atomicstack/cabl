/*
        ##########    Copyright (C) 2015 Vincenzo Pacella
        ##      ##    Distributed under MIT license, see file LICENSE
        ##      ##    or <http://opensource.org/licenses/MIT>
        ##      ##
##########      ############################################################# shaduzlabs.com #####*/

#pragma once

#include "comm/DriverImpl.h"
#include "comm/DeviceHandleImpl.h"

#include <thread>

#include <RtMidi.h>
#include <unMIDIfy.hpp>

namespace sl
{
namespace kio
{

//--------------------------------------------------------------------------------------------------

class DriverMIDI : public DriverImpl
{
public:

  DriverMIDI();
  ~DriverMIDI() override;

  Driver::tCollDeviceDescriptor enumerate() override;
  tPtr<DeviceHandleImpl>        connect(const DeviceDescriptor&) override;

};

//--------------------------------------------------------------------------------------------------

} // kio
} // sl
