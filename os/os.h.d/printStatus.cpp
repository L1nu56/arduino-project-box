// print statements
void printWifiStatus() {
     
     // print the SSID of the network you're attached to:
     Serial.print("SSID: ");
     Serial.println(wifiSSID);
     
     // print your WiFi shield's IP address:
     Serial.print("IP Address: ");
     Serial.println(wifiIP);
     
     // print the received signal strength:
     Serial.print("signal strength (RSSI): ");
     Serial.print(wifiRSSI);
     Serial.println(" dBm");
}
void printSensorStatus() {
     Serial.print("co2(ppm):");                              // CO2 ppm
     Serial.println(co2);

     Serial.print("temp(C):");                               // Grad C
     Serial.println(cGrad);

     Serial.print("humidity(%):");                           // Humadity %
     Serial.println(hum);
} 
