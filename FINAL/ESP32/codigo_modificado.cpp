#include <Arduino.h>

const int PIN_POTENCIOMETRO = 34;
const int PIN_LED = 5;

const int ADC_MAX = 4095;
const int PWM_MAX = 255;

const float VREF = 3.3;

const int CANTIDAD_LECTURAS = 10;

const int PAUSA_ENTRE_LECTURAS_MS = 20;
const int PAUSA_CICLO_MS = 1;

const int FRECUENCIA_PWM = 5000;
const int RESOLUCION_PWM = 8;
const int CANAL_PWM = 0;

void tomarLecturas(
    int pin,
    int datos[],
    int cantidad,
    int pausaMs
){

    if(datos == nullptr || cantidad <= 0){
        return;
    }

    for(int i = 0; i < cantidad; i++){

        datos[i] = analogRead(pin);

        delay(pausaMs);
    }
}

void analizarLecturas(
    int datos[],
    int cantidad,
    int *promedio,
    int *minimo,
    int *maximo
){

    if(
        datos == nullptr ||
        promedio == nullptr ||
        minimo == nullptr ||
        maximo == nullptr ||
        cantidad <= 0
    ){
        return;
    }

    long suma = 0;

    *minimo = datos[0];
    *maximo = datos[0];

    for(int i = 0; i < cantidad; i++){

        suma = suma + datos[i];

        if(datos[i] < *minimo){
            *minimo = datos[i];
        }

        if(datos[i] > *maximo){
            *maximo = datos[i];
        }
    }

    *promedio = (int)(suma / cantidad);
}

void convertirPromedio(
    int promedioADC,
    float *voltaje,
    int *porcentaje,
    int *brilloPWM
){

    if(
        voltaje == nullptr ||
        porcentaje == nullptr ||
        brilloPWM == nullptr
    ){
        return;
    }

    *voltaje =
        (promedioADC * VREF) / ADC_MAX;

    *porcentaje =
        (int)((long)promedioADC * 100L / ADC_MAX);

    *brilloPWM =
        (int)((long)promedioADC * PWM_MAX / ADC_MAX);
}

void aplicarSalidaLED(
    int brilloPWM
){

    ledcWrite(
        CANAL_PWM,
        brilloPWM
    );
}

void mostrarLecturas(
    int datos[],
    int cantidad
){

    if(datos == nullptr || cantidad <= 0){
        return;
    }

    Serial.print("Lecturas: ");

    for(int i = 0; i < cantidad; i++){

        Serial.print(datos[i]);

        Serial.print(" ");
    }

    Serial.println();
}

void mostrarReporte(
    int promedio,
    int minimo,
    int maximo,
    float voltaje,
    int porcentaje,
    int brilloPWM
){

    Serial.print("Promedio ADC = ");
    Serial.println(promedio);

    Serial.print("Minimo ADC = ");
    Serial.println(minimo);

    Serial.print("Maximo ADC = ");
    Serial.println(maximo);

    Serial.print("Voltaje = ");
    Serial.print(voltaje, 2);
    Serial.println(" V");

    Serial.print("Porcentaje = ");
    Serial.print(porcentaje);
    Serial.println(" %");

    Serial.print("Brillo PWM = ");
    Serial.println(brilloPWM);

    Serial.println("----------------------------------------");
}

void setup(){

    Serial.begin(9600);

    pinMode(PIN_LED, OUTPUT);

    ledcSetup(
        CANAL_PWM,
        FRECUENCIA_PWM,
        RESOLUCION_PWM
    );

    ledcAttachPin(
        PIN_LED,
        CANAL_PWM
    );
}

void loop(){

    int lecturas[CANTIDAD_LECTURAS];

    int promedio = 0;
    int minimo = 0;
    int maximo = 0;

    float voltaje = 0.0;

    int porcentaje = 0;

    int brilloPWM = 0;

    tomarLecturas(
        PIN_POTENCIOMETRO,
        lecturas,
        CANTIDAD_LECTURAS,
        PAUSA_ENTRE_LECTURAS_MS
    );

    analizarLecturas(
        lecturas,
        CANTIDAD_LECTURAS,
        &promedio,
        &minimo,
        &maximo
    );

    convertirPromedio(
        promedio,
        &voltaje,
        &porcentaje,
        &brilloPWM
    );

    aplicarSalidaLED(
        brilloPWM
    );

    mostrarLecturas(
        lecturas,
        CANTIDAD_LECTURAS
    );

    mostrarReporte(
        promedio,
        minimo,
        maximo,
        voltaje,
        porcentaje,
        brilloPWM
    );

    delay(PAUSA_CICLO_MS);
}
