#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;
/*
5-.Descripcion: De un artículo se conoce: 
     - referencia 
     - Nombre del artículo
     - valor unitario 
     - unidades disponibles
     Se pide calcular el valor total del articulo (con IVA incluido)
    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
int main() {
    float val, uni;
    string nombre = "papitas";
    
    cout << "Digite el precio del articulo: ";
    cin >> val;
    
    float ref = (val * 5) / 4 + 12;
    
    cout << "Digite cuantas unidades comprará: ";
    cin >> uni;
    
    cout << "Para el articulo: " << nombre << " con referencia: " << ref << endl;
    cout << "El precio con IVA es: " << (uni * val) + ((uni * val) * 0.16) << endl;

    return 0;
}

