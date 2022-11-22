// library for the LCD display:
#include <LiquidCrystal.h>

int ledPin = 11;               
int PIRpin = 8;  //detecteur de mouvement          
int pirState = LOW;    //etat de detecteur low        
int val = 0;                    
       


LiquidCrystal lcd(2, 3, 4, 5, 6, 7);                        


void setup() {  

  pinMode(ledPin, OUTPUT);       
  pinMode(PIRpin, INPUT);     


    
  Serial.begin(9600);
  lcd.begin(16, 2); //(16) est le nombre de colonne et la seconde (2) le nombre de ligne.
  lcd.setCursor(2, 0);                     // Set LCD cursor position (column, row)
  lcd.print("P.I.R ");               // Print text to LCD
          // Print text to LCD
  delay(2000); // wait 2s                   // Delay to read text
                                                              
  lcd.clear();                            // Clear LCD    
  lcd.setCursor(0, 0); 
    lcd.print("Processing Data.");



    delay(3000);
    lcd.clear(); 
    lcd.setCursor(3, 0);
    lcd.print("Waiting For");
    lcd.setCursor(3, 1);
    lcd.print("Motion....");   
  delay(150); 
  
}

void loop(){
  val = digitalRead(PIRpin);  


  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON


    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
  
      lcd.clear() ;
      lcd.setCursor(0, 0);                 // positionner le curseur sur l’écran (col 0, ligne 0)
      lcd.print("Motion Detected!");   
      lcd.setCursor(0, 1);                 // positionner le curseur sur l’écran (column 0, row 1)
    


    delay(150);

    
      pirState = HIGH;

 
    }
  } else {
      digitalWrite(ledPin, LOW); // turn LED OFF
      delay(300);    

    // display no motion screen saver
    scrollScreenSaver() ;  
    
      if (pirState == HIGH){
    // we have just turned of
    Serial.println("Motion ended!");
        pirState = LOW;
    }
  }
}



void scrollScreenSaver() {
  

  lcd.clear() ;
    lcd.setCursor(15, 0);                 // Set LCD cursor position (column 0, row 0)
  lcd.print("No Motion ");   
  lcd.setCursor(15, 1); 
  lcd.print("Waiting !"); 
  // scroll 7 positions (display length - string length) to the left
  // to move it back to center:
  
    for (int positionCounter = 0; positionCounter < 22; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
    
  }
}
