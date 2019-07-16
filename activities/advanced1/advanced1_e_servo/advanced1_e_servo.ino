#include <Servo.h> // This line allows us to use the Servo object


const int servoPin = 11; // PWM pin for the servo

Servo servo;


void setup()
{
  servo.attach(servoPin); // tell the servo object to use the servo on pin 11
}

void loop()
{
  servo.write(50); // [blank] try experimenting with different angles 
}
