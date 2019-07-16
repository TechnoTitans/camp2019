int secondsElapsed = 0;

void setup() {
	Serial.begin(9600);
}

void loop() {
	delay(/*[blank]*/); // [blank] wait for one second here (Hint: it's in miliseconds https://en.wikipedia.org/wiki/Millisecond)
	secondsElapsed =  /* [blank] */; //[blank] increase the amount of seconds passed. 
  	Serial.print(/*[blank]*/); // [blank] now print the amount of seconds we have waited for
	Serial.println(" seconds have passed.");
}
