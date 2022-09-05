#include <iostream>
#include <locale>

using namespace std;


/* Resolvendo exercicio 
3) Examine o seguinte código:
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;

a) O código compila? - Sim, não da nenhum erro (de sintaxe)
b) Após executar o código, qual será o valor de inx? - Seria o 20
c) Após executar o código, para onde parr estará apontando? - para o endereço da posição 4 do nosso vetor (0x6ffe04)*/ 

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// temos um vetor (array) de 5 espaços, com os seguintes dados:
	int arr[5] = { 10, 80, 40, 30, 20 };
	// aqui temos um ponteiro (parr) apontando para o endereço da posição 4 do nosso vetor (seria aquele 0x6ffe04... e nao o 20)
	int *parr = &arr[4];
	// uma variavel sendo criada com valor inicial 0
	int inx = 0;
	// atribuindo a variavel o nosso ponteiro sendo somado a mais 1 (nao vai somar, só se fosse (*parr)++; pois ai estaria incrementando no conteudo)
	inx = *parr++;
	
	cout << "Valor da posição 4: " << arr[4] <<endl;
	cout <<"Endereço de arr[4]: " << parr <<endl;
	cout << "Valor da variável inx recebendo o ponteiro: " << inx <<endl;
	
	return 0;
}
