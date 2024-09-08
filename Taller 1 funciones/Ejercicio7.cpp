/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboración: 08/09/24
Versión del IDE: 5.1 Dev-cpp
*/
/*
Descripción:
Leer una cadena de texto y contar cuántas vocales tiene.
*/

#include <iostream>
#include <string>
using namespace std;

int contarVocales(string texto) {
    int contador = 0;
    for (char letra : texto) {
        letra = tolower(letra);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string texto;
    cout << "Digite una frase: ";
    getline(cin, texto);
    
    int totalVocales = contarVocales(texto);
    cout << "La frase tiene " << totalVocales << " vocales." << endl;

    return 0;
}

