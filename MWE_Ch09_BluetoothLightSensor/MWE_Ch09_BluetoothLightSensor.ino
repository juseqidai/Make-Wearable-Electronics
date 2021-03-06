/*
Make: Wearable Electronics
 Bluetooth Light Sensor example
 */

// initialize variables
int lightSensorPin = A0;
int lightSensorValue = 0;

void setup() {
  // Initialize serial communication at 115200 bits per second. 
  // This is the default speed of communication for the RN-42. 
  Serial.begin(115200);
}

void loop() {
  // read the light sensor value
  int lightSensorValue = analogRead(lightSensorPin);
  // print the value of the light sensor 
  Serial.println(lightSensorValue);
  // add a delay between readings so as not to lock the radio with data overflow 
  delay(200);
}

