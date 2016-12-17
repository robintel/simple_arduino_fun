#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int apasat = digitalRead(9);
  if (apasat == 0) {
    digitalWrite(8, LOW);
    lcd.setCursor(0,0);
    lcd.print("Draga coltisor,");
    lcd.setCursor(0,1);
    lcd.print("te IUBESC mult!");
  }
  else {
    digitalWrite(8, HIGH);
    lcd.setCursor(0,0);
    lcd.print("Cu drag, al tau");
    lcd.setCursor(0,1);
    lcd.print("gheroi!        ");
    }
    delay(100);
}
