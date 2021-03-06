/* file:   led.ino
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Some example loops with the RGB LED under control by the Scheduler.
 */

#include <Scheduler.h>
#include <SparkFun_SCD30_Arduino_Library.h>
#include <Wire.h>
#include "m4.h.d/Rgb.h"

// make some objects
ledRGB onBoardRGB;
//ledRGB externRGB;
SCD30 airSensor;

// Set standard variables
bool ledOnB = False;
bool ledOnE = False;
bool ledManuell = True;
short ledState = 0;
int ledAcc = 1000;

float co2;
float cGrad;
float hum;
float pres

void setup() {
     
#ifdef CORE_CM7
 #error "Das Programm ist für die M4 MPU vorgesehen!"
#endif
     
     // start serial and wire
     Serial.begin(9600);
     Wire.begin();
     
     
     // add 'loop2' and 'loop3' to scheduling
     Scheduler.startLoop(loop2);
     Scheduler.startLoop(loop3);
     // 'loop' starts by default
}

// Task 1: Control loop
void loop() {
     // Communication to CORE_CM7
     
}

// Task 2: Light loop
void loop2() {
     // Turn RGB white on
     onBoardRGB.
     
     while ( ledOnB == True /*|| ledOnE == True || ( ledOnB == True && ledOnE == True ) */) {
          switch ( ledState ) {
               case 11:
                    // fade from White to Black and back
                    onBoardRGB.
                    break;
               case 2:
                    // fade from Red to Green to Blue and again
                    ledRGB();
                    break;
               case 3:
                    // switch between Red Green Blue
                    ledRGB();
                    break;
               case 4:
                    // 
                    ledRGB();
                    break;
               case 5:
                    // 
                    ledRGB();
                    break;
               case 6:
                    // 
                    ledRGB();
                    break;
               case 5:
                    // 
                    ledRGB();
                    break;
               default:
                    
                    // manuell
                    do {
                         
                    } while ( ledManuell == True );
                    break;
          }
     }
}

// Task 3: Environment loop
void loop3() {
     // test air sensor
     if ( airSensor.begin() == false ) {
          
          while ( sensorReset == 0 )
               ;
     }
     
     // calibrate airsensor
     airSensor.setTemperatureOffset(5);
     
     if (airSensor.dataAvailable() | ) {
          co2 = airSensor.getCO2();
          cGrad = airSensor.getTemperature()
          hum = airSensor.getHumidity()
     }
     else
          ;
     
}
