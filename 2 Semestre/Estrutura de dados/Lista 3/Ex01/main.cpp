#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

using namespace std;


/* 1)A delegação francesa de Futsal deseja criar um programa que deva conter o nome do atleta, sua posição,
idade e altura. Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco
atletas e os exiba por ordem de idade, do mais velho para o mais novo. */



struct atleta {
	char nome[30];
	char posicao[30];
	int idade;
	float altura;
};


typedef struct atleta Atleta;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	Atleta atletas[5], aux;
	int i, j;
	
	for (i=0; i<5; i++) 
	{
		cout << "Informe o nome: " << endl;
		cin >> atletas[i].nome;
		cout << "Informe o posicao:" << endl;
		cin >> atletas[i].posicao;
		cout << "Informe a idade: " << endl;
		cin >> atletas[i].idade;
		cout << "Informe a altura: " << endl;
		cin >> atletas[i].altura;
	}
	
	for (i=0; i<5; i++) 
	{
		for (j=i+1; j<5; j++) {
			if (atletas[i].idade < atletas[j].idade) 
			{
				//salva na variavel auxiliar
				strcpy(aux.nome, atletas[i].nome);
				strcpy(aux.posicao, atletas[i].posicao);
				aux.idade = atletas[i].idade;
				aux.altura = atletas[i].altura;
	
				//trocando as posicoes
				strcpy(atletas[i].nome, atletas[j].nome);
				strcpy(atletas[i].posicao, atletas[j].posicao);
				atletas[i].idade = atletas[j].idade;
				atletas[i].altura = atletas[j].altura;
				
				strcpy(atletas[j].nome, aux.nome);
				strcpy(atletas[j].posicao, aux.posicao);
				atletas[j].idade = aux.idade;
				atletas[j].altura = aux.altura;
			}
		}
	}
		cout << "----Atletas em ordem decrescente de idade----\n" << endl;
	for (i=0; i<5; i++) 
	{
		cout << "Nome.....: " << atletas[i].nome << endl;
		cout << "posicao..: " << atletas[i].posicao << endl;
		cout << "Idade....: " << atletas[i].idade << endl;
		cout << "Altura...: " << atletas[i].altura << endl;
	}
}
