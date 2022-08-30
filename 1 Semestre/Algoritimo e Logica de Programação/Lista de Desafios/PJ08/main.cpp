#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int numero = 1;
	int soma = 0;
	
	while(numero < 5){

	soma = soma + numero;
	numero = numero + 1;

	cout << " aqui " << numero << endl;
}
	
	return 0;
}
