using namespace std;
#include <iostream>
#include <math.h>
int main() {
    int Tipo_planta;
    int Tipo_Abono;
    int Crecimiento;
    
    int f,k;
    int Plantas[4][4];
    srand(time(0));
    for(f = 0; f < 4; f++){
        for(k = 0; k < 4; k++){
            Plantas[f][k] = rand() % 100 + 1;
        } 
    } 
cout << "\t Tipo de planta" << " \n\t Musgo" << " \n\t Angiosperma" << "\t Helechos" << "\t Giminospermas" << endl;
for(f = 0; f < 4; f++) {
    cout << "Abono " << f + 1;
    for(k = 0; k < 4; k++){
        cout << "\t" << Plantas[f][k] << endl;    
    }
cout << endl;
}




    return 0;
}