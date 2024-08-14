#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;

int main() {
    float sal, pen, salud;
    string nombre;

    cout << "Digite el nombre del trabajador: ";
    getline(cin, nombre);

    cout << "Digite el salario del trabajador: ";
    cin >> sal;

    pen = sal * 0.03375;
    salud = sal * 0.04;
    
    cout << "El aporte a salud es: " << salud << endl;
    cout << "Se le descuenta para la pensión: " << pen << endl;

    return 0;
}

