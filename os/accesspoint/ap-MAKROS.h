/* file:   accesspoint/ap-MAKROS.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Makros, data are declared here
 */

#include <Arduino.h>
#include <Wifi.h>
<<<<<<< HEAD
byte bssid[6];

// Port whitelist
#define PORT_WHITELIST ( ( _port == 80 || _port == 443 || _port == 8008 || _port == 8090 || _port == 8080 ) || ( _port => 49152 && _port <= 65535 ) )
=======
>>>>>>> 66044bd06b3c441201a6478d4e0f13a37472dada

// Wifi status data
int status = WL_IDLE_STATUS;
string wifiSSID = WiFi.SSID();
byte wifiBSSID[6] = Wifi.BSSID(bssid)
IPAddress wifiIP = WiFi.localIP();
long wifiRSSI = WiFi.RSSI(); 
