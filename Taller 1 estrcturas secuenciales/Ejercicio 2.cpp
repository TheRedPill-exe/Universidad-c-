#include <iostream>
#include <cmath> // Necesario para  la función pow
using namespace std;

int main() {
    float r,area;
    double pi = 3.141592653589793;
    cout << "Digite un número para el radio: ";
    cin >> r;
    area = pow((pi * r),2);
	
    cout << "Área: " << area << endl;
    

    return 0;
}

