/* file:   m4.h.d/Rgb.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Header file for RGB LED functions
 */

#ifndef Rgb_h
#define Rgb_h

class ledRGB {

public:
    ledRGB(int red; int green; int blue)
    
    void stropo(int dimm; int acc);
    void stropoRGB(int red; int green; int blue; int acc);
    
    void fade(int acc);
    void fadeRGB(int red; int green; int blue; int acc);
    
    void blink(int acc)
    void blinkRGB(int red; int green; int blue; int red2; int green2; int blue2; int acc);
    
    void Manuell();

private:
    void set(int red; int green; int blue);
    int _red;
    int _green;
    int _blue;

}

#endif
