const int LED1 = 4; // Primer LED
const int LED2 = 12; // Segundo LED

void setup() {
pinMode(LED1, OUTPUT); // Configura LED1
pinMode(LED2, OUTPUT); // Configura LED2
}

void loop() {
for (int i = 1; i <= 3; i++) { // Repite la secuencia 3 veces
digitalWrite(LED1, HIGH); // Enciende LED1
digitalWrite(LED2, LOW); // Apaga LED2
delay(300); // Espera

digitalWrite(LED1, LOW); // Apaga LED1
digitalWrite(LED2, HIGH); // Enciende LED2
delay(300); // Espera
}

digitalWrite(LED1, LOW); // Estado final conocido
digitalWrite(LED2, LOW); // Estado final conocido
delay(1000); // Pausa
}
