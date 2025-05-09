using namespace std;
#include <iostream>

int factorial(int);

int main() {

    int n, Resultado;
    cout << "Ingrese el numero real ";
    cin >> n;
    Resultado = factorial(n);
    cout << "El resultado del numero al cubo es : " << Resultado;

   return 0;

}

int factorial(int a) {
    int c = 1;
    for (int i = 1; i <= a; i++) {
        c *= i;
    }
return c;
}