#include <Servo.h> // This line allows us to use the Servo object (basically the library or software)


int servoPin = 11; // CHECK PWM pin for the servo

Servo servo; // Instantiate servo object (don't worry too much about it, think of it as just setting up the servo library)


void setup()
{
  servo.attach(servoPin); // tell the servo object to use the servo on pin 11
}

void loop()
{
  servo.write(/* [blank] */); // [blank] try experimenting with different angles 
}
