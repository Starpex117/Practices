/*
Un fondo de pensiones requiere un programa para validar los requisitos que debe cumplir 
un afiliado para el reconocimiento del derecho a pensión de vejez dado el sexo (F/M), edad 
y numero de semanas cotizadas y sabiendo que: - Hombre, 62 años y 1300 semanas cotizadas. “Derecho a pensión de vejez” - Mujer, 57 años y 1300 semana cotizadas. “Derecho a pensión de vejez” - En caso contrario aun no cumple con todos los requisitos exigidos para el 
reconocimiento a del derecho a la pensión de vejez. 
El programa a través de un mensaje debe permitir repetir el proceso. 

*/
#include <iostream>
using namespace std;
int main() {
    int edad, Semanas_cotizadas;
    char Sexo;
    char continuar = 'S';
    while(continuar = 'S') {
        cout << "Cual es su sexo F o M, " << "Cual es su edad, " << "Cuantas semanas lleva en el registro" << endl;
        cin >> Sexo >> edad >> Semanas_cotizadas;
        if ((Sexo = 'F') && edad >= 62 && Semanas_cotizadas >= 1300) {
            cout << "Aplica para la pension por vejez" << endl;
        }
        else if ((Sexo = 'M') && edad >= 57 && Semanas_cotizadas >= 1300){
            cout << "Aplica para la pension por vejez" <<endl;
        }
        else {
            cout << "No aplica para la pension";
        }
        cout << "Dese continuar registrando usuarios >(S/N)?" <<endl;
        cin >> continuar;
    }
    return 0;
}