int temperature = 20; // [blank] Try changing the value to see what happens


void setup()
{
  Serial.begin(9600); // do not forget to do this
  
	if(temperature > 90) {
		Serial.println("It's hot!");
	} else {
		Serial.println("It's not that hot.");
	}
}

void loop()
{
	
}
