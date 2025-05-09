using namespace std;
#include <iostream>
#include <math.h>
float Cubo(int);

int main () {
    int N, Resultado;
cout << "Digite un numero ";
cin >> N;
Resultado = Cubo(N);
cout << "El resultado es :" << Resultado;
 return 0;   
}
float Cubo(int a) {
    int S;
    S = pow(a,3);
    return S;
}