
#include <Arduino.h>

#include "hardware/relay/relay.h"
#include "hardware/sensor/sensor.h"


void irrigate() {
    // initialize delay time in ms
    int delayTime = 10000;

    float humidity = readHumidity();
    float temp = readTemperature();

    if (isnan(humidity) || isnan(temp)) {
        // check if the sensor is damaged
        Serial.println("Failed to read data from DHT sensor!");
        return;
    }

    // Print the temperature and humidity values
    Serial.println("Temperature: " + String(temp) +
                   " *C, Humidity: " + String(humidity));

    // Relay control condition
    if (humidity <= 40.0 || temp >= 30.0) {
        turnOnRelay();
        Serial.println("Relay is ON");
    } else {
        turnOffRelay();
        Serial.println("Relay is OFF");
    }

    delay(delayTime);  // Wait 10 seconds before reading again
}