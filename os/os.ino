/* file:   os.ino
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Control stepper motor over IoT
 */

#include <Scheduler.h>
#include <Wifi.h>
#include <Wifi101OTA.h>

#include <os.h.d/Locker.h>
#include "os.h.d/Menu.h"

Locker Lock(200,6,5)

int wifi;
string passphrase = "12345678";

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
     if ( AP.start == True && Server.start() == True ) {
          // Control accesspoint WITH server
          Menu.accesspoint();
          Menu.Server();
         
     } else if ( AP.start == True ) {
          // Control accesspoint
          Menu.accesspoint();
          
     } else {
          // Do nothing
          ;
     }
}
0
