#include <DHT.h> 

#define DHTPIN D4       // Pin where the DHT22 is connected
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE); // Initialize sensor

void setup() {
  Serial.begin(115200);  
  dht.begin();           // Start the sensor
  Serial.println("DHT22 Sensor Test!");
}

void loop() {
  float humidity = dht.readHumidity();       // Read humidity
  float temperature = dht.readTemperature(); // Read temperature in Celsius

  // Check if any reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print readings to the Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(2000); // Wait 2 seconds
}