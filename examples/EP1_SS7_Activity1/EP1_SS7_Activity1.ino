/*
 * SS7_BasicServoControl
 * ----------------------------------------
 * Activity: Control a servo motor.
 *
 * Purpose:
 *   Use this code to test and control a servo motor.
 *   The servo will move to different angles.
 *
 * Usage:
 *   - Connect ONE servo to port 4
 *   - Upload this sketch
 *   - Observe the servo movement
 *
 * This example is for learning how servo.write(angle) works.
 */

#include <Servo.h>

Servo myServo;     // create servo object

const int SERVO_PORT = 4;   // servo connected to port 4

void setup() {
  myServo.attach(SERVO_PORT);  // connect servo to port
}

void loop() {
  myServo.write(90);   // move servo to 90 degrees (center)
  delay(2000);

  myServo.write(0);    // move servo to 0 degrees
  delay(2000);

  myServo.write(180);  // move servo to 180 degrees
  delay(2000);
}
