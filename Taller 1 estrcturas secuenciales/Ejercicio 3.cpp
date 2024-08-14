#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;
/*
3-. Descripción: Dada la temperatura en grados Fahrenheit (f) 
convertirla a grados centígrados (c) y viceversa 
           c =  5/9 * (f-32)

    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
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

