/*
Presentado a: CAOS
Elaborado por: Juan Pablo Marín Marín
Fecha de creación: 19/09/2024
Versión del IDE: Devcpp 5.1
*/

/*
Descripción:
Leer un número entero X y:
a) Decir si es positivo o negativo.
b) Decir si es par o impar.
c) Leer otro número Y y decir si X es múltiplo de Y.
*/

#include <iostream>
using namespace std;

void analizarNumero(int num1, int num2) {
    if (num1 != 0) {
        if (num1 % 2 == 0) {
            if (num1 > 0)
                cout << "El numero uno es par positivo";
            else
                cout << "El numero uno es par negativo";
        } else {
            if (num1 > 0)
                cout << "El numero uno es impar positivo";
            else
                cout << "El numero uno es impar negativo";
        }
        if (num1 % num2 == 0)
            cout << " y el numero uno es un multiplo del segundo";
        else
            cout << " y el numero uno NO es un multiplo del segundo";
    }
}

int main() {
    int num1, num2;
    cout << "Digite el numero 1: ";
    cin >> num1;
    cout << "Digite el numero 2: ";
    cin >> num2;
    analizarNumero(num1, num2);
    return 0;
}

/*
Descripción:
Leer dos números y calcular su máximo común divisor (MCD) usando recursividad.
*/

#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return calcularMCD(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Digite el primer número: ";
    cin >> num1;
    cout << "Digite el segundo número: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);
    cout << "El MCD es: " << mcd << endl;

    return 0;
}

/*
Descripción:
Leer un número n, generar los primeros n números de la serie de Fibonacci usando recursividad.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void generarFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
}

int main() {
    int n;
    cout << "Digite la cantidad de números de Fibonacci a generar: ";
    cin >> n;

    generarFibonacci(n);
    return 0;
}

/*
Descripción:
Determinar si una cadena de caracteres es un palíndromo usando recursividad.
*/

#include <iostream>
#include <string>
using namespace std;

bool esPalindromoRecursivo(string cadena, int inicio, int fin) {
    if (inicio >= fin)
        return true;
    if (cadena[inicio] != cadena[fin])
        return false;
    return esPalindromoRecursivo(cadena, inicio + 1, fin - 1);
}

int main() {
    string cadena;
    cout << "Digite una palabra o frase: ";
    cin >> cadena;

    if (esPalindromoRecursivo(cadena, 0, cadena.length() - 1))
        cout << "Es un palíndromo." << endl;
    else
        cout << "NO es un palíndromo." << endl;

    return 0;
}

/*
Descripción:
Leer un número entero y calcular la suma de sus dígitos usando recursividad.
*/

#include <iostream>
using namespace std;

int sumarDigitosRecursivo(int num) {
    if (num == 0)
        return 0;
    return num % 10 + sumarDigitosRecursivo(num / 10);
}

int main() {
    int num;
    cout << "Digite un número entero: ";
    cin >> num;

    int suma = sumarDigitosRecursivo(num);
    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}