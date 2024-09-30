#ifndef SENSOR_MANAGEMENT_H
#define SENSOR_MANAGEMENT_H

// Function to initialize the sensors
void initSensors();

// Function to check if an object is within reach
int isObjectWithinReach();

// Function to get the distance to the nearest object
float getDistanceToObject();

#endif // SENSOR_MANAGEMENT_H
