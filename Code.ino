// Libraries
#include <DHT.h>

// Defining Constants
#define DHTPIN 7 // The pin where we'll connect to
#define DHTTYPE DHT22 // AM2302 | If you're using other DHT sensor type replace DHT22 for your sensor (example DHT11)
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for Arduino 16mhz

// Defining Variables
int chk;
float hum; // It will store humidity value
float temp; // It will store temperature value

void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  delay(2000);

  // Reading data and storing into variables (temp/hum)
  hum = dht.readHumidity();
  temp = dht.readTemperature();

  // Printing on serial monitor
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" %, Temperature: ");
  Serial.print(temp);
  Serial.print(" °C");
  delay(10000); //Delay 10 seconds

}
