void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nivelUmiditate = analogRead(0);
  Serial.println(nivelUmiditate);
  delay(50);
}
