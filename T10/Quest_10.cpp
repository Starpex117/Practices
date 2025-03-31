using namespace std;
#include <iostream>
#include <stdexcept>
int main(){
int Estatura_m, n_estudiantes,Contador_n = 0, Contador_1 = 0, Contador_2 = 0, Contador_3 = 0, Contador_4 = 0;
do {
    cout << "Ingrese la cantidad de estudiantes" << endl;
    cin >> n_estudiantes;
    if (n_estudiantes < Contador_n)
    break;
    cout << "Ingrese su estatura en metros" << endl;
    cin >> Estatura_m;
    if (Estatura_m >= 0.90 && Estatura_m <= 1.60) 
    Contador_1++ && Contador_n++;
    if (Estatura_m > 1.60 && Estatura_m < 1.70) 
    Contador_2++ && Contador_n++;
    if (Estatura_m >= 1.70 && Estatura_m <= 1.80) 
    Contador_3++ && Contador_n++;
    if (Estatura_m > 1.80 && Estatura_m <= 2.10) 
    Contador_4++ && Contador_n++;
  /*  if (Estatura_m < 0.89 || Estatura_m > 2.11) 
    throw invalid_argument("La estatura no puede ser menor a 0.90 m y mayor a 2.10 m");
    */
    cout << "La cantidad de personas que tienen estatura entre 0.90 y 1.60 es: " << Contador_1 << endl;
    cout << "La cantidad de personas que tienen estatura entre 1.60 y 1.70 es: " << Contador_2 << endl;
    cout << "La cantidad de personas que tienen estatura entre 1.70 y 1.80 es: " << Contador_3 << endl;
    cout << "La cantidad de personas que tienen estatura entre 1.80 y 2.10 es: " << Contador_4 << endl;
    }while (true);
return 0;
}