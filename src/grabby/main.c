#include <stdio.h>
#include <unistd.h> // For sleep function
#include <wiringPi.h> // Assuming you're using WiringPi library for GPIO control

// Define GPIO pins
#define GRABBER_OPEN_PIN 0  // Pin for opening the grabber
#define GRABBER_CLOSE_PIN 1  // Pin for closing the grabber

void setup() {
    wiringPiSetup(); // Initialize wiringPi
    pinMode(GRABBER_OPEN_PIN, OUTPUT); // Set the grabber open pin as output
    pinMode(GRABBER_CLOSE_PIN, OUTPUT); // Set the grabber close pin as output
}

void grab() {
    digitalWrite(GRABBER_CLOSE_PIN, HIGH); // Close the grabber
    printf("Grabber is closing...\n");
    sleep(1); // Wait for a second
    digitalWrite(GRABBER_CLOSE_PIN, LOW); // Turn off the close signal
    printf("Grabber has closed.\n");
}

void release() {
    digitalWrite(GRABBER_OPEN_PIN, HIGH); // Open the grabber
    printf("Grabber is opening...\n");
    sleep(1); // Wait for a second
    digitalWrite(GRABBER_OPEN_PIN, LOW); // Turn off the open signal
    printf("Grabber has opened.\n");
}

int main() {
    setup(); // Initialize the setup

    // Example usage
    printf("Starting the robotic arm grabber...\n");
    grab();   // Grab an object
    sleep(2); // Hold the object for 2 seconds
    release(); // Release the object

    printf("Robotic arm grabber operation complete.\n");
    return 0;
}
