int motor = A0;
void setup()
{
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogWrite(motor, 128);
  Serial.println(analogRead(motor));
  delay(100);
}
