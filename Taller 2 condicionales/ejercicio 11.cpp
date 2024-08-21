/*
Descripcion:
11. Leer un número entero X y :
a) Decir si es positivo o negativo.
b) Decir si es par o impar.
c) Leer otro número Y y decir si X es múltiplo de y.
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: EL USUARIO DEBE DIGITAR UNA FECHA VALIDA
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Digite el numero 1: ";
    cin >> num1;
    cout << "Digite el numero 2: ";
    cin >> num2;
    if(num1 != 0){
		if(num1 % 2 == 0){
			if(num1 > 0){
				cout << "El numero uno es par positivo";
			}else{
				cout << "El numero uno es par negativo";
			}
		}else{
			if(num1 > 0){
				cout << "El numero uno es impar positivo";
			}else{
				cout << "El numero uno es impar negativo";
			}
		}
		if(num1 % num2 == 0){
		cout << " y el numero uno es un multiplo del segundo";
	} else{
		cout << " y el numero uno NO es un multiplo del segundo";
	}
	}
    

    return 0;
}


