int ledPin = 6; // Define o pino onde o LED está conectado

void setup() {
  pinMode(ledPin, OUTPUT); // Configura o pino como saída
}

void loop() {
  digitalWrite(ledPin, HIGH); // Liga o LED
  delay(1000); // Espera 1 segundo
  digitalWrite(ledPin, LOW);  // Desliga o LED
  delay(1000); // Espera 1 segundo
}