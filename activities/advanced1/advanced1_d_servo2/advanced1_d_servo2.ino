#include <Servo.h>


int servoPin = /* [blank] */; // blank pin for servo signal PWM pin for the servo
int maxAngle = 90; // the servo can only rotate up to +90 degrees
int minAngle = -90; // or -90 degrees

int angle = 0;	// this variable will keep track of the current angle of our servo
					// in this case we are going to start off at -90

Servo servo;

void setup()
{
  servo.attach(/* [blank] */); // blank what pin do we attatch? tell the servo object to use the servo from pin variable
}

void loop()
{
	angle /* [blank] */; // [blank] what do we do to the angle so that it changes over time?
	servo.write(angle);  
  delay(100);
}
