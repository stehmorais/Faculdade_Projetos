#include <iostream>
#include <c>
#include <locale>

/* Procure a respeito das seguintes fun��es de manipula��o de string:  strcpy, strcmp, strcat, strlen e fa�a a programa a seguir utilizando essas fun��es:
 usu�rio vai passar nome e sobrenome para o programa (apenas duas palavras), que vai fazer as seguintes verifica��es: 
 se nome for maior que sobrenome (usar strcmp) ent�o imprimir concatenados o nome e depois o sobrenome. Caso contr�rio imprimir na tela o sobrenome e depois o nome.
  E se forem iguais colocar em uma terceira vari�vel o nome e depois o sobrenome e exibir na tela tamb�m o tamanho (n�mero de caracteres) da string total 
  (nome completo do usu�rio).   */

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
