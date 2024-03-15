#include "CodedFrequency.h"

void CodedFrequency::MidiToCodedFrequency(uint8_t _noteMessage, uint8_t _noteNum, uint8_t _noteVelocity)
{
  if (using_midi)
  {
  }
  // DO NOTHING
}

void CodedFrequency::CVToCodedFrequency(uint16_t _codedFrequency)
{
  if (!using_midi)
  {
  }
  // DO NOTHING
}

void CodedFrequency::GateToCodedFrequency(bool _on)
{
}

void CodedFrequency::UseCV()
{
  using_midi = false;
}

void CodedFrequency::UseMidi()
{
  using_midi = true;
}