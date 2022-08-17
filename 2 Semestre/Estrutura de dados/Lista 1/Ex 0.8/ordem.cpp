#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

//função crescente
int crescente(int vetor[]){
	int aux=0;
	for(int j; j<=9; j++){
		for(int i=0; i<=9; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
				vetor[i]= vetor[i+1];
				vetor[i+1]=aux;
			}
		}
	}
	cout << "Ordem crescente:\n";
	for(int i=0; i<=9; i++){
		cout << vetor[i] << "-" <<endl;	
	}
}

//função decrescente
int decrescente(int vetor[]){
	int aux=0;
	for(int j; j<=9; j++){
		for(int i=0; i<=9; i++){
			if(vetor[i]<vetor[i+1]){
				aux=vetor[i];
				vetor[i]= vetor[i+1];
				vetor[i+1]=aux;
			}
		}
	}
	cout << "Ordem crescente:\n";
	for(int i=0; i<=9; i++){
		cout << vetor[i] << "-" <<endl;	
	}	
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int resposta;
	
	cout << "Quer ordenar de forma crescente(1) ou decrescente(2)?\n";
	cin >> resposta;
	
	for(int i=0; i<=9; i++){
		cout << "Insira um numero\n";
		cin >> vetor[i];
	}
	
	if (resposta==1){
		int valorf = crescente(vetor);
	}else if (resposta==2) {
		int valorb = decrescente(vetor);
	}else {
		cout << "Não foi possivel converter, volte e escolha uma opção valida";
	}
	
	return 0;
}
