/* Utilizando la instrucción switch, elaborar un programa en C++ para una tienda que 
embala regalos en varios tipos de empaques según el siguiente menú: 
Empaques 1. Esferico 2. Cónico 3. Cúbico

El programa debe solicitar las dimensiones del empaque para calcular su volumen y así 
calcular el valor a pagar, teniendo en cuenta que el valor por centímetro del empaque 
esférico es de $15, del empaque cónico es de $10 y del empaque cúbico es de $5. */
#include <iostream>
using namespace std;
int main() {
    int Tipo_empaque;
    int valor_esfera = 15, valor_conico = 10, valor_cubico =5;
    int Centimetros_empaque;
    cout<<"Que tipo de pedido desea"<<"\n\t1. Esferico"<<"\n\t2. Conico"<<"\n\t3. Cubico"<<"\n\t4. finalizar"<<endl;
     
   cin>>Tipo_empaque;
    
    switch (Tipo_empaque) {
    case 1:
        cout << "Cuantos centímetros tiene su empaque" <<endl;
        cin >> Centimetros_empaque;
        cout << "El valor a pagar es: " << Centimetros_empaque * valor_esfera << endl;
    break; 
    case 2:
        cout << "Cuantos centímetros tiene su empaque" <<endl;
        cin >> Centimetros_empaque;
        cout << "El valor a pagar es: " << Centimetros_empaque * valor_conico << endl;
    break; 
    case 3:
        cout << "Cuantos centímetros tiene su empaque" <<endl;
        cin >> Centimetros_empaque;
        cout << "El valor a pagar es: " << Centimetros_empaque * valor_cubico << endl;
    break; 
    }
   



    return 0;
}