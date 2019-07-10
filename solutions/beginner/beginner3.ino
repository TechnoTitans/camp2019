int counter = 0;

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.println("My counter's value is" + counter);
	counter = counter + 1; // how do we increase the value of an integer value?
}