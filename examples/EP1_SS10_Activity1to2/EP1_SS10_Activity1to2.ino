/*
 * SS10 Activity 1–2: Otto Setup + Otto Movement (walk)
 * ----------------------------------------------------
 * Purpose:
 *   - Activity 1: Setup Otto library (attach servos + home position)
 *   - Activity 2: Make Otto walk using Otto.walk()
 *
 * Servo ports (Otto standard):
 *   Port 2 → Left Leg
 *   Port 3 → Right Leg
 *   Port 4 → Left Foot
 *   Port 5 → Right Foot
 *
 * Note:
 *   - Buzzer pin depends on your wiring/shield.
 *   - If your buzzer is not on pin 13, change BUZZER_PIN.
 */

#include <Otto.h>

Otto Otto;

// Servo pins
#define LEFT_LEG   2
#define RIGHT_LEG  3
#define LEFT_FOOT  4
#define RIGHT_FOOT 5

// Buzzer pin (change if your kit uses a different pin)
#define BUZZER_PIN 13

void setup() {
  // Setup Otto: attach servos and set calibration (true)
  Otto.init(LEFT_LEG, RIGHT_LEG, LEFT_FOOT, RIGHT_FOOT, true, BUZZER_PIN);

  // Move servos to neutral standing position
  Otto.home();
  delay(1000);
}

void loop() {
  // Make Otto walk forward:
  // walk(steps, time_ms, direction)
  // direction:  1 = forward,  -1 = backward
  Otto.walk(2, 1000, 1);
  delay(500);
}
