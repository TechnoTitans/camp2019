const int motorPin1 = 2;
const int motorPin2 = 4;
const int motorEnable = 3;

void setup() {
//    set both of the motor pins to outputs
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, OUTPUT);
   pinMode(motorEnable, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorEnable, HIGH);
  delay(2000);
  digitalWrite(motorEnable, LOW);
  delay(2000);
}
