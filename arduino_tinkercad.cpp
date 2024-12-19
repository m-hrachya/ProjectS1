const int sensorPin = A0;
float voltage, temperature;

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read analog voltage
  voltage = sensorValue * (5.0 / 1023.0);  // Convert to voltage (5V reference)

  // Convert voltage to temperature (in °C)
  temperature = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}