#define LED_Rosu 4
#define LED_Galben 5
#define LED_Verde 6
#define LED_Albastru 7
#define LED_Rosu2 11
#define LED_Verde2 9
#define LED_Albastru2 10

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_Rosu, OUTPUT);
  pinMode(LED_Galben, OUTPUT);
  pinMode(LED_Verde, OUTPUT);
  pinMode(LED_Albastru, OUTPUT);
  pinMode(LED_Rosu2, OUTPUT);
  pinMode(LED_Verde2, OUTPUT);
  pinMode(LED_Albastru2, OUTPUT);
}

void loop() {
  // int model = 5;
  int model = random(0, 5);
  int LEDuri[] = {LED_Rosu, LED_Galben, LED_Verde, LED_Albastru};
  int perioadaActiva = random(33, 100);
  int perioadaRotatie = random(10, 50);
  if (model == 0) {
    for (int j = 0; j < 4; j++) {
      digitalWrite(LEDuri[j], HIGH);
      delay(perioadaActiva);
      digitalWrite(LEDuri[j], LOW);
    }
  }
  else if (model == 1) {
    for (int j = 0; j < 2; j++) {
      digitalWrite(LEDuri[j], HIGH);
      delay(perioadaRotatie);
      digitalWrite(LEDuri[j + 2], HIGH);
      delay(perioadaActiva);
      digitalWrite(LEDuri[j], LOW);
      delay(perioadaRotatie);
      digitalWrite(LEDuri[j + 2], LOW);
    }
  }
  else if (model == 2) {
    for (int j = 0; j < random(3, 5); j++) {
      seteazaCuloare(random(255), random(255), random(255));
      delay(perioadaActiva);
    }
  }
  else if (model == 3) {
    for (int j = 0; j < 4; j++) {
      if (j == 0) {
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(255, 0, 0);
      }
      else if (j == 1) {
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(255, 255, 0);
      }
      else if (j == 2) {
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(0, 255, 0);
      }
      else {
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(0, 0, 255);
      }
      delay(perioadaActiva);
      digitalWrite(LEDuri[j], LOW);
      seteazaCuloare(0, 0, 0);
    }
  }
  else if (model == 4) {
    for (int i = 0; i < random(3, 5); i++)  {
      int aleator = random(0, 2);
      if (aleator < 1) {
        seteazaCuloare(random(255), random(255), 0);
      }
      else if (1 < aleator < 2) {
        seteazaCuloare(random(255), 0, random(255));
      }
      else {
        seteazaCuloare(0, random(255), random(255));
      }
    }
    delay(perioadaActiva);
    seteazaCuloare(0, 0, 0);
  }
  else if (model == 5) {
    for (int j = 0; j < random(3,5); j++) {
      if (j == 0) {
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(255, 0, 0);
        digitalWrite(LEDuri[j+1], HIGH);
      }
      else if (j == 1) {
        digitalWrite(LEDuri[j-1], LOW);
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(255, 255, 0);
        digitalWrite(LEDuri[j+1], HIGH);
      }
      else if (j == 2) {
        digitalWrite(LEDuri[j-1], LOW);
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(0, 255, 0);
        digitalWrite(LEDuri[j+1], HIGH);
      }
      else {
        digitalWrite(LEDuri[j-1], LOW);
        digitalWrite(LEDuri[j], HIGH);
        seteazaCuloare(0, 0, 255);
        digitalWrite(LEDuri[0], HIGH);
      }
      delay(perioadaActiva);
      digitalWrite(LEDuri[j], LOW);
      seteazaCuloare(0, 0, 0);
    }
  }
  else if (model == 99) {
    // digitalWrite(LED_Rosu2, HIGH);
  }
  else if (model == 98) {
    seteazaCuloare(0, 255, 0);
  }
}

void seteazaCuloare(int rosu, int verde, int albastru) {
  analogWrite(LED_Rosu2, rosu);
  analogWrite(LED_Verde2, verde);
  analogWrite(LED_Albastru2, albastru);
}
