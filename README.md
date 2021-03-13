# arduino-project-box
Simply a box locked by an arduino, but with some optional features for the portenta h7

## 1. Requisites
  Ref | Value               | Part                           | Footprint                  | Description                            | Vendor
  ----|---------------------|--------------------------------|----------------------------|----------------------------------------|----------
  J1  | I2C-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | I2C-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | I2C-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | I2C-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | I2C-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | PWR-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | MOTOR-Conn          | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x04   | 
  J1  | PWM-Conn            | Connector:Conn_01x04_Female    |                            | Generic connector, single row, 01x02   | 
  Q1  | Q_NPN_BCE           | Device:Q_NPN_BCE               |                            | NPN transistor, base/collector/emitter | 
  Q1  | Q_NPN_BCE           | Device:Q_NPN_BCE               |                            | NPN transistor, base/collector/emitter | 
  R1  |1K                   | Device:R                       |                            | Resistor                               | 
  R1  |1K                   | Device:R                       |                            | Resistor                               | 
  R1  |10K                  | Device:R                       |                            | Resistor                               | 
  R1  |10K                  | Device:R                       |                            | Resistor                               | 
  M1  | STEPPER MOTOR       | Motor:Stepper_Motor_bipolar    |                            | Bipolar stepper motor                  | 
  U1  | L293D               | Driver_Motor:L293D             | Package_DIP:DIP-16_W7.62mm |	Quadruple Half-H Drivers               | 
  U2  | Arduino Portenta h7 | Device_MCU:Arduino_Portenta_h7 |                            | Microcontroller  Arduino               | 
  U3  | SCD30               | Sensor:SCD30                   |                            | CO2 Sensor                             | Sensirion
  U4  | LCM1602             | Driver_LCD:LCM1602             |                            | LC Display Driver                      | YwRobot
  U4  |                     | Device:                        |                            | Numeric Keypad                         | 
