#include <SoftwareSerial.h> // this allows us to use the bluetooth module

int TX_PIN = 10;
int RX_PIN = 9;
int ledPin = LED_BUILTIN; // blinks the led on the actual arduino

SoftwareSerial bluetoothSerial(TX_PIN, RX_PIN); // TX/RX pins don't worry about this part

void setup()
{
	bluetoothSerial.begin(115200); // similar to our regular serial console
	/* [blank] */; // [blank] how do you start serial console?

	bluetoothSerial.println("==== Bluetooth Serial ====");
	Serial.println("==== Regular Serial ====");

  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // char is a character
	char bluetoothData = bluetoothSerial.read();		// [blank] since the bluetooth acts as a serial, how do we read a string?
	/* [blank] */ // [blank] how do we see if the Bluetooth data is 1
    digitalWrite(/* [blank] */); // [blank] how do we turn on the led?
	} /* [blank] */ if (bluetoothData == '2') { // [blank] how do we complete the if statement?
    digitalWrite(/* [blank] */); // [blank] how do we turn off the led?
	}
//	Serial.print("Bluetooth Serial Data: ");	// hint: look back at intermediate4
//  Serial.println(bluetoothData);
}
