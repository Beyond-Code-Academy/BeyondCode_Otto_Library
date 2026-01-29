/*
 * SS10 Activity 3: Otto Dances
 * ----------------------------
 * Purpose:
 *   Use Otto library movement functions
 *   to make the robot dance.
 *
 * Learning focus:
 *   - Calling library functions
 *   - Understanding that complex movement
 *     can be done with one command
 *
 * Dances used:
 *   - moonwalker()
 *   - swing()
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

// Buzzer pin (change if needed)
#define BUZZER_PIN 8

void setup() {
  // Initialize Otto
  Otto.init(LEFT_LEG, RIGHT_LEG, LEFT_FOOT, RIGHT_FOOT, true, BUZZER_PIN);

  // Stand in neutral position
  Otto.home();
  delay(1000);
}

void loop() {
  // Dance 1: Moonwalker
  // moonwalker(steps, time, direction)
  Otto.moonwalker(2, 1000, 1);
  delay(500);

  // Dance 2: Swing
  // swing(steps, time)
  Otto.swing(2, 1000);
  delay(1000);
}
