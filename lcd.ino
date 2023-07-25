#include <LiquidCrystal.h> 
int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 

void setup() {
lcd.begin(16, 2);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("JEEZMAN");
lcd.setCursor(3,2);
lcd.print("subscribe!!!");
delay(1000);
lcd.clear(); 
}