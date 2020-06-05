#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

// Function to log messages with timestamps
void logMessage(const char* message) {
    time_t now;
    time(&now);
    char* timeString = ctime(&now);
    
    // Remove the newline character from timeString
    timeString[strcspn(timeString, "\n")] = 0;
    
    printf("[%s] %s\n", timeString, message);
}

// Function to handle errors
void handleError(const char* errorMessage) {
    logMessage(errorMessage);
    // Additional error handling can be added here (e.g., clean up resources)
    exit(EXIT_FAILURE); // Exit the program with failure status
}

// Function to calculate the absolute value
int absolute(int value) {
    return (value < 0) ? -value : value;
}

// Function to clamp a value between a min and max
int clamp(int value, int min, int max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}
