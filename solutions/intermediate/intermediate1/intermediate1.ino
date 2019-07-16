int temperature = 24; // [blank] Try changing the value to see what happens


void setup()
{
  Serial.begin(9600);
  
	if(temperature > 90) {
		Serial.println("It's hot!");
	}
}

void loop()
{
	
}
