int counter = 0;

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.print("My counter's value is: ");
  Serial.print(/*[blank]*/); // [blank] how do you print the counter's value?
  Serial.println();
	counter = /*[blank]*/; // [blank] how do we increase the value of an integer value?
}
