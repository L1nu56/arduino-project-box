/* file:   os.h.d/Locker.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Header file for the Locker
 */
 
#include <Arduino.h>
#include <Stepper.h>

#ifndef Locker_h
#define Locker_h

class Locker {
    
public:
     Locker(int spr,int pin1,int pin2) {_spr = spr; _pin1 = pin1; _pin2 = pin2;   Stepper Lock(_spr,_pin1,_pin2,)};
     Locker(int spr,int pin1,int pin2,int pin3,int pin4) {_spr = spr; _pin1 = pin1; _pin2 = pin2; _pin3 = pin3; _pin4 = pin4;    Stepper Lock(_spr,_pin1,_pin2,)};
     
     void State();
     
     void open();
     void close();
     
private:
     int _spr;
     int _pin1;
     int _pin2;
     int _pin3;
     int _pin4;
     
     bool _state;
}
 
