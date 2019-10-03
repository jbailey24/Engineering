
int LED = 8;
int photoPin = 2;

void setup() {

  pinMode (LED, OUTPUT);
  pinMode(photoPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(2), rise, RISING);
  attachInterrupt(digitalPinToInterrupt(2),fall, FALLING);
}
void rise() {

  boolean Value = digitalRead(photoPin);

  if (Value == HIGH) {
    digitalWrite(LED, HIGH);
  }
}

void fall() {

  boolean Value = digitalRead(photoPin);

    digitalWrite(LED, LOW);
  if (Value == LOW) {
  }
}