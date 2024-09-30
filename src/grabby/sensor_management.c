#include <stdio.h>
#include "sensor_management.h"

// Simulated sensor data
int objectDetected = 0; // 0 = no object, 1 = object detected

void initSensors() {
    // Initialize sensors (e.g., set up GPIO pins)
    objectDetected = 0; // Initial state
    printf("Sensors initialized.\n");
}

int isObjectWithinReach() {
    // Logic to determine if an object is within reach
    return objectDetected; // Return the state of detection
}

float getDistanceToObject() {
    // Simulate getting distance to an object
    // In a real implementation, this would read from a sensor
    return objectDetected ? 10.0 : -1.0; // Example value
}
