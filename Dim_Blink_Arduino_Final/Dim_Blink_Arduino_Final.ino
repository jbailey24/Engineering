#include "Arduino.h"
#define WLED  10
int ledLight = 0;
int ledDim = 255;
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


  while (ledLight <= 254) {
    ledLight++;
    analogWrite(WLED, ledLight);
    delay(20);

    ledRead = ledLight / 10;
    ledRound = round(ledRead);

    for (int i = ledRound; i > 0; i = i-1) {
      Serial.print("_");
    }
    Serial.println("");
  }

  while (ledLight == 255) {
    ledDim = ledDim - 1;
    analogWrite(WLED, ledDim);
    delay(20);

    ledRead2 = ledDim / 10;
    ledRound2 = round(ledRead2);

    for (int i = ledRound2; i > 0; i = i-1) {
      Serial.print("_");
    }
    Serial.println("");

    if (ledDim == 0) {
      ledLight = 0;
      ledDim = 255;
    }
  }

}
