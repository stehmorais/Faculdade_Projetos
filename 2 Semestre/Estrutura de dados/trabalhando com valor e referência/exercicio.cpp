#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

/*                    Quest�o:
 Com base nas fun��es matem�ticas crie um programa que 
 utiliza uma fun��o que recebe um numero e retorna o 
 quadrado desse valor. Fa�a duas fun�oes uma utilizando
 passagem de parametro por valor e outra por referencia. 
*/

//cabecalhos
void quadrado_valor(int );
void quadrado_referencia(int *);

//fun��es

//n�o retornou nada pois n�o pegou nenhum endere�o, ent�o ficou a copia dentro da fun��o
void quadrado_valor(int x){
	x = pow(x,3);
}

//n�o retornou nada mais como peguei o endere�o com * e coloquei com & na main, ele fez a opera��o e mostrou o valor
void quadrado_referencia(int *x){
	*x = pow(*x,3);
}


int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	cout << "Insira o valor de x\n";
	cin >> x;
	
	quadrado_valor(x);
	cout << "C�pia: " << x << endl;
	
	quadrado_referencia(&x);
	cout << "Endere�o: " << x <<endl;
	
	
	return 0;
}
