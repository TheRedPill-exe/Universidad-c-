/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Leer un número entero y determinar si es par o impar.
*/

#include <iostream>
using namespace std;

bool esPar(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    cout << "Digite un número entero: ";
    cin >> num;
    
    if (esPar(num))
        cout << "El número es par." << endl;
    else
        cout << "El número es impar." << endl;

    return 0;
}

