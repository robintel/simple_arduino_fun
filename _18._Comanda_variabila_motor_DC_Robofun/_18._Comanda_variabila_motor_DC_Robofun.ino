void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  variatieViteza();
  delay(500);
  on();
  delay(500);
  off();
  delay(500);
}

void variatieViteza() {
  for (int i = 125; i < 255; i++){
    analogWrite(6, i);
    }
  }

void off() {
  digitalWrite(6, LOW);
  }

void on() {
  digitalWrite(6, HIGH);
  }
