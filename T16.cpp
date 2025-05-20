using namespace std;
#include <iostream>
int SalarioBasico(float, float);
int Subsidio(int);
int Bonificacion(char);

int main() {
int Numero_Horas;
int Numero_Hijos;
int Menu;
int Resultado;
float Resultado_2;
    do
{ cout << "Que opcion desea" << endl;
    cout << "\t 1. Salario Basico" << "\t Subsidio familiar" << "\t 3. Bonificacion" << "\t 4. Salir" << endl;
    cin >> Menu;
    switch(Menu) {
    case 1:
        cout << "Cuantas horas de trabajo tiene usted " << endl;
        cin >> Numero_Horas;

        break;
    case 2:
    cout << "Cuantos hijos tiene " << endl;
    cin >> Numero_Hijos;
    Resultado = Subsidio(Numero_Hijos);
    cout << "Su subsidio es de " << Resultado;
        break;
    case 3:
    cout << "Cual es su tipo de contrato " << endl;

    }
} while (condition);



    return 0;
}

/*
#include <iostream>
#include <cctype> // Para toupper
using namespace std;

// Prototipos de funciones
float SalarioBasico(int horas, float valorHora);
int SubsidioFamiliar(int numHijos);
int Bonificacion(char tipoContrato);

int main() {
    int opcion;

    do {
        cout << "\n===== MENÚ NÓMINA =====" << endl;
        cout << "1. Salario Básico" << endl;
        cout << "2. Subsidio Familiar" << endl;
        cout << "3. Bonificación" << endl;
        cout << "4. Salir" << endl;
        cout << "Digite opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int horas;
                float valorHora;
                cout << "Ingrese el número de horas trabajadas: ";
                cin >> horas;
                cout << "Ingrese el valor de la hora: ";
                cin >> valorHora;
                float salario = SalarioBasico(horas, valorHora);
                cout << "Salario básico: $" << salario << endl;
                break;
            }

            case 2: {
                int hijos;
                cout << "Ingrese el número de hijos: ";
                cin >> hijos;
                int subsidio = SubsidioFamiliar(hijos);
                cout << "Subsidio familiar: $" << subsidio << endl;
                break;
            }

            case 3: {
                char tipo;
                cout << "Ingrese tipo de contrato (I = Indefinido, D = Definido, P = Provisional): ";
                cin >> tipo;
                tipo = toupper(tipo);
                int bono = Bonificacion(tipo);
                if (bono == 0) {
                    cout << "Tipo de contrato no válido." << endl;
                } else {
                    cout << "Bonificación: $" << bono << endl;
                }
                break;
            }

            case 4:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);

    return 0;
}

// Función 1: Calcular salario básico
float SalarioBasico(int horas, float valorHora) {
    float salario;
    if (horas <= 180) {
        salario = horas * valorHora;
    } else {
        int horasExtra = horas - 180;
        salario = (180 * valorHora) + (horasExtra * valorHora * 1.5);
    }
    return salario;
}

// Función 2: Calcular subsidio familiar
int SubsidioFamiliar(int numHijos) {
    if (numHijos < 3)
        return numHijos * 30000;
    else
        return numHijos * 20000;
}

// Función 3: Calcular bonificación
int Bonificacion(char tipoContrato) {
    switch (tipoContrato) {
        case 'I': return 200000;
        case 'D': return 150000;
        case 'P': return 100000;
        default:  return 0; // tipo inválido
    }
}

*/