/**
 * An example using the state machine to provide a power supply for a RPi
 * @version March 3, 2015
 * @author Cyrille Toulet, <cyrille.toulet@linux.com>
 */

#include "ABPS_StateMachine.h"


/////////////////////////////////////////
//          CONFIGURATION              //
/////////////////////////////////////////

// Buzzer
int BUZZER_PIN = 2;

// Power 0 (switch, LED and relay)
int POWER_0_SWITCH_PIN = 3;
int POWER_0_LED_PIN = 4;
int POWER_0_RELAY_PIN = 5;

// The state machine for first RPi power
ABPS_StateMachine sm1(POWER_0_SWITCH_PIN, POWER_0_LED_PIN, BUZZER_PIN, 
    POWER_0_RELAY_PIN);



/////////////////////////////////////////
//               RUN                   //
/////////////////////////////////////////

/**
 * Setup
 */
void setup() {
  // Set up the first state machine
  sm1.setup();
}

/**
 * The main loop
 */
void loop() {
  // Run a step of first state machine
  sm1.step();
}

