//Display variation of pressure on applying force
// if bressure is gratter then 200 then it blink



#include "LiquidCrystal.h"    // Defined Library of LCD
LiquidCrystal lcd(8,7,6,5,4,3);  //LCD pin number used

int Force_VAL = 0;             //Our variable

void setup()
{
  pinMode(A0, INPUT);         //signal input in A0
  Serial.begin(9600);   
  lcd.begin(16,2);            //size of LCD
  
  lcd.setCursor(0,0);         // starting latter from
  lcd.print("Pressure VALUE"); 

  pinMode(11, OUTPUT);        // led light signal output

 
}

void loop()
{
  Force_VAL = analogRead(A0);  // taking reading from pin A0 and storing in our variable 
  Serial.println(Force_VAL);   // value converted into digital signal
  
  lcd.setCursor(0,1);          // setting corsor at given value
  lcd.print(Force_VAL);        // displaying value at given corsor

  lcd.setCursor(5,1);
  lcd.print("Pascals(Pa)");
  
// for LED sensor command
  
 if (Force_VAL > 200)          // if value grater then 200 then led glow
 {
    digitalWrite(11, HIGH);    // glowing function
  } 
else
 {
    digitalWrite(11, LOW);
  }
  
  delay(10); // Delay a little bit to improve simulation performance
}
