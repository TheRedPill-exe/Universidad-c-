#include <iostream>
#include <string>
using namespace std;
/*
8-. Descripción: 10.De un estudiante se conoce los siguientes datos:
    - Código     - Nombre   - Nota 1   - Nota 2    - Nota 3 
    Calcular y mostrar su promedio

    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/

int main() {
	float n1,n2,n3;
	string name;
	
	cout << "Digite el nombre del estudiante: ";
    getline(cin, name);
    
    cout << "Digite la nota 1: ";
    cin >> n1;
    cout << "Digite la nota 2: ";
    cin >> n2;
	cout << "Digite la nota 3: ";
	cin >> n3;
	cout << "El promedio de " << name << " es: " << (n1+n2+n3)/3.0;
}
