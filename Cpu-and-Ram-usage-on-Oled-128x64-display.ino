#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET);

String serialReceive;                         
String CPUstat;
String RAMstat;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  Serial.begin(9600);
}

void loop() {
  cpu();
}

void cpu() {
if(Serial.available() > 0) {   
      
  serialReceive = Serial.readString();      
  CPUstat = serialReceive.substring(0, 5);    
  RAMstat = serialReceive.substring(5, 10);

  display.clearDisplay();
  display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(15,0);
  display.println("Pc Monitoring");
  display.setTextSize(2);
  //cpu
  display.setCursor(0,20);
  display.println("CPU%");
  display.setCursor(43,20);
  display.println(CPUstat);
  //ram
  display.setCursor(0,40);
  display.println("RAM%");
  display.setCursor(49,40);
  display.println(RAMstat);
 
  display.display();
  delay("1000");

   } else {

  display.clearDisplay();
  display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,25);
  display.println("No serial connection");
  display.display();

   }

}