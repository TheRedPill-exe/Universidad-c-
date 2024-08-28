/* 4-. Tras declarar las variables que pueden mostrar los resultados, 
Escribe un número del 10 al 20
mediante el operador terciario, (r?v:f) mostramos en pantalla el valor de r
si el usuario ha escrito "bien" o "mal"  con respecto a lo que le hemos pedido.

	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	float n;
	string r;
	bool res;
	cout << "Digite un numero entre 10 y 20:  ";
	cin >> n;
	r = n >= 10 && n <= 20 ?  "bien" : "mal";
	cout << r;
	
}
