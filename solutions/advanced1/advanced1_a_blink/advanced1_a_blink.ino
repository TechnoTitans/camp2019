const int LED_PIN = 9; // const simply means constant. (you cannot change this variable)

void setup() {
   pinMode(LED_PIN, OUTPUT); // set the our led pin to act as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);	// turn the LED on (HIGH is the voltage level)
  delay(1000);					// [blank] try changing this value and see what happens
  digitalWrite(LED_PIN, LOW);	// turn the LED off by making the voltage LOW
  delay(1000);					// [blank] try experimenting with this value well
}
