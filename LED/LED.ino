/*
Autor: gsilguero
Fecha: 01/03/2023
Revisión: v1
Licencia: Público
*/

void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
