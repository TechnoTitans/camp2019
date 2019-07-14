int myAge = 42; // [blank] fill in your age
String myName = "FIRST LAST"; // [blank] make sure that you change the number in the brackets
								//  to the number of letters (and spaces!) in your name
// char means character
// having an array of characters means you have a string

void setup() {
	Serial.begin(9600);
	Serial.print("I am ");
  Serial.print(myAge);	
	Serial.println(" years old."); // [blank] what should go between the two strings?
	Serial.println("My name is ");
  Serial.print(myName);
}

void loop() {

}
