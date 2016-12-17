void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1500; i < 4000; i++) {
    tone(3,i);
    delay(10);
    }
   for (int i = 4000; i > 1500; i--) {
    tone(3,i);
    delay(10);
    }
    noTone(3);
}
