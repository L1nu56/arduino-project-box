/* file:   m4.h.d/Rgb.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Header file for RGB LED functions
 */

#ifndef Rgb_h
#define Rgb_h

class ledRGB {

public:
    ledRGB(int red; int green; int blue);
    ledRGB();
    
    void set();
    void set( );
    void set(,int dimm);
    void set(int red,int green,int blue);
    void set(int red,int green,int blue,int dimm);
    
    void stropo()
    void stropo(int dimm; int acc);
    void stropo(; int dimm; int acc);
    void stropo(int red; int green; int blue; int acc);
    
    void fade(int acc);
    void fade(int red,int green,int blue,int acc);
    
    void blink(int acc);
    void blink(int red,int green,int blue,int acc);
    void blink(int red,int green,int blue,int red2,int green2,int blue2,int acc);

private:
    void set(int red; int green; int blue);
    int _red;
    int _green;
    int _blue;

}

#endif
