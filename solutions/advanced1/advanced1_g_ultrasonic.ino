// these two pins are required for the ultrasonic sensor to work
const int triggerPin = 13;
const int echoPin = 12;

// don't worry about what unsigned means, treat this like any other int
unsigned int currentDistance = 0; // variable to keep track of the distance ultrasonic sensor recorded

void setup()
{
	Serial.begin(9600);
	pinMode(triggerPin, OUTPUT);
	pinMode(echoPin, INPUT);
	digitalWrite(trigPin, LOW);
}

void loop()
{
	currentDistance = readDistance(); // [blank] how do we update the current distance with the provided magic code?
	Serial.print("The Current Distance is: " + currentDistance);
}













// Magic Code

// Read distance from the ultrasonic sensor, returns millimeters
unsigned int readDistance()
{
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  unsigned long period = pulseIn(echoPin, HIGH);
  return period * 343 / 2000;
}



