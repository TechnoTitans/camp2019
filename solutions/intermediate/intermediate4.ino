String userResponse = "";

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("What is your favorite color?");
	while(serialIsAvailable()){ // [blank] use the method provided to check
		userResponse = Serial.readString(); // gets the input from the serial monitor
	    Serial.println("Your favorite color is: " + userResponse); // [blank] what do you need to do with userResponse to get 
	}
}

















// Magic Code - Do Not Modify


// This method returns a boolean, true or false
// true - if someone typed something in the serial monitor
// false - if no one typed anything 
void serialIsAvailable() {
	return Serial.available() == 0;
}
