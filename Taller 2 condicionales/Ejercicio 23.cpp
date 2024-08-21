/*
Descripcion:
23. el vídeo club "El cine" tiene una política para promover el alquiler de sus películas,
esta estrategia consiste en obsequiar el alquiler de una política si el afiliado lleva
dos (pague dos lleve tres, siendo acumulable, p.e. 2 pague cuatro y lleve seis", etc.) y
que cuando haya alquilado 10 o más películas puede llevar dos sin ningún costo.
Las dos promociones no se excluyen entre sí.

El vídeo club clasifica sus películas así:
? Clásicas.
? Cine-arte.
? Cine-comercial.
? Cartelera (películas exhibida en los cines en ese momento).

El valor del alquiler de cualquier película es de $1000 y las de cartelera tienen un
recargo de $200. Las promociones sólo son válidas para las películas que no son de
cartelera; si el afiliado desea, puede utilizar su promoción con una película de
cartelera pagando el recargo en efectivo.
El problema que se debe resolver es saber cuántas películas puede llevar un afiliado
en determinado momento y cuánto debe pagar. 

Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
*/

#include <iostream>
using namespace std;

int main() {
    int c, ca, cc, k; 
    int total, gratis, pagar;

    cout << "Ingrese peliculas clasicas: ";
    cin >> c;
    cout << "Ingrese peliculas cine-arte: ";
    cin >> ca;
    cout << "Ingrese peliculas cine-comercial: ";
    cin >> cc;
    cout << "Ingrese peliculas cartelera: ";
    cin >> k;

    total = c + ca + cc + k;

    int noCartelera = c + ca + cc;
    gratis = noCartelera / 3;

    if (total >= 10) {
        gratis += 2;
    }

    if (gratis > noCartelera) {
        gratis = noCartelera;
    }

    pagar = (noCartelera - gratis) * 1000 + k * 1200;

    cout << "Peliculas a llevar: " << total + gratis << endl;
    cout << "Monto a pagar: $" << pagar << endl;

    return 0;
}

