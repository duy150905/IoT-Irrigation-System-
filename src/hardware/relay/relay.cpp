
#include <Arduino.h>

#define RELAY_PIN 34  // Pin P34 connects to relay

void relaysInit() {
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);  // Ensure relay starts in off state
}

void turnOnRelay() { digitalWrite(RELAY_PIN, LOW); }

void turnOffRelay() { digitalWrite(RELAY_PIN, HIGH); }