String userResponse = "";

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("What is your favorite color?");
	while(Serial.available()){ // [blank] use the method provided to check
		userResponse = Serial.readString(); // gets the input from the serial monitor
	    Serial.println("Your favorite color is: " + userResponse); // [blank] what do you need to do with userResponse to get 
	}
}

