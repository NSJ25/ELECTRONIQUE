void setup() {
  pinMode(2, OUTPUT); // La broche 2 est une sortie
}

void loop() {
  digitalWrite(2, HIGH); // On allume la LED
  delay(1000);           // Attente de 1 seconde
  digitalWrite(2, LOW);  // On éteint la LED
  delay(1000);           // Attente de 1 seconde
}
