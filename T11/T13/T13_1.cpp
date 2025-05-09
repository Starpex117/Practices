#include <iostream>
#include <iomanip> // Para controlar la cantidad de decimales
using namespace std;

int main() {
    const int columnas = 4;
    const int filas = 3;
    int M[filas][columnas] = {
        {4, 8, 12, 16},
        {2, 4, 6, 8},
        {10, 20, 30, 40}
    };
    
    cout << "Matriz original:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << setw(5) << M[i][j];
        }
        cout << endl;
    }

    // Recordemos: posición (2,2) => segunda fila, segunda columna
    int divisor = M[1][1];

    if (divisor == 0) {
        cout << "\nError: El elemento en la posición (2,2) es 0. No se puede dividir.\n";
    } else {
        // Matriz para almacenar los resultados (puede ser de tipo float o double)
        double resultado[filas][columnas];

        // Realizar la división
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado[i][j] = static_cast<double>(M[i][j]) / divisor;
            }
        }

        // Mostrar la matriz resultante
        cout << "\nMatriz resultante (elementos divididos por M[2,2]):\n";
        cout << fixed << setprecision(2); // Mostrar 2 decimales
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << setw(8) << resultado[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
