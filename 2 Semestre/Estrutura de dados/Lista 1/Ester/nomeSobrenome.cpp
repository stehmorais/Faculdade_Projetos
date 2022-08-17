#include <iostream>
#include <c>
#include <locale>

/* Procure a respeito das seguintes funções de manipulação de string:  strcpy, strcmp, strcat, strlen e faça a programa a seguir utilizando essas funções:
 usuário vai passar nome e sobrenome para o programa (apenas duas palavras), que vai fazer as seguintes verificações: 
 se nome for maior que sobrenome (usar strcmp) então imprimir concatenados o nome e depois o sobrenome. Caso contrário imprimir na tela o sobrenome e depois o nome.
  E se forem iguais colocar em uma terceira variável o nome e depois o sobrenome e exibir na tela também o tamanho (número de caracteres) da string total 
  (nome completo do usuário).   */

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[15];
   	char sobrenome[15];
  	int palavra;

	cout << "Digite seu nome:" <<endl;
	cin >> nome[15];
	
	cout << "Digite seu sobrenome:" <<endl;
	cin >> sobrenome[15];
	
   strcpy(nome);
   strcpy(sobrenome);
   
   palavra = strcpy(nome,sobrenome);
   
   if(palavra <0){
   		cout << sobrenome[15] <<endl;
   }else {
   	
   }
	
	
	return 0;
}
