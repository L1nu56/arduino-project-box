/* file:   accesspoint/ap-MAKROS.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Makros, data are declared here
 */

// Wifi secret data
#define AP_PASSPHRASE "01234567899876543210"
#define AP_SSID "AP Projekt Box"

// Wifi status data
string wifiSSID = WiFi.SSID()
IPAddress wifiIP = WiFi.localIP();
long wifiRSSI = WiFi.RSSI(); 
