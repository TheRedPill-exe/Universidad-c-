#include <iostream>
#include <string> // Necesario para usar std::string
/*
7-. Descripción: Se pide liquidar el valor de horas extras diurnas teniendo en cuenta lo siguiente
    - Valor de la hora trabajada  
    - Número de horas trabajadas durante el mes
    Debe tener en cuenta que las horas extras diurnas tienen un recargo del 35% 
    del valor de la hora trabajada 

    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/

using namespace std;
int main() {
    float horas, vhora, horase;

    cout << "Cúantas horas normales trabajó?: ";
    cin >> horas;
    cout << "Cúal es el precio de la hora normal?: ";
    cin >> vhora;
    cout << "Cúantas horas extra trabajó?: ";
    cin >> horase;
    float sal = (horas * vhora) + (horase * (vhora + (0.35 * vhora)));

    
    cout << "El salario total del trabajador es: " << sal << endl << " y el valor de las horas extra es: " << (horase * (vhora + (0.35 * vhora)));

    return 0;
}
