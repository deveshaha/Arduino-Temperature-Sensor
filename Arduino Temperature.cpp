#include <LiquidCrystal.h>
int tempPin = A1;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup(){
  pinMode(tempPin, INPUT);
  Serial.begin(9600);      
  lcd.begin(16,2);  
  pinMode(13,OUTPUT);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  pinMode(2, INPUT);
}

void loop(){
  
  int tempSens = analogRead(tempPin); 
  float temp = ( tempSens * (500.0 / 1024.0) ) - 50.0;
  
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Temp =");
  lcd.setCursor(9,0);
  lcd.print("HR =");
  lcd.setCursor(0,1);            
  lcd.print(temp);
  lcd.setCursor(6,1);            
  lcd.print("C");
  lcd.setCursor(9,1);
  lcd.print("41.0 %");

  delay(5000);
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("HR =");
  lcd.setCursor(9,0);
  lcd.print("Temp =");
  lcd.setCursor(0,1);
  lcd.print("41.0 %");
  lcd.setCursor(9,1);
  lcd.print(temp);
  lcd.setCursor(15,1);
  lcd.print("C");

  delay(5000);
    
}