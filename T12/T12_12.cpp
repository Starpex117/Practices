/*
Se tienen 3 arreglos X, Y y Z de 10 elementos cada uno. Guardar en Z la suma de los 
elementos correspondientes de los arreglos X y Y. 
*/
#include <iostream>
using namespace std;
int main() {
int X[10];
int Y[10];
int Z[10];
for(int i = 0; i < 10; i++) {
	X[i] = rand() % 21;
	Y[i] = rand() % 21;
	Z[i] = X[i] + Y[i];
    cout << X[i] << "\n";
    cout << Y[i] << "\n";
	cout << Z[i] << " ";
}

}