/*
 * MotorKnob
 *
 * A stepper motor follows the turns of a potentiometer
 * (or other sensor) on analog input 0.
 *
 * http://www.arduino.cc/en/Reference/Stepper
 * This example code is in the public domain.
 */
// Modified to suit my stepper motor.

#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 200

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, 8, 9, 10, 11);
// NOTE : Connect the 9 to IN 3 of ULN 2003, and Pin 8 to IN 2.
// or else the motor will not run counterclockwise

// the previous reading from the analog input
int previous = 0;

void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(60);
}

void loop() {
  Serial.println("clockwise");
  stepper.step(STEPS);
}
