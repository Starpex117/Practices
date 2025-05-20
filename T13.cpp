using namespace std;
#include <iostream>
#include <math.h>
int Par_Impar(int);
int Calculo(int);

int main() {
int opcion;
int N;
int Resultado;
    do
{ cout << "\t Que opcion quiere " << endl;
    cout << "\t 1. Par o impar" << "\t 2. Calculo" << "\t 3. Salir" << endl;
    cin >> opcion;
    switch(opcion) {
    case 1:
        cout << "Ingrese un numero ";
        cin >> N;
        Resultado = Par_Impar(N);
        cout << "El resultado es " << Resultado << ", Donde 2 es que es un numero par, y 1 es impar ";
        break;
    case 2:
    cout << "Ingrese un numero ";
    cin >> N;
    Resultado = Calculo(N);
    cout << "El resultado es " << Resultado;
        break;
    case 3:
    cout << "Adios";
        break;
        default:
    cout << "Opcion no valida";
    } 
    
} while (opcion != 3);
    return 0;
}

int Par_Impar(int a) {
    if (a % 2 == 0) 
    return 2;
        else 
    return 1;
}

int Calculo(int a) {
    if (a % 2 == 0 && a > 0) 
        return pow(a,2);
        else 
        return pow(a,3);
}