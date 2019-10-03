#include <Servo.h>

int trigPin = 9;
int echoPin = 10;
int ServoPin = 7;
int val;

float duration, distance;

Servo myservo;

void setup() {

myservo.attach(ServoPin);

pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
pinMode (ServoPin, OUTPUT);
Serial.begin(9600); 
}


void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.000343/2;
delay (1000);

Serial.print("Distance: ");
Serial.println(distance);

val = (distance^-20)400+1;
myservo.write(val);
delay (1000);
}
