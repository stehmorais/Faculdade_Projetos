#include <iostream>
#include <locale>

using namespace std;

struct Estoque{
	string nome;
  	int codigo;  
 	double preco; 
  	int quantidade; 
  	
  	
// função para inserir valores dentro da variavel
void insere(string stnome, int stcodigo, double stpreco, int stquantidade){
    nome=stnome;
    codigo=stcodigo;
    preco=stpreco;
    quantidade=stquantidade;
}

// função para mostrar os valores, poderia ser na main
void mostra(){
  	cout << "\nNome do produto: " << nome << "\n";
  	cout << "Codigo do produto: " << codigo <<"\n";
  	cout << "Preco: " << preco <<"\n";
  	cout << "Quantidade: " << quantidade <<"\n\n";
}

// atualizando estoque dependendo da solicitação do usuario
void atualizaEstoque(){
	
	
	
}
  	
};
int main(){
	setlocale(LC_ALL, "Portuguese");

   Estoque produto1, produto2, produto3, produto4, produto5;
   int resposta, remove;
   string confirmacao;   

   produto1.insere("Batata",1,2.99,100);
   produto2.insere("Tomate",2,3.99,50);
   produto3.insere("Alface",3,4.99,30);
   produto4.insere("Cenoura",4,5.99,20);
   produto5.insere("Beterraba",5,6.99,10);
   
   
   do {
   		cout << "Informe o numero do produto que quer mostrar" <<endl;
   		cin >> resposta;
   		
   		switch(resposta){
   	
   		case 1:
   			 produto1.mostra();
				cout << "================================================\n";
   			 	cout << "Informe a quantidade que gostaria de pegar" <<endl;
   			 	cin >> remove; 
   			 	if(remove > produto1.quantidade){
   			 		cout << "Produtos insuficientes no estoque\n";
   			 	}else{
   			 		produto1.quantidade-= remove;
   			 		cout << "Produtos restantes: " << produto1.quantidade <<endl;
				}
   			break;
   		case 2:
   			 produto2.mostra();
   			 cout << "================================================\n";
   			 cout << "Informe a quantidade que gostaria de pegar" <<endl;
   			 cin >> remove; 
   		 	 if(remove > produto2.quantidade){
   			 	cout << "Produtos insuficientes no estoque\n";
   			}else{
   			 	produto2.quantidade-= remove;
   			 	cout << "Produtos restantes: " << produto2.quantidade <<endl;
			}
   		
   			 break;
   		case 3:
   			produto3.mostra();
   			 cout << "================================================\n";
   			 cout << "Informe a quantidade que gostaria de pegar" <<endl;
   			 cin >> remove;
   			 if(remove > produto3.quantidade){
   			 	cout << "Produtos insuficientes no estoque\n";
   			}else{
   			 	produto3.quantidade-= remove;
   			 	cout << "Produtos restantes: " << produto3.quantidade <<endl;
			}
   			
   			break;
   		case 4:
   			produto4.mostra();
   			 cout << "================================================\n";
   			 cout << "Informe a quantidade que gostaria de pegar" <<endl;
   			 cin >> remove;
   			 if(remove > produto4.quantidade){
   			 	cout << "Produtos insuficientes no estoque\n";
   			}else{
   			 	produto4.quantidade-= remove;
   			 	cout << "Produtos restantes: " << produto4.quantidade <<endl;
			}
   			
   			break;
   		case 5:
   			produto5.mostra();
   			 cout << "================================================\n";
   			 cout << "Informe a quantidade que gostaria de pegar" <<endl;
   			 cin >> remove;
			if(remove > produto5.quantidade){
   			 	cout << "Produtos insuficientes no estoque\n";
   			}else{
   			 	produto5.quantidade-= remove;
   			 	cout << "Produtos restantes: " << produto5.quantidade <<endl;
			} 
   			 
   			break;
   		default:
   			cout << "Não temos um produto com este código" <<endl;
   }
   
   cout << "Gostaria de continuar?" <<endl;
   cin >> confirmacao;
}while(confirmacao=="S" || confirmacao=="s" || confirmacao=="Sim" || confirmacao == "sim");
 
   
   return 0;
}


