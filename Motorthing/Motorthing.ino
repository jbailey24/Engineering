int motor = 3;
int SpinnySpinSpin = A1;

void setup()
{
	pinMode(motor, OUTPUT);
	pinMode(SpinnySpinSpin, INPUT);
	Serial.begin(9600);
}

void loop()
{
	analogWrite(motor, analogRead(SpinnySpinSpin)/4);
	Serial.println(analogRead(SpinnySpinSpin));
	delay(50);
}

