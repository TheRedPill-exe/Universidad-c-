#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;
/*
2-. Descripción: Dado el radio de una circunferencia se pide calcular e imprimir su área
           Área = pi * r ^ (2)
    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
int main() {
    float r,area;
    double pi = 3.141592653589793;
    cout << "Digite un número para el radio: ";
    cin >> r;
    area = pow((pi * r),2);
	
    cout << "Área: " << area << endl;
    

    return 0;
}

