#include <iostream>
using namespace std;
//==================== CLASE PADRE ====================
class cuadrado {
	int L;

public:
	// Constructores
	cuadrado();       
	cuadrado(int L);  

	// Métodos
	int Area();
	int Perimetro();

	// Destructor
	~cuadrado();
};
//==================== CLASE HIJA =====================
class prisma : 
public cuadrado {
	int h;  // altura del prisma

public:
	// Constructores
	prisma();
	prisma(int L, int h);

	// Métodos
	int Area();     // Área total del prisma
	int Volumen();  // Volumen

	// Destructor
	~prisma();
};
//==================== MAIN ===========================
int main() {
	cuadrado obj1;         // usa constructor por defecto
	cuadrado obj2(5);      // usa constructor parametrizado
	prisma obj3(4, 10);    // prisma base=4 y altura=10

    cout << "\n--- Resultados ---\n";
	cout << "Area cuadrado 1: " << obj1.Area()
	     << ", Perimetro: " << obj1.Perimetro() << endl;

	cout << "Area Cuadrado 2: " << obj2.Area()
	     << ", Perimetro: " << obj2.Perimetro() << endl;

	cout << " Area Total prisma: " << obj3.Area()
	     << ", Volumen: " << obj3.Volumen() << endl;

	return 0;
}

//================= DEFINICIONES =======================

//-------- CUADRADO --------
cuadrado::cuadrado() {
	L = 10;
	cout << "Constructor por defecto de cuadrado" << endl;
}

cuadrado::cuadrado(int L) {
	this->L = L;
	cout << "Constructor parametrizado de cuadrado" << endl;
}

int cuadrado::Area() {
	return L * L;
}

int cuadrado::Perimetro() {
	return L * 4;
}

cuadrado::~cuadrado() {
	cout << "Destructor de cuadrado" << endl;
}

//-------- PRISMA (HIJA) --------
prisma::prisma() : cuadrado() {
	h = 5;
	cout << "Constructor por defecto de prisma" << endl;
}

prisma::prisma(int L, int h) : cuadrado(L) {
	this->h = h;
	cout << "Constructor parametrizado de prisma" << endl;
}

int prisma::Area() {
	// Área total = 2 * área base + perímetro base * altura
	return 2 * cuadrado::Area() + cuadrado::Perimetro() * h;
}

int prisma::Volumen() {
	return cuadrado::Area() * h;
}

prisma::~prisma() {
	cout << "Destructor de prisma" << endl;
}
