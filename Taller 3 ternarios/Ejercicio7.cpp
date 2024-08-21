/* 7-. Un ejemplo, comprobar si un carácter es una letra (tanto mayúscula como minúscula)
 o no.  El programa es similar al del ejercicio 6 anterior, 
 pero aquí se  combina los operadores "and y or" para obtener 
 las dos franjas en las que están los caracteres de las letras:

	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;

int main() {
	setlocale (LC_ALL,"spanish");
    char letra;
    cout << "Escriba una letra: ";
    cin >> letra;
    isalnum(letra) ? cout <<  "Es una alfanumerica" : cout <<"No es alfanumerica";

    return 0;
}

