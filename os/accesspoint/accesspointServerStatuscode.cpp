/* file:   accesspoint/accesspoint.cpp
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   source file of the accesspoint Server section
 */

#include <Arduino.h>
#include <Wifi.h>
#include "accesspoint.h"

void stat200() {
     client.println("HTTP/1.1 200 OK");
     client.println("Content-type:text/html");
     client.println();
}
void stat202() {
     client.println("HTTP/1.1 202 Accepted");
     client.println("Content-type:text/html");
     client.println();
}
void stat204() {
     client.println("HTTP/1.1 204 No Content");
     client.println();
}
void stat401() {
     client.println("HTTP/1.1 401 Unauthorized");
     client.println("Content-type:text/html");
     client.println();
}
void stat404() {
     client.println("HTTP/1.1 404 Not Found");
     client.println("Content-type:text/html");
     client.println();
}
void stat423() {
     client.println("HTTP/1.1 423 Locked");
     client.println("Content-type:text/html");
     client.println();
}
void stat429() {
     client.println("HTTP/1.1 429 Too Many Requests");
     client.println("Content-type:text/html");
     client.println();
}
void stat451() {
     client.println("HTTP/1.1 451 Unavailable For Legal Reasons");
     client.println("Content-type:text/html");
     client.println();
}
