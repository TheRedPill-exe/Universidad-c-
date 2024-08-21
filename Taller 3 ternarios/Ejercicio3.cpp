/* 3-. operador ternario ?;cond;v;f  para hallar el mayor de tres números incluye validación
	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>

using namespace std;

int main() {
    float n, m, b, temp;
    cout << "Digite el numero 1:  ";
    cin >> n;
    cout << "Digite el numero 2:  ";
    cin >> m;
    cout << "Digite el numero 3:  ";
    cin >> b;

    (n != m && m != b && b != n) ? (
        (n > m ? (temp = n, n = m, m = temp) : n = n),
        (m > b ? (temp = m, m = b, b = temp) : m = m),
        (n > m ? (temp = n, n = m, m = temp) : n = n),
        cout << "Mayor: " << b << " medio: " << m << " menor: " << n
    ) : cout << "Los numeros deben ser diferentes entre si.";

    return 0;
}

