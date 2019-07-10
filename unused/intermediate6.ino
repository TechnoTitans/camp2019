// [blank] fill in the array with your first four favorite colors
String favoriteColors[4];
int maxNumberOfColors = 4;



void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("Tell me your first four favorite colors.");
	for(int i = 0; i < maxNumberOfColors; i++) {
		if(serialIsAvailable()){ // [blank] use the method provided to check
			favoriteColor = Serial.readString(); // gets the input from the serial monitor
		    Serial.println("Your " + (i + 1) + " favorite color is: " + userResponse); // [blank] what do you need to do with userResponse to get 
	    	maxNumberOfColors[i] = 0;
		}
	}
}

// Magic Code - Do Not Modify


// This method returns a boolean, true or false
// true - if someone typed something in the serial monitor
// false - if no one typed anything 
void serialIsAvailable() {
	return Serial.available() == 0;
}
