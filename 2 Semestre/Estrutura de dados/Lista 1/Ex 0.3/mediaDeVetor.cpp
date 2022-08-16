#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Fazer um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos. 

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int valor[10], soma=0;
	float media;
	int resposta;
	
	for(int i=0; i<=9; i++){
		cout << "Digite um numero: ";
		cin >> valor[i];
		
		soma = soma + valor[i];
		media = soma / 10.0;		
	} 
	
	cout << "Soma: " << soma <<endl;
	cout << "Média " << media << "\n" <<endl;
	
	if (valor[10] == media){
		cout << "Temos um numero igual ao resultado da média \n";
	}else 
		cout << "Nenhum valor com a mesma média \n";
	
	cout << "Digite 1 para sair"<<endl;
	cin >> resposta;	 
		 
	
	return 0;
}
