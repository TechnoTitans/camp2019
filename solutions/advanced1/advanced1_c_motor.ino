const int motorPin1 = 2;
const int motorPin2 = 4;
const int motorEnable = 3;

void setup() {
   // set both of the motor pins to outputs
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorEnable, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(motorEnable, 255); // analogWrite value range: [0-255]
  delay(2000);
  analogWrite(motorEnable, 0);
  delay(2000);
}