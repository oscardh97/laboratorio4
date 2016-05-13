#include <cstring>
#include <math.h>
#include <iostream>
using namespace std;

double* factorizar(int*, int);
int main(int argc, char const *argv[]){
	int* polinomio = new int[3];
	polinomio[0] = 4;
	polinomio[1] = 6;
	polinomio[2] = -4;
	factorizar(polinomio, 3);
	return 0;
}
double* factorizar(int* polinomio, int sizeArreglo){
	cout << polinomio[0] << endl;
	cout << polinomio[1] << endl;
	cout << polinomio[2] << endl;
	double*	 valores = new double[2];
	double raiz = sqrt(pow(polinomio[1], 2) - 4 * polinomio[0] * polinomio[2]);
	cout << raiz << endl;
	valores[0] = (double)(-polinomio[1] + raiz) / (2 * polinomio[0]);
	valores[1] = (double)(-polinomio[1] - raiz) / (2 * polinomio[0]);
	cout << valores[0] << endl;
	cout << valores[1] << endl;
	return valores;
}
// int* decimalAFraccion(double numero){
// 	int* fraccion = new int[2];
// 	int denominador = 2;
// 	while(true){
// 		if((numero * denominador) % )
// 	}
// }