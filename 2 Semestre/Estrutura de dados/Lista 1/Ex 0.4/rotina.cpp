#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM" e 0 se a string digitado foi "NAO".
 A rotina/ufn��o s� deve retornar alguma coisa se a string digitado for "SIM" ou "NAO". 
 Fa�a a verifica��o para que o usu�rio n�o estrague o seu c�digo.*/

int main( ) {
	setlocale (LC_ALL, "Portuguese");
	
	string resposta;
	
	cout << "---------ROTINA---------\n";
	cout << "escolha SIM ou NAO jovem\n";
	cin >> resposta;
	
// qualquer coisa que n�o for "SIM" ou "NAO", n�o ser� aceita

	if (resposta == "SIM"){
		cout << "Retorno: 1\n";
	}else if (resposta == "NAO"){
		cout << "Retorno: 2\n";
	}else{
		cout << "Opa, resposta inv�lida :/\n";
	}
	
	cout << "Obrigada :)";
	
	return 0;
}
