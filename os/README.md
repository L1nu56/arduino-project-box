Menu
---

1) [M7-Core \(Need a passphrase\)](#1-m7-core-passphrase-needed)
    1) [Box: open/close](#11-box-openclose)
    2) [Password reset](#12-password-reset)
    3) [Numeric Keypad](#13-numeric-keypad)
        1) [Config shortcuts](#131-config-shortcuts)
        2) [Show shortcuts](#132-show-shortcuts)
    4) [Wifi](#14-wifi)
        1) [Accesspoint](#141-accesspoint)
            1) [Start](#1411-start)
            2) [Stop](#1412-stop)
            3) [Status](#1413-status)
            4) [Config](#1414-config)
        2) [Server](#142-server)
            1) [Start](#1421-start)
            2) [Stop](#1422-stop)
            3) [Status](#1423-status)
            4) [Config](#1424-config)
2) [M4-Core \(No passphrase needed\)](#2-m4-core-no-passphrase-needed)
    1) [Sensors](#21-sensors)
        1) [print data](#211-print-data)
        2) [Calibrate](#212-callibrate)
            1) [CO2](#2121-co2)
            2) [Pressure](#2122-pressure)
    2) [RGB LED](#22-rgb-led)
        1) [Brightness](#221-brightness)
        2) [Acceleration](#222-acceleration)
        3) [State](#223-state)
3) [shutdown](#-shutdown)

# 1. M7-Core \(Passphrase needed\)
The M7-Core does all the tasks to open/close the box, configure the numeric keypad and wifi and reset your passphrase.

The password reset can only be entered in serial menu, due to the insecurity of the http server, as well as the 
passhrase from your accesspoint.

## 1.1. Box: open/close
You can activate this function to open and close the box.

On serial and the http server you will receive an error, that the action is locked as it's still in progress

## 1.2. Password reset
Here you can reset your password with reenter your old password first. Then type the new password twice

## 1.3. Numeric Keypad
In this submenu you can see what shortcuts you have set and configure those shortcuts.

### 1.3.1. Config shortcuts
Here you can add up to 10 shortcuts and label those. Every label starts with a \'\*\#\*\', but have in mind that the prefix 
don't show up when you enter a shortcut and you don't have to enter it.

### 1.3.2. Show shortcuts
This just show your shortcuts with your labels.

## 1.4. Wifi

### 1.4.1. Accesspoint

#### 1.4.1.1. Start

#### 1.4.1.2. Stop

#### 1.4.1.3. Status

#### 1.4.1.4. Config

### 1.4.2. Server

#### 1.4.2.1. Start

#### 1.4.2.2. Stop

#### 1.4.2.3. Status

#### 1.4.2.4. Config

---
# 2. M4-Core \(No passphrase needed\)
