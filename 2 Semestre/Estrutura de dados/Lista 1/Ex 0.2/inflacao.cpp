#include<iostream>
#include<cstdlib>
#include<locale>

using namespace std;

/* Os pre�os dos produtos de uma loja ser�o atualizados por conta da infla��o que aumentou 15%. Crie um programa que vai popular o 
vetor de 10 unidades de double e depois vai atualizar os pre�os de acordo com a infla��o. Depois disso, exibir o valor na tela. */

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	double precos[10];
	float conta, reajuste;
	
	for(int i=0; i<=9; i++){
		cout << "Insira o valor do " << i+1 << " produto \n" <<endl;
		cin >> precos[i];
		
		conta = precos[i] * 0.15;
		reajuste = precos[i] + conta;
		
		cout << "O reajuste desse produto � " << reajuste << "\n" <<endl;
	}
	
	return 0;
}
