#include<iostream>
#include<cstdlib>
#include<locale>

using namespace std;

// Fazer um programa que imprime, em formato de tabela, a tabuada de 1 a 9. Use "\n" e "\t" para te ajudar na exposição dos números na tela. 

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int resultado, c=0, n=0;
	
	for (n = 1; n<=9; n++){
		for(c = 1; c<=10; c++){	
			resultado = n*c;
			cout << "\n";
			cout << "|" << "\t" << n << "x" << c << ": " << resultado <<endl;	
			cout << "______________________________________________________" <<endl;
		}
	}
		
	return 0;
}
