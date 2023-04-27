// Piano tues                  button 1 to 9
// Happy birthday tune: :::    button-10

// Buzzer Pin

// Push Buttons Pins
int but1 = 2;
int but2 = 3;
int but3 = 4;
int but4 = 5;
int but5 = 6;
int but6 = 7;
int but7 = 8;
int but8 = 9;
int but9 = 10;
int but10 = 11;
int but11 = 12;

int buzzer = 13;

//specify input buttons...

void setup()
{
  pinMode (but1, INPUT);
  pinMode (but2, INPUT);
  pinMode (but3, INPUT);
  pinMode (but4, INPUT);
  pinMode (but5, INPUT);
  pinMode (but6, INPUT);
  pinMode (but7, INPUT);
  pinMode (but8, INPUT);
  pinMode (but9, INPUT);
  pinMode (but10, INPUT);
  pinMode (but11, INPUT);
  
//specifying output button
  pinMode (buzzer, OUTPUT);
}
 
// take reading of specific button while pressing
void loop()
{
	int b1 = digitalRead(but1);
  int b2 = digitalRead(but2);
  int b3 = digitalRead(but3);
  int b4 = digitalRead(but4);
  int b5 = digitalRead(but5);
  int b6 = digitalRead(but6);
  int b7 = digitalRead(but7);
  int b8 = digitalRead(but8);
  int b9 = digitalRead(but9);
  int b10 = digitalRead(but10);
  int b11 = digitalRead(but11);

  
  
  
  if (b1==1){				//Button 1
  	tone(buzzer, 300,100);
      delay(10);
  }
  if (b2==1){				//Button 1
  	tone(buzzer, 400,100);
      delay(10);
  }
  if (b3==1){				//Button 1
  	tone(buzzer, 500,100);
      delay(10);
  }
  if (b4==1){				//Button 1
  	tone(buzzer, 600,100);
      delay(10);
  }
  if (b5==1){				//Button 1
  	tone(buzzer, 700,100);
      delay(10);
  }
  if (b6==1){				//Button 1
  	tone(buzzer, 800,100);
      delay(10);
  }
  if (b7==1){				//Button 1
  	tone(buzzer, 900,100);
      delay(10);
  }
  if (b8==1){				//Button 1
  	tone(buzzer, 1000,100);
      delay(10);
  }
  if (b9==1){				//Button 1
  	tone(buzzer, 1100,100);
      delay(10);
  }
  
  
// Happy birthday tune: :::
  
  
  int d100=200,d200=400,d300=600,d400=800;  //delay
  int fd100=300;                            //freq. delay
  
  if (b10==1){
 	tone(buzzer,261.63,fd100);//C4	
     delay(d100);
   tone(buzzer, 261.63,fd100);//C4	
      delay(d100);
    tone(buzzer, 293.66,fd100);//D4
      delay(d200);
    tone(buzzer, 261.63,fd100);//C4
      delay(d200);
    tone(buzzer, 349.23,fd100);//F4
      delay(d200);
    tone(buzzer, 329.63,fd100);//E4
      delay(d300);
    tone(buzzer, 261.63,fd100);//C4
      delay(d100);
    tone(buzzer, 261.63,fd100);//C4
      delay(d100);
    tone(buzzer, 293.66,fd100);//D4
      delay(d200);
    tone(buzzer, 261.63,fd100);//C4	
      delay(d200);
    tone(buzzer, 392,fd100);//G4
      delay(d200);
    tone(buzzer, 349.23,fd100);//F4
      delay(d300);
    tone(buzzer, 261.63,fd100);//C4
      delay(d100);
    tone(buzzer, 261.63,fd100);//C4
      delay(d100);
    tone(buzzer, 524,fd100);//C5
      delay(d200);
    tone(buzzer, 440,fd100);//A4
      delay(d200);
    tone(buzzer, 349.23,fd100);//F4
      delay(d200);
    tone(buzzer, 329.63,fd100);//E4
      delay(d200);
    tone(buzzer, 293.66,fd100);//D4
      delay(d200);
    tone(buzzer, 466.16,fd100);//A4#
      delay(d100);
    tone(buzzer, 466.16,fd100);//A4#
      delay(d100);
    tone(buzzer, 440,fd100);//A4
      delay(d200);
    tone(buzzer, 349.23,fd100);//F4
      delay(d200);
    tone(buzzer, 392,fd100);//G4
      delay(d200);
    tone(buzzer, 349.23,fd100);//F4
      delay(d400);
    
    
 }
}


