/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Dado un número n, determinar si es un número primo.
*/

#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Digite un número: ";
    cin >> n;

    if (esPrimo(n))
        cout << "El número es primo.";
    else
        cout << "El número NO es primo.";

    return 0;
}

