void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(citesteTempInCelsius());
}

float citesteTempInCelsius() {
  float temperaturaMediata = 0;
  float sumaTemperatura;
  for (int i = 0; i < 10; i++) {
    int reading = analogRead(1);
    float voltage = reading * 5.0;
    voltage /= 1024.0;
    float temperaturaMediata = (voltage - 0.5) * 100;
    sumaTemperatura += temperaturaMediata;
    }
    return sumaTemperatura;
  }
