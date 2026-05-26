const int PIN_POTENCIOMETRO = 34;
const int ADC_MAX = 4095;
const float VREF = 3.3;

int leerADC(int pin) {

  int valor = analogRead(pin);
  return valor;
}

float calcularVoltaje(int valorADC) {

  float voltaje = (valorADC * VREF) / ADC_MAX;
  return voltaje;
}

int calcularPorcentaje(int valorADC) {

  int porcentaje = (int)((long)valorADC * 100L / ADC_MAX);
  return porcentaje;
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje) {

  Serial.print("ADC = ");
  Serial.print(valorADC);
  Serial.print(" | Voltaje = ");
  Serial.print(voltaje, 2);
  Serial.print("V");
  Serial.print(" | Porcentaje = ");
  Serial.print(porcentaje);
  Serial.println(" %");
}

void setup() {
  /* Iniciamos el Monitor Serial. */
  Serial.begin(9600);
}

void loop() {
  /* Leemos el potenciómetro. */
  int valorADC = leerADC(PIN_POTENCIOMETRO);
  
  /* Calculamos el voltaje. */
  float voltaje = calcularVoltaje(valorADC);
  
  /* Calculamos el porcentaje. */
  int porcentaje = calcularPorcentaje(valorADC);
  
  /* Mostramos todo por serial. */
  mostrarDatos(valorADC, voltaje, porcentaje);
  
  delay(500);
}
