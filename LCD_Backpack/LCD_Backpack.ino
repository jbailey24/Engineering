#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int buttonPin = 6;
int Switch = 7;

int Count = 0;
int State = 0; // Used for state change detection
int lastState = 0; // Used for state change detection


void setup()
{
	lcd.init();
	lcd.backlight();
	lcd.begin(16, 2);
	lcd.print("ButtonCount:");

	pinMode(buttonPin, INPUT);
	pinMode(Switch, INPUT);
}


void loop()
{
	lcd.setCursor(0, 1); // sets cursor to second line

	State = digitalRead(buttonPin); //if the switch is on, the button counts up
	if (Switch == HIGH)
	{
		if (State != lastState)
		{
			if (State == HIGH)
			{
				Count++;
				lcd.print(Count);
				lcd.print("   ");
			}
			delay(50);
		}
	}
	if (Switch == LOW)  //if the switch is off, the button counts down
	{
		if (State != lastState)
		{
			if (State == HIGH)
			{
				Count--;
				lcd.print(Count);
				lcd.print("   ");
			}
			delay(50);
		}
	}
	lastState = State; //setting the state to the last state in onder to continue cycle
}
