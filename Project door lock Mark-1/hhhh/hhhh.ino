#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(2);  // attaches the servo on pin 13 to the servo object
}

void loop() {
 if(pos==0)
 {
  myservo.write(160);
 }
 else
 {
  myservo.write(0);
 }
}
