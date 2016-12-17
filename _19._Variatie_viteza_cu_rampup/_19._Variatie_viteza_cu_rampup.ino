void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  rampUp();
  delay(5000);
  rampDown();
  on();
  delay(500);
  off();
  delay(500);
}

void rampUp() {
  for (int i = 1; i < 255; i++){
    analogWrite(6, i);
    delay(10);
    }
  }

void rampDown() {
  for (int i = 255; i > 0; i--){
    analogWrite(6, i);
    delay(10);
    }
  }

void off() {
  digitalWrite(6, LOW);
  }

void on() {
  digitalWrite(6, HIGH);
  }
