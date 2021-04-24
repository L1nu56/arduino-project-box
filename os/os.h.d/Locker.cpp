/* file:   os.h.d/Locker.cpp
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Source file for the Locker
 */

#include <Arduino.h>
#include <Stepper.h>
#include <Locker.h>

void Locker::State() {
     /* State 0: Box is closed
      * State 1: Box is open
      */
     
}

void Locker::open() {
     if ( _state == 0 ) {
          Lock.setSpeed(3);
          Lock.step(100);
          
          _state = 1;
     } else {
          
     }
}

void Locker::close() {
     if ( _state == 1 ) {
          Lock.setSpeed(12);
          Lock.step(-100);
          
          _state = 0;
     } else {
          
     }
}
