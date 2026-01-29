/*
 * SS8 Activity 1: The Robot Speaker (Basic)
 * ----------------------------------------
 * Purpose:
 *   Learn how to control a buzzer using
 *   pinMode() and digitalWrite().
 *
 * Usage:
 *   - Connect a buzzer to port 13
 *   - Upload this sketch
 *   - The buzzer will turn ON and OFF
 *
 * Learning focus:
 *   - pinMode()
 *   - digitalWrite()
 *
 * Designed for BeyondCode Otto EP1 / SS8
 */

void setup() {
  // Set buzzer pin as OUTPUT
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  // turn buzzer ON
  delay(200);

  digitalWrite(13, LOW);   // turn buzzer OFF
  delay(200);
}
