/* SE USA EL OPERADOR TERNARIO  condición ? verdadera :  falso
  ejercicio 0:                         
      1) Pedir un numero al usuario.                      
      2) Leer el numero                                
      3) Si el número es mayor que 0:                     
            Imprimir "El número es positivo"              
         De lo contrario:                                 
            Imprimir "El número NO es positivo" 
	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/

#include <iostream>

using namespace std;

int main() {
	float n;
	bool res;
	cout << "Digite el numero:  ";
	cin >> n;
	n > 0 ?  cout << "El numero es positivo" : cout << "El numero es negativo.";
	
}
