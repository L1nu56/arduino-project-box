/* file:   accesspoint/ap-MAKROS.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Makros, data are declared here
 */

#include <Arduino.h>
#include <Wifi.h>

// Wifi status data
string wifiSSID = WiFi.SSID()
IPAddress wifiIP = WiFi.localIP();
long wifiRSSI = WiFi.RSSI(); 
