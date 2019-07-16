#include <SoftwareSerial.h> // this allows us to use the bluetooth module

const int TX_PIN = 10;
const int RX_PIN = 9;
const int ledPin = LED_BUILTIN; // blinks the led on the actual arduino

SoftwareSerial bluetoothSerial(TX_PIN, RX_PIN); // TX/RX pins

void setup()
{
	bluetoothSerial.begin(115200); // similar to our regular serial console
	Serial.begin(9600);

	bluetoothSerial.println("==== Bluetooth Serial ====");
	Serial.println("==== Regular Serial ====");

  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // char is a character
	char bluetoothData = bluetoothSerial.read();		// [blank] since the bluetooth acts as a serial, how do we read a string?
	if(bluetoothData == '1') {
    digitalWrite(ledPin, HIGH);  
	} else if (bluetoothData == '2') {
    digitalWrite(ledPin, LOW);
	}
//	Serial.print("Bluetooth Serial Data: ");	// hint: look back at intermediate4
//  Serial.println(bluetoothData);
}
