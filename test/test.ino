#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // arduino pin numbers

String pythonData = "";

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.println("This is a test");
}

void loop() {
  pythonData = Serial.readString();

  if (pythonData != "" && pythonData != "-1") { // temp hack
    lcd.clear();
    lcd.println(pythonData);
  }
  
  delay(1000);
}
