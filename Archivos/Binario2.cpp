/*Programa C++ que crea un fichero binario con los datos de los 
empleados de una empresa. 
El nombre del fichero a crear es empleados.dat. 
Los datos de los empleados se leen por teclado. 
La lectura de datos de empleados acaba cuando se pulsa la tecla F6 en el nombre del empleado.
Los datos de cada empleado se escribirán en el fichero utilizando la siguiente estructura:
struct Templeado
{
           char nombre[20];
           char apellidos[20];
           char departamento[20];
           float sueldo;
};*/
#include <iostream>
#include <fstream>
#include <limits>
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
    ofstream f;
    ifstream in;
    char resp;
    int conta = 0;
    //se abre el fichero para añadir datos al final
    f.open("empleados.dat", ios::out|ios::app|ios::binary);
    if (f.fail())
    {
           cout << "Error al crear el fichero empleados.dat" << endl;
           system("pause");
           exit(1);
    }


 

    // Entrada de datos
    cout << "Entrada de datos. F6 para finalizar\n\n";
    cout << "Nombre: ";
    cin.getline(registro.nombre, 20);
    while (!cin.eof())
    {
        cout << "Apellidos: ";
        cin.getline(registro.apellidos, 20);
        cout << "Departamento: ";
        cin.getline(registro.departamento, 20);
        cout << "Sueldo: ";
        cin >> registro.sueldo;
        // Se escribe la estructura en el fichero
        f.write((char *)&registro,tamanyo);
        cin.ignore(numeric_limits<int>::max(),'\n');
        cout << "Nombre: ";
        cin.getline(registro.nombre, 20);
    }
    cin.clear();
    f.close();
    do
    {
        cout << "Mostrar empleados(S/N)? ";
        cin.get(resp);
        cin.ignore(numeric_limits<int>::max(),'\n');
    } while (toupper(resp) != 'S' && toupper(resp) != 'N');
    // Listado de datos
    if (toupper(resp) == 'S')
    {
        in.open("empleados.dat", ios::binary);
        if(in.fail())
        {
           cout << "Error al abrir el fichero empleados.dat" << endl;
           system("pause");
           exit(1);
        }
        // Leemos el primer registro
        in.read((char *) &registro, tamanyo);
        while(!in.eof())
        {
            cout << "\nEMPLEADO: " << ++conta << endl;
            cout << "Nombre: " << registro.nombre << endl;
            cout << "Apellidos: " << registro.apellidos << endl;
            cout << "Departamento: " << registro.departamento << endl;
            cout << "Sueldo: " << registro.sueldo << endl;
            // Leemos el siguiente registro
            in.read((char *) &registro, tamanyo);
        }
        in.close(); // Cerramos el fichero
        system("pause");
    }
}