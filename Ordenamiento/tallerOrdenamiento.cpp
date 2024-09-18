/*
Elaborado por Juan Pablo Marin
Entregado a CAOS
Version del IDE: Devcpp 5.1
Descripcion: Elaborar 3 metodos de ordenamiento. (hice 4)
*/
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
