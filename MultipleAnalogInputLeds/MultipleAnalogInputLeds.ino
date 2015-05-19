
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

int ledPinGreen = 5;
int ledPinYellow1 = 6;
int ledPinYellow2 = 10;
int ledPinRed = 11;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinYellow1, OUTPUT);
  pinMode(ledPinYellow2, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  
  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
    
  if (sensorValue<256) {
    analogWrite(ledPinGreen, 255-sensorValue);
    analogWrite(ledPinYellow1, sensorValue);
    analogWrite(ledPinYellow2, 0);
    analogWrite(ledPinRed, 0);
  }
  if (sensorValue<512 & sensorValue >255) {
    analogWrite(ledPinGreen, 0);
    analogWrite(ledPinYellow1, 511-sensorValue);
    analogWrite(ledPinYellow2, sensorValue-256);
    analogWrite(ledPinRed, 0);
  }
  if (sensorValue<768 & sensorValue >511) {
    analogWrite(ledPinGreen, 0);
    analogWrite(ledPinYellow1, 0);
    analogWrite(ledPinYellow2, 767-sensorValue);
    analogWrite(ledPinRed, sensorValue-512);
  }
  /*if (sensorValue<1024) {
    analogWrite(ledPinYellow1, 1023-sensorValue);
    analogWrite(ledPinYellow2, sensorValue-1024);
  }*/
  
  delay(30);
}
