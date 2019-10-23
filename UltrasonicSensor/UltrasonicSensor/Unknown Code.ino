#include <Servo.h>

int trigPin = 9;		//Ultrasonic Pins
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

digitalWrite(trigPin, HIGH);	//turning the trigPin on and off
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.000343/2;  //using wave length to determin distance
delay (1000);

Serial.print("Distance: ");		//printing distance
Serial.println(distance);

val = (distance^-20)400+1;       //setting a servo to turn based on the distance
myservo.write(val);
delay (1000);
}
