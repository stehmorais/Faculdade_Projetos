#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* 	Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � par, impar ou n�mero primo.
 As mensagens de "� par" ou "� impar" ou "� primo" devem ser exibidas na pr�pria fun��o, ou seja, a fun��o em si n�o deve retornar nada.  */


	//fun��o
void parImpar(){
	
	// verificando se o numero � impar ou par
	int valor = 1;
	int aux;
	int div=0;
	
	if(valor%2==0){
		cout << "� par\n";
	}else{
		cout << "� �mpar\n";
	}
	
	//verificando se o numero � primo ou n�o
	
    for(aux=1; aux<=valor; aux++)
    	if(valor%aux==0){
    		 div++;
		}
            
    if(div==2){
		cout<<"� primo"<<endl;
	} else{
		cout<<"N�o � primo"<<endl;			
	}		

}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	parImpar();
	
	return 0;
}
