/* Un restaurante requiere un programa para calcular y escribir el valor a pagar por un 
pedido dado el tipo de menú, así: 
Tipo de Menú       
Valor Unitario 
A    
B    
C    
  $9.500 
  $12.500 
  $16.000
 El usuario debe selección el tipo de menú, la cantidad a solicitar e indicar si requiere la 
entrega a domicilio o no (S/N). Si el pedido es a domicilio se debe pagar por el empaque 
$800 por cada almuerzo y un recargo fijo de $3.500. Utilice la estructura switch en la 
solución.  */

using namespace std;
#include <iostream>

int main() {
    char tipoMenu, entrega;
    int cantidad, valorUnitario, valorTotal, empaque, recargo;
    cout << "Digite el tipo de menu (A, B, C): ";
    cin >> tipoMenu;
    cout << "Digite la cantidad de almuerzos: ";
    cin >> cantidad;
    cout << "Desea entrega a domicilio (S/N): ";
    cin >> entrega;
    switch (tipoMenu) {
        case 'A':
            valorUnitario = 9500;
            break;
        case 'B':
            valorUnitario = 12500;
            break;
        case 'C':
            valorUnitario = 16000;
            break;
        default:
            cout << "Tipo de menu no valido" << endl;
            return 0;
    }
    valorTotal = cantidad * valorUnitario;
    if (entrega == 'S') {
        empaque = 800 * cantidad;
        recargo = 3500;
        valorTotal += empaque + recargo;
    }
    cout << "El valor total a pagar es: " << valorTotal << endl;
    return 0;
}
