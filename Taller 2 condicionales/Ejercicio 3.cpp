/*
Descripcion:
3.Lea tres valores enteros y los ordene:

? De mayor a menor.
? De menor a mayor. 

Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: Unicamente funciona para numeros enteros.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;

    cout << "Digite el numero 1 entero: ";
    cin >> a;
    cout << "Digite el numero 2 entero: ";
    cin >> b;
    cout << "Digite el numero 3 entero: ";
    cin >> c;

    // Ordenar de menor a mayor
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    cout << "De menor a mayor: " << a << ", " << b << ", " << c << endl;
    cout << "De mayor a menor: " << c << ", " << b << ", " << a << endl;

    return 0;
}

