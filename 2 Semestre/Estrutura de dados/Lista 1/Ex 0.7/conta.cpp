#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* Criar uma função que retorna o seguinte: A função recebe 4 valores do tipo int e retornar o triplo do 1º + o quadrado dos outros dois.
Vai retornar o tipo float, ou seja, tem que fazer um cast do valor (procurar cast de int para float na internet */

int f(int a,int x, int y){
	int valor;
	valor = 3*a + x*x + y*y;
	return valor;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c;
	
	cout <<"Digite o primeiro valor\n";
	cin >> a;
	
	cout << "Digite o segundo valor\n";
	cin >> b;
	
	cout << "Digite o quarto valor\n";
	cin >> c;

	
	float valorf = (float)f(a,b,c);
	cout << "Seu resultado aqui: " << valorf <<endl;
	
	return 0;
}
