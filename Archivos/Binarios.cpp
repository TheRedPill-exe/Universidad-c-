/*En esta entrada vamos a leer el contenido de un archivo binario y vamos a crear un nuevo
 archivo binario donde escribiremos los registros del archivo original que cumplan una determinada
  condición.

Programa C++ que lee el archivo binario empleados.dat creado en una entrada anterior y crea un archivo
 binario sueldos2.dat que contendrá únicamente los empleados cuyo sueldo sea superior a 10000
Los datos de cada empleado se han escrito en el archivo utilizando la siguiente estructura:
struct Templeado
{
           char nombre[20];
           char apellidos[20];
           char departamento[20];
           float sueldo;
};
 se deben mostrar los datos iniciales y los que se pasan al nuevo archivo.

*/

#include <iostream>
#include <fstream>
using namespace std;
struct Templeado
{
    char nombre[20];
    char apellidos[20];
    char departamento[20];
    float sueldo;
};
int main()
{
    Templeado registro;
    int tamanyo = sizeof(Templeado); // Tamaño de un registro
    int conta = 0;
    ofstream out;
    ifstream in;
    out.open("sueldos2.dat", ios::binary);
    if(out.fail())
    {
       cout << "Error al crear el archivo sueldos2.dat" << endl;
       system("pause");
       exit(1);
    }
    in.open("empleados.dat", ios::binary);
    if(in.fail())
    {
       cout << "Error al abrir el archivo empleados.dat" << endl;
       system("pause");
       exit(1);
    }
    // Lectura del primer registro del archivo
    in.read((char *) &registro, tamanyo);
    while(!in.eof()) //mientras no se llegue al final del archivo
    {
         if(registro.sueldo>12000)
         {
            out.write((char *) &registro, tamanyo);
         }
         in.read((char *) &registro, tamanyo); //lectura del siguiente registro
    }
    in.clear();
    in.close();
    out.close();
    //Mostrar los registros del archivo sueldos2.dat
    in.open("sueldos2.dat", ios::binary);
    if(in.fail())
    {
       cout << "Error al abrir el archivo sueldos2.dat" << endl;
       system("pause");
       exit(1);
    }
    in.read((char *) &registro, tamanyo);
    while(!in.eof())
    {
            cout << "\nEMPLEADO: " << ++conta << endl;
            cout << "Nombre: " << registro.nombre << endl;
            cout << "Apellidos: " << registro.apellidos << endl;
            cout << "Departamento: " << registro.departamento << endl;
            cout << "Sueldo: " << registro.sueldo << endl;
            in.read((char *) &registro, tamanyo);
    }
    in.close();
    system("pause");
}