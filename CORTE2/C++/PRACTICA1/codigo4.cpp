#include <iostream>
using namespace std;

int main() {
	int opcion;

	do {
		cout << "\nMENU\n";
		cout << "1. Saludar\n";
		cout << "2. Despedirse\n";
		cout << "0. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		if (opcion == 1) {
			cout << "Hola.\n";
		} else if (opcion == 2) {
				cout << "Hasta luego.\n";
		} else if (opcion == 0) {
			cout << "Fin del programa.\n";
		} else { 
			cout << "Opcion invalida.\n";
		}

	} while (opcion != 0);

	return 0;
}
