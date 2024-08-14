#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;

int main() {
    float horas, vhora, horase;

    cout << "Cúantas horas normales trabajó?: ";
    cin >> horas;
    cout << "Cúal es el precio de la hora?: ";
    cin >> vhora;
	cout << "Cúantas horas extra trabajó?: ";
    cin >> horase;
    float sal = (horas * vhora) + (horase * (vhora + (0.35 * vhora)));

    
    cout << "El salario total del trabajador es: " << sal << endl;

    return 0;
}
