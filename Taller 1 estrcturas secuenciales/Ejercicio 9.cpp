#include <iostream>
#include <string>
using namespace std;
/*
9-. Descripción: Convertir a pesos Colombianos y a Dólares un valor dado en Euros

    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/


int main() {
	float euros;

	
	cout << "Digite los euros: ";
    cin >> euros;
    
    cout << "Valor en pesos: " << euros * 4449.47 << endl;

    cout << "Valor en dólares: " << euros * 1.10;


}
