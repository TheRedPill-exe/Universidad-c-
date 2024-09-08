/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Dados tres puntos en coordenadas (x,y) reales, determine si los tres forman un triángulo y, si lo forman, calcule el perímetro del triángulo.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool formanTriangulo(float x1, float y1, float x2, float y2, float x3, float y3) {
    float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return (area != 0);
}

float calcularPerimetro(float x1, float y1, float x2, float y2, float x3, float y3) {
    float lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float lado3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    return lado1 + lado2 + lado3;
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Digite las coordenadas (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Digite las coordenadas (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Digite las coordenadas (x3, y3): ";
    cin >> x3 >> y3;

    if (formanTriangulo(x1, y1, x2, y2, x3, y3)) {
        cout << "Los tres puntos forman un triángulo." << endl;
        cout << "El perímetro del triángulo es: " << calcularPerimetro(x1, y1, x2, y2, x3, y3) << endl;
    } else {
        cout << "Los tres puntos no forman un triángulo." << endl;
    }
    return 0;
}

