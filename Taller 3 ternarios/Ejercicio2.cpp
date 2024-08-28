/* 2-. Problema propuesto
Ingresar por teclado dos números enteros. 
Si los valores son iguales sumarlos, sino multiplicarlos. 
Emplear el operador condicional ?: para guardar en una variable el resultado.

	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>

using namespace std;

int main() {
	int n,m;
	bool res;
	cout << "Digite el numero 1:  ";
	cin >> n;
	cout << "Digite el numero 2:  ";
	cin >> m;
	n == m ?  cout << "Suma: " << n + m : cout << "Multiplicacion: " << n*m;
	
}
