
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

int ledPinGreen = 10;
int ledPinYellow = 11;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin) / 4;
  
  analogWrite(ledPinGreen, sensorValue);
  analogWrite(ledPinYellow, 255-sensorValue);
  
  delay(30);
}
