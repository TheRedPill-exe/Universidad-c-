#include <iostream>
#include <string>
using namespace std;


int main() {
	float n1,n2,n3;
	string name;
	
	cout << "Digite el nombre del estudiante: ";
    getline(cin, name);
    
    cout << "Digite la nota 1: ";
    cin >> n1;
    cout << "Digite la nota 2: ";
    cin >> n2;
	cout << "Digite la nota 3: ";
	cin >> n3;
	cout << "El promedio de " << name << " es: " << (n1+n2+n3)/3.0;
}
