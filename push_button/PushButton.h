#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

#include <Arduino.h>

class PushButton
{
private:
  byte pin;
  byte state;

public:
  PushButton() {} // do not use
  PushButton(byte pin);

  void init();
  byte readState();
};

#endif