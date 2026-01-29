/*
 * SS7_BasicServoControl
 * ----------------------------------------
 * Activity: Control a servo motor(Challenge).
 *
 * Purpose:
 *   Use this code to test and control a servo motor.
 *   The servo will move to different angles.
 *
 * Usage:
 *   - Connect servo to port 4 and 5
 *   - Upload this sketch
 *   - Observe the servo movement
 *
 * This example is for learning how servo.write(angle) works.
 */

#include <Servo.h>

Servo myServo4;     // create servo4 object
Servo myServo5;     // create servo5 object

const int SERVO4_PORT = 4;   // servo connected to port 4
const int SERVO5_PORT = 5;   // servo connected to port 5

void setup() {
  myServo4.attach(SERVO4_PORT);  // connect servo to port
  myServo5.attach(SERVO5_PORT);  // connect servo to port
}

void loop() {
  myServo4.write(90);   // move servo to 90 degrees (center)
  myServo5.write(90);
  delay(2000);

  myServo4.write(0);    // move servo to 0 degrees
  myServo5.write(0);
  delay(2000);

  myServo4.write(180);  // move servo to 180 degrees
  myServo5.write(180);
  delay(2000);
}
