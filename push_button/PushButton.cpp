#include "PushButton.h"

PushButton::PushButton(byte pin, bool isPullup,
                       bool internalPullUpActivated)
{
  this->pin = pin;
  this->isPullup = isPullup;
  this->internalPullUpActivated = internalPullUpActivated;
}

void PushButton::init()
{
  if (isPullup && internalPullUpActivated) {
    pinMode(pin, INPUT_PULLUP);
  }
  else {
    pinMode(pin, Input);
  }
  readState();
}

byte PushButton::readState()
{
  state = digitalRead (pin);
  return state;
}