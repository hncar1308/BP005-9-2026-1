#include <iostream>
#include <iomanip>

using namespace std;

void leerNotas(float notas[], int n);
float obtenerMayor(float notas[], int n);
float obtenerMenor(float notas[], int n);
float calcularPromedioNotas(float notas[], int n);
int contarAprobadas(float notas[], int n);
int contarNoAprobadas(float notas[], int n);
void mostrarReporte(float mayor, float menor, float promedio, int aprobadas, int noAprobadas);

int main() {
    float notas[5];
    float ma, me, pr;
    int ap, na;

    leerNotas(notas, 5);
    ma = obtenerMayor(notas, 5);
    me = obtenerMenor(notas, 5);
    pr = calcularPromedioNotas(notas, 5);
    ap = contarAprobadas(notas, 5);
    na = contarNoAprobadas(notas, 5);

    mostrarReporte(ma, me, pr, ap, na);

    return 0;
}

void leerNotas(float notas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite la nota " << i << ": ";
        cin >> notas[i];
    }
}

float obtenerMayor(float notas[], int n) {
    float m = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > m) m = notas[i];
    }
    return m;
}

float obtenerMenor(float notas[], int n) {
    float m = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] < m) m = notas[i];
    }
    return m;
}

float calcularPromedioNotas(float notas[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) s += notas[i];
    return s / n;
}

int contarAprobadas(float notas[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 3.0) c++;
    }
    return c;
}

int contarNoAprobadas(float notas[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] < 3.0) c++;
    }
    return c;
}

void mostrarReporte(float mayor, float menor, float promedio, int aprobadas, int noAprobadas) {
    cout << fixed << setprecision(2);
    cout << "\nReporte final" << endl;
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Aprobadas: " << aprobadas << endl;
    cout << "No aprobadas: " << noAprobadas << endl;
}
