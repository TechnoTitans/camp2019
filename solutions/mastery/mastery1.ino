#include <SoftwareSerial.h> // this allows us to use the bluetooth module

const int TX_PIN = 10;
const int RX_PIN = 9;
const int LED_PIN = 2;

SoftwareSerial bluetoothSerial(TX_PIN, RX_PIN); // TX/RX pins

void setup()
{
	Serial.begin(9600);
	bluetoothSerial.begin(115200);

	mySerial.println("==== Bluetooth Serial ====");
	Serial.println("==== Regular Serial ====");

	pinMode(LED_PIN, OUTPUT); // set the our led pin to act as an output
}

void loop()
{
	String bluetoothData = bluetoothSerial.readString();		// [blank] since the bluetooth acts as a serial, how do we read a string?

	if(bluetoothData == "ON") 
	{
		digitalWrite(LED_PIN, HIGH);
	} 
	else if (bluetoothData == "OFF")
	{
		digitalWrite(LED_PIN, LOW);
	}
	delay(50);
}