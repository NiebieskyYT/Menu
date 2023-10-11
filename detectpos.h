#include <Arduino.h>
#include <LiquidCrystal.h>
void DetectPos() {
  if (SelectedOption == 1) {
    lcd.setCursor(0,1);
    lcd.print(">");
    lcd.setCursor(0,2);
    lcd.print(" "); 
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(" ");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
  if (SelectedOption == 2) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(">");
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(" ");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
  if (SelectedOption == 3) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(">");
    lcd.setCursor(10,1);
    lcd.print(" ");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
    if (SelectedOption == 4) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(">");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
  if (SelectedOption == 4) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(">");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
  if (SelectedOption == 5) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(" ");
    lcd.setCursor(10,2);
    lcd.print(">");
    lcd.setCursor(10,3);
    lcd.print(" ");
  }
  if (SelectedOption == 6) {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(" ");
    lcd.setCursor(10,1);
    lcd.print(" ");
    lcd.setCursor(10,2);
    lcd.print(" ");
    lcd.setCursor(10,3);
    lcd.print(">");
  }
  if (SelectedOption > MaxOptions) {
    SelectedOption = 1;
  }
  if (SelectedOption < 1) {
    SelectedOption = 6;
  }
}