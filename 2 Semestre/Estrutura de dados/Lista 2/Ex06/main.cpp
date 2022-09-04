#include <iostream>
#include <locale>
#include <stdlib.h> 
#include <time.h>    

// math

using namespace std;

/* - criar um jogo onde o computador sorteia um n�mero de 1 at� 10;
- tentar adivinhar qual � o n�mero;

- Use uma fun��o que fa�a esse sorteio aleat�rio, recebendo a struct como par�metro e retorne o n�mero
sorteado. 
- Na main, exiba esse n�mero sorteado e o nome da pessoa sorteada. Procure na internet por Rand, Srand e Random. */

struct Pessoas{
	string nomes;
	
	
void insere(string stnome){
	
	nomes=stnome;
}
	
};

float sorteio(float x){

	int valor = x;
	srand (time(NULL));
	int numeroSecreto = rand() % 10 + 1;
	cout << "\nNumero Sorteado: " << numeroSecreto <<endl;
	
	cout << "\nVerificando seu resultado......" <<endl;
	cout << "......................" <<endl;
	cout << "TAmTamTamTam.........." <<endl;
	cout << "......................." <<endl;
	cout << "e o grande vencedor foi...\n" <<endl;
	
	switch(numeroSecreto){
		case 1:
			cout << "ANGELA!!" <<endl;
			cout << "Parab�ns!" <<endl;
			cout << "Ganhou uma mesa de ping pong!!" <<endl;
			break;
		case 2:
			cout << "NILTON!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou uma tv 50 polegadas!!" <<endl;
			break;
		case 3:
			cout << "RODRIGO!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou um video game!!" <<endl;
			break;
		case 4:
			cout << "SAMA!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou uma lista de exercicios!!" <<endl;
			break;
		case 5:
			cout << "JONAS!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou um Computador!!" <<endl;
			break;
		case 6:
			cout << "DANIEL!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou um Playstation!!" <<endl;
			break;
		case 7:
			cout << "ANA LUCIA!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou um jogo da Steam!!" <<endl;
			break;
		case 8:
			cout << "REGINA!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou um Tablet!!" <<endl;
			break;
		case 9:
			cout << "ORLANDO!!" <<endl;
			cout << "Parab�ns!!" <<endl;
			cout << "Ganhou uma assinatura Netflix" <<endl;
			break;
		case 10:
			cout << "Ester!!" <<endl;
			cout << "Prab�ns!!" <<endl;
			cout << "Ganhou F�rias!!" <<endl;
			break;
		default:
			cout << "Ester errou o c�digo" <<endl;
			break;
	}
	
	return valor;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	Pessoas pessoa[10];
	int chute;
	string confirmacao;
	
	pessoa[0].insere("Angela");
	pessoa[1].insere("Nilton");
	pessoa[2].insere("Rodrigo");
	pessoa[3].insere("Sama");
	pessoa[4].insere("Jonas");
	pessoa[5].insere("Daniel");
	pessoa[6].insere("Ana Lucia");
	pessoa[7].insere("Regina");
	pessoa[8].insere("Orlando");
	pessoa[9].insere("Ester");
	
	cout << "Participantes: " <<endl;
	for (int i=0; i<10; i++){
		cout << pessoa[i].nomes << endl;
	}
	cout <<"\n";
	
	cout << "Chute um numero entre 0 e 10" <<endl;
	cin >> chute;
		
	float valorf = sorteio(chute);
		
	if(chute > 0 and chute < 10){
		cout << "\nBoa!" <<endl;	
	}else{
		cout << "Tente novamente e digite um numero v�lido" <<endl;
	}
	
	return 0;
}


