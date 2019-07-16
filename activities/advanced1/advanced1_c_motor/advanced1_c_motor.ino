const int motorPin1 = 2; // Make sure these are the ones that you plugged in too
const int motorPin2 = 4;
const int motorEnable = 3;

void setup() {
//    set both of the motor pins to outputs
   pinMode(motorPin1, OUTPUT);
   pinMode(motorPin2, /*[blank]*/); // [blank] what type of a pin is this?
   pinMode(motorEnable, /*[blank]*/); // [blank] what type of a pin is this?
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorEnable, /*[blank]*/); // [blank] how do you on the motor?
  delay(2000);
  digitalWrite(motorEnable, /*[blank]*/);// [blank] how do you turn off the motor?
  delay(2000);
}
