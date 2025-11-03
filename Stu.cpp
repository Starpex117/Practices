#include <iostream>

void apreciativa(float, int);

using namespace std;

int main() {
    float N_definitiva;
    int V_fallas;

    cout << "Cuantas veces ha fallado " << endl;
    cin >> V_fallas;
    cout << "Cual es su nota definitiva " << endl;
    cin >> N_definitiva;

    apreciativa(N_definitiva, V_fallas);

    return 0;
}
void apreciativa(float N_definitiva, int V_fallas){
    if (V_fallas > 1) {
        cout << "Usted ha fallado " << V_fallas << "veces" << endl;
        cout << "Su nota ahora es " << N_definitiva - 0,5;
    }
}