# Proyecto con arduino y LCD
Arduino

<IMG SRC="Arduino.jpg">

<p>LCD</p>
<IMG SRC="LCD.jpg">

<p>Circuito Virtual</p>
<IMG SRC="Captura Circuito Virtual.PNG">

<p>Codigo</p>

// include the library code:
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
