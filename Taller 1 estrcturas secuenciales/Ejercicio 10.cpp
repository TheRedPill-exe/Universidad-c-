#include <iostream>
using namespace std;

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
