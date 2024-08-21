/*
Descripcion:
19. En una agencia de viajes lo contrataron para decirle a cada cliente en cuánto le sale
su pasaje de acuerdo a unas políticas:

? Si el pasajero es menor de edad, se le hace un descuento del 10%.
? Si es estudiante se le hace un descuento del 155.
? Si es fumador, se le cobra un interés del 30%.
? Si es mayor de 60 años de le hace un descuento del 20%.
? Si no es fumador y es estudiante o menor de edad se le hace un descuento
adicional del 12%.
Pidiendo todos los datos necesarios, dígale al pasajero en cuánto le sale el pasaje. 

Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
*/
#include <iostream>
using namespace std;

int main() {
    float precio, descuento = 0, interes = 0;
    int edad;
    bool esEstudiante, esFumador;

    cout << "Ingrese el precio del pasaje: $";
    cin >> precio;

    cout << "Ingrese la edad del pasajero: ";
    cin >> edad;

    cout << "Es estudiante? (1 para si, 0 para no): ";
    cin >> esEstudiante;

    cout << "Es fumador? (1 para si, 0 para no): ";
    cin >> esFumador;

    if (edad < 18) {
        descuento += 10; 
    }

    if (esEstudiante) {
        descuento += 15; 
    }

    if (edad > 60) {
        descuento += 20; 
    }

    if (esFumador) {
        interes += 30; 
    } else {
        if (esEstudiante || edad < 18) {
            descuento += 12; 
        }
    }

   
    precio = precio - (precio * descuento / 100);
    
    precio = precio + (precio * interes / 100);

    cout << "El costo final del pasaje es: $" << precio << endl;

    return 0;
}

