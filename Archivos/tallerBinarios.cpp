/* Entregado a: CAOS
Juan Pablo Marín M
Version del IDE: 5.11
Fecha de elaboración: 23/10/24
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale>
#include <cstdlib>

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
/*Dado un fichero binario “alumnos.dat” que tiene registros
de alumnos, con la siguiente información por cada alumno:
dni vector de 10 caracteres
apellidos vector de 40 caracteres
nombre vector de 20 caracteres
turno entero
Haz un programa que imprima por pantalla el DNI de todos
los alumnos del turno 7.*/

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
            cout << "Turno 7 encontrado, dni: " << alumno.dni << endl;
        }
    }
}
/*Dado el fichero “alumnos.dat” del ejercicio anterior, haz
un programa que pase a mayúsculas el nombre y los
apellidos del quinto alumno del fichero, y lo vuelva a escribir
en el fichero.*/

void mayusAlumno(const char* nombreArchivo, int idx){
    FILE* archivo = fopen(nombreArchivo, "rb+");
    
    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo para leer." << endl;
        return;
    }

    fseek(archivo, idx * sizeof(Alumno), SEEK_SET);
    Alumno alumno;
    fread(&alumno, sizeof(Alumno), 1, archivo);
    
    for (int i = 0; alumno.nombre[i]; i++) {
        alumno.nombre[i] = toupper(alumno.nombre[i]);
    }

    for (int i = 0; alumno.apellido[i]; i++) {
        alumno.apellido[i] = toupper(alumno.apellido[i]);
    }

    for (int i = 0; alumno.dni[i]; i++) {
        alumno.dni[i] = toupper(alumno.dni[i]);
    }
    
    fseek(archivo, idx * sizeof(Alumno), SEEK_SET);
    fwrite(&alumno, sizeof(Alumno), 1, archivo);

    fclose(archivo);

    cout << "Datos del alumno en la posición " << idx << " convertidos a mayúsculas." << endl;
}

/*Diseña un programa que construya el fichero
“alumnos.dat” a partir de un fichero de texto “alu.txt”
en el que cada dato (dni, nombre, etc) está en una línea
distinta. Ten en cuenta que en el fichero de texto el dni,
nombre y apellidos pueden ser más largos que los tamaños
especificados para el fichero binario, en cuyo caso se
deben recortar.*/

void recortarCadena(char* destino, const char* origen, size_t maxSize) {
    strncpy(destino, origen, maxSize - 1);
    destino[maxSize - 1] = '\0';
    
    size_t len = strlen(destino);
    if (len > 0 && destino[len - 1] == '\n') {
        destino[len - 1] = '\0';
    }
}

void convertirTextoABinario(const char* nombreArchivoTexto, const char* nombreArchivoBinario) {
    cout << "Intentando abrir: " << nombreArchivoTexto << endl;
    FILE* archivoTexto = fopen(nombreArchivoTexto, "r");  
    FILE* archivoBinario = fopen(nombreArchivoBinario, "ab");  

    if (archivoTexto == NULL) {
        cout << "No se pudo abrir el archivo de texto." << endl;
        return;
    }

    if (archivoBinario == NULL) {
        cout << "No se pudo abrir el archivo binario para escribir." << endl;
        fclose(archivoTexto);
        return;
    }

    Alumno alumno;
    char linea[100];

    while (fgets(linea, sizeof(linea), archivoTexto) != NULL) {
        recortarCadena(alumno.dni, linea, sizeof(alumno.dni));

        fgets(linea, sizeof(linea), archivoTexto);
        recortarCadena(alumno.apellido, linea, sizeof(alumno.apellido));

        fgets(linea, sizeof(linea), archivoTexto);
        recortarCadena(alumno.nombre, linea, sizeof(alumno.nombre));

        fgets(linea, sizeof(linea), archivoTexto);
        alumno.turno = atoi(linea);  

        fwrite(&alumno, sizeof(Alumno), 1, archivoBinario);  
    }

    fclose(archivoTexto);
    fclose(archivoBinario);
    cout << "Datos convertidos de texto a binario." << endl;
}

/*Escribe un programa que se encarge de la asignación
automática de alumnos en 10 turnos de prácticas. A cada
alumno se le asignará el turno correspondiente al último
número de su DNI (a los alumnos con DNI acabado en 0 se
les asignará el turno 10). Los datos de los alumnos están
en un fichero “alumnos.dat” con la misma estructura que
en los ejercicios anteriores.*/

int calcularTurno(const char* dni) {
    char ultimoDigito = dni[strlen(dni) - 1]; 
    int digito = ultimoDigito - '0'; 

    if (digito == 0) {
        return 10;
    }
    return digito;
}

void asignarTurnosAutomaticamente(const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "rb+");

    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo binario." << endl;
        return;
    }

    Alumno alumno;

    while (fread(&alumno, sizeof(Alumno), 1, archivo) == 1) {
        alumno.turno = calcularTurno(alumno.dni);

        fseek(archivo, -sizeof(Alumno), SEEK_CUR);
        fwrite(&alumno, sizeof(Alumno), 1, archivo);
        fflush(archivo);
    }

    fclose(archivo);
    cout << "Asignación de turnos completada." << endl;
}

int main() {
    setlocale(LC_ALL, ""); 
    
    const char* nombreArchivoTexto = "alu.txt";
    const char* nombreArchivoBinario = "alumnos.dat";
	
    return 0;
}
