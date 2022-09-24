#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <stdlib.h>

using namespace std;
/*  */

struct produtos{
	int codigo;
	char nome[40];
	double preco;
};

double mediaProdutos (produtos *vetor){
	double media =0;
	for(int i=0;i<5;i++){
		media = vetor[i].preco + vetor[i+1].preco /5;	
	}
	return media;
};

		

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	double *cod,*name,*precoProduto,*medindoMedia;
	produtos *vet;
	
	vet = (produtos *) malloc (5 * sizeof(float));
	
	for(int i=0; i<5;i++){
		cout << "Insira o codigo, nome e preco do produto " << i+1 <<endl;
		cin >> vet[i].codigo >> vet[i].nome >> vet[i].preco;	
	}

	
	cout << "\nMédia dos preços: " << mediaProdutos(vet) <<endl;
	cout << "============================";
 	
		
	return 0;
}
