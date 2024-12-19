This project demonstrates how to use an ESP8266 with a DHT22 sensor to read temperature and humidity values. The data is printed to the Serial Monitor.

##Hardware Required
ESP8266 Board (e.g., NodeMCU, Wemos D1 Mini)
DHT22 Sensor (Temperature and Humidity sensor)
Jumper Wires
Breadboard (optional, for prototyping)
Wiring Diagram
DHT22 VCC → 3.3V (on ESP8266)
DHT22 GND → GND (on ESP8266)
DHT22 DATA → GPIO D4 (or another available GPIO pin on ESP8266)
Make sure to add a pull-up resistor (4.7kΩ to 10kΩ) between the DATA pin and VCC for stable data reading.

Software Required
Arduino IDE (version 1.8.13 or later)
DHT Sensor Library by Adafruit
Adafruit Unified Sensor Library
Install Libraries
Open Arduino IDE.
Go to Sketch > Include Library > Manage Libraries...
Search for and install:
DHT sensor library by Adafruit
Adafruit Unified Sensor by Adafruit
Code Explanation
The code reads data from the DHT22 sensor and prints the temperature and humidity values to the Serial Monitor.

DHT22 Initialization: The sensor is initialized on GPIO pin D4 (or another GPIO pin you choose).
Reading Data: The code reads the humidity and temperature from the sensor every 2 seconds.
Error Handling: If the sensor fails to return valid readings, an error message is printed.
How to Upload the Code
Open Arduino IDE.
Select the correct ESP8266 Board in Tools > Board.
Connect your ESP8266 to your computer using a USB cable.
Select the appropriate Port under Tools > Port.
Click the Upload button to upload the code to your ESP8266.
Open the Serial Monitor at a baud rate of 115200 to view the temperature and humidity readings.
Example Output

DHT22 sensor initialized
Humidity: 45.00%    Temperature: 22.50°C
Humidity: 44.80%    Temperature: 22.55°C
Humidity: 45.10%    Temperature: 22.60°C

Troubleshooting
Failed to read from DHT sensor: Ensure the wiring is correct, the sensor is powered properly, and there is a pull-up resistor on the data line.
No readings on Serial Monitor: Check the serial baud rate setting in the Serial Monitor (115200) and verify the code upload was successful.
