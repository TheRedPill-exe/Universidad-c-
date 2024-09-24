/*
Elaborado por Juan Pablo Marin Marin
Entregado a caos
Elaborado el 24-10-2024
Version del editor: 5.11 Devcpp
*/

#include <iostream>
#include <string>
#include <algorithm> // Para std::sort
using namespace std;

// Ejercicio 1: Crear una matriz de 4 filas y 5 columnas.
// Realizar la carga de componentes por columna e imprimir la matriz.
void ejercicio1() {
    int matriz[4][5];

    cout << "Cargar matriz de 4x5 por columnas:\n";
    for (int col = 0; col < 5; col++) {
        for (int fila = 0; fila < 4; fila++) {
            cout << "Ingrese elemento [" << fila << "][" << col << "]: ";
            cin >> matriz[fila][col];
        }
    }

    cout << "Impresion de la matriz:\n";
    for (int fila = 0; fila < 4; fila++) {
        for (int col = 0; col < 5; col++) {
            cout << matriz[fila][col] << " ";
        }
        cout << endl;
    }
}

// Ejercicio 2: Crear una matriz de 3x4.
// Realizar la carga e imprimir el elemento mayor.
void ejercicio2() {
    int matriz[3][4], mayor;

    cout << "Cargar matriz de 3x4:\n";
    for (int fila = 0; fila < 3; fila++) {
        for (int col = 0; col < 4; col++) {
            cout << "Ingrese elemento [" << fila << "][" << col << "]: ";
            cin >> matriz[fila][col];
        }
    }

    mayor = matriz[0][0];
    for (int fila = 0; fila < 3; fila++) {
        for (int col = 0; col < 4; col++) {
            if (matriz[fila][col] > mayor) {
                mayor = matriz[fila][col];
            }
        }
    }

    cout << "El elemento mayor es: " << mayor << endl;
}

// Ejercicio 3: Crear una matriz de 4x5, intercambiar la primera fila con la segunda e imprimir.
void ejercicio3() {
    int matriz[4][5];

    cout << "Cargar matriz de 4x5:\n";
    for (int fila = 0; fila < 4; fila++) {
        for (int col = 0; col < 5; col++) {
            cout << "Ingrese elemento [" << fila << "][" << col << "]: ";
            cin >> matriz[fila][col];
        }
    }

    // Intercambiar la primera fila con la segunda
    for (int col = 0; col < 5; col++) {
        swap(matriz[0][col], matriz[1][col]);
    }

    cout << "Matriz despues de intercambiar la primera fila con la segunda:\n";
    for (int fila = 0; fila < 4; fila++) {
        for (int col = 0; col < 5; col++) {
            cout << matriz[fila][col] << " ";
        }
        cout << endl;
    }
}

// Ejercicio 4: Almacenar en una matriz los nombres de 5 personas. Imprimir el nombre alfabéticamente menor.
void ejercicio4() {
    string nombres[5];

    cout << "Ingrese los nombres de 5 personas:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    string menor = nombres[0];
    for (int i = 1; i < 5; i++) {
        if (nombres[i] < menor) {
            menor = nombres[i];
        }
    }

    cout << "El nombre alfabéticamente menor es: " << menor << endl;
}

// Ejercicio 5: Ingresar nombres de 5 productos y sus precios en un vector paralelo. Contar cuántos tienen un precio mayor al primer producto ingresado.
void ejercicio5() {
    string productos[5];
    float precios[5];

    cout << "Ingrese el nombre y precio de 5 productos:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Producto " << i + 1 << ": ";
        cin >> productos[i];
        cout << "Precio: ";
        cin >> precios[i];
    }

    float precioBase = precios[0];
    int conteo = 0;

    for (int i = 1; i < 5; i++) {
        if (precios[i] > precioBase) {
            conteo++;
        }
    }

    cout << "Cantidad de productos con precio mayor al primero: " << conteo << endl;
}

// Ejercicio 6: Registrar nombres y notas de 4 alumnos, mostrar condiciones y contar "Muy Bueno".
void ejercicio6() {
    string nombres[4];
    int notas[4][3]; // Tres notas por alumno
    int muyBuenos = 0;

    cout << "Ingrese el nombre y las 3 notas de cada alumno:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin >> nombres[i];
        for (int j = 0; j < 3; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    cout << "Listado de alumnos y su condición:\n";
    for (int i = 0; i < 4; i++) {
        cout << nombres[i] << ": ";
        for (int j = 0; j < 3; j++) {
            cout << "Nota " << j + 1 << ": " << notas[i][j] << " ";
        }
        int promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        cout << "Promedio: " << promedio << " - Condición: ";
        if (promedio >= 8) {
            cout << "Muy Bueno";
            muyBuenos++;
        } else if (promedio >= 4) {
            cout << "Bueno";
        } else {
            cout << "Insuficiente";
        }
        cout << endl;
    }

    cout << "Cantidad de alumnos con condición 'Muy Bueno': " << muyBuenos << endl;
}

// Ejercicio 7: Cargar nombres de 5 países y la cantidad de habitantes en un vector paralelo. Ordenar e imprimir.
void ejercicio7() {
    string paises[5];
    int habitantes[5];

    cout << "Ingrese los nombres de 5 países y su cantidad de habitantes:\n";
    for (int i = 0; i < 5; i++) {
        cout << "País " << i + 1 << ": ";
        cin >> paises[i];
        cout << "Habitantes: ";
        cin >> habitantes[i];
    }

    // Ordenar alfabéticamente los países
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (paises[i] > paises[j]) {
                swap(paises[i], paises[j]);
                swap(habitantes[i], habitantes[j]);
            }
        }
    }

    cout << "Países ordenados alfabéticamente:\n";
    for (int i = 0; i < 5; i++) {
        cout << paises[i] << " - Habitantes: " << habitantes[i] << endl;
    }

    // Ordenar por cantidad de habitantes (mayor a menor)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (habitantes[i] < habitantes[j]) {
                swap(paises[i], paises[j]);
                swap(habitantes[i], habitantes[j]);
            }
        }
    }

    cout << "Países ordenados por cantidad de habitantes (de mayor a menor):\n";
    for (int i = 0; i < 5; i++) {
        cout << paises[i] << " - Habitantes: " << habitantes[i] << endl;
    }
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    return 0;
}
