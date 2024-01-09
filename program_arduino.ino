#include <SoftwareSerial.h>

int x; 
const int pinLed = 5;


void setup() { 
	Serial.begin(115200); 
	Serial.setTimeout(1); 
  pinMode(pinLed, OUTPUT);
} 
void loop() { 
	while (!Serial.available()); 
	x = Serial.readString().toInt();


  if(x == 1){
    digitalWrite(pinLed, HIGH);
  }else {
    digitalWrite(pinLed, LOW);
  }
} 
