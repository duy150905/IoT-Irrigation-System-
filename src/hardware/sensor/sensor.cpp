
#include <DHT.h>
#define DHTPIN 22       // Pin P22 connects to DHT22 sensor
#define DHTTYPE DHT22  // DHT22 sensor type

DHT dht(DHTPIN, DHTTYPE);  // initialize DHT

void sensorInit() { dht.begin(); }

float readHumidity() { return dht.readHumidity(); }

float readTemperature() { return dht.readTemperature(); }
