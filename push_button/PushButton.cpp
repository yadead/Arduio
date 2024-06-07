#include "PushButton.h"

PushButton::PushButton(byte pin)
{
  this->pin = pin;
}

void PushButton::init()
{
  pinMode(pin, INPUT_PULLUP);
  readState();
}

byte PushButton::readState()
{
  state = digitalRead (pin);
  return state;
}