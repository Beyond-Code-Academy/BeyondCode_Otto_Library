/*
 * SS9 Activity 1: IF / ELSE with Ultrasonic
 * -----------------------------------------
 * Purpose:
 *   Use if / else to make decisions
 *   based on distance from ultrasonic sensor.
 *
 * Learning focus:
 *   - if
 *   - else
 *   - condition (distance)
 *
 * Wiring:
 *   TRIG -> pin 8
 *   ECHO -> pin 9
 *
 * Designed for BeyondCode Otto / SS9
 */

#include <UltrasonicSensor.h>

const int TRIG_PIN = 8;
const int ECHO_PIN = 9;

UltrasonicSensor ultrasonic(TRIG_PIN, ECHO_PIN);

// Distance threshold (cm)
const int LIMIT_DISTANCE = 15;

void setup() {
  Serial.begin(9600);
  delay(200);
}

void loop() {
  int distanceCm = ultrasonic.distanceInCentimeters();

  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  // IF / ELSE decision
  if (distanceCm < LIMIT_DISTANCE) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object.");
  }

  delay(300);
}
