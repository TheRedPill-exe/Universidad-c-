#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;
/*
6-. Descripción: De un trabajador se conoce su nombre, cargo, sueldo básico mensual 
se pide calcular y  mostrar el aporte a SALUD, pensión y el neto a pagar.
                salud -> 4%	     Pensión -> 3.375% 
    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
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
    cout << "Neto a pagar: " << pen + salud;

    return 0;
}

