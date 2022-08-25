#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

//cabecalho
void troca_referencia(int,int);
void troca_copia(int,int);

//funcao	

void troca_copia(int v1, int v2){
		v1: 8;
		v2: 2;
}

//função que pegou o caminho das variaveis e vai trocar na main
void troca_referencia(int *v1, int *v2){
		*v1=8;
		*v2=2;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int v1, v2;
	
	v1= 5;
	v2= 7;
	
	troca_copia(v1,v2);
	cout << "Troca por copia" << " V1: " << v1 << " V2: " << v2 <<endl;
	
	troca_referencia(&v1, &v2);
	cout << "Troca por referencia" << " V1: " << v1 << " V2: " << v2 <<endl;
	
	return 0;
}
