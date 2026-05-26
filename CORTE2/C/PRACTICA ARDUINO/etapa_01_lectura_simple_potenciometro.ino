const int PIN_POTENCIOMETRO = 12;
void setup() {

Serial.begin(115200);}
void loop() {

int valorADC = analogRead(PIN_POTENCIOMETRO);

Serial.print("ADC = ");
Serial.println(valorADC);

delay(500);
}
