#include <iostream>
#include <locale>

using namespace std;

/* ) Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja :
struct Produto {
char nome[30]; - Nome do produto 
int *codigo; - Codigo do produto 
double *preco; - Preco do produto 
char fornecedor[50] - Fornecedor do produto
};
Faça um programa que armazene 5 produtos e exiba-os na tela. Obs: fique atento, porque código e preço são
ponteiros dentro de struct.
 */
 
struct Produto {
	char nome[30]; 
	int *codigo = NULL; 
	double *preco = NULL;
	char fornecedor[50];
};
 

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	Produto produtos[5];
	int number[5];
	double valor[5];
	
	for(int i=0; i<5; i++){
		cout << "Informe o nome do " << i+1 << "° produto" <<endl;
		cin >> produtos[i].nome;
		cout << "Informe o código do " << i+1 << "° produto" <<endl;
		produtos[i].codigo = &number[i];
		cin >> *(produtos[i].codigo);
		cout << "Informe o preço do " << i+1 << "° produto" <<endl;
		produtos[i].preco = &valor[i];
		cin >> *(produtos[i].preco);
		cout << "Informe o fornecedor do " << i+1 << "° produto" <<endl;
		cin >> produtos[i].fornecedor;
	}
	
	for(int j=0; j<5; j++){
		cout <<"\nProduto: " << produtos[j].nome << "\nCódigo: " << *produtos[j].codigo << "\nPreço: " << *produtos[j].preco << "\nFornecedor: " << produtos[j].fornecedor << endl;
	}
	
	return 0;
}
