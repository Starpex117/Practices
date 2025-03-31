#include <iostream>
using namespace std;
int main() {
    int n;
    // Contadores para los rangos
    int rango1 = 0, rango2 = 0, rango3 = 0, rango4 = 0;
    // Pedir la cantidad de estudiantes
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    // Leer estaturas y contar según el rango
    for (int i = 0; i < n; i++) {
        double estatura;
        cout << "Ingrese la estatura del estudiante " << i + 1 << " (en metros): ";
        cin >> estatura;
        // Validar que esté en el rango permitido
        if (estatura < 0.90 || estatura > 2.10) {
            cout << "Error: La estatura debe estar entre 0.90 y 2.10 metros." << endl;
            i--;  // Restar 1 al contador para repetir la entrada
            continue;
        }
        // Clasificar según el rango
        if (estatura >= 0.90 && estatura <= 1.60) {
            rango1++;
        } else if (estatura > 1.60 && estatura < 1.70) {
            rango2++;
        } else if (estatura >= 1.70 && estatura < 1.80) {
            rango3++;
        } else if (estatura > 1.80 && estatura <= 2.10) {
            rango4++;
        }
    }
    // Mostrar los resultados
    cout << "\nResultados:\n";
    cout << "Estudiantes entre 0.90 m y 1.60 m: " << rango1 << endl;
    cout << "Estudiantes entre 1.60 m y 1.70 m: " << rango2 << endl;
    cout << "Estudiantes entre 1.70 m y 1.80 m: " << rango3 << endl;
    cout << "Estudiantes entre 1.80 m y 2.10 m: " << rango4 << endl;

    return 0;
}
