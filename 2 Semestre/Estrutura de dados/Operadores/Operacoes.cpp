#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

//cabecalhos
void quadrado_valor(float,float,float,float,float);
void quadrado_referencia(float *,float *,float *,float *,float *);

//fun��es

//n�o retornou nada pois n�o pegou nenhum endere�o, ent�o ficou a copia dentro da fun��o
void quadrado_valor(float x, float d, float a, float b, float c){
	d = pow(x,3);
	a = floor(x);
	b = ceil(x);
	c = sqrt(x);	
}

//n�o retornou nada mais como peguei o endere�o com * e coloquei com & na main, ele fez a opera��o e mostrou o valor
void quadrado_referencia(float *x, float *d, float *a, float *b, float *c){
	*d = pow(*x,3);
	*a = floor(*x);
	*b = ceil(*x);
	*c = sqrt(*x);	
}


int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	float a, b, c, d;
	d = a = b = c = 0;
	
	cout << "Insira o valor de x\n";
	cin >> x;
	
	quadrado_valor(x,d,a,b,c);
	cout << "VALOR\n" <<endl;
	cout << "Ao quadrado: " << d << endl;
	cout << "Arredonda p/ baixo: " << a << endl;
	cout << "Arredonda p/ cima: " << b <<endl;
	cout << "Potencia: " << c <<endl;
	cout <<"\n";
	
	quadrado_referencia(&x,&d,&a,&b,&c);
	cout << "ENDERE�O\n";
	cout << "Ao quadrado: " << d << endl;
	cout << "Arredonda p/ baixo: " << a << endl;
	cout << "Arredonda p/ cima: " << b <<endl;
	cout << "Potencia: " << c <<endl;
	
	
	return 0;
}
