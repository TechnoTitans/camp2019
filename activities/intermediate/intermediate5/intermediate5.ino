// [blank] fill in the array with your first four favorite
// [blank] try changing the colors as well
// IMPORTANT: Make sure you put commas between each string
String favoriteColors[4] = {
	/*[blank]*/
};
int maxNumberOfColors = 4;

void setup()
{
	Serial.begin(9600);

  Serial.println("My first four favorite colors are: ");
  for(int index = 0; index < /*[blank]*/; index++) { // [blank] how do you limit the for loop?
      Serial.println(favoriteColors[/*[blank]*/]); // [blank] what value or variable should you put 
                                         // in the brackets so that it prints all four colors  
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
