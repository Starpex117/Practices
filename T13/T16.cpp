#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    float IPS[6][4];             // Matriz de calificaciones: 6 pacientes x 4 doctores
    float sumaDoctor[4] = {0};   // Suma de calificaciones por doctor
    float promedioDoctor[4];     // Promedio de cada doctor

    srand(time(NULL));  // Inicializar generador de números aleatorios

    // Llenar la matriz con valores aleatorios entre 10 y 49
    for (int f = 0; f < 6; f++) {
        for (int k = 0; k < 4; k++) {
            IPS[f][k] = rand() % 39 + 10;  // Valores entre 10 y 59
        }
    }
    

    // Mostrar la tabla de calificaciones
    cout << "\n\tNotas de los doctores" << endl;
    cout << " \tDoctor 1\tDoctor 2\tDoctor 3\tDoctor 4" << endl;
    for (int f = 0; f < 6; f++) {
        cout << "Paciente " << f + 1;
        for (int k = 0; k < 4; k++) {
            cout << "\t" << IPS[f][k];
        }
        cout << endl;
    }

    // Calcular suma de cada doctor (por columna)
    for (int k = 0; k < 4; k++) {
        for (int f = 0; f < 6; f++) {
            sumaDoctor[k] += IPS[f][k];
        }
        promedioDoctor[k] = sumaDoctor[k] / 6;  // Promedio = suma / cantidad de pacientes
    }

    // Mostrar promedios de cada doctor
    cout << "\nPromedios de cada doctor:" << endl;
    for (int k = 0; k < 4; k++) {
        cout << "Doctor " << k + 1 << ": " << promedioDoctor[k] << endl;
    }

    // Buscar el doctor con el mayor y menor promedio
    float mayor = promedioDoctor[0];
    float menor = promedioDoctor[0];
    int doctorMayor = 0;
    int doctorMenor = 0;

    for (int k = 1; k < 4; k++) {
        if (promedioDoctor[k] > mayor) {
            mayor = promedioDoctor[k];
            doctorMayor = k;
        }
        if (promedioDoctor[k] < menor) {
            menor = promedioDoctor[k];
            doctorMenor = k;
        }
    }

    // Mostrar resultados finales
    cout << "\nDoctor con mayor promedio: Doctor " << doctorMayor + 1 << " (" << mayor << ")" << endl;
    cout << "Doctor con menor promedio: Doctor " << doctorMenor + 1 << " (" << menor << ")" << endl;

    return 0;
}
