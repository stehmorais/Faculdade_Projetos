#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM" e 0 se a string digitado foi "NAO".
 A rotina/ufnção só deve retornar alguma coisa se a string digitado for "SIM" ou "NAO". 
 Faça a verificação para que o usuário não estrague o seu código.*/

int main( ) {
	setlocale (LC_ALL, "Portuguese");
	
	string resposta;
	
	cout << "---------ROTINA---------\n";
	cout << "escolha SIM ou NAO jovem\n";
	cin >> resposta;
	
// qualquer coisa que não for "SIM" ou "NAO", não será aceita

	if (resposta == "SIM"){
		cout << "Retorno: 1\n";
	}else if (resposta == "NAO"){
		cout << "Retorno: 2\n";
	}else{
		cout << "Opa, resposta inválida :/\n";
	}
	
	cout << "Obrigada :)";
	
	return 0;
}
