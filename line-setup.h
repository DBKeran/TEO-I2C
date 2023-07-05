#pragma once
#include <Arduino.h>

#define farrightLine A1
#define rightLine A0
#define midLine A3
#define leftLine A6
#define farleftLine A2

int farrightValue;
int rightValue;
int midValue;
int leftValue;
int farleftValue;

void lineSetup() {
    pinMode(farrightLine, INPUT);
    pinMode(rightLine, INPUT);
    pinMode(midLine, INPUT);
    pinMode(leftLine, INPUT);
    pinMode(farleftLine, INPUT);
}
