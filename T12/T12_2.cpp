/*
lenar un vector V de 10 elementos con los cuadrados de los 10 elementos del vector A, 
los valores del vector A se ingresan en la declaración del arreglo. 
*/
#include <iostream>
#include <math.h>
using namespace std;
int main () {
int A[10] = {1,2,3,4,5,6,7,8,9,10};
int V[10];
for(int i = 0; i < 10; i++) {
    V[i] = pow(A[i], 2); // Calculate the square of A[i] and store it in V[i]
    cout << V[i] << " "; // Print the squared value
}




return 0;    
}