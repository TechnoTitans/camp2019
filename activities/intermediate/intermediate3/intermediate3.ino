int temperature = /*[blank]*/; // [blank] Try changing the value to see what happens

// Example Values for temperature
// 100, 90, 85, 80, 70


void setup()
{

  Serial.begin(9600);
  
	if(temperature > 90) {
		/*[blank]*/println("It's hot!"); // [blank] how do you print?
	} else if (/*[blank]*/) { // [blank] check temperature between 90 and 80
		Serial.println("It's pretty warm.");
	} else {
		Serial.println("It's not that hot.");
	}
}

void loop()
{
	
}
