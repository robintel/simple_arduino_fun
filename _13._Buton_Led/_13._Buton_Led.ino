void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int stareButon = digitalRead(12);
  if (stareButon == 1) {
    digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(13, LOW);
      }
}
