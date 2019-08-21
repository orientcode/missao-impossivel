#define LDR A0
#define BUZZER 7

void setup() {
  pinMode(LDR, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(LDR);
  Serial.println(valor);
  
  if (valor < 600) {
    digitalWrite(BUZZER, HIGH);
  }else {
    digitalWrite(BUZZER, LOW);
  }
  
  delay(100);
}
