/*
Elaborado por Juan Pablo Marin
Entregado a CAOS
Version del IDE: Devcpp 5.1
Descripcion: Elaborar 3 metodos de ordenamiento. (hice 4)
*/
#include <stdio.h>
#include <time.h>

#define TAM 1000 // Tamaño del arreglo para los ejemplos

void generarArreglo(int a[], int tam) {
    srand(time(0)); 
    for (int i = 0; i < tam; i++) {
        a[i] = rand() % 1000; 
    }
}

void imprimirArreglo(int a[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Método de Intercambio o Burbuja
void burbuja(int a[], int tam) {
    int aux;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

// Método de Inserción
void insercion(int a[], int tam) {
    int i, j, aux;
    for (i = 1; i < tam; i++) {
        aux = a[i];
        for (j = i - 1; j >= 0 && a[j] > aux; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = aux;
    }
}

// Método de Selección
void seleccion(int a[], int tam) {
    int i, j, min, aux;
    for (i = 0; i < tam - 1; i++) {
        min = i;
        for (j = i + 1; j < tam; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        aux = a[min];
        a[min] = a[i];
        a[i] = aux;
    }
}

// Método de Shell
void shell(int a[], int tam) {
    int salto, i, j, aux;
    for (salto = tam / 2; salto > 0; salto /= 2) {
        for (i = salto; i < tam; i++) {
            aux = a[i];
            for (j = i; j >= salto && a[j - salto] > aux; j -= salto) {
                a[j] = a[j - salto];
            }
            a[j] = aux;
        }
    }
}

// Método Quicksort
void quicksort(int a[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = a[inicio], i = inicio, j = fin, aux;
        while (i < j) {
            while (i < j && a[j] >= pivote) j--;
            if (i < j) a[i++] = a[j];
            while (i < j && a[i] <= pivote) i++;
            if (i < j) a[j--] = a[i];
        }
        a[i] = pivote;
        quicksort(a, inicio, i - 1);
        quicksort(a, i + 1, fin);
    }
}


void medirTiempo(void (*funcion)(int[], int), int a[], int tam, const char* nombre) {
    int copia[TAM];
    for (int i = 0; i < tam; i++) copia[i] = a[i]; 

    clock_t inicio = clock();
    funcion(copia, tam); 
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de %s: %f segundos\n", nombre, tiempo);
}


int main() {
    int arreglo[TAM];
    generarArreglo(arreglo, TAM); 

    int copia[TAM];

    // Burbuja
    for (int i = 0; i < TAM; i++) copia[i] = arreglo[i]; 
    clock_t inicio = clock();
    burbuja(copia, TAM);
    clock_t fin = clock();
    printf("Tiempo de Burbuja: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    // Inserción
    for (int i = 0; i < TAM; i++) copia[i] = arreglo[i]; 
    inicio = clock();
    insercion(copia, TAM);
    fin = clock();
    printf("Tiempo de Inserción: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    // Selección
    for (int i = 0; i < TAM; i++) copia[i] = arreglo[i];
    inicio = clock();
    seleccion(copia, TAM);
    fin = clock();
    printf("Tiempo de Selección: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    // Shell
    for (int i = 0; i < TAM; i++) copia[i] = arreglo[i];
    inicio = clock();
    shell(copia, TAM);
    fin = clock();
    printf("Tiempo de Shell: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    // Quicksort
    for (int i = 0; i < TAM; i++) copia[i] = arreglo[i];
    inicio = clock();
    quicksort(copia, 0, TAM - 1);
    fin = clock();
    printf("Tiempo de Quicksort: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}
