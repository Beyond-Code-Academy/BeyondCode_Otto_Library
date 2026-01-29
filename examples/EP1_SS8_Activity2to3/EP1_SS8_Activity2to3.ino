/*
 * SS8 Activity 2–3: Adding Vision & Communication
 * -----------------------------------------------
 * Purpose:
 *   - Use an ultrasonic sensor to measure distance (Vision)
 *   - Send the distance value to the computer (Communication)
 *
 * Learning focus:
 *   - Using a library (UltrasonicSensor.h)
 *   - Serial.begin()
 *   - Serial.print() / Serial.println()
 *
 * Wiring example:
 *   TRIG -> pin 8
 *   ECHO -> pin 9
 *   VCC  -> 5V
 *   GND  -> GND
 *
 * Designed for BeyondCode Otto / SS8
 */

#include <UltrasonicSensor.h>

const int TRIG_PIN = 8;
const int ECHO_PIN = 9;

// Create ultrasonic sensor object
UltrasonicSensor ultrasonic(TRIG_PIN, ECHO_PIN);

void setup() {
  // Start communication with computer
  Serial.begin(9600);
  delay(200);
}

void loop() {
  // Read distance from ultrasonic sensor
  int distanceCm = ultrasonic.distanceInCentimeters();

  // Send distance value to computer
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  delay(200);
}
