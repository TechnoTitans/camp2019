// [blank] fill in the array with your first four favorite
String favoriteColors[4] = {
	"Blue", "Red", "Green", "Purple"
};
int maxNumberOfColors = 4;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("My first four favorite colors are: ");
	for(int i = 0; i < maxNumberOfColors; i++) {
    	Serial.println(favoriteColors[i]); // [blank] what value or variable should you put 
    									   // in the blank so that it prints all four colors	
	}
}