#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;

// Crie um programa que fa�a o calculo da �rea, perimetro do quadrado, usando fun��o. Ter� duas fun��es.Os lados dos quadrados s�o 4 e 5.


// cabe�alhos
int area(int,int);
int perimetro(int,int);


//fu��o �rea
int area(int a, int b){
	a= 4;
	b = 5;
	int area = a*b;
	return area;
}

// fun��o perimetro
int perimetro(int a, int b){
	a = 4;
	b = 5;
	int perimetro = 2*(a+b);
	return perimetro;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a,b,n,p;
	
	// chamada das fun��es
	n = area(a,b);
	p = perimetro(a,b);
	
	cout << "Area: " << n << endl;
	cout << "Perimetro: " << p << endl;
	
	return 0;
}

