#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

class PushButton
{
private:
  byte pin;
  byte state;

Public:
  PushButton(){} // do not use
  PushButton(byte pin);

  void init();
  byte readState();
};

#endif