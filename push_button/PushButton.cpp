#include "PushButton.h"

PushButton::PushButton(byte pin);
{
  this->pin = pin;
}

void PushButton::init();
{
  pinMode(pin, INPUT_PULLUP);
  readstate();
}

byte PushButton::readState();
{
  state = digitalReat(pin);
  return state;
}