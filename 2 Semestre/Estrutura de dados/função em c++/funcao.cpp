#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;

// Crie um programa que faça o calculo da área, perimetro do quadrado, usando função. Terá duas funções.Os lados dos quadrados são 4 e 5.


// cabeçalhos
int area(int,int);
int perimetro(int,int);


//fução área
int area(int a, int b){
	a= 4;
	b = 5;
	int area = a*b;
	return area;
}

// função perimetro
int perimetro(int a, int b){
	a = 4;
	b = 5;
	int perimetro = 2*(a+b);
	return perimetro;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a,b,n,p;
	
	// chamada das funções
	n = area(a,b);
	p = perimetro(a,b);
	
	cout << "Area: " << n << endl;
	cout << "Perimetro: " << p << endl;
	
	return 0;
}

