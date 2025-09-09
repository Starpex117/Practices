#include <iostream>
using namespace std;

// ---------------------- DECLARACIÓN ----------------------
struct Mesa {
    int patas;
    float altura;
    float peso;
};

// Prototipos de funciones
void ingresarMesas(Mesa mesas[], int &n);
void mostrarMesas(const Mesa mesas[], int n);

// ---------------------- MAIN (LLAMADO) -------------------
int main() {
    Mesa mesas[5];   // máximo de 5 mesas
    int cantidad = 0;

    ingresarMesas(mesas, cantidad);
    mostrarMesas(mesas, cantidad);

    return 0;
}

// ---------------------- DEFINICIÓN -----------------------

// Función para ingresar las mesas
void ingresarMesas(Mesa mesas[], int &n) {
    cout << "¿Cuántas mesas desea registrar? (máximo 5): ";
    cin >> n;

    if (n > 5) n = 5;   // limitar a 5

    for (int i = 0; i < n; i++) {
        cout << "\nMesa #" << i + 1 << endl;
        cout << "Número de patas: ";
        cin >> mesas[i].patas;
        cout << "Altura (cm): ";
        cin >> mesas[i].altura;
        cout << "Peso (kg): ";
        cin >> mesas[i].peso;
    }
}

// Función para mostrar las mesas
void mostrarMesas(const Mesa mesas[], int n) {
    cout << "\n--- Listado de Mesas Registradas ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Mesa #" << i + 1
             << " | Patas: " << mesas[i].patas
             << " | Altura: " << mesas[i].altura << " cm"
             << " | Peso: " << mesas[i].peso << " kg"
             << endl;
    }
}
