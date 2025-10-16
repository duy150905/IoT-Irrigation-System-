#include <Arduino.h>

#include "../lib/dotenv/dotenv.h"
#include "hardware/relay/relay.h"
#include "hardware/sensor/sensor.h"
#include "irrigation/irrigation.h"
#include "network/network.h"

void setup() {
    Serial.begin(115200);  // Data transfer rate
    sensorInit();
    relaysInit();
}

void loop() 
{ irrigate(); }
