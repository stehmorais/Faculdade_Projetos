#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int f(int a,int x, int y){
	int valor;
	valor = 3*a + x*x + y*y;
	return valor;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c;
	
	
	cout <<"Digite o primeiro valor";
	cin >> a;
	
	cout << "Digite o segundo valor";
	cin >> b;
	
	cout << "Digite o quarto valor";
	cin >> c;

	
	float valorf = (float)f(a,b,c);
	cout << "Seu resultado aqui: " << valorf <<endl;
	
	
	return 0;
}
