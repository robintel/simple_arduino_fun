// Does not seem to work properly or the sensor is broken.
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nivelIluminare = analogRead(0);
  Serial.println(nivelIluminare);
  delay(10);
}
