#include <LiquidCrystal.h>
// inicialize the library whith the numbers of the interface pins
LiquidCrystal lcd(1,2,4,5,6,7);
void setup(){
// set up the LCDs number of columns and rows
  lcd.begin(16,2);
  // Print a message to the LCD
  lcd.print("Hello World");
  // Print a message to the LCD
 lcd.setCursor(0,1);
 lcd.write("Wilmer Perez");
            
}
void loop(){
// Turn off the display;
lcd.noDisplay();
// Turn on the display
lcd.display();
delay(500);
}
