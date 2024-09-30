#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

// Function to initialize the servos
void initServos();

// Function to set the angle of a servo motor
void setServoAngle(int servoId, int angle);

// Function to stop all servos
void stopServos();

#endif // SERVO_CONTROL_H
