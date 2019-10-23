#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int SpinnySpinSpin = A1;  //The potPin
int ledPin = 7;

void setup()
{
	lcd.init();				//setting up LCD screen
	lcd.backlight();
	lcd.begin(16, 2);
	lcd.print("Brightness:");      //printing "Brightness" on first line of LCD

	pinMode(SpinnySpinSpin, INPUT);
	pinMode(ledPin,OUTPUT);
}

void loop()
{
	lcd.setCursor(0,1);		//setting cursor to second line of the LCD screen

	int lit = analogRead(SpinnySpinSpin)/100;  //dividing potPin value by 100
	int roundlit = round(lit);    //Rounding number so that they will be whole numbers
	lcd.print(roundlit); 		
	lcd.print("    ");	

	/*I printed a bunch of spaces afterwards to
	make sure the that after the value is printed,
	if it is 2 digits, that it doesn't leave the
	one's place behind when the value goes back down
	e.i. going up to 10, then going down 90, 80
	etc. instead of 9,8,...*/
}