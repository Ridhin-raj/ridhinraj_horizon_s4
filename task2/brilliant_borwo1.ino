#include <Servo.h>

Servo myservo;  
const int potPin = A0;   // Potentiometer input
const int ledPin = 4;    // Warning LED
const int servoPin = 9;  // Servo signal pin

int potValue = 0;        // Raw data from potentiometer
int targetAngle = 0;     // Calculated angle

void setup() {
  pinMode(ledPin, OUTPUT);
  myservo.attach(servoPin);
  Serial.begin(9600);   
}

void loop() {
  // Read the potentiometer (0 to 1023)
  potValue = analogRead(potPin);

  
  targetAngle = map(potValue, 0, 1023, 0, 180);

  // 68-degree Safety Limit
  if (targetAngle > 68) {
    
    myservo.write(68);          // Lock the servo at 68 degrees
    
    digitalWrite(ledPin, HIGH); // Turn on Warning LED
    
    Serial.print("LIMIT EXCEEDED! Locked at: 68 | Input was: ");
  } 
  else {
    myservo.write(targetAngle); // Move normally within safe range
    
    digitalWrite(ledPin, LOW);  // Keep LED off
    
    Serial.print("Safe Range. Angle: ");
  }

  Serial.println(targetAngle);
  
  delay(15); 
}