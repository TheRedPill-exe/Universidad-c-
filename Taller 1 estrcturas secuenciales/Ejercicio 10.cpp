#include <iostream>
using namespace std;
/*
10-. Crear un ejercicio diferente a los anteriores y secuencial.
    Ejercicio: Calcular el área de un rectángulo.
    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
int main() {
    float ancho, alto, area;

    cout << "Introduce el ancho del rectángulo: ";
    cin >> ancho;

    cout << "Introduce el alto del rectángulo: ";
    cin >> alto;

    area = ancho * alto;

    cout << "El área del rectángulo es: " << area << endl;

    return 0;
}
