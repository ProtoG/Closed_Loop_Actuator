// Proto G Engineering 07/03/2025
//ESP32 Closed Loop Stepper Motor Test

int directionPin = 22;
int stepPin = 23;
int numberOfStepsPerRevolution = 3200;//This is the number of steps when set to 1/16 microsteps
int ledPin = 2;//This is the built in LED on the ESP32 board that I am using


void setup() { 
  digitalWrite(ledPin, LOW);
  
  delay(2000);

  pinMode(directionPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(2, OUTPUT);  
 
  digitalWrite(directionPin, LOW);
  for(int n = 0; n < (numberOfStepsPerRevolution*39); n++) {
    digitalWrite(stepPin, HIGH);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(30);
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  delay(1000);
  
  digitalWrite(directionPin, HIGH);
  for(int n = 0; n < (numberOfStepsPerRevolution*39); n++) {
    digitalWrite(stepPin, HIGH);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(15);    
    digitalWrite(ledPin, !digitalRead(ledPin));
  }

}
 
void loop() { 
}
