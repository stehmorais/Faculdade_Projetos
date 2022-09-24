#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int *mat;
	int Nlinhas,Ncolunas;
	clock_t t;
	t = clock();
	
	cout << "Insira o tamanho da matriz quadratica\n";
	cin >> Nlinhas >> Ncolunas;


	// aloca um vetor com todos os elementos da matriz
	mat = (int *)  malloc (Nlinhas * Ncolunas * sizeof (int));
	
	// percorre a matriz
	for (int i=0; i < Nlinhas ; i++){
		for (int j=0; j < Ncolunas ; j++){  // calcula a posição de cada elemento
			mat[(i* Ncolunas + j)] = 0;	
		}
	}
	
		
	for(int i=0; i < Nlinhas; i++){
		for(int j=0; j < Ncolunas; j++){
			cout << mat[i * Ncolunas * j] << " ";
			cout << "\n";
		}
	}
	
	t = clock()-t;
	
	cout << "Tempo de CPU:  " << ((float)t)/CLOCKS_PER_SEC << " segundos." << endl;
   	
	// libera a memória alocada para a matriz
	free (mat);
	
				
	
	return 0;
}
