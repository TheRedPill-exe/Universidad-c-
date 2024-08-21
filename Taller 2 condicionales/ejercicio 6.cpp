/*
Descripcion:
6. Dada la fecha de hoy, calcular la fecha del día siguiente. (suponga que el año no es
bisiesto). 
Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
Salvedades: EL USUARIO DEBE DIGITAR UNA FECHA VALIDA
*/
#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;

    cout << "Digite el dia: ";
    cin >> dia;
    cout << "Digite el mes: ";
    cin >> mes;
    cout << "Digite el anio: ";
    cin >> anio;

    dia++;

    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia = 31) {
        dia = 1;
        mes++;
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        dia = 1;
        mes++;
    } else if (mes == 2 && dia > 28) {
        dia = 1;
        mes++;
    }

    if (mes > 12) {
        mes = 1;
        anio++;
    }

    cout << "Fecha del dia siguiente: " << dia << "/" << mes << "/" << anio << endl;

    return 0;
}

