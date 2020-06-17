#include <Servo.h>

#define SERVO_PIN 9

Servo myservo;

void setup() {
  myservo.attach(SERVO_PIN);
}

void loop() {
  myservo.write(0);
  delay(1000);

  myservo.write(180);
  delay(1000);

  myservo.write(90);
  delay(1000);
}
