#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstring>

using namespace std;

/*Considere uma estrutura de conta corrente contendo o nome do titular, o CPF e o valor na conta. Escreva 
uma função que cadastre 5 usuários e os exiba na tela ordenados de forma decrescente de acordo com 
o valor na conta.*/

struct pessoa {
	char nome[30];
	char cpf[30];
	float conta;
};

typedef struct pessoa Pessoa;

//função

int usuario( ){
	Pessoa user[5], aux;
	int i, j;
		for (i=0; i<5; i++){
		cout << "Informe o nome: " << endl;
		cin >> user[i].nome;
		cout << "Informe o CPF:" << endl;
		cin >> user[i].cpf;
		cout << "Informe o valor da conta: " << endl;
		cin >> user[i].conta;
	}	
	
	for (i=0; i<5; i++){
		for (j=i+1; j<5; j++) {
			if (user[i].conta < user[j].conta){
	
				strcpy(aux.nome, user[i].nome);
				strcpy(aux.cpf, user[i].cpf);
				aux.conta = user[i].conta;
	
				strcpy(user[i].nome, user[j].nome);
				strcpy(user[i].cpf, user[j].cpf);
				user[i].conta = user[j].conta;
			
				strcpy(user[j].nome, aux.nome);
				strcpy(user[j].cpf, aux.cpf);
				user[j].conta = aux.conta;
			}
		}
	}
	
	for (i=0; i<5; i++) 
	{
		cout << "----Contas em ordem decrescente de valor----\n" << endl;
		cout << "Nome.....: " << user[i].nome << endl;
		cout << "CPF..: " << user[i].cpf << endl;
		cout << "Valor da conta....: " << user[i].conta << endl;
	}
}

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int usuarios = usuario();
	
	return 0;
}
