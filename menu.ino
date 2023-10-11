#include <LiquidCrystal.h>
#include "startmenu.h"
#include "detectpos.h"
void setup() {
  lcd.begin(20,4);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  StartMenu();
}
void loop() {
  int BTN1 = digitalRead(8);
  int BTN2 = digitalRead(9);
  int BTN3 = digitalRead(10);
  if (BTN2 == HIGH) {
    SelectedOption++;
    delay(250);
  }
  if (BTN1 == HIGH) {
    SelectedOption--;
    delay(250);
  }
  if (BTN3 == HIGH) {
    lcd.noDisplay();
    delay(1000);
    lcd.display();
    delay(1000);
  }
  DetectPos();
}