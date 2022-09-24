#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdio.h>

using namespace std;

/* 5)Faça um programa que leia um vetor de inteiros do usuário, remova valores consecutivos repetidos e mostra o vetor atualizado. 
	O programa deve alocar memória para o vetor inicial e usar a função realloc para ajustar o tamanho do vetor.
	O tamanho do vetor deve ser sempre o mínimo necessário para armazenar os valores, 
	ou seja, usar malloc de 1 em 1. O programa deve mostrar o tamanho final do vetor, como no exemplo abaixo. */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, n = 0;
	int *vet2;
	int *vet = NULL, tam;
	
	cout << "Qual o tamanho você quer para seu vetor?" <<endl;
    cin >> tam;
    vet = (int *)malloc(tam * sizeof(int));	

	for (int i=0; i<tam; i++) {
		cout << "Informe um valor: " << endl;
		cin >> vet[i];
	}
	
	cout << endl << "Vetor original:\n" << endl;
	
	for( i = 0; i < tam; i++ )
    	cout << vet[i] <<endl;
    	cout << "\n";
    	cout << "tamanho: " << tam <<endl;
    
    cout << "\n=====================================\n"<<endl;
	cout << "Vetor atualizado:\n" <<endl;
	
	vet2 = (int *)realloc(vet, tam * sizeof(int));
	
	 /* Remove elementos com valor duplicado */
    for( i = 0; i < tam; i++)
    {
        for( j = 0; j < n; j++ )
        {
            if( vet[i] == vet2[j] )
                break;
        }

        if( j == n )
        {
            vet2[n] = vet[i];
            n++;
            tam--;
        }
    }
	
	 /* Exibe Vetor de Saida */
    for( i = 0; i < n; i++ )
        cout << vet2[i] <<endl;
        cout << "\n";
		cout << "tamanho: " << tam <<endl;		
	
	free(vet);
	free(vet2);
		
	return 0;
}


   
  


