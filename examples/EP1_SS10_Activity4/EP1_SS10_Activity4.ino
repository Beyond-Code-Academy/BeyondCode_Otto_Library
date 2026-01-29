/*
 * SS10 Activity 4: Otto Sounds
 * ----------------------------
 * Purpose:
 *   Make Otto produce sounds using the Otto library.
 *
 * Learning focus:
 *   - Calling sound functions from a library
 *   - Understanding that sound is an OUTPUT
 *
 * Example sound:
 *   - sing(S_mode1)
 *   - sing(S_happy)
 *   - sing(S_sleeping)
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
  // Initialize Otto robot
  Otto.init(LEFT_LEG, RIGHT_LEG, LEFT_FOOT, RIGHT_FOOT, true, BUZZER_PIN);

  // Move to neutral position
  Otto.home();
  delay(1000);

  // Play a sound
  Otto.sing(S_mode1);
  Otto.sing(S_happy);
  Otto.sing(S_sleeping);
}

void loop() {
  // No loop needed
  // Sound plays once when the robot starts
}
