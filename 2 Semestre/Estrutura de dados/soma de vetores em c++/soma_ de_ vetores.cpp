#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;



/*
Crie um programa que receba do usu�rio os dados para preencher dois vetores de inteiros de 5 elementos cada.
Passar os dois valores para uma fun��o e calcular a soma dos vetores com os respectivios indices (1:1, 2:2,...5:5)
A fun��o vai retornar o terceiro vetor para eximir na main

*/

// cabe�alhos
int *soma_vetores(int, int, int);

// fun��o soma vetores
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
	
	// chamada das fun��es
	soma_vetores (vetorA, vetorB, vetorC);
	
	cout << "O vetor c �:\n" ;
	for (int j=0; j<5; j++){
		cout << vetorC[j] << " " << endl;
	}	

	return 0;
}

