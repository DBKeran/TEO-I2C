#pragma once
#include <Arduino.h>
#include <line-setup.h>

int readLine0() {
    farrightValue = analogRead(farrightLine);
    if (farrightValue > 500)
    return 1;
    else
    return 0;
}

int readLine1() {
    rightValue = analogRead(rightLine);
    if (rightValue > 500)
    return 1;
    else
    return 0;
}

int readLine2() {
    midValue = analogRead(midLine);
    if (midValue > 500)
    return 1;
    else 
    return 0;
}

int readLine3() {
    leftValue = analogRead(leftLine);
    if (leftValue > 500)
    return 1;
    else 
    return 0;
}

int readLine4() {
    farleftValue = analogRead(farleftLine);
    if (farleftValue > 500)
    return 1;
    else 
    return 0;
}
