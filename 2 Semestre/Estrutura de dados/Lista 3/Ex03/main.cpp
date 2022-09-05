#include <iostream>
#include <locale>

using namespace std;


/* Resolvendo exercicio 
3) Examine o seguinte c�digo:
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;

a) O c�digo compila? - Sim, n�o da nenhum erro (de sintaxe)
b) Ap�s executar o c�digo, qual ser� o valor de inx? - Seria o 20
c) Ap�s executar o c�digo, para onde parr estar� apontando? - para o endere�o da posi��o 4 do nosso vetor (0x6ffe04)*/ 

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// temos um vetor (array) de 5 espa�os, com os seguintes dados:
	int arr[5] = { 10, 80, 40, 30, 20 };
	// aqui temos um ponteiro (parr) apontando para o endere�o da posi��o 4 do nosso vetor (seria aquele 0x6ffe04... e nao o 20)
	int *parr = &arr[4];
	// uma variavel sendo criada com valor inicial 0
	int inx = 0;
	// atribuindo a variavel o nosso ponteiro sendo somado a mais 1 (nao vai somar, s� se fosse (*parr)++; pois ai estaria incrementando no conteudo)
	inx = *parr++;
	
	cout << "Valor da posi��o 4: " << arr[4] <<endl;
	cout <<"Endere�o de arr[4]: " << parr <<endl;
	cout << "Valor da vari�vel inx recebendo o ponteiro: " << inx <<endl;
	
	return 0;
}
