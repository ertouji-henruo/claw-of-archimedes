#ifndef UTILS_H
#define UTILS_H

// Function to log messages with timestamps
void logMessage(const char* message);

// Function to handle errors
void handleError(const char* errorMessage);

// Function to calculate the absolute value
int absolute(int value);

// Function to clamp a value between a min and max
int clamp(int value, int min, int max);

#endif // UTILS_H
