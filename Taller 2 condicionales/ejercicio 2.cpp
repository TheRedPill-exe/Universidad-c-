/*
Descripcion:
2. Lea dos números y diga si el primero es múltiplo del segundo.
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: Unicamente funciona para numeros enteros.
*/
#include <iostream>
using namespace std;


int main(){
	int num1,num2;
	cout << "Digite el numero 1 entero :";
	cin >> num1;
	cout << "Digite el numero 2 entero :";
	cin >> num2;
	if(num1 % num2 == 0){
		cout << "El numero uno es un multiplo del segundo";
	} else{
		cout << "El numero uno NO es un multiplo del segundo";
	}
	return 0;
}
