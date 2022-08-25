#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Atleta{
	char nome[20];
	int idade, posicao;
	float altura;
};

int main( ) {
	Atleta p1;
	
	p1.nome = "Ester";
	p1.posicao = 3;
	p1.altura = 1.52;
	p1.idade = 18;

	
	strcpy(p1.nome, p1.posicao, p1.altura, p1.idade)
	
	cout << p1.nome <<endl;
	cout << p1.posicao <<endl;
	cout << p1.altura <<endl;
	cout << p1.idade <<endl;
	
	return 0;
}
