#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;

/* Resolvendo exercicio
4) Considere o seguinte c�digo:
char* nome1 = "Luis";
char* nome2 = "Fernando";
char* nome3 = "Vitoria";
char* nome4 = "Leticia";

- Use strcat para concatenar os nomes.
- Crie a fun��o: void exibir (char arr, int tamanho);
- Escreva o conte�do da fun��o exibir, sabendo que ela deve percorrer o array de
nomes e printar o array inteiro utilizando ponteiro. 

*/

void exibir(char *nomes[], int tamanho){

	strcpy (*nomes, "Luis ");
	strcat (*nomes, "Fernando ");
	strcat (*nomes, "Vitoria ");
	strcat (*nomes, "Leticia ");
	
	cout << nomes <<endl;	
	
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int pessoas = &nomes[5];
	int mostra = exibir(pessoas);
	
	// estudar ponteiros e voltar aqui depois
	
	
	
	return 0;
}
