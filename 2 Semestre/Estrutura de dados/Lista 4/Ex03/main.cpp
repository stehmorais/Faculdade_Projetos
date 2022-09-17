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

double ordemDecrescente (produtos *vetor){
	produtos aux;
		
	cout << "\nProdutos em ordem decrescente:\n" <<endl;
		for (int i=0; i<5; i++) 
	{
		for (int j=i+1; j<5; j++) {
			if (vetor[i].preco < vetor[j].preco) 
			{
				
				aux.nome, vetor[i].nome;
				aux.codigo, vetor[i].codigo;
				aux.preco = vetor[i].preco;
	
				vetor[i].nome, vetor[j].nome;
				vetor[i].codigo, vetor[j].codigo;
				vetor[i].preco = vetor[j].preco;
				
				vetor[j].nome, aux.nome;
				vetor[j].codigo, aux.codigo;
				vetor[j].preco = aux.preco;	
				
				cout << "Código do produto " << i + 1 << ": "  << vetor[i].codigo << " Nome: " << vetor[i].nome << " Preço: "<< vetor[i].preco << " \n " << endl;	
			}
		}
	}
		

	

}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	double *cod,*name,*precoProduto,*medindoMedia;
	produtos *vet;
	
	vet = (produtos *) malloc (5 * sizeof(float));
	
	for(int i=0; i<5;i++){
		cout << "Insira o codigo, nome e preco do produto " << i+1 <<endl;
		cin >> vet[i].codigo >> vet[i].nome >> vet[i].preco;	
	}

	
	 
	cout << "Média dos preços: " << mediaProdutos(vet) <<endl;
 	ordemDecrescente(vet);
		
	return 0;
}
