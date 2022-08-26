#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;

/*Considere uma estrutura de conta corrente contendo o nome do titular, o CPF e o valor na conta. Escreva 
uma função que cadastre 5 usuários e os exiba na tela ordenados de forma decrescente de acordo com 
o valor na conta.*/


//cabecalho
int usuario(string,int,float);

int usuario(string nome, int cpf, float saldo[]){
	
	for(int i=0; i<5; i++){
		cout << "Insira seu nome";
		cin >> nome;
		cout << "Insira seu CPF";
		cin >> cpf;
		cout << "Qual o saldo atual da sua conta";
		cin >> saldo[i];		
	}
	
	int aux=0;
	for(int j; j<=9; j++){
		for(int i=0; i<=9; i++){
			if(saldo[i]<saldo[i+1]){
				aux=saldo[i];
				saldo[i]= saldo[i+1];
				saldo[i+1]=aux;
			}
		}
	}
	cout << "Ordem decrescente dos valores:\n";
	for(int i=0; i<=9; i++){
		cout << saldo[i] << "-" <<endl;	
	}

}
	


int main( ) {
	setlocale(LC_ALL, "Portuguese");
	float saldo[5];
	float valor;
	
	valor = usuario(saldo[]);
	
	cout << valor <<endl;
	
	
	return 0;
}
