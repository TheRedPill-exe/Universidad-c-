/*
Presentado a: CAOS
Elaborado por: Juan Pablo Marín Marín
Fecha de creación: 19/09/2024
Versión del IDE: Devcpp 5.1
*/

#include <iostream>
#include <cmath>
using namespace std;

// Función para leer una matriz de tamaño filas x columnas
void leerMatriz(int matriz[][6], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite el valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para leer una matriz de tamaño 5x5
void leerMatriz5x5(int matriz[][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite el valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Ejercicio 26: Comparar cantidad de números pares en dos matrices 4x5
bool compararPares(int matriz1[][5], int matriz2[][5]) {
    int paresM1 = 0, paresM2 = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz1[i][j] % 2 == 0) paresM1++;
            if (matriz2[i][j] % 2 == 0) paresM2++;
        }
    }
    return paresM1 == paresM2;
}

// Ejercicio 28: Posiciones de números cuyo penúltimo dígito es 5
void posicionesPenultimo5(int matriz[][6], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int penultimo = (abs(matriz[i][j]) / 10) % 10;
            if (penultimo == 5) {
                cout << "El número " << matriz[i][j] << " tiene penúltimo dígito 5 en [" << i << "][" << j << "]\n";
            }
        }
    }
}

// Ejercicio 30: Cuántas veces está el número menor en la matriz 4x6
void contarNumeroMenor(int matriz[][6], int filas, int columnas) {
    int menor = matriz[0][0], contador = 0;
    // Encontrar el número menor
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    // Contar cuántas veces está
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == menor) contador++;
        }
    }
    cout << "El número menor es " << menor << " y aparece " << contador << " veces.\n";
}

// Ejercicio 37: Comparar si el número mayor está en la misma posición en dos matrices 4x6
bool mayorMismaPosicion(int matriz1[][6], int matriz2[][6]) {
    int mayorM1 = matriz1[0][0], mayorM2 = matriz2[0][0];
    int filaM1 = 0, colM1 = 0, filaM2 = 0, colM2 = 0;
    
    // Encontrar mayor en matriz 1
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz1[i][j] > mayorM1) {
                mayorM1 = matriz1[i][j];
                filaM1 = i;
                colM1 = j;
            }
        }
    }
    // Encontrar mayor en matriz 2
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz2[i][j] > mayorM2) {
                mayorM2 = matriz2[i][j];
                filaM2 = i;
                colM2 = j;
            }
        }
    }
    return (filaM1 == filaM2 && colM1 == colM2);
}

// Ejercicio 39: Comparar el promedio de las esquinas de dos matrices 4x6
bool compararPromedioEsquinas(int matriz1[][6], int matriz2[][6]) {
    int esquinasM1 = matriz1[0][0] + matriz1[0][5] + matriz1[3][0] + matriz1[3][5];
    int esquinasM2 = matriz2[0][0] + matriz2[0][5] + matriz2[3][0] + matriz2[3][5];
    
    return (esquinasM1 / 4) == (esquinasM2 / 4);
}

// Ejercicio 42: Promedio de los números primos en una matriz 5x5 y verificar si está en la otra
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool promedioPrimosEnOtra(int matriz1[][5], int matriz2[][5]) {
    int sumaPrimos = 0, cantidadPrimos = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (esPrimo(matriz1[i][j])) {
                sumaPrimos += matriz1[i][j];
                cantidadPrimos++;
            }
        }
    }
    int promedio = sumaPrimos / cantidadPrimos;
    // Buscar si el promedio está en la otra matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz2[i][j] == promedio) return true;
        }
    }
    return false;
}

// Ejercicio 47: Promedio de los mayores números primos por fila y columna de matrices 5x5
int mayorPrimoFila(int matriz[][5], int fila) {
    int mayor = -1;
    for (int j = 0; j < 5; j++) {
        if (esPrimo(matriz[fila][j]) && matriz[fila][j] > mayor) {
            mayor = matriz[fila][j];
        }
    }
    return mayor;
}

int mayorPrimoColumna(int matriz[][5], int columna) {
    int mayor = -1;
    for (int i = 0; i < 5; i++) {
        if (esPrimo(matriz[i][columna]) && matriz[i][columna] > mayor) {
            mayor = matriz[i][columna];
        }
    }
    return mayor;
}

bool compararPromedioPrimos(int matriz1[][5], int matriz2[][5]) {
    int sumaM1 = 0, sumaM2 = 0;
    for (int i = 0; i < 5; i++) {
        sumaM1 += mayorPrimoFila(matriz1, i);
        sumaM2 += mayorPrimoColumna(matriz2, i);
    }
    return (sumaM1 / 5) == (sumaM2 / 5);
}

