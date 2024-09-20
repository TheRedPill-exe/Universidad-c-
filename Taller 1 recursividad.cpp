/*
Presentado a: CAOS
Elaborado por: Juan Pablo Marín Marín
Fecha de creación: 19/09/2024
Versión del IDE: Devcpp 5.1
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Función para analizar el número (positivo/negativo, par/impar, múltiplo)
void analizarNumero(int num1, int num2) {
    if (num1 != 0) {
        if (num1 % 2 == 0) {
            if (num1 > 0)
                cout << "El numero es par positivo";
            else
                cout << "El numero es par negativo";
        } else {
            if (num1 > 0)
                cout << "El numero es impar positivo";
            else
                cout << "El numero es impar negativo";
        }

        if (num1 % num2 == 0)
            cout << " y es múltiplo del segundo número." << endl;
        else
            cout << " y NO es múltiplo del segundo número." << endl;
    }
}

// Función recursiva para calcular el MCD
int calcularMCD(int a, int b) {
    if (b == 0)
        return a;
    return calcularMCD(b, a % b);
}

// Función recursiva para verificar si un número es múltiplo de otro
bool esMultiploRecursivo(int num1, int num2) {
    if (num1 < num2)
        return false;
    if (num1 == num2)
        return true;
    return esMultiploRecursivo(num1 - num2, num2);
}

// Función para verificar si tres puntos forman un triángulo y calcular su perímetro
bool formanTriangulo(float x1, float y1, float x2, float y2, float x3, float y3) {
    float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return (area != 0);
}

float calcularPerimetro(float x1, float y1, float x2, float y2, float x3, float y3) {
    float lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float lado3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    return lado1 + lado2 + lado3;
}

// Función recursiva para verificar si un número es primo
bool esPrimo(int n, int divisor = 2) {
    if (n <= 1)
        return false;
    if (divisor > n / 2)
        return true;
    if (n % divisor == 0)
        return false;
    return esPrimo(n, divisor + 1);
}

// Función recursiva para generar la serie de Fibonacci
void generarFibonacci(int a, int b, int n) {
    if (n == 0) return;
    cout << a << " ";
    generarFibonacci(b, a + b, n - 1);
}

// Función para verificar si una cadena es un palíndromo
bool esPalindromoRecursivo(string cadena, int inicio, int fin) {
    if (inicio >= fin)
        return true;
    if (cadena[inicio] != cadena[fin])
        return false;
    return esPalindromoRecursivo(cadena, inicio + 1, fin - 1);
}

// Función para contar vocales en una cadena
int contarVocalesRecursivo(string texto, int index) {
    if (index == texto.length())
        return 0;
    char letra = tolower(texto[index]);
    int contar = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') ? 1 : 0;
    return contar + contarVocalesRecursivo(texto, index + 1);
}

// Función recursiva para sumar los dígitos de un número
int sumarDigitos(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumarDigitos(num / 10);
}

// Función recursiva para determinar si un número es par
bool esPar(int num) {
    if (num == 0)
        return true;
    if (num == 1)
        return false;
    return esPar(num - 2);
}

int main() {
    int opcion;
    cout << "Seleccione el programa que desea ejecutar:\n";
    cout << "1. Analizar número (positivo/negativo, par/impar, múltiplo)\n";
    cout << "2. Calcular MCD\n";
    cout << "3. Verificar si es múltiplo\n";
    cout << "4. Verificar si forman triángulo\n";
    cout << "5. Verificar si un número es primo\n";
    cout << "6. Generar serie de Fibonacci\n";
    cout << "7. Verificar si es palíndromo\n";
    cout << "8. Contar vocales en una cadena\n";
    cout << "9. Sumar los dígitos de un número\n";
    cout << "10. Verificar si un número es par\n";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            int num1, num2;
            cout << "Digite el primer número: ";
            cin >> num1;
            cout << "Digite el segundo número: ";
            cin >> num2;
            analizarNumero(num1, num2);
            break;
        }
        case 2: {
            int num1, num2;
            cout << "Digite el primer número: ";
            cin >> num1;
            cout << "Digite el segundo número: ";
            cin >> num2;
            cout << "El MCD es: " << calcularMCD(num1, num2) << endl;
            break;
        }
        case 3: {
            int num1, num2;
            cout << "Digite el primer número: ";
            cin >> num1;
            cout << "Digite el segundo número: ";
            cin >> num2;
            if (esMultiploRecursivo(num1, num2))
                cout << "El número es múltiplo." << endl;
            else
                cout << "El número no es múltiplo." << endl;
            break;
        }
        case 4: {
            float x1, y1, x2, y2, x3, y3;
            cout << "Digite las coordenadas del primer punto (x1, y1): ";
            cin >> x1 >> y1;
            cout << "Digite las coordenadas del segundo punto (x2, y2): ";
            cin >> x2 >> y2;
            cout << "Digite las coordenadas del tercer punto (x3, y3): ";
            cin >> x3 >> y3;

            if (formanTriangulo(x1, y1, x2, y2, x3, y3))
                cout << "El perímetro del triángulo es: " << calcularPerimetro(x1, y1, x2, y2, x3, y3) << endl;
            else
                cout << "Los puntos no forman un triángulo." << endl;
            break;
        }
        case 5: {
            int n;
            cout << "Digite un número: ";
            cin >> n;
            if (esPrimo(n))
                cout << "El número es primo." << endl;
            else
                cout << "El número NO es primo." << endl;
            break;
        }
        case 6: {
            int n;
            cout << "Digite cuántos números de la serie Fibonacci desea generar: ";
            cin >> n;
            generarFibonacci(0, 1, n);
            cout << endl;
            break;
        }
        case 7: {
            string cadena;
            cout << "Digite una palabra o frase: ";
            cin >> cadena;
            if (esPalindromoRecursivo(cadena, 0, cadena.length() - 1))
                cout << "Es un palíndromo." << endl;
            else
                cout << "NO es un palíndromo." << endl;
            break;
        }
        case 8: {
            string texto;
            cout << "Digite una frase: ";
            cin.ignore();
            getline(cin, texto);
            cout << "La frase tiene " << contarVocalesRecursivo(texto, 0) << " vocales." << endl;
            break;
        }
        case 9: {
            int num;
            cout << "Digite un número: ";
            cin >> num;
            cout << "La suma de los dígitos es: " << sumarDigitos(num) << endl;
            break;
        }
        case 10: {
            int num;
            cout << "Digite un número entero: ";
            cin >> num;
            if (esPar(num))