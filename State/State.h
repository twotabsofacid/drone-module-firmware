#pragma once
#include "stdint.h"

#ifndef STATE_H
#define STATE_H

struct State
{
  // Global Variables
  uint16_t bpm;
  // Variables
  struct Voice_1
  {
    uint16_t coded_frequency;
  };
  // Create Voice_1 instance
  Voice_1 voice_1;

  // Voice 2
  struct Voice_2
  {
    uint16_t coded_frequency;
    // 0 -> static
    // 1 -> lfo
    // 2 -> noisey
    uint8_t frequency_type;
    int8_t frequency_offset;
    uint8_t frequency_lfo_amount;
    uint8_t frequency_lfo_current;
    // 0 -> static
    // 1 -> lfo
    // 2 -> noisey
    uint8_t amplitude_type;
    int8_t amplitude_offset;
    uint8_t amplitude_lfo_amount;
    uint8_t amplitude_lfo_current;
  };
  // Create Voice_1 instance
  Voice_2 voice_2;

  // Voice 3
  struct Voice_3
  {
    // 0 -> static
    // 1 -> lfo
    // 2 -> noisey
    uint8_t frequency_type;
    int8_t frequency_offset;
    uint8_t frequency_lfo_amount;
    uint8_t frequency_lfo_current;
    // 0 -> static
    // 1 -> lfo
    // 2 -> noisey
    uint8_t amplitude_type;
    int8_t amplitude_offset;
    uint8_t amplitude_lfo_amount;
    uint8_t amplitude_lfo_current;
  };
  // Create Voice_1 instance
  Voice_3 voice_3;
};

#endif