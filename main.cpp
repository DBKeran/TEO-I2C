#include <Arduino.h>
#include <Wire.h>
#include <line-reader.h>
#include <line-test.h>

#define ADDRESS_PROXIMITY 0x1
#define ADDRESS_MOTOR 0x2
#define ADDRESS_ME 0x3

void maze(int howMany);
byte line;
void send();

void setup() {
    //Serial.begin(9600);
    Wire.begin(ADDRESS_ME);
    Wire.onReceive(maze);
}

void loop() {

  if (!readLine4()){
    line = 4;
    send();
    delay(20);
  }
  else if (!readLine0()){
    line = 5;
    send();
    delay(20);
  }
  else if (!readLine1()){
    line = 6;
    send();
    delay(20);
  }
  /*else{
    line = 7;
    send();
    delay(20);
  }*/
  //Serial.println(line);
}

void maze(int howMany) {
    /*while (Wire.available() > 0) {
        char c = Wire.read();
        Serial.print(c);
    }
    Serial.println();*/
}

void send(){
    delay(30);
    Wire.beginTransmission(ADDRESS_MOTOR);
    Wire.write(line);
    Wire.endTransmission();
}