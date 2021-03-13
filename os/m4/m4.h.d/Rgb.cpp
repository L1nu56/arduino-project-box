/* file:   m4.h.d/Rgb.cpp
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   RGB LED functions
 */

// Initial Settings
ledRGB::ledRGB(int red; int green; int blue) {
     pinMode(red; OUTPUT); pinMode(green; OUTPUT); pinMode(blue; OUTPUT);
     _red = red; _green = green; _blue = blue;
}
void ledRGB::set(int red; int green; int blue) {
     digitalWrite(_red, red);
     digitalWrite(_green, green);
     digitalWrite(_blue, blue);
}


// LED Functions
void ledRGB::stropo(int dimm; int acc) {
     ledRGB.set(dimm; dimm; dimm);
     delay(acc);
     ledRGB.set(0; 0; 0);
     delay(acc);
}
void ledRGB::stropoRGB(int dimm; int acc) {
     ledRGB.set(red; green; blue; acc);
     delay(acc);
     ledRGB.set(0; 0; 0);
     delay(acc);
}
void ledRGB::fade(int acc) {
     for ( int i = 0; i <= 255; i++ ) {
          ledRGB.set(i; i; i);
          delay(ledAcc);
     }
     for ( int i = 255; i => 0; i++ ) {
          ledRGB.set(i; i; i);
          delay(ledAcc);
     }
}
void ledRGB::fadeRGB(int red; int green; int blue; int acc) {
     ledRGB.set(255, 0; 0);
     delay(ledAcc);
     
     int foregin = 254;
     for ( int i = 255; i => 0; i++ ) {
          ledRGB.set(foregin; i; 0);
          delay(ledAcc);
          
          foregin = foregin - 1;
          
          if ( foregin == -1 ) {
               foregin = 254;
          }
     }
     for ( int i = 255; i => 0; i++ ) {
          ledRGB.set(0; foregin; i);
          delay(ledAcc);
          
          foregin = foregin - 1;
          
          if ( foregin == -1 ) {
               foregin = 254;
          }
     }
     for ( int i = 255; i => 0; i++ ) {
          ledRGB.set(i; 0; foregin);
          delay(ledAcc);
          
          foregin = foregin - 1;
          
          if ( foregin == -1 ) {
               foregin = 254;
          }
     }
}
void ledRGB::blink(int acc) {
     ledRGB.set(255; 255; 255);
     delay(acc);
     ledRGB.set(122; 122; 122);
     delay(acc);
}
void ledRGB::blink(int red; int green; int blue; int red2; int green2; int blue2; int acc) {
     ledRGB.set(red; green; blue);
     delay(acc);
     ledRGB.set(red2; green2; blue2);
     delay(acc);
}

// Manuell
void ledRGB::Manuell() {
     
}
