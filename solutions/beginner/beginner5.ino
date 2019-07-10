// TODO think of better real world parallel for ints

int powersOfTwo[4] = {2, 4, 8, 16}; // [blank] fill in the first 4 powers of two inside the curly braces


void setup() {
	Serial.begin(9600);
	Serial.println(powersOfTwo[0]); // [blank] Experiment! Try changing the value inside the brackets
								  // to see what gets printed out
								  // remember, arrays start at zero!
	// also try changing it to an invalid index, such as -1 or 4, and see what happens
}

void loop() {

}