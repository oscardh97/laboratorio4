#include <cstring>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

double* factorizar(int*, int);
int main(int argc, char const *argv[]){
	int opcion;
	cout << "Ingrese el numero del ejercicio" << endl;
	cin >> opcion;
	if(opcion == 1){
		int* polinomio = new int[3];
		cout << "Ingrese el valor de A: ";
		cin >> polinomio[0];
		cout << "Ingrese el valor de B: ";
		cin >> polinomio[1];
		cout << "Ingrese el valor de X: ";
		cin >> polinomio[2];
		double* valoresX = factorizar(polinomio, 3);
		cout << polinomio[0] << "xᶺ2" << (polinomio[1] >= 0 ? "+" : "") << polinomio[1] << (polinomio[2] > 0 ? "+" : "") << polinomio[2] << endl;
		cout << "(x " << (valoresX[0] > 0 ? "+" : "") << valoresX[0] << ")";
		cout << "(x " << (valoresX[1] > 0 ? "+" : "") << valoresX[1] << ")" << endl;
		delete[] valoresX;
		delete[] polinomio;
	}else if(opcion == 2){
		char* palabra = new char[35];
		cout << "Ingrese una palabra menor a 35" << endl;
		cin >> palabra;
		std::string str (palabra);
		cout << "FUTURO = " << palabra << "é" << endl  << "PASADO = ";
		int tamanio = str.length();
		for(int LETRA = 0; LETRA < tamanio - 2; LETRA++){
			cout << palabra[LETRA];
		}
		cout << (palabra[tamanio - 2] == 'a' ? "e" : "í") <<endl << "PRESENTE = " ;
		for(int LETRA = 0; LETRA < tamanio - 2; LETRA++){
			cout << palabra[LETRA];
		}
		cout << "o" <<endl;
	}
	return 0;
}
double* factorizar(int* polinomio, int sizeArreglo){
	double*	 valores = new double[2];
	double raiz = sqrt(pow(polinomio[1], 2) - 4 * polinomio[0] * polinomio[2]);
	valores[0] = (double)(-polinomio[1] + raiz) / (2 * polinomio[0]);
	valores[1] = (double)(-polinomio[1] - raiz) / (2 * polinomio[0]);
	return valores;
}
