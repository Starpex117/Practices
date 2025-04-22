/*
Llenar un vector A con 10 enteros consecutivos, el valor del entero para la primera 
posición del arreglo entra por teclado.
*/
#include <iostream>
using namespace std; 
int main() {
    int A[10];
    int PrimerValor;
    cout << "Ingrese el primer valor: ";
    cin >> PrimerValor;
    A[0] = PrimerValor;
    for (int i = 1; i < 10; i++) {
        A[i] = A[i - 1] + 1;
    }
    cout << "Los valores del vector son: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
return 0;
}
