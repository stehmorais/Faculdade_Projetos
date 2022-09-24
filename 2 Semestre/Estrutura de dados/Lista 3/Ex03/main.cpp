#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct produtos{
    int *codigo;
    char nome[40];
    double *preco;
};

void ordemDecrescente(produtos *vetor){
	produtos *aux=0;
	for(int j=0; j<5; j++){
		for(int i=0; i<5; i++){
			if(vetor[i].preco < vetor[i+1].preco){
				aux[i].preco=vetor[i].preco;
				vetor[i].preco= vetor[i+1].preco;
				vetor[i+1].preco=aux[i].preco;
			}
		}
	}
	cout << "Ordem decrescente:\n";
	for(int i=0; i<5; i++){
		cout << vetor[i].preco << "-" <<endl;	
	}	
}

double mediaProdutos (produtos *vetor){
	double media =0;
	for(int i=0;i<5;i++){
		media = (vetor[i].preco + vetor[i+1].preco) /5;	
	}
	return media;
};
  
int main(){
    setlocale (LC_ALL, "Portuguese");
    
    double p[5];
    produtos *vet=NULL;
    int tam=5;
	int numb[5];
    
   
    vet=(produtos *)malloc(tam * sizeof(produtos));
    
   
    for(int i=0; i<5; i++){
        cout<<"Insira o código do "<<i+1<<" produto:\n";
        vet[i].codigo=&numb[i];
        cin>>*(vet[i].codigo);
        
        cout<<"Insira o nome do "<<i+1<<" produto:\n";
        cin>>vet[i].nome;
        
        cout<<"Insira o preço do "<<i+1<<" produto:\n";
        vet[i].preco=&p[i];
        cin>>*(vet[i].preco);
    }
    
    for(int i=0; i<5; i++){
        cout<<"====================\n";
        cout<<*(vet[i].codigo)<<endl;
        cout<<vet[i].nome<<endl;
        cout<<*(vet[i].preco)<<endl;
        cout<<"\n";
    }
    
	ordemDecrescente(vet);
	cout << "Média dos produtos: " << mediaProdutos(vet) <<endl;
	
    return 0;
}

