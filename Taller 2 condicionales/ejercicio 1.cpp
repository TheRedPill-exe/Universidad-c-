/*
Descripcion:
1. Lea un entero y diga:
? Si es positivo, negativo o cero.
? Si es par o impar. 
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: Unicamente funciona para numeros enteros.
*/
#include <iostream>
using namespace std;


int main(){
	int num;
	cout << "Digite el numero entero :";
	cin >> num;
	if(num != 0){
		if(num % 2 == 0){
			if(num > 0){
				cout << "El numero es par positivo";
			}else{
				cout << "El numero es par negativo";
			}
		}else{
			if(num > 0){
				cout << "El numero es impar positivo";
			}else{
				cout << "El numero es impar negativo";
			}
		}
	} else{
		cout << "El numero es cero";
	}
	return 0;
}
