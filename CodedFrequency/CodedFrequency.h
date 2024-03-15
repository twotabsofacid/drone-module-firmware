#pragma once
#include "stdint.h"

class CodedFrequency
{

public:
    // Any functions??
    void MidiToCodedFrequency(uint8_t _noteMessage, uint8_t _noteNum, uint8_t _noteVelocity);
    void CVToCodedFrequency(uint16_t _codedFrequency);
    void GateToCodedFrequency(bool _on);
    void UseCV();
    void UseMidi();

    // Variables
    bool is_quantized = false;
    bool using_midi = true;
    uint16_t voice_1_coded_frequency = 510;
};