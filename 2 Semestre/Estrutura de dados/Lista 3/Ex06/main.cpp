#include <iostream>
#include <locale>
#include <string>

using namespace std;

/* 6) A Microsoft está contratando funcionários para realizarem testes no gerenciador de memória do seu novo
computador. 
- Seu programa deverá ler 5 números inteiros, 5 números decimais, 5 letras, armazená-las em uma
única struct contendo vetor de inteiro, vetor de decimais e vetor de char. 

- Então, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 100, os decimais por 1.99, e as letras por ’W’
.
- Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizadas. */

struct Memoria{
	int number;
	double decimais;
	char letras;
};


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	Memoria dados[5];
	int *troca1; 
	double *troca2; 
	char *troca3;
	
	for(int i=0; i<5; i++){
		cout << "Insira um numero inteiro, um decimal e uma letra por favor" << endl;
		cin >> dados[i].number >> dados[i].decimais >> dados[i].letras;
	}
	
	cout << "\nANTES - Dados Normais\n";
	cout << "===========================================\n";
	for(int i=0; i<5; i++){
		cout << dados[i].number << " | " << dados[i].decimais << " | " <<  dados[i].letras <<endl;
	}
	cout << "===========================================\n";
	
	cout << "\nDEPOIS - Dados atualizados com ponteiros\n";
	cout << "===========================================\n";
	for(int j=0; j<5; j++){
		troca1 = &dados[j].number;
		*troca1 = 100;
		troca2 = &dados[j].decimais;
		*troca2 = 1.99;
		troca3 = &dados[j].letras;
		*troca3 = 'W';

		cout << dados[j].number << " | " << dados[j].decimais << " | " <<  dados[j].letras <<endl;
	}
	cout << "===========================================\n";
	

	
	
//	cout << "Variáveis atualizadas: " <<endl;
	
	return 0;
}
