String userResponse = "";

/*
 * Provided Functions:
 * isSerialAvailable() - returns true if you have typed and submit any text in the serial monitor
 */


// don't forget to open your serial monitor (Tools -> Serial Monitor) and type something in
void setup()
{
	/*[blank]*/ // [blank] remeber what you need at the beginning of every program?
}

void loop()
{
	if( /* */ ){ // [blank] use the method provided to check
    userResponse = Serial.readString(); // gets the input from the serial monitor
    Serial.print("Your favorite color is: ");
    Serial.println(/*[blank]*/); // [blank] what do you need to do with userResponse to get 
  }
}


// Provided Functions
bool isSerialAvailable() {
  return Serial.available() > 0;
}
