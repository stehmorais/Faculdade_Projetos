#include <iostream>
#include <locale>
#include "fila_encadeada.h"
#include "pilha_encadeada.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	elem elemento, elemento2;
	bool erro;
	int qti;
	Fila Fila1;
	Pilha Pilha1;	
	no *p;
	Create_Stack(&Pilha1);
	Create_Queue(&Fila1);
	
	cout << "Quantos elementos deseja inserir?" << endl;
	cin >> qti;
	
	for(int i=0; i<qti; i++)
	{
		cout << "Inserir elemento na fila encadeada e pilha encadeada" << endl;
		cin >> elemento; 
		Enter_Queue(&Fila1, &elemento, &erro);
		Push(&Pilha1, &elemento, &erro);
	}
	
	Print_Queue(&Fila1);
	Print_Stack(&Pilha1);
	
	cout << endl<< "Total de elementos na Fila1: " << Fila1.total << endl;
	cout << endl<< "Total de elementos na Pilha1: " << Pilha1.total << endl;
	
	/*
	elem item;
	item = Out_Queue(&Fila1, &erro);
	cout << "Total de elementos na fila: " << Fila1.total;
	*/
	
	cout << "Retirando todos os elementos da Fila encadeada. " << endl;
	for(int i=0; i<qti; i++)
	{
		elem item;
		item = Out_Queue(&Fila1, &erro);
	}
	cout << "Total de elemento da Fila encadeada: " << Fila1.total << endl;
	
	
	cout << "Retirando todos os elementos da Pilha encadeada. " << endl;
	for(int i=0; i<qti; i++)
	{
		Pop(&Pilha1, &erro);
	}
	cout << "Total de elemento da Pilha encadeada: " << Pilha1.total << endl;

}
