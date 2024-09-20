#include <iostream>

using namespace std;

int matrix(int fil, int col){
	int indexf = 0, indexc = 0;
	int matrix[fil][col];
	for(indexf ;indexf < fil; indexf++){
		cout << "Fila numero: " << indexf << endl;
		for(indexc; indexc < col;indexc++){
			cout << "Columna " << indexc <<":";
			cin >> matrix[indexf][indexc];
			cout << "\n"; 
		} 
	}
	return matrix[fil][col];
}
int main(){
	
	int Matrix[4][5] = matrix(int 4, int 5);
	cout << Matrix;
	return 0;
}
