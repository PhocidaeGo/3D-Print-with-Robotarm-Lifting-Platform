/*
 *Author: Phocidae
 *Date: 2020.9.23
 *Description: This programm runs on Arduino Mega2560, it can controls steppers with stepstick A4988
*/

#ifndef A4988_h
#define A4988_h

#include "Arduino.h"

class A4988
{
    private:
        int stepPin;
        int dirPin;
    public:
        int dir; //1 for cw, 0 for ccw;
        void drive();
};

#endif