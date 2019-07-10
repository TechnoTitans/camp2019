int secondsElapsed = 0;

void setup() {
	Serial.begin(9600);
}

void loop() {
	delay(1000); // [blank] wait for one second here
	secondsElapsed += 1; //[blank] increase the amount of seconds passed. 
	Serial.println(secondsElapsed + " seconds have passed."); // [blank] now print the amount of seconds we have waited for
}