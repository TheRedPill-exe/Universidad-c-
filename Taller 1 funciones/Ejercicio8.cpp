/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Leer un número entero y calcular la suma de sus dígitos.
*/

#include <iostream>
using namespace std;

int sumarDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Digite un número entero: ";
    cin >> num;
    
    int suma = sumarDigitos(num);
    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}

