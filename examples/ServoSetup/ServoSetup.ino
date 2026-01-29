/*
 * ServoInitSetup
 * ----------------------------------------
 * This example is used during robot assembly.
 *
 * Purpose:
 *   - Allow servos to be powered and moved to the
 *     neutral (90-degree) position.
 *   - Help align servo horns correctly before
 *     tightening screws.
 *
 * Usage:
 *   1. Upload this sketch to the board.
 *   2. Connect servos to ports 2–5.
 *   3. Power on the board.
 *   4. All servos will move to 90 degrees.
 *   5. Assemble robot parts while servos are centered.
 *
 * Servo Port Mapping:
 *   Port 2 → Left Leg
 *   Port 3 → Right Leg
 *   Port 4 → Left Foot
 *   Port 5 → Right Foot
 *
 * Designed for BeyondCode Otto EP1
 */

#include <Servo.h>

// Create servo objects
Servo servoLeftLeg;
Servo servoRightLeg;
Servo servoLeftFoot;
Servo servoRightFoot;

// Servo ports (2–5)
const int PORT_LEFT_LEG   = 2;
const int PORT_RIGHT_LEG  = 3;
const int PORT_LEFT_FOOT  = 4;
const int PORT_RIGHT_FOOT = 5;

// Neutral (center) position for setup
const int SERVO_NEUTRAL = 90;

void setup() {
  // Attach each servo to its port
  servoLeftLeg.attach(PORT_LEFT_LEG);
  servoRightLeg.attach(PORT_RIGHT_LEG);
  servoLeftFoot.attach(PORT_LEFT_FOOT);
  servoRightFoot.attach(PORT_RIGHT_FOOT);
}

void loop() {
  // Servos stay at 90° while assembling the robot.
  
  // Move all servos to neutral position (90°)
  servoLeftLeg.write(SERVO_NEUTRAL);
  servoRightLeg.write(SERVO_NEUTRAL);
  servoLeftFoot.write(SERVO_NEUTRAL);
  servoRightFoot.write(SERVO_NEUTRAL);

  // Give time for servos to reach position
  delay(1000);
}
