/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Dado un número n, generar los primeros n números de la serie de Fibonacci.
*/

#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    int a = 0, b = 1, siguiente;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
}

int main() {
    int n;
    cout << "Digite la cantidad de números de Fibonacci a generar: ";
    cin >> n;
    
    generarFibonacci(n);
    
    return 0;
}

