#pragma once
#include <Arduino.h>
#include <line-reader.h>
#include <Wire.h>

void send();
byte line;

void followLine(){
  if (readLine0()){
    line = 0;
    send();
  }
  else if (readLine1()){
    line = 1;
    send();
  }
  else if (readLine2()){
    line = 2;
    send();
  }
  else if (readLine3()){
    line = 3;
    send();
  }
  else if (readLine4()){
    line = 4;
    send();
  }
  else{
    line = 5;
    send();
  }
}

// Sends a signal through I2C via adress 1
void send() {
  //Wire.beginTransmission(2);
  Wire.write(line);
  //Wire.endTransmission();
  //delay(10);
}
