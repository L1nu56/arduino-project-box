/* file:   accesspoint/accesspoint.cpp
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   source file of the accesspoint Server section
 */

#include <Arduino.h>
#include <Serial.h>
#include <Wifi.h>
#include "accesspoint.h"
#include "ap-MAKROS.h"

Server::Server(double port, char type[] = _type) {
     _port = port; _type = type;
     
     switch (_type) {
          case "tcp":
               _wifiServer = WiFiServer server(_port);
               break;
               
          case "udp":
               _wifiServer = WiFiUDP.begin(_port);
               break;
               
          default:
               Serial.print("Wrong type: ");
               Serial.println(_type);
               
               Serial.print("You can use 'tcp' or 'udp'");
               _port = 0; _type = 0;
               break;
     }
}

void Server::printMenu() {
     
}

void Server::printMesg(void status,void message) {
     
     client.println();
