/*
22. La empresa “MOVISTAR” desea calcular un ajuste de precios para N celulares, el precio 
y la marca del celular se ingresan como variables de entrada. 
 Si la marca = ´S´ que representa “SAMSUNG” el valor del CELULAR sube 10%. 
 Si la marca = ´M´ que representa “MOTOROLA” el valor del CELULAR baja 2%. 
 Si la marca = ´H´ que representa “HUAWEI” el valor del CELULAR sube 5%. 
 Para la marca = “OTRO” el valor del CELULAR queda igual. 
Se debe imprimir un reporte donde se detalle MARCA Y NUEVO VALOR. 
¿Cuántos celulares se procesaron marca MOTOROLA? 
Calcular el VALOR total del inventario después de ajustes.

*/
#include <iostream>
using namespace std;
int main() {
    int n; 
    float precio;
    char marca;
    int contadorMotorola = 0; // Contador para celulares Motorola
    int totalInventario = 0; // Variable para el valor total del inventario
    cout << "Ingrese la cantidad de celulares a leer" << endl;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cout << "Que marca de celular tiene, S para Samsung, M para Motorola y H para Huawei, ademas de eso, " << "Cual es el precio de su celular" << endl;
        cin >> marca >> precio;
        switch(marca) {
            case 'S':
            precio *= 1.10;
            cout << "Marca: SAMSUNG, Nuevo precio: " << precio << endl;
            break;
            case 'M':
            precio /= 0.02;
            cout << "Marca: MOTOROLA, Nuevo precio: " << precio << endl;
            contadorMotorola++; // Incrementar contador de Motorola
            break;
            case 'H':
            precio *= 1.05;
            cout << "Marca: HUAWEI, Nuevo precio: " << precio << endl;
            break;
            default:
            cout << "Marca no valida" << endl;
        }
    } 
    cout << "Cantidad de celulares MOTOROLA procesados: " << contadorMotorola << endl;
    cout << "Valor total del inventario: " << totalInventario << endl;
    return 0;
}