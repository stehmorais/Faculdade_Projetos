#include <iostream>
#include <locale>
 
using namespace std;
 
int main( ) {
setlocale(LC_ALL, "Portuguese");

	int destino,plano;
	float preco;
	string resposta;
	
	do{
		
	

	cout << "==================================MENU DE OPÇÃO DE DESTINO =========================================\n";  
 
   	cout << "|                                                                                                 | \n";  
 
   	cout << "|.1 Região Norte --- .2 Região Nordeste --- .3 Região Centro-Oeste --- .4 Região Sul --- .5 SAIR  | \n"; 
 
    cout << "|                                                                                                 | \n"; 
 
  	cout << "====================================================================================================\n"; 
 	cin >> destino; 	
    
    cout << "============================ESCOLHA SEU PLANO DE VIAGEM================================ \n";  
    cout << "|                                                                                     | \n";  
    cout << "|.1 IDA --- .2 IDA e VOLTA  --- .5 Desejo realmente SAIR.                             | \n"; 
    cout << "|                                                                                     | \n"; 
	cout << "======================================================================================= \n"; 
    cin >> plano;
    
      switch(destino){ 
 
        case 1: 
             cout <<"Destino escolhido: Região Norte \n";
             if(plano==1){
             	preco=500.00;
		 	}else {
 				preco=900.00;
	 	}
			cout <<"O Preço da sua viagem ficou: R$ " << preco <<endl;
            cout <<"Fechar viagem? 'S' = Sim [] 'N' = Não [] \n";
            cin >> resposta;
            if (resposta=="S"){
            	cout <<"Passagem comprada \n";
			}else{
				cout <<"Você voltou ao Menu \n";
		}
        break;  	 
 
		case 2: 
         cout <<"Destino escolhido: Região Nordeste \n";
             if(plano==1){
             	preco=350.00;
 			} else {
 				preco=650.00;
		}
			cout <<"O Preço da sua viagem ficou: R$ " << preco <<endl;
            cout <<"Fechar viagem? Sim [] Não [] \n";
            cin >> resposta;
                 if (resposta=="S"){
            	cout <<"Passagem comprada \n";
			}else{
				cout <<"Você voltou ao Menu \n";
		}
		break; 
 
		case 3:  
 			cout <<"Destino escolhido: Região Centro-Oeste \n";
             if(plano==1){
             	preco=350.00;
 			} else {
 				preco=600.00;
 		}
			cout <<"O Preço da sua viagem ficou: R$ " << preco <<endl;
            cout <<"Fechar viagem? Sim [] Não [] \n";
            cin >> resposta;
                 if (resposta=="S"){
            	cout <<"Passagem comprada \n";
			}else{
				cout <<"Você voltou ao Menu \n";
		}
		break; 
 
		case 4:  
 			cout <<"Destino escolhido: Região Sul \n";
             if(plano==1){
             	preco=300.00;
 			} else {
 				preco=550.00;
 		}
			cout <<"O Preço da sua viagem ficou: R$ " << preco <<endl;
            cout <<"Fechar viagem? Sim [] Não [] \n";
            cin >> resposta;
                 if (resposta=="S"){
            	cout <<"Passagem comprada \n";
			}else{
				cout <<"Você voltou ao Menu \n";
		}
   		break; 
   		
 		case 5: 
			 cout <<"Você Saiu"<<endl;
 		break;		
 
	} 
}while(destino!=5);

return 0;
}


