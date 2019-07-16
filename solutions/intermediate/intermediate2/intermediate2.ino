int temperature = 20; // [blank] Try changing the value to see what happens


void setup()
{
  Serial.begin(9600); // [blank] how do we start Serial? (hint look at old examples)
  
	if(temperature > 90) {
		Serial.println("It's hot!");
	} else {
		Serial.println("It's not that hot.");
	}
}

void loop()
{
	
}
