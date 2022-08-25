#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

/*                    Questão:
 Com base nas funções matemáticas crie um programa que 
 utiliza uma função que recebe um numero e retorna o 
 quadrado desse valor. Faça duas funçoes uma utilizando
 passagem de parametro por valor e outra por referencia. 
*/

//cabecalhos
void quadrado_valor(int );
void quadrado_referencia(int *);

//funções

//não retornou nada pois não pegou nenhum endereço, então ficou a copia dentro da função
void quadrado_valor(int x){
	x = pow(x,3);
}

//não retornou nada mais como peguei o endereço com * e coloquei com & na main, ele fez a operação e mostrou o valor
void quadrado_referencia(int *x){
	*x = pow(*x,3);
}


int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	cout << "Insira o valor de x\n";
	cin >> x;
	
	quadrado_valor(x);
	cout << "Cópia: " << x << endl;
	
	quadrado_referencia(&x);
	cout << "Endereço: " << x <<endl;
	
	
	return 0;
}
