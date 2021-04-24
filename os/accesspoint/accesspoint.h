/* file:   accesspoint/accesspoint.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Header file of the accesspoint
 */

#include <Arduino.h>
#include <inttypes.h>
#include "ap-MAKROS.h"

#ifndef accesspoint_h
#define accesspoint_h

// Start of class AP
class AP {

public:
     AP(char ssid[]; char pass[]; uint8_t channel = _channel);
     
     bool start();
     bool stop();
     bool status();
     
private:
     char _ssid[];
     byte _bssid[6];
     char _pass[];
     short _wpa;
     uint8_t _channel = 0;
     int _status;
     
     bool testSSIDPass() {
          
}// End of class AP


// Start of class Server
class Server {
     
public:
     Server(double port, char type[] = _type);
     
     void printMenu();
     void printMesg(void status)
     void printMesg(void status,void message);
     
     void stat200(); // OK
     void stat202(); // Accepted
     void stat204(); // No Content
     void stat400(); // Bad Request
     void stat401(); // Unauthorized
     void stat404(); // Not Found
     void stat423(); // Locked
     void stat429(); // Too Many Requests
     void stat451(); // unavailable for legal reason
     
     int getFunc();
     
private:
     double _port;
     char _type[] = "tcp"
     
}// End of class Server

#endif
