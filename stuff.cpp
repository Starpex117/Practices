#include <iostream>
#include <time.h>
using namespace std;

void Costos(float, float);
int main() {
    float Valor_obra;
    float Sobrecosto;
    float Obra;

    cout << "Ingrese el valor inicial de la obra y el valor del sobrecosto ";
    cin >> Valor_obra;
    cin >> Sobrecosto;

    
    Costos(Valor_obra, Sobrecosto);
    
    return 0;
}

void Costos(float Valor_obra, float Sobrecosto) {
    cout << "El costo inicial fue de " << Valor_obra << endl;
    cout << "El valor con sobrecosto es " << Valor_obra + Sobrecosto;
}