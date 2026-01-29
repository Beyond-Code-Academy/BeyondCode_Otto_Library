/*
 * SS10 Activity 5: Otto Gesture
 * -----------------------------
 * Purpose:
 *   Make Otto perform gestures using the Otto library.
 *
 * Learning focus:
 *   - Calling gesture functions from a library
 *   - Understanding gestures as "actions" (movement + style)
 *
 * Example gestures:
 *   - playGesture(OttoHappy)
 *   - playGesture(OttoSad)
 *
 * Designed for BeyondCode Otto / SS10
 */

#include <Otto.h>

Otto Otto;

// Servo ports
#define LEFT_LEG   2
#define RIGHT_LEG  3
#define LEFT_FOOT  4
#define RIGHT_FOOT 5

// Buzzer pin
#define BUZZER_PIN 8

void setup() {
  // Initialize Otto
  Otto.init(LEFT_LEG, RIGHT_LEG, LEFT_FOOT, RIGHT_FOOT, true, BUZZER_PIN);

  // Neutral position
  Otto.home();
  delay(1000);

  // Gesture 1
  Otto.playGesture(OttoHappy);
  delay(1500);

  // Gesture 2
  Otto.playGesture(OttoSad);
  delay(1500);
}

void loop() {
  // No loop needed
  // Gestures run once at startup
}
