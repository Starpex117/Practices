/* Realizar un programa en C++, que permita mostrar la siguiente figura utilizando 
instrucciones repetitivas anidadas: 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
*/
#include <iostream>
using namespace std;
int main () {
int columnas = 5;
int filas = 5;
char simb = '*';	

for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        cout << simb << " ";
    }
    cout << endl;
}
 



    return 0;
}
 