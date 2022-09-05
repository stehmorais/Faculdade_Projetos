#include <iostream>
#include <locale>

using namespace std;

/* Em função do aumento dos combustíveis, o setor de vendas da rede Carrefour precisa atualizar os valores
de seus produtos no seu catálogo de vendas. O

- aumento de 4.78% para todos os itens.
- São 10 itens no catálogo
- elaborar um programa que leia o nome e valor atual dos produtos (dados pelo usuário) e armazene em um vetor de struct
- após isso efetue o reajuste do valor dos produtos armazenando os em outro vetor, preservando o vetor original.
- O reajuste (acesso ao vetor) deverá ser feito utilizando ponteiros. 
- Imprima na tela o valor reajustado, usando também ponteiros. */

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
		cout << "Informe o nome do " << i + 1 << "° produto" <<endl;
		cin >> produtos[i].nome;
		cout << "Informe o valor do " << i + 1 << "° produto" <<endl;
		
		produtos[i].valor = &pegaValor[i];
		cin >> *(produtos[i].valor);
		
		cout << "\nPreço antigo: " <<endl;
		cout << produtos[i].nome << " | " << *produtos[i].valor <<endl;
		
		reajuste = &pegaValor[i];
		*reajuste = (pegaValor[i] * 0.478) + pegaValor[i];
		
		
		cout << "\nReajuste de preços: " <<endl;
		cout << produtos[i].nome << "| " << *produtos[i].valor <<endl;
	}	
	
	return 0;
}
