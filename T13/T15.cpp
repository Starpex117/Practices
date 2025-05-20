#include <iostream>
#include <time.h>
using namespace std;
int main() {
srand(time(0));
int Total;
int Elecciones[7][4];
int f;
int k;
int VotosCandidato[4] = {0};
float porcentaje[4];
int VotosCurso = 0;
for(f = 0; f < 7; f++) {
    for(k = 0; k < 4; k++)
    Elecciones[f][k] = rand() % 100 + 1;
}
 cout << "\tCurso \t Candidato 1 \t Candidato 2 \t Candidato 3 \t Candidato 4 " <<endl;
 for(f = 0; f < 7; f++) {
    cout << "Curso " << f + 1;
    for(k = 0; k < 4; k++) {
        cout << "\t\t" << Elecciones[f][k];
    }
 cout << endl;
}
for(k = 0; k < 4; k++) {
    for(f = 0; f < 7; f++) {
        VotosCandidato[k] += Elecciones[f][k];
    }
}
    cout << " La suma de votos por curso es " << endl;
for(f = 0; f < 7; f++) {
    for(k = 0; k < 4; k++) {
        VotosCurso += Elecciones[f][k];
    }
    cout << " Curso " << f + 1 << " : " << VotosCurso;
}
cout << endl;
cout << "La suma de los votos por candidato es " << endl;
for(k = 0; k < 4; k++) {
    cout << " Candidato " << k + 1  << " : "<< VotosCandidato[k];
}
cout << endl;
// Sum all votes for candidates
Total = VotosCurso; 
for(k = 0; k < 4; k++) {
    Total += VotosCandidato[k];
}
cout << "Total: " << Total;


    return 0;
}

