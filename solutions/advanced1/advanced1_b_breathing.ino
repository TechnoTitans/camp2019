/*
  Fade

  This example shows how to fade an led on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

const int LED_PIN_PIN = A0;	// the PWM pin the led is attached to. The A means analog. A0 means analog pin 0
const int fadeAmount = 5;	// how many points to fade the led by
int brightness = 0;			// how bright the led is

void setup() {
  Serial.setup(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  Serial.print("Brightness: " + brightness);	// it helps to see the value of variables
  analogWrite(LED_PIN, brightness);				// set the brightness of pin 9
  brightness = brightness + fadeAmount;			// change the brightness for next time through the loop:
  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);	// wait for 30 milliseconds to see the dimming effect
}
