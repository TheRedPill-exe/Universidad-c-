/*
Elaborado por: Juan Pablo Marín M
Entregado a: CAOS
Version del editor: 5.11 (Dev-cpp)
*/
#include <iostream>

using namespace std;
/*
Descripción: 
1-. A partir de una lista de calificaciones de los estudiantes de primer semestre, acceder y
mostrar la información correspondiente y su dirección de memoria a dicha lista, mediante el uso de funciones y apuntadores.
*/
void calificaciones(){
	int cant = 0;
	cout << "Digite la cantidad de notas a digitar en el arreglo: ";
	cin >> cant;
	float* notas = new float[cant];
	
	for(int i = 0; i < cant ; i++){
		cout << "Nota: " << i + 1 << " ";
		cin >> *(notas + i);
	}
	for(int i = 0; i < cant; i++){
		cout << "La nota " << i << " es " << notas[i] << " y su direccion en memoria es: " << &notas[i] << endl;
	}
	delete[] notas;
}
/*
Descripción: 
2. Escribir una función que sea capaz de ordenar en memoria dinámica,
un arreglo de enteros, las funciones de recoger datos, ordenar y mostrar los datos, deben contener algún manejo de punteros.
*/
void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pivot = *(arr + high);
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (*(arr + j) <= pivot){
                i++;
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }

        int temp = *(arr + i + 1);
        *(arr + i + 1) = *(arr + high);
        *(arr + high) = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

/*
3-. Sea A una matriz de tamaño nxn, implemente un programa que dado un menú de opciones resuelva:  por ejemplo La transpuesta de A (At). Si A es simétrica.  
Mostrar los elementos triangular superior o triangular inferior. O otras tres situaciones que se quieran realizar con matrices, con uso de punteros.
*/
void mkMatrix() {
    int n = 0;
    cout << "Digite el tamaño n de la matriz cuadrada: ";
    cin >> n;

    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout << "Dato de fila " << i << " columna " << j << ": ";
            cin >> *(*(matrix + i) + j);
        }
    }
     cout << "La matriz es:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }

    // Liberar la memoria
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
int main(){
	//calificaciones();
    //bubbleSort(arr, size);

    mkMatrix();
	return 0;
}
