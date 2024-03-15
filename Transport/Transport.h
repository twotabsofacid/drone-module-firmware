#pragma once
#include "stdint.h"

class Transport
{

public:
  // Any functions??
  Transport();
  void loop();
  void sendVolumeToVoice(uint8_t _voiceID, uint8_t _volume);
};