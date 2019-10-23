
int LED = 8;
int photoPin = 2;

void setup() {

  pinMode (LED, OUTPUT);
  pinMode(photoPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(2), rise, RISING);  //only continues to functions if photointerupter is interupted
  attachInterrupt(digitalPinToInterrupt(2),fall, FALLING);
}
void rise() {

  boolean Value = digitalRead(photoPin);    //sets LED to HIGH if interupted

  if (Value == HIGH) {
    digitalWrite(LED, HIGH);
  }
}

void fall() {

  boolean Value = digitalRead(photoPin);  //sets LED to LOW if not interupted

    digitalWrite(LED, LOW);
  if (Value == LOW) {
  }
}
