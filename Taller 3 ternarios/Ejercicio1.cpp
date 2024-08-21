/* 1-. operador ternario ?;cond;v;f  para hallar el mayor de dos números
	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>

using namespace std;

int main() {
	float n,m;
	bool res;
	cout << "Digite el numero 1:  ";
	cin >> n;
	cout << "Digite el numero 2:  ";
	cin >> m;
	n > m ?  cout << "El numero 1 es mayor al numero 2." : cout << "El numero 2 es mayor que el numero 1.";
	
}
