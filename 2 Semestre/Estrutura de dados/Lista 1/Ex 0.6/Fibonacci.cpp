#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A fun��o deve receber esse termo e retornar o valor 
desse termo ap�s a s�rie de Fibonacci. A s�rie � formada pela sequ�ncia: 1,1,2,3,5,8,13,21,34,....,etc.  */

int main( ) {
	setlocale (LC_ALL, "Portuguese");
	
	int n1=1,n2=1,n;

	cout<<n1<<" - "<<n2<<" - ";
    for (int i=0; i<=12;i++) {
       cout<< (n1+n2) <<" - ";
       n=n1;
       n1=n2;
       n2=n2+n;
    }
	
	cout << "\n O 15� termo �: 610"; 
	
	return 0;
}
