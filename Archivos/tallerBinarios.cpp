#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale>

using namespace std;

struct Alumno {
    char dni[10];
    char apellido[40];
    char nombre[20];
    int turno;
};

void escribirArchivoBinario(const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "ab");

    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo para escribir." << endl;
        return;
    }

    Alumno alumno;
    int op = 1;
    
    while (op) {
        cout << "Digite el dni: ";
        cin >> alumno.dni;
        cin.ignore();
        
        cout << "Digite los apellidos: ";
        cin.getline(alumno.apellido, sizeof(alumno.apellido));
        
        cout << "Digite el nombre: ";
        cin.getline(alumno.nombre, sizeof(alumno.nombre));
        
        cout << "Digite el turno: ";
        cin >> alumno.turno;

        fwrite(&alumno, sizeof(Alumno), 1, archivo);

        cout << "Digite 0 para salir, cualquier otro número para continuar: ";
        cin >> op;
    }

    fclose(archivo);
    cout << "Datos escritos en el archivo binario." << endl;
}

void leerArchivoBinario(const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "rb");

    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo para leer." << endl;
        return;
    }

    Alumno alumno;
    cout << "Datos leídos del archivo binario:" << endl;

    while (fread(&alumno, sizeof(Alumno), 1, archivo) == 1) {
        cout << "DNI: " << alumno.dni << endl;
        cout << "Apellido: " << alumno.apellido << endl;
        cout << "Nombre: " << alumno.nombre << endl;
        cout << "Turno: " << alumno.turno << endl;
        cout << "-----------------------" << endl;
    }

    fclose(archivo);
}
void mostrarPorTurno(const char* nombreArchivo, int turno){
	FILE* archivo = fopen(nombreArchivo, "rb");

    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo para leer." << endl;
        return;
    }

    Alumno alumno;
    cout << "Datos leídos del archivo binario:" << endl;

    while (fread(&alumno, sizeof(Alumno), 1, archivo) == 1) {
        if(alumno.turno == 7){
        	cout << "Turno 7 encontrado, dni: " << alumno.dni;
		}
    }
}
void mayusAlumno(const char* nombreArchivo, int idx){
	FILE* archivo = fopen(nombreArchivo, "rb");
	
    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo para leer." << endl;
        return;
    }
	fseek(archivo, idx * 4 , SEEK_SET);
    Alumno alumno;
    cout << "Datos leídos del archivo binario:" << endl;

    while (fread(&alumno, sizeof(Alumno), 1, archivo) == 1) {
        if(alumno.turno == 7){
        	cout << "Turno 7 encontrado, dni: " << alumno.dni;
		}
    }
}
int main() {
    setlocale(LC_ALL, ""); 

    const char* nombreArchivo = "alumnos.dat";

    escribirArchivoBinario(nombreArchivo);
    //leerArchivoBinario(nombreArchivo);
	mostrarPorTurno(nombreArchivo, 7);
    return 0;
}
