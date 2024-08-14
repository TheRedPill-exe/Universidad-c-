#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;

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

