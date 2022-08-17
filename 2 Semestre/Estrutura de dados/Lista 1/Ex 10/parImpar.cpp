#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* 	Crie um programa que tenha uma função que receba um inteiro e verifique se é par, impar ou número primo.
 As mensagens de "É par" ou "É impar" ou "É primo" devem ser exibidas na própria função, ou seja, a função em si não deve retornar nada.  */


	//função
void parImpar(){
	
	// verificando se o numero é impar ou par
	int valor = 1;
	int aux;
	int div=0;
	
	if(valor%2==0){
		cout << "É par\n";
	}else{
		cout << "É ímpar\n";
	}
	
	//verificando se o numero é primo ou não
	
    for(aux=1; aux<=valor; aux++)
    	if(valor%aux==0){
    		 div++;
		}
            
    if(div==2){
		cout<<"É primo"<<endl;
	} else{
		cout<<"Não é primo"<<endl;			
	}		

}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	parImpar();
	
	return 0;
}
