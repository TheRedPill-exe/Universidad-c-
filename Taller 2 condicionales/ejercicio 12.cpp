/*
Descripcion:
12. dados tres puntos con coordenadas (x,y) reales, diga si los tres puntos están sobre
una línea recta. El programa no debe abortar por dividir por cero. 
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: Unicamente funciona para numeros enteros.
*/
#include <iostream>
using namespace std;

int main() {
    float x1, x2, x3, y1, y2, y3;
    bool dosIguales = false;

    cout << "Por favor digite numeros decimales." << endl;
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

    if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) {
        dosIguales = true;
    }

    if (!dosIguales) {
        // Esto es para hallar el area, es un triangulo, si tiene area cero es porque estan en linea recta
        float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
        if (area == 0) {
            cout << "Los tres puntos estan en una misma linea recta." << endl;
        } else {
            cout << "Los puntos no estan en una linea recta." << endl;
        }
    } else {
        cout << "Hay puntos iguales, por lo tanto, estan en una misma linea recta." << endl;
    }

    return 0;
}


