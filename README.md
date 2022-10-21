# Cpu-and-Ram-usage-on-Oled-128x64-display

### In this repo you will find two documents:

## Cpu-and-Ram-usage-on-Oled-128x64-display.ino
 * This code will allow you to make your Oled display work, you can modify it as you like 

 * Has been developed on an Arduino nano ! 

* Connection and wiring : 

    * Gnd --> Gnd
    * VCC --> 5V
    * SCL --> A5
    * SDA --> A4
    
## CpuRamMonitor.py

  * This code will allow you to get the CPU and Ram statistics and send it to your Arduino!
  
  * Has been developed on windows and for windows 
  
  * you can config the script as you want with a text editor 
  
  
# How to set it up 

 * Write Cpu-and-Ram-usage-on-Oled-128x64-display.ino on your arduino and downlad library
 * Set cables management
 * pull the code on your arduino 
 
 * Downlad python https://www.python.org/downloads/ and open your cmd and enter "pip install psutil" and "pip install pyserial"
 * run CpuRamMonitor.py
 **that it !**


# What it looks like ? 

![Capture d’écran 2022-10-21 225603](https://user-images.githubusercontent.com/52079576/197296151-b5b964ad-895f-4129-9e29-7ff76ddcf3f3.png)
