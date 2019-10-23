
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



void setup() {

  lcd.begin(16, 2);
  lcd.print("hello world"); //printing "Hello World" to the first line of LCD screen
}


void loop() {

  lcd.setCursor(0, 1);		//seting cursor to second line of LCD screen

  lcd.print(millis() / 1000);  //seconds since last restart 
}