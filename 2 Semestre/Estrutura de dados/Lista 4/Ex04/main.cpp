#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {

	int *p;
	int Nlinhas, Ncolunas;
	clock_t t;
	t = clock();
	
	cout << "Insira o tamanho da matriz quadratica\n";
	cin >> Nlinhas >> Ncolunas;

	
	p = new int [Nlinhas * Ncolunas];
	for(int i=0; i < Nlinhas; i++){
		for(int j=0; j < Ncolunas; j++){
			p[i * Ncolunas + j] = i+j;
		}
	}
	
	for(int i=0; i < Nlinhas; i++){
		for(int j=0; j < Ncolunas; j++){
			cout << p[i * Ncolunas * j] << " ";
			cout << "\n";
		}
	}
	
	free(p);
	
	t = clock()-t;
	cout << "Tempo de CPU:  " << ((float)t)/CLOCKS_PER_SEC << " segundos." << endl;
	
		
	return 0;
}


