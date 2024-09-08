/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Determinar si una cadena de caracteres es un palíndromo.
*/

#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(string cadena) {
    int longitud = cadena.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - i - 1])
            return false;
    }
    return true;
}

int main() {
    string cadena;
    cout << "Digite una palabra o frase: ";
    cin >> cadena;
    
    if (esPalindromo(cadena))
        cout << "Es un palíndromo.";
    else
        cout << "NO es un palíndromo.";

    return 0;
}

