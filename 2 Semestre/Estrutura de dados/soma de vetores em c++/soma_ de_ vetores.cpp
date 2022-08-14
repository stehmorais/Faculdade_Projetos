#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;



/*
Crie um programa que receba do usuário os dados para preencher dois vetores de inteiros de 5 elementos cada.
Passar os dois valores para uma função e calcular a soma dos vetores com os respectivios indices (1:1, 2:2,...5:5)
A função vai retornar o terceiro vetor para eximir na main

*/

// cabeçalhos
int *soma_vetores(int, int, int);

// função soma vetores
int *soma_vetores(int vetorA[], int vetorB[], int vetorC[]){
	for(int i=0; i<5; i++){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	
	return vetorC;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetorA [5];
	int vetorB [5];
	int vetorC [5];
	int i=0;

	for(int j=0; j<5; j++){
		cout << "Insira o valor " << j+1 << " do vetor A" <<endl;
		cin >> vetorA[j];
	}
	
	for(int k=0; k<5; k++){
		cout << "Insira o valor " << k+1 << " do vetor B" <<endl;
		cin >> vetorB[k];
	}
	
	// chamada das funções
	soma_vetores (vetorA, vetorB, vetorC);
	
	cout << "O vetor c é:\n" ;
	for (int j=0; j<5; j++){
		cout << vetorC[j] << " " << endl;
	}	

	return 0;
}

