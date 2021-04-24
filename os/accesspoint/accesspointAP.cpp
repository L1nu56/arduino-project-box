/* file:   accesspoint/accesspoint.cpp
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   source file of the accesspoint AP section
 */ 

#include <Arduino.h>
#include <Serial.h>
#include <Wifi.h>
#include "accesspoint.h"
#include "ap-MAKROS.h"

// Class: AP
bool AP::AP(char ssid[]; char pass[]) {
     if ( strlen(pass) < 8 ) {
          Serial.println("Password is too short. It must contain a minimum of 8 charachters!");
          return false;
     }
     _pass = pass;
     
     if ( strlen(ssid) == 0 && strlen(_ssid) > 0 )
          return true;
     
     _ssid = ssid;
     
     return true;
}

bool AP::status() {
     Serial.print("Accesspoint: ")
     if ( _status != WL_AP_LISTENING ) {
          Serial.println(_status);
          return false;
     }
     // else print WL_AP_LISTENING
     Serial.println(_status);
     
     // print the SSID of the network you're attached to:
     Serial.print("SSID: ");
     Serial.println(wifiSSID);
     
     // print your WiFi shield's IP address:
     Serial.print("IP Address: ");
     Serial.println(wifiIP);
     
     // print the open port 
     Serial.print("open Port: ");
     Serial.println(_port);
     
     // print the received signal strength:
     Serial.print("signal strength (RSSI): ");
     Serial.print(wifiRSSI);
     Serial.println(" dBm");
}

bool AP::start() {
     Serial.print("Starting accesspoint: ");
     _status = WiFi.beginAP(_ssid,_pass);
     if ( _status != WL_AP_LISTENING ) {
          Serial.println("failed.");
          _status = status;
          return false;
     }
     for ( int i = 1; i <= 9; i++) {
          Serial.print(".");
          delay(1000);
     }    Serial.println(".");
     Serial.println("Success");
     
     if ( _autoStartServer = True ) {
          if ( PORT_WHITELIST )
               WiFiServer server(_port, _type);
     }
          
     return true
}

bool AP::stop() {
     Serial.print("Stoping accesspoint: ");
     Wifi.end();
     _status = WiFi.stopAP(_ssid,_pass);
     
     for ( int i = 1; i <= 2; i++) {
          Serial.print(".");
          delay(1000);
     }    Serial.println(".");
     Serial.println("Success");
     return true
}
