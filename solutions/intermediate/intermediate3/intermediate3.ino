int temperature = 20; // [blank] Try changing the value to see what happens

// Example Values for temperature
// 100, 90, 85, 80, 70


void setup()
{

  Serial.begin(9600);
  
	if(temperature > 90) {
		Serial.println("It's hot!");
	} else if (90 >= temperature && temperature >= 80) { 
		Serial.println("It's pretty warm.");
	} else {
		Serial.println("It's not that hot.");
	}
}

void loop()
{
	
}
