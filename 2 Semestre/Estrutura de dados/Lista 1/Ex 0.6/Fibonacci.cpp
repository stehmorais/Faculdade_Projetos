#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/* Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A função deve receber esse termo e retornar o valor 
desse termo após a série de Fibonacci. A série é formada pela sequência: 1,1,2,3,5,8,13,21,34,....,etc.  */

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
	
	cout << "\n O 15° termo é: 610"; 
	
	return 0;
}
