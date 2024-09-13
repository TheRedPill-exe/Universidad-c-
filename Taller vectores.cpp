/*
Nombre: Juan Pablo Marín Marín
Entregado a: CAOS
Fecha de elaboración: 13 septiembre de 2024
Versión del IDE: Devcpp 5.1
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Función para calcular el factorial de un número
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para obtener la suma de los dígitos pares
int sumaDigitosPares(int n) {
    int suma = 0;
    while (n > 0) {
        int digito = n % 10;
        if (digito % 2 == 0) suma += digito;
        n /= 10;
    }
    return suma;
}

// Función para contar cuántos dígitos primos hay en un número
int contarDigitosPrimos(int n) {
    int contador = 0;
    while (n > 0) {
        int digito = n % 10;
        if (esPrimo(digito)) contador++;
        n /= 10;
    }
    return contador;
}

int main() {
    vector<int> numeros(10);
    vector<int> factoriales(10);
    int sumaFactoriales = 0;
    
    // Lectura de 10 números enteros
    cout << "Introduce 10 números enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        factoriales[i] = factorial(numeros[i]);
        sumaFactoriales += factoriales[i];
    }
    
    // 1. Calcular el factorial de cada número y almacenarlo en otro vector
    cout << "\nFactorial de cada número: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Factorial de " << numeros[i] << " es " << factoriales[i] << endl;
    }

    // 2. Calcular el promedio entero de los factoriales
    int promedioFactorial = sumaFactoriales / 10;
    cout << "\nEl promedio entero de los factoriales es: " << promedioFactorial << endl;
    
    // 8. Determinar la suma de los dígitos pares de cada número
    cout << "\nSuma de los dígitos pares de cada número: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Suma de dígitos pares de " << numeros[i] << " es " << sumaDigitosPares(numeros[i]) << endl;
    }
    
    // 11. Determinar cuántos dígitos primos hay en los números leídos
    cout << "\nCantidad de dígitos primos en cada número: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Número " << numeros[i] << " tiene " << contarDigitosPrimos(numeros[i]) << " dígitos primos\n";
    }

    // 12. Determinar el cuadrado de cada uno de los números leídos
    cout << "\nCuadrado de cada número: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Cuadrado de " << numeros[i] << " es " << numeros[i] * numeros[i] << endl;
    }

    // 13. Determinar si la semisuma entre el mayor y el menor es un número primo
    int mayor = numeros[0], menor = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }
    int semisuma = (mayor + menor) / 2;
    cout << "\nLa semisuma entre " << mayor << " y " << menor << " es " << semisuma;
    if (esPrimo(semisuma)) {
        cout << " y es un número primo.\n";
    } else {
        cout << " y no es un número primo.\n";
    }
    
    // 16. Determinar cuántos números comienzan con 3
    int contadorComienzo3 = 0;
    cout << "\nNúmeros que comienzan con 3: \n";
    for (int i = 0; i < 10; i++) {
        int primero = numeros[i];
        while (primero >= 10) {
            primero /= 10;
        }
        if (primero == 3) {
            cout << numeros[i] << endl;
            contadorComienzo3++;
        }
    }
    cout << "Total de números que comienzan con 3: " << contadorComienzo3 << endl;
    
    return 0;
}