#include <Servo.h>


const int servoPin = 11; // PWM pin for the servo
const int maxAngle = 90; // the servo can only rotate up to +90 degrees
const int minAngle = -90; // or -90 degrees

int angle = 0;	// this variable will keep track of the current angle of our servo
					// in this case we are going to start off at -90

Servo servo;

void setup()
{
  servo.attach(servoPin); // tell the servo object to use the servo on pin 11
}

void loop()
{
	angle = angle + 5; // [blank] what do we do to the angle so that it changes over time?
	servo.write(angle);  
  delay(100);
}
