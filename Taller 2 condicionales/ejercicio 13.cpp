/*
Descripcion:
13. Dados tres puntos en coordenadas (x,y) reales, diga si los tres forman un tri�ngulo y
si lo forman, calcule el per�metro del tri�ngulo. El programa no debe abortar por
dividir por cero. 
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: PUEDE NO FUNCIONAR SI EL USUARIO DIGITA UN NUMERO NO FLOTANTE.
*/
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float x1, x2, x3, y1, y2, y3;
    bool formanTriangulo = false;

    cout << "Por favor digite coordenadas reales." << endl;
    cout << "Digite la coordenada 1 en x: ";
    cin >> x1;
    cout << "Digite la coordenada 1 en y: ";
    cin >> y1;
    cout << "Digite la coordenada 2 en x: ";
    cin >> x2;
    cout << "Digite la coordenada 2 en y: ";
    cin >> y2;
    cout << "Digite la coordenada 3 en x: ";
    cin >> x3;
    cout << "Digite la coordenada 3 en y: ";
    cin >> y3;

    float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    
    if (area != 0) {
        formanTriangulo = true;
    }

    if (formanTriangulo) {
        float lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float lado3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        
        float perimetro = lado1 + lado2 + lado3;
        
        cout << "Los tres puntos forman un triangulo." << endl;
        cout << "El perimetro del triangulo es: " << perimetro << endl;
    } else {
        cout << "Los tres puntos no forman un triangulo." << endl;
    }

    return 0;
}