// Ejercicio 50: Promedio de los elementos de la diagonal de una matriz 5x5
void promedioDiagonal(int matriz[][5]) {
    int sumaDiagonal = 0;
    for (int i = 0; i < 5; i++) {
        sumaDiagonal += matriz[i][i];
    }
    int promedio = sumaDiagonal / 5;
    cout << "El promedio de la diagonal es " << promedio << endl;
    
    // Buscar si el promedio está en la matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == promedio) {
                cout << "El promedio está en la posición [" << i << "][" << j << "]\n";
            }
        }
    }
}

int main() {
    int opcion;
    cout << "Seleccione el ejercicio que desea ejecutar:\n";
    cout << "1. Comparar cantidad de números pares (Ejercicio 26)\n";
    cout << "2. Posiciones de números cuyo penúltimo dígito es 5 (Ejercicio 28)\n";
    cout << "3. Contar el número menor en una matriz (Ejercicio 30)\n";
    cout << "4. Comparar si el número mayor está en la misma posición (Ejercicio 37)\n";
    cout << "5. Comparar el promedio de las esquinas (Ejercicio 39)\n";
    cout << "6. Promedio de los números primos en una matriz (Ejercicio 42)\n";
    cout << "7. Comparar el promedio de los mayores números primos (Ejercicio 47)\n";
    cout << "8. Promedio de los elementos de la diagonal (Ejercicio 50)\n";
    
    cin >> opcion;

    switch (opcion) {
        case 1: {
            int matriz1[4][5], matriz2[4][5];
            cout << "Leer la primera matriz 4x5:\n";
            leerMatriz(matriz1, 4, 5);
            cout << "Leer la segunda matriz 4x5:\n";
            leerMatriz(matriz2, 4, 5);
            if (compararPares(matriz1, matriz2))
                cout << "Las dos matrices tienen la misma cantidad de números pares.\n";
            else
                cout << "Las dos matrices NO tienen la misma cantidad de números pares.\n";
            break;
        }
        case 2: {
            int matriz[4][6];
            cout << "Leer la matriz 4x6:\n";
            leerMatriz(matriz, 4, 6);
            posicionesPenultimo5(matriz, 4, 6);
            break;
        }
        case 3: {
            int matriz[4][6];
            cout << "Leer la matriz 4x6:\n";
            leerMatriz(matriz, 4, 6);
            contarNumeroMenor(matriz, 4, 6);
            break;
        }
        case 4: {
            int matriz1[4][6], matriz2[4][6];
            cout << "Leer la primera matriz 4x6:\n";
            leerMatriz(matriz1, 4, 6);
            cout << "Leer la segunda matriz 4x6:\n";
            leerMatriz(matriz2, 4, 6);
            if (mayorMismaPosicion(matriz1, matriz2))
                cout << "El número mayor de ambas matrices está en la misma posición.\n";
            else
                cout << "El número mayor de ambas matrices NO está en la misma posición.\n";
            break;
        }
        case 5: {
            int matriz1[4][6], matriz2[4][6];
            cout << "Leer la primera matriz 4x6:\n";
            leerMatriz(matriz1, 4, 6);
            cout << "Leer la segunda matriz 4x6:\n";
            leerMatriz(matriz2, 4, 6);
            if (compararPromedioEsquinas(matriz1, matriz2))
                cout << "El promedio de las esquinas de ambas matrices es igual.\n";
            else
                cout << "El promedio de las esquinas de ambas matrices NO es igual.\n";
            break;
        }
        case 6: {
            int matriz1[5][5], matriz2[5][5];
            cout << "Leer la primera matriz 5x5:\n";
            leerMatriz5x5(matriz1);
            cout << "Leer la segunda matriz 5x5:\n";
            leerMatriz5x5(matriz2);
            if (promedioPrimosEnOtra(matriz1, matriz2))
                cout << "El promedio de los números primos de la primera matriz está en la segunda.\n";
            else
                cout << "El promedio de los números primos de la primera matriz NO está en la segunda.\n";
            break;
        }
        case 7: {
            int matriz1[5][5], matriz2[5][5];
            cout << "Leer la primera matriz 5x5:\n";
            leerMatriz5x5(matriz1);
            cout << "Leer la segunda matriz 5x5:\n";
            leerMatriz5x5(matriz2);
            if (compararPromedioPrimos(matriz1, matriz2))
                cout << "El promedio de los mayores números primos por fila y columna es igual.\n";
            else
                cout << "El promedio de los mayores números primos por fila y columna NO es igual.\n";
            break;
        }
        case 8: {
            int matriz[5][5];
            cout << "Leer la matriz 5x5:\n";
            leerMatriz5x5(matriz);
            promedioDiagonal(matriz);
            break;
        }
        default:
            cout << "Opción no válida.\n";
    }

    return 0;
}