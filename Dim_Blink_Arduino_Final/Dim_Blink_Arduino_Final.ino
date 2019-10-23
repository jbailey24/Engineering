

#include "Arduino.h"
#define WLED  10
int ledLight = 0;  //used to get brighter
int ledDim = 255;  //used to get dimmer
int ledRead;
int ledRound;    
int ledRead2;
int ledRound2;    

void setup()
{
  pinMode(WLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

    ledLight++;
  while (ledLight <= 254) {   //incrementally adding brightness   
    analogWrite(WLED, ledLight);
    delay(20);

    ledRead = ledLight / 10;     // This next section makes the brightness into a graph
    ledRound = round(ledRead);

    for (int i = ledRound; i > 0; i = i-1) {
      Serial.print("_");
    }
    Serial.println("");
  }

  while (ledLight == 255) {    //Incramentally reducing brightness
    ledDim = ledDim - 1;
    analogWrite(WLED, ledDim);
    delay(20);

    ledRead2 = ledDim / 10;     //This next section also makes the brightness into a graph
    ledRound2 = round(ledRead2);

    for (int i = ledRound2; i > 0; i = i-1) {
      Serial.print("_");
    }
    Serial.println("");

    if (ledDim == 0) {         //resets the variables to continue the loop
      ledLight = 0;
      ledDim = 255;
    }
  }

}
