//
// AA0914, TMP36 sensor
//

#define TEMP_INPUT 0
// or  int TEMP_INPUT = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
   //getting the voltage reading from the temperature sensor
  int value = analogRead(TEMP_INPUT);
  
  // Print value
  Serial.print("AA0914, value = ");
  Serial.print(value);
  Serial.print(" : ");

  // converting that reading to voltage
  float voltage = value * 5.0 * 1000;
  voltage /= 1023.0;

  Serial.print(voltage);
  Serial.print(" mV, ");

  float temperatureC = (voltage - 500) / 10;
  Serial.print(temperatureC);
  Serial.println(" degrees C");

  delay(100);
}
