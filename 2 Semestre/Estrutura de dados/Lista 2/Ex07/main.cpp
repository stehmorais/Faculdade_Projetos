#include <iostream>
#include <locale>
#include <cstring>

using namespace std;
  
struct aeroporto{
	// 5 aeroportos 
	int codAero;
	string nome;
	int chegada;
	int saida;	
	
void cadastro(int stcodAero, string stnome){
	
	codAero = stcodAero;
	nome=stnome;	
}

};

struct Voos{
	// até 10 voos
	int codOrigem; 
	int codDestino;
	struct aeroporto;
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	struct aeroporto viagem[6];
	// variaveis para controle de voos
	int codigo=0,x=0,destino,a,b,c,d,e;
	string resposta;
	
	viagem[1].cadastro(1,"Lagos");
	viagem[2].cadastro(2,"Bartira");
	viagem[3].cadastro(3,"Selenium");
	viagem[4].cadastro(4,"Lobos");
	viagem[5].cadastro(5,"Castanhas");	
	
	
	cout << "==== AEROPORTO BRASIL ====" <<endl;
	
	do{
		cout << "Informe o código do seu aeroporto de embarque para fazermos a verificação de passagem\n";
		cin >> codigo;	
		if(codigo < 0 || codigo > 5){
			cout << "Codigo inválido";
		}else{
			cout << "\nTudo certo!\n" << "Preparando a sua viagem" <<endl;
		
			cout << "\nInsira o código do seu destino escolhido\n";
			cout << "1 - Aeroporto Lagos" <<"\n";
			cout << "2- Aeroporto Bartira" <<"\n";
			cout << "3- Aeroporto Selenium" <<"\n";
			cout << "4- Aeroporto Lobos" <<"\n";
			cout << "5- Aeroporto Castanhas" <<endl;
			cin >> destino;
			
			if(codigo==destino){
				cout << "\nDestino inválido" <<endl;
			}else{
				switch(destino){
					case 1:
						a++;
						if(a>10){
							cout << "Numero de voos permitidos para este aeroporto alcançado, tente outro." <<endl;
						}else{
							cout << "\nPartindo de: " << viagem[codigo].nome <<"\n";
							cout << "Destino: " << viagem[destino].nome;
							cout << "\nVoos abertos para chegada a este aeroporto:" << a <<endl;
							cout << "\nAVISO: Somente 10 voos permitidos para este destino permitido, cuidado para não ultrapassar"<<endl;	
						}
						break;
					case 2:
						b++;
						if(b>10){
							cout << "Numero de voos permitidos para este aeroporto alcançado, tente outro." <<endl;
						}else{
							cout << "\nPartindo de: " << viagem[codigo].nome <<"\n";
							cout << "Destino: " << viagem[destino].nome;
							cout << "\nVoos abertos para chegada a este aeroporto:" << b <<endl;
							cout << "\nAVISO: Somente 10 voos permitidos para este destino permitido, cuidado para não ultrapassar"<<endl;		
						}	
						break;
					case 3:
						c++;
						if(c>10){
							cout << "Numero de voos permitidos para este aeroporto alcançado, tente outro." <<endl;
						}else{
							cout << "\nPartindo de: " << viagem[codigo].nome <<"\n";
							cout << "Destino: " << viagem[destino].nome;
							cout << "\nVoos abertos para chegada a este aeroporto:" << c <<endl;
							cout << "\nAVISO: Somente 10 voos permitidos para este destino permitido, cuidado para não ultrapassar"<<endl;		
						}				
						break;
					case 4:
						d++;
						if(d>10){
							cout << "Numero de voos permitidos para este aeroporto alcançado, tente outro." <<endl;
						}else{
							cout << "\nPartindo de: " << viagem[codigo].nome <<"\n";
							cout << "Destino: " << viagem[destino].nome;
							cout << "\nVoos abertos para chegada a este aeroporto:" << d <<endl;
							cout << "\nAVISO: Somente 10 voos permitidos para este destino permitido, cuidado para não ultrapassar"<<endl;		
						}	
						break;
					case 5:
						e++;
						if(e>10){
							cout << "Numero de voos permitidos para este aeroporto alcançado, tente outro." <<endl;
						}else{
							cout << "\nPartindo de: " << viagem[codigo].nome <<"\n";
							cout << "Destino: " << viagem[destino].nome;
							cout << "\nVoos abertos para cheaga a este aeroporto:" << e <<endl;	
							cout << "\nAVISO: Somente 10 voos permitidos para este destino permitido, cuidado para não ultrapassar"<<endl;	
						}			
						break;
				}
			}	
		}
		
		   	
		cout << "\nDeseja continuar com o cadastro de mais algum voo?"<<endl;
		cin >> resposta;
		
	}while(resposta=="Sim" || resposta=="s" || resposta=="sim");	
		
	
	return 0;
}

// verificar se ainda é possivel cadastras mais voos
