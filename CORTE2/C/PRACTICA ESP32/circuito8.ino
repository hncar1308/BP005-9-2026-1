const int LED_PIN = 4; // Pin del LED

void setup() {
pinMode(LED_PIN, OUTPUT); // Configura el pin como salida
Serial.begin(115200); // Inicia la comunicacion serial
}

void loop() {
int n = 3; // Cantidad de parpadeos deseados

for (int i = 1; i <= n; i++) {
digitalWrite(LED_PIN, HIGH); // Enciende el LED
delay(250); // Espera

digitalWrite(LED_PIN, LOW); // Apaga el LED
delay(250); // Espera
}

Serial.println("Secuencia completada."); // Mensaje de seguimiento
delay(1500); // Pausa
}
