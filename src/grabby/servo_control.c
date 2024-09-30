#include <stdio.h>
#include "servo_control.h"

// Simulated servo state
int servoAngles[3] = {0, 0, 0}; // Assuming 3 servos for the arm

void initServos() {
    // Initialize servos (e.g., set up GPIO pins)
    for (int i = 0; i < 3; i++) {
        servoAngles[i] = 0; // Set initial angles to 0
    }
    printf("Servos initialized.\n");
}

void setServoAngle(int servoId, int angle) {
    if (servoId < 0 || servoId >= 3) {
        printf("Invalid servo ID: %d\n", servoId);
        return;
    }
    servoAngles[servoId] = angle; // Update the angle
    // Logic to actually set the servo angle (e.g., using PWM)
    printf("Set servo %d to angle %d degrees.\n", servoId, angle);
}

void stopServos() {
    // Logic to stop all servos
    for (int i = 0; i < 3; i++) {
        servoAngles[i] = 0; // Reset angles
    }
    printf("All servos stopped.\n");
}
