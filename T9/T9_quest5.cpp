using namespace std;
#include <iostream>
int main() {

int tipoVehiculo;
int Valor_Tipo1 = 9700, Valor_Tipo2 = 15200, Valor_Tipo3 = 10400, Valor_Tipo4 = 21200, Valor_Tipo5 = 31100, Valor_Tipo6 = 39700;
cout << "Que tio de vehiculo es el suyo" <<"\n\t1."<<"\n\t2."<<"\n\t3."<<"\n\t4."<<"\n\t5."<<"\n\t6."<< endl;
cin >> tipoVehiculo;
switch (tipoVehiculo) {
case 1:
    cout << "El valor a pagar es: " << Valor_Tipo1 <<" Ya que su categoria de vehiculo es, campero,automovil o camioneta"<< endl;
break;
case 2:
    cout << "El valor a pagar es: " << Valor_Tipo2 <<" Ya que su categoria de vehiculo es, microbus o buseta"<< endl;  
break; 
case 3:
    cout << "El valor a pagar es: " << Valor_Tipo3 <<" Ya que su categoria de vehiculo es, camion "<< endl;
break; 
case 4:
    cout << "El valor a pagar es: " << Valor_Tipo4 <<" Ya que su categoria de vehiculo es, camion de dos ejes"<< endl;
break; 
case 5:
    cout << "El valor a pagar es: " << Valor_Tipo5 <<" Ya que su categoria de vehiculo es, camion de tres y cuatro"<< endl;
break; 
case 6:
    cout << "El valor a pagar es: " << Valor_Tipo6 <<" Ya que su categoria de vehiculo es, camion de mas de cinco ejes"<< endl;
break;
default:
    cout << "Tipo de vehiculo no valido" << endl;
    return 0;


}

    return 0;
}