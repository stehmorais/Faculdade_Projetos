#include <iostream>
#include <locale>
using namespace std;

bool listaCheia(int l, int lista){

	if(lista < l){
		return false;
	}else{
		return true;
	}		
}

bool verificaPrato (string matriz[10][3], string prato, int lista){
		bool achei=false;
		for(int i=0; i < lista; i++){
			if (i != lista){
				if(matriz[i][2] == prato){
					achei= true;
				}	
			}		
		}
		return achei;		
}

int main() {

	int op,l,lista=0;
	
	cout << "Informe a quantidade de convidados \n";
	cin >> l;
	
	string matriz[l][3], pesquisa;
	
	do{
	cout<<"===========================ESCOLHA UMA OPÇÃO DO MENU=============================== \n";
	cout <<"1. Incluir novo convidado | 2. Pesquisar por nome | 3. Listar convidados | 4. SAIR \n";
	cout<<"=================================================================================== \n";
	cin >> op;
	switch (op){
		case 1: 
		if(listaCheia(l,lista)== false){
			cout << "Opção escolhida: Incluir novo convidado. \n";
			cout << "Informe o nome do convidado \n";
			cin >> matriz[lista][0];
			cout << "Informe o telefone \n";
			cin >> matriz[lista][1];
			
			do{
				
			
			cout << "Informe o prato \n";
			cin >> matriz[lista][2];
			
			if(verificaPrato(matriz, matriz[lista][2],lista)== true){
				cout <<"O prato ja existe!! \n";
			}
			
		}while(verificaPrato(matriz, matriz[lista][2],lista)== true);
			
			lista++;
		}else{
			cout <<"A lista está cheia \n";
		}		
			break;		
		case 2: 
			cout << "Opção escolhida: Pesquisar por nome. \n";
			cout <<"Informe o nome para pesquisa \n";
			cin >> pesquisa;
			for(int i=0; i<lista; i++){
				if(matriz[i][0] == pesquisa){
				cout <<"Nome: " << matriz[i][0] <<endl;
				cout <<"Telefone: "<< matriz[i][1] <<endl;
				cout << "Prato: " << matriz[i][2] <<endl;	
				}else
					cout <<"Este nome não está na lista de convidados \n";							
			}
		 
			break;
		
		case 3: 
			cout<<"Opção escolhida: Listar convidados. \n";
			cout <<"=====================================\n";	
				for(int i=0; i<lista; i++){
				cout <<"Nome: " << matriz[i][0] <<endl;
				cout <<"Telefone: "<< matriz[i][1] <<endl;
				cout << "Prato: " << matriz[i][2] <<endl;	
			cout <<"=====================================\n";			
			}
		
			break;
		
		case 4: 
			cout<<"Você SAIU. \n";
		
 			break;

		default: 
			cout <<"Você não escolheu nenhuma opção \n";
		
		}
	}while(op!=4);
	

	return 0;
}

