int counter = 0;

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.print("My counter's value is: ");
  Serial.print(counter);
  Serial.println();
	counter = counter + 1; // how do we increase the value of an integer value?
}
