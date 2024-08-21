/*
Descripcion:
10. Validar que dada una fecha, esta sea correcta. Para que una fecha sea correcta es
necesario:

? El anio debe ser mayor que cero.
? El mes debe estar entre 1 y 12.
? Dependiendo del mes que sea, el día debe estar dentro de los limites válidos. 
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

    if (anio <= 0) {
        cout << "Fecha no valida: el anio debe ser mayor que cero." << endl;
        return 1;
    }

    if (mes < 1 || mes > 12) {
        cout << "Fecha no valida: el mes debe estar entre 1 y 12." << endl;
        return 1;
    }

    bool fechaValida = true;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia < 1 || dia > 31) fechaValida = false;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30) fechaValida = false;
    } else if (mes == 2) {
        if (dia < 1 || dia > 28) fechaValida = false;
    }

    if (!fechaValida) {
        cout << "Fecha no valida: el día no está dentro de los limites validos." << endl;
        return 1;
    }

    dia++;

    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia == 31) {
        dia = 1;
        mes++;
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) {
        dia = 1;
        mes++;
    } else if (mes == 2 && dia == 28) {
        dia = 1;
        mes++;
    }

    if (mes == 12) {
        mes = 1;
        anio++;
    }

    cout << "Fecha del día siguiente: " << dia << "/" << mes << "/" << anio << endl;

    return 0;
}


