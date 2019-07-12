const int motorPin1 = 2;
const int motorPin2 = 4;
const int motorEnable = 3;

void setup() {
   // set both of the motor pins to outputs
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorEnable, OUTPUT);
   setMotorSpeed(0);
}

// the loop function runs over and over again forever
void loop() {
	setMotorSpeed(255); // Speed values must be between -255 and +255
	delay(2000);
	setMotorSpeed(127);
}


// Magic Code
void setMotorSpeed(int speed)
{
  digitalWrite(motorPin1, speed > 0 ? HIGH : LOW);
  digitalWrite(motorPin2, speed <= 0 ? HIGH : LOW);
  analogWrite(motorEnable, speed < 0 ? -speed : speed);
}