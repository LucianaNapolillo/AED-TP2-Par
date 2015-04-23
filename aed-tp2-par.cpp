#include <iostream>
using namespace std;

int main () {

	int numero;
	char respuesta;

	do {
		cout << "Ingrese el numero: ";
		cin >> numero;

		if ((numero % 2) == 0) {
			cout << "Es par!";
		} else {
			cout << "Es impar!";
		}

		cout << "\n\nIngresar otro? S/N: ";
		cin >> respuesta;
		cout << endl;
	} while(respuesta == 's' || respuesta == 'S');
}
