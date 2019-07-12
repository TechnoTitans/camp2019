#include <SoftwareSerial.h> // this allows us to use the bluetooth module

const int TX_PIN = 10;
const int RX_PIN = 9;

SoftwareSerial bluetoothSerial(TX_PIN, RX_PIN); // TX/RX pins

void setup()
{
	bluetoothSerial.begin(115200); // similar to our regular serial console
	Serial.begin(9600);

  	mySerial.println("==== Bluetooth Serial ====");
  	Serial.println("==== Regular Serial ====");
}

void loop()
{
	// TODO TEST IF THIS WORKS!!!
	String bluetoothData = bluetoothSerial.readString();		// [blank] since the bluetooth acts as a serial, how do we read a string?
	Serial.println("Bluetooth Serial Data: " + bluetoothData);	// hint: look back at intermediate4
}