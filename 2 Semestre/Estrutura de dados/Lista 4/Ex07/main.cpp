#include <iostream>
#include <ctime>
#include <stdio.h>
#include <locale>

using namespace std;

/* Crie um programa simples que exiba o fatorial de um número e calcule o tempo de execução do programa usando a biblioteca ctime e a função clock.
Peça para o usuário dar o número que deseja fazer fatorial. Faça a análise da complexidade desse código, escreva como comentário no final. */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int fat, numb;
	clock_t t;
	t = clock();
	
	cout << "Qual numero deseja ver o fatorial ?" <<endl;
	cin >> numb;
	
	for(fat = 1; numb > 1; numb = numb -1){
		fat = fat * numb;
	}
	
	t = clock()-t;
	cout << "Fatorial: " << fat <<endl;
	cout << "Tempode de CPU: " << ((float)t)/CLOCKS_PER_SEC << "segundos." <<endl;
	return 0;
}

// Complexidade O(!N) - Por conta do fatorial do for
