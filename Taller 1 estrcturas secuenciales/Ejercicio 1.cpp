#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;

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

