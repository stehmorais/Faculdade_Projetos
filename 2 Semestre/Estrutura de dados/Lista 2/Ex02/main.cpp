#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstring>

using namespace std;

/* Escreva uma função que tenha nome e data de nascimento (dia, mês e ano). Portanto data é uma struct,
então será struct data dentro de outra struct. Popule um vetor (através do usuário) que tenha 5 unidades
dessa nova estrutura e busque a pessoa mais velha. Exiba o nome e a data de nascimento dessa pessoa
mais velha. */

struct data {
	char nome[30];
	char dia[30];
	char mes[30];
	char ano[30];
};

typedef struct data Data;

int pessoa( ){
	Data user[5], aux;
	int i, j;
	
	for(i=0; i<5; i++){
		cout << "=======RECEBENDO DADOS PESSOA " << i+1 << " =====" <<endl;
		cout << "Informe seu nome: " << endl;
		cin >> user[i].nome;
		cout << "Informe seu dia de nascimento: " <<endl;
		cin >> user[i].dia;
		cout << "Informe seu mês de nascimento: " <<endl;
		cin >> user[i].mes;
		cout << "Informe seu ano de nascimento: " <<endl;
		cin >> user[i].ano;
	}
	
	for (i=0; i<5; i++){
		for (j=i+1; j<5; j++) {
			if (user[i].ano < user[j].ano && user[i].dia < user[j].dia){

				strcpy(aux.nome, user[i].nome);
				strcpy(aux.dia, user[i].dia);
				strcpy(aux.ano, user[i].ano);
				strcpy(aux.mes, user[i].mes);
				
				strcpy(user[i].nome, user[j].nome);
				strcpy(user[i].dia, user[j].dia);
				strcpy(user[i].ano, user[j].ano);
				strcpy(user[i].mes, user[j].mes);
			
				strcpy(user[j].nome, aux.nome);
				strcpy(user[j].dia, aux.dia);
				strcpy(user[j].ano, aux.ano);
				strcpy(user[j].mes, aux.mes);
			}
		} 
	}
		cout << "Nome.....: " << aux.nome << endl;
		cout << "Data Nascimento..: " << aux.dia << "/" << aux.mes << "/" << aux.ano << endl;	
}
// criar uma aux que vai receber o ano que é maior que o outro ( ou seja mais novo ) e vou ter que comprara o menor dia também,para achar o mais velho

int main( ) {
	
	int usuarios = pessoa();
	
	return 0;
}
