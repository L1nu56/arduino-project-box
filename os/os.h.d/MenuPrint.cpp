// Menus - Serial
#define SERIAL_LINE Serial.printIn("--------------------------------------------");
short printMenu() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("_____________Menu - Select Cores____________")
     Serial.printIn("-1)______________________________________M7-")
     Serial.printIn("-2)______________________________________M4-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub1() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("_________________Menu - M7__________________")
     Serial.printIn("-1)__________________________Box open/close-")
     Serial.printIn("-2)__________________________Password reset-")
     Serial.printIn("-3)__________________________Numeric Keypad-")
     Serial.printIn("-4)____________________________________Wifi-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub2() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("_____Menu - Wifi______")
     Serial.printIn("-1)__________________________________Status-")
     Serial.printIn("-2)______________________________Start/Stop-")
     Serial.printIn("-3)__________________________________Config-")
     Serial.printIn("-4)____________________________________Wifi-")
     Serial.printIn("-5)______________________________________M4-")
     Serial.printIn("-6)________________________________Shutdown-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub3() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("__________________Menu - M4_________________")
     Serial.printIn("-0)________________________________________-")
     Serial.printIn("-0)________________________________________-")
     Serial.printIn("-0)________________________________________-")
     Serial.printIn("-1)_________________________________Sensors-")
     Serial.printIn("-2)_________________________________RGB LED-")
     Serial.printIn("-3)_________________________________Go back-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub2Sub1() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("_________Menu_________")
     Serial.printIn("-1)____Box open/close-")
     Serial.printIn("-2)___Password change-")
     Serial.printIn("-3)____Numeric Keypad-")
     Serial.printIn("-4)______________Wifi-")
     Serial.printIn("-5)________________M4-")
     Serial.printIn("-6)__________Shutdown-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub3Sub1() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("_________Menu_________")
     Serial.printIn("-1)____Box open/close-")
     Serial.printIn("-2)___Password change-")
     Serial.printIn("-3)____Numeric Keypad-")
     Serial.printIn("-4)______________Wifi-")
     Serial.printIn("-5)________________M4-")
     Serial.printIn("-6)__________Shutdown-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
}
short printMenuSub3Sub2() {
     short r = Serial.read();
     
     // Menu
     Serial.printIn("____________Menu - M4 -> RGB LED____________")
     Serial.printIn("-1)__________________________________ON/OFF-")
     Serial.printIn("-2)_____________________________Accleration-")
     Serial.printIn("-3)__________________________________States-")
     Serial.printIn("-4)________________________________Schedule-")
     Serial.printIn("-5)______________________________________M4-")
     Serial.printIn("-6)________________________________________-")
     SERIAL_LINE
     Serial.printIn("Enter a number: ")
} 
