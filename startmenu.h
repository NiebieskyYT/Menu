#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int SelectedOption = 1;
int MaxOptions = 6;
void StartMenu() {
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Menu with Arduino!");
  lcd.setCursor(1,1);
  lcd.print("Option 1");
  lcd.setCursor(1,2);
  lcd.print("Option 2");
  lcd.setCursor(1,3);
  lcd.print("Option 3");
  lcd.setCursor(11,1);
  lcd.print("Option 4");
  lcd.setCursor(11,2);
  lcd.print("Option 5");
  lcd.setCursor(11,3);
  lcd.print("Option 6");
}