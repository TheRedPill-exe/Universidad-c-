#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;

int main() {
    float fa, ce;
    
    cout << "Digite los grados en fahrenheit: ";
    cin >> fa;
    
    cout << "Digite los grados centigrados: ";
    cin >> ce;

    cout << "Grados Fahrenheit a centigrados: " << (fa - 32.0)*(5.0/9.0) << endl;
    cout << "Grados centigrados a fahrenheit: " << (ce * (9.0/5.0))+32.0 << endl;

    return 0;
}

