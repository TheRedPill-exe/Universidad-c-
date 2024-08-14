#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;
/*
    1-. Descripción: Calcular y mostrar la suma, resta, multiplicación, división, potencia de dos números
    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
int main() {
    float a, b;
    
    cout << "Digite un número para a: ";
    cin >> a;
    
    cout << "Digite un número para b: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicación: " << a * b << endl;
    cout << "División: " << a / b << endl;
    cout << "Potencia: " << pow(a, b) << endl;

    return 0;
}

