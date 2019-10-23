//sets motor to the speed of the potentiometer

int motor = 3;
int SpinnySpinSpin = A1;   //SpinnySpinSpin is the PotPin

void setup()
{
	pinMode(motor, OUTPUT);
	pinMode(SpinnySpinSpin, INPUT);
	Serial.begin(9600);
}

void loop()
{
	analogWrite(motor, analogRead(SpinnySpinSpin)/4);  //setting motor to value of PotPin divided by 4
	Serial.println(analogRead(SpinnySpinSpin));  //printing value
	delay(50);
}
