#include "PushButton.h"

#define BUTTON_PIN 2

PushButton button(BUTTON_PIN);

void setup() {
  Serial.begin(115200);
  button.init();
}

void loop() {
  Serial.println(button.readState());
  delay(100);
}





// {
//  if (button.isPressed()) {
//    Serial.println("Button is pressed");
//  }
//  else {
//    Serial.println("Button is not pressed");
//  }
//  delay(100);
//}