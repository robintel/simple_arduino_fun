#define PIN_LED1 7
#define PIN_LED2 6
#define PIN_LED3 5
#define PIN_LED4 4

#define PRAG_LED1 100
#define PRAG_LED2 200
#define PRAG_LED3 300
#define PRAG_LED4 500

#define NUMAR_ESANTIOANE_MEDIERE 10

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  pinMode(PIN_LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int intensitate_sonora = intensitateSonora();
  if (intensitate_sonora > PRAG_LED1) {
    digitalWrite(PIN_LED1, HIGH);
    }
   else {
    digitalWrite(PIN_LED1, LOW);
    }
   if (intensitate_sonora > PRAG_LED2) {
    digitalWrite(PIN_LED2, HIGH);
    }
   else {
    digitalWrite(PIN_LED2, LOW);
    }
   if (intensitate_sonora > PRAG_LED3) {
    digitalWrite(PIN_LED3, HIGH);
    }
   else {
    digitalWrite(PIN_LED3, LOW);
    }
   if (intensitate_sonora > PRAG_LED4) {
    digitalWrite(PIN_LED4, HIGH);
    }
   else {
    digitalWrite(PIN_LED4, LOW);
    }
}

int intensitateSonora() {
  long intensitate = 0;
  for (int i = 0; i < NUMAR_ESANTIOANE_MEDIERE; i++) {
    intensitate += analogRead(0);
    return intensitate/NUMAR_ESANTIOANE_MEDIERE;
    }
  }
