String userResponse = "";


// don't forget to open your serial monitor (Tools -> Serial Monitor) and type something in
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if(isSerialAvailable()){ // [blank] use the method provided to check
    userResponse = Serial.readString(); // gets the input from the serial monitor
    Serial.println("Your favorite color is: " + userResponse); // [blank] what do you need to do with userResponse to get 
  }
}


// Magic Code
bool isSerialAvailable() {
  return Serial.available() > 0;
}
