#include <Arduino.h>

int ledPins[] = {2, 4, 5, 18};
int numLeds = 4; // LED 的数量

void setup() {
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW);
}
}

void loop() {
    for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], HIGH); 
        delay(300);                     
    }

    for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], LOW);  
        delay(300);                     
    }
}