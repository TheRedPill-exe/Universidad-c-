#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;
/*
4-. Descripción: Dado los valores A, B, C se pide calcular y mostrar estos resultados
- El cuadrado de la suma                
- El producto de los valores leídos
- El cubo del Producto
- La diferencia entre el cuadrado de la suma con respecto al cubo del  producto

    Elaborado por: Juan Pablo Marín M.
    Versión del compilador: 5.11 (Dev-cpp)
    Versión del código: 1.0
    
*/
int main() {
    float a, b, c;
    
    cout << "Digite un número para a: ";
    cin >> a;
    
    cout << "Digite un número para b: ";
    cin >> b;
	c = pow((a+b),2) - pow((a*b),3);
    cout << "Cuadrado de la suma: " << pow((a+b),2) << endl;
    cout << "Multiplicación: " << a * b << endl;
    cout << "Cubo del producto: " << pow((a*b),3) << endl;
    cout << "Diferencia del cuadrado de la suma y el cubo del producto: " << c << endl;

    return 0;
}

