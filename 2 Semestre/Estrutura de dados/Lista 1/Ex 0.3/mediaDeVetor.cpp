#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

// Fazer um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos valores � igual a m�dia dos mesmos. 

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
	cout << "M�dia " << media << "\n" <<endl;
	
	if (valor[10] == media){
		cout << "Temos um numero igual ao resultado da m�dia \n";
	}else 
		cout << "Nenhum valor com a mesma m�dia \n";
	
	cout << "Digite 1 para sair"<<endl;
	cin >> resposta;	 
		 
	
	return 0;
}
