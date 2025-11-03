#include <iostream>

using namespace std;

void Nuevo_salario(float);
int main() {
    float Salario;
    cout << "Digite su salario " ;
    cin >> Salario;

    Nuevo_salario(Salario);
    return 0;
}
void Nuevo_salario(float Salario){
    cout << "Su nuevo salario es " << 1.05 * Salario;
}
