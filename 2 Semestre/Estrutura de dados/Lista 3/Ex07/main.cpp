#include <iostream>
#include <locale>

using namespace std;

/* Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar os valores
de seus produtos no seu cat�logo de vendas. O

- aumento de 4.78% para todos os itens.
- S�o 10 itens no cat�logo
- elaborar um programa que leia o nome e valor atual dos produtos (dados pelo usu�rio) e armazene em um vetor de struct
- ap�s isso efetue o reajuste do valor dos produtos armazenando os em outro vetor, preservando o vetor original.
- O reajuste (acesso ao vetor) dever� ser feito utilizando ponteiros. 
- Imprima na tela o valor reajustado, usando tamb�m ponteiros. */

struct Catalogo{
	string nome;
	double *valor = NULL;
};

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	Catalogo produtos[10];
	double pegaValor[10];
	double *reajuste;
	
	for(int i=0; i<10; i++){
		cout << "Informe o nome do " << i + 1 << "� produto" <<endl;
		cin >> produtos[i].nome;
		cout << "Informe o valor do " << i + 1 << "� produto" <<endl;
		
		produtos[i].valor = &pegaValor[i];
		cin >> *(produtos[i].valor);
		
		cout << "\nPre�o antigo: " <<endl;
		cout << produtos[i].nome << " | " << *produtos[i].valor <<endl;
		
		reajuste = &pegaValor[i];
		*reajuste = (pegaValor[i] * 0.478) + pegaValor[i];
		
		
		cout << "\nReajuste de pre�os: " <<endl;
		cout << produtos[i].nome << "| " << *produtos[i].valor <<endl;
	}	
	
	return 0;
}
