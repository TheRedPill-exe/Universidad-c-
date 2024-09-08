/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Leer dos números y calcular su máximo común divisor (MCD).
*/

#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Digite el primer número: ";
    cin >> num1;
    cout << "Digite el segundo número: ";
    cin >> num2;
    
    int mcd = calcularMCD(num1, num2);
    cout << "El MCD es: " << mcd << endl;

    return 0;
}

