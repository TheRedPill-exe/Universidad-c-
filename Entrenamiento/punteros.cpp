/* Presented to CAOS
   Developed by Juan Pablo Marín 
   Date: 02-10-2024
   Editor version: 5.11 (Dev-cpp)
*/

#include <iostream>
#include <cstring> 
using namespace std;

// Function that sorts an array using the Bubble Sort algorithm.
void bubbleSort(int* vec, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(vec + j) > *(vec + j + 1)) {
                // Swap elements if they are in the wrong order.
                int temp = *(vec + j);
                *(vec + j) = *(vec + j + 1);
                *(vec + j + 1) = temp;
            }
        }
    }
}

// 1. Implement a function that swaps the content of two integer variables using pointers.
void change(int* num1, int* num2) {
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

// 2. A program that allows loading a vector of 5 integers.
void chargeVec(int* vec, int size) {
    for(int i = 0; i < size; i++) {
        cout << "Int number " << i + 1 << ": ";
        cin >> *(vec + i);
    }
}

// 8. Ask the user for N numbers, store them in a dynamic array, sort them in ascending order, and display them.
void dinamicVec(int* vec, int size) {
    for(int i = 0; i < size; i++) {
        cout << "Int number " << i + 1 << ": ";
        cin >> *(vec + i);
    }
    bubbleSort(vec, size);  // Sort the array

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << *(vec + i) << " ";
    }
    cout << endl;

    delete[] vec;  // Free the dynamically allocated memory
}

// 2. Function that receives the vector and returns the largest and smallest element via pointers.
void mayorMenor(int* vec, int size, int* pmayor, int* pmenor) {
    *pmayor = vec[0];
    *pmenor = vec[0];
    for(int i = 1; i < size; i++) {
        *pmayor = *pmayor > vec[i] ? *pmayor : vec[i];
        *pmenor = *pmenor < vec[i] ? *pmenor : vec[i];
    }
}

// 3. Program that returns the position of a character in a string using pointers.
int searchChar(const char* word, char c) {
    int len = strlen(word);
    for(int i = 0; i < len; i++) {
        if(*(word + i) == c) {
            return i; 
        }
    }
    return -1; 
}

// 4. Function that receives a string and returns the count of each vowel and the total.
void contarVocales(const char* cadena, int* a, int* e, int* i, int* o, int* u, int* total_vocales) {
    *a = *e = *i = *o = *u = *total_vocales = 0;
    for(int j = 0; j < strlen(cadena); j++) {
        char c = tolower(cadena[j]);
        switch(c) {
            case 'a':
                (*a)++;
                break;
            case 'e':
                (*e)++;
                break;
            case 'i':
                (*i)++;
                break;
            case 'o':
                (*o)++;
                break;
            case 'u':
                (*u)++;
                break;
        }
    }
    *total_vocales = *a + *e + *i + *o + *u;
}

// 5. Determine if a number is prime using pointers and indicate the memory position.
void esPrimo(int* num, bool* state) {
    *state = (*num % 2 == 0 || *num % 3 == 0 || *num == 1) ? false : true;
    for(int i = 5; i * i <= *num; i += 2 ){
        if (*num % i == 0) {
            *state = false;
            break;
        }
    }
    cout << "The number is stored at memory position: " << num << endl;
}

// 6. Fill an array of 10 numbers and show how many and which ones are even.
void pairs(int* vec, int size) {
    int numPair = 0;
    for(int i = 0; i < size; i++) {
        if(*(vec + i) % 2 == 0) {
            numPair++;
            cout << "Even number: " << *(vec + i) << " at memory position: " << (vec + i) << endl;
        }
    }
    cout << "Total even numbers: " << numPair << endl;
}
int main() {
    setlocale(LC_ALL, "");

    // Change two integers
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    int *num1p = &num1, *num2p = &num2;
    cout << "Before change: " << num1 << " " << num2 << endl;
    change(num1p, num2p);
    cout << "After change: " << num1 << " " << num2 << endl;

    // Load a vector of 5 integers
    int vec[5];
    cout << "Loading vector of 5 integers:" << endl;
    chargeVec(vec, 5);

    // Find and display the highest and lowest value
    int mayor, menor;
    mayorMenor(vec, 5, &mayor, &menor);
    cout << "Highest value: " << mayor << endl;
    cout << "Lowest value: " << menor << endl;

    // Sort and display the array
    bubbleSort(vec, 5);
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Search for a character in a string
    char word[100];
    cout << "Enter a string: ";
    cin.ignore(); // Clear the input buffer
    cin.getline(word, 100);
    
    char character;
    cout << "Enter a character to search: ";
    cin >> character;

    int index = searchChar(word, character);
    if(index != -1) {
        cout << "Character '" << character << "' found at position: " << index << endl;
    } else {
        cout << "Character '" << character << "' not found in the string." << endl;
    }

    // Count vowels in a string
    const char* cadena = "Hola, cómo estás?";
    int a, e, i, o, u, total_vocales;
    contarVocales(cadena, &a, &e, &i, &o, &u, &total_vocales);

    cout << "Vowel count:" << endl;
    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;
    cout << "Total vowels: " << total_vocales << endl;

    // Check if a number is prime
    cout << "Enter a number to check if it's prime: ";
    int num;
    cin >> num;
    bool isPrime;
    esPrimo(&num, &isPrime);
    cout << "Is the number prime? " << (isPrime ? "Yes" : "No") << endl;

    // Check even numbers in an array
    int array[10];
    cout << "Enter 10 integers for the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Int number " << i + 1 << ": ";
        cin >> array[i];
    }
    
    cout << "Checking even numbers in the array:" << endl;
    pairs(array, 10);
    
	int* dinamicVecf = new int[5];
	cout << "Loading vector of 5 integers:" << endl;
	dinamicVec(dinamicVecf, 5);
	
    return 0;
}

