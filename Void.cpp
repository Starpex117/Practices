#include <iostream>
using namespace std;

// Función tipo void que ordena e imprime los 3 números
void ordenarAscendente(int, int, int);

int main() {
    int num1, num2, num3;

    // Solicitar los 3 números al usuario
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    // Llamar a la función para ordenar e imprimir
    ordenarAscendente(num1, num2, num3);

    return 0;
}
// Función tipo void que ordena e imprime los 3 números
void ordenarAscendente(int a, int b, int c) {
    int temp;

    // Ordenar los números usando comparaciones simples
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    // Imprimir los números ya ordenados
    cout << "Números en orden ascendente: " << a << ", " << b << ", " << c << endl;
}