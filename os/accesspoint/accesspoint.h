
#ifndef Morse_h
#define Morse_h

// Start of class AP
class AP {

public:
     AP(char[] ssid; char[] pass; short wpa);
     
     void start();
     void stop();
     void status();
     
private:
     char[] _ssid;
     char[] _pass;
     short _wpa;
     
}
// End of class AP


// Start of class Server
class Server {
     
public:
     Server(double port);
     
     void printMenu();
     void printMesg(void message);
     
     int getFunc();
     
private:
     double _port;
     
}
// End of class Server

#endif
