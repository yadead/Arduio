#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

#include <Arduino.h>

class PushButton
{
private:
  byte pin;
  byte state;

  bool isPullup;
  bool internalPullUpActivated;

public:
  PushButton() {} // do not use
  PushButton(byte pin, bool isPullup, bool internalPullUpActivated);

  void init();
  byte readState();
};

#endif