#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd1(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd2(0x26,16,2);
LiquidCrystal_I2C lcd3(0x25,16,2);
LiquidCrystal_I2C lcd4(0x24,16,2);
LiquidCrystal_I2C lcd5(0x23,16,2);
LiquidCrystal_I2C lcd6(0x22,16,2);
LiquidCrystal_I2C lcd7(0x21,16,2);
LiquidCrystal_I2C lcd8(0x20,16,2);
#define echoPin 2
#define trigPin 3

long duration; // variable for the duration of sound wave travel
int distance; // 

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  lcd1.init();
  lcd2.init();
  lcd3.init();
  lcd4.init();
  lcd5.init();
  lcd6.init();
  lcd7.init();
  lcd8.init();
  
  lcd1.clear();
  lcd2.clear(); 
  lcd3.clear(); 
  lcd4.clear();
  lcd5.clear(); 
  lcd6.clear();
  lcd7.clear();
  lcd8.clear();
   
             
  lcd1.backlight();// Make sure backlight is on
  lcd2.backlight();// Make sure backlight is on
  lcd3.backlight();// Make sure backlight is on
  lcd4.backlight();// Make sure backlight is on
  lcd5.backlight();// Make sure backlight is on
  lcd6.backlight();// Make sure backlight is on
  lcd7.backlight();// Make sure backlight is on
  lcd8.backlight();// Make sure backlight is on
  
  
  
  // Print a message on both lines of the LCD.
  lcd1.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd1.print("Display-5");
  lcd1.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd1.print("Address is 0x27");

  lcd2.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd2.print("Display-2");
  lcd2.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd2.print("Address is 0x26");
  
  lcd3.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd3.print("Display-3");
  lcd3.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd3.print("Address is 0x25");

  lcd4.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd4.print("Display-4");
  lcd4.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd4.print("Address is 0x24");

  lcd5.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd5.print("Display-5");
  lcd5.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd5.print("Address is 0x23");

  lcd6.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd6.print("Display-6");
  lcd6.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd6.print("Address is 0x22");

  lcd7.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd7.print("Display-7");
  lcd7.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd7.print("Address is 0x21");

  lcd8.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd8.print("Display-8");
  lcd8.setCursor(1,1);   //Move cursor to character 2 on line 1
  lcd8.print("Address is 0x20");
  delay(1000);
  
  
}

void loop() {// Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  lcd1.setCursor(0,0);
  lcd1.print("Distance: ");
  lcd1.print(distance);
  lcd1.println(" cm");
}
