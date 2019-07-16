// [blank] fill in the array with your first four favorite
// [blank] try changing the colors as well
// IMPORTANT: Make sure you put commas between each string
String favoriteColors[4] = {
	"Blue", "Red", "Green", "Purple"
};
int maxNumberOfColors = 4;

void setup()
{
	Serial.begin(9600);

  Serial.println("My first four favorite colors are: ");
  for(int i = 0; i < maxNumberOfColors; i++) {
      Serial.println(favoriteColors[i]); // [blank] what value or variable should you put 
                                         // in the blank so that it prints all four colors  
  }
  // Answer
  /*
   * i has the following values: 0, 1, 2, 3.
   * The above code is the same as:
   * 
   * Serial.println(favoriteColors[0];
   * Serial.println(favoriteColors[1]);
   * Serial.println(favoriteColors[2]);
   * Serial.println(favoriteColors[3]);
   */

}

void loop()
{
 
}
