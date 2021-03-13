/* file:   os.ino
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Control stepper motor over IoT
 */

#include <Scheduler.h>
#include <Stepper.h>
#include <Wifi.h>

#include "os.h.d/Menu.h"
#include "os.h.d/printMenu.h"

float co2;
float cGrad;
float hum;

string passphrase = Serial.readStringUntil( );

void setup() {
     // start serial and wire
     Serial.begin(11200);
     
     bootM4();
     
     // add 'loop2' and 'loop3' to scheduling
     Scheduler.startLoop(loop2); // Numeric Keypad
     Scheduler.startLoop(loop3); // Wifi
     // 'loop' starts by default // Serial
}

// Serial
void loop() {
     if ( Serial.available() ) {
          Serial.println("Passphrase?");
          
          
          // Now you can control the box
          Serial.println("Hello to your box. Here you can control, configure, manipulate, hibernate and shutdown everything");
          Menu.Serial();
     }
}

// Numeric Keyboard
void loop2() {
     
}

// Wifi
void loop3() {
     
}
