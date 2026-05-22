#include <iostream>
using namespace std;

    void analizar(int v[], int n, int *suma, int *mayor, int *menor) {
	int i;

	*suma = 0;
	*mayor = v[0];
	*menor = v[0];

	for (i = 0; i < n; i++) {
		*suma = *suma + v[i];

		if (v[i] > *mayor) {
			*mayor = v[i];
		}

		if (v[i] < *menor) {
			*menor = v[i];
		}
	}
}

int main() {
	int datos[5] = {8, 3, 15, 6, 10};
	int suma, mayor, menor;

	analizar(datos, 5, &suma, &mayor, &menor);

	cout << "Suma = " << suma << endl;
	cout << "Mayor = " << mayor << endl;
	cout << "Menor = " << menor << endl;
	
    return 0;
}
