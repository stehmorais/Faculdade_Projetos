#include <iostream> 
#include <locale>
using namespace std; 

int main( ) { 
setlocale(LC_ALL, "Portuguese");
int prato, sobremesa, bebida, calorias; 

calorias=0; 

    cout << " ESCOLHA SUA REFEIÇÃO \n"; 

    cout << "==================================OPCOES DE PRATO====================================== \n"; 

    cout << "|                                                                                     | \n"; 

    cout << "|.1 Vegetariano --- .2 Peixe --- .3 Frango --- .4 Carne    | \n";  

    cout << "|                                                                                     | \n"; 

    cout << "======================================================================================= \n"; 

    cin >> prato; 

    switch(prato){ 

        case 1: 

  		calorias=calorias+180; 

	break;  	 

		case 2: 

  		calorias=calorias+230; 

	break; 

		case 3:  

  		calorias=calorias+250; 

	break; 

		case 4:  

        calorias=calorias+350; 

	break; 

	} 

 

 	cout << "==================================OPCOES DE     SOBREMESAS================================= \n";  

    cout << "|                                                                                     | \n";  

    cout << "|.1 Abacaxi --- .2 Sorvete Diet --- .3 Moussie Diet --- .4 Moussie chocolate          | \n"; 

    cout << "|                                                                                     | \n"; 

    cout << "======================================================================================= \n"; 

    cin >> sobremesa; 

    switch(sobremesa){ 

        case 1: 

  		calorias=calorias+75; 

	break;  	 

		case 2: 

  		calorias=calorias+110; 

	break; 

		case 3:  

  		calorias=calorias+170; 

	break; 

		case 4:  

  		calorias=calorias+200; 

   	break; 

	} 

     

    cout << "=====================================OPCOES DE     BEBIDAS================================= \n"; 

    cout << "|                                                                                     | \n"; 

    cout << "|.1 Cha --- .2 Suco de Laranja --- .3 Suco de Melão --- .4 Refrigerante Diet          | \n";  

    cout << "|                                                                                     | \n"; 

    cout << "======================================================================================= \n"; 

    cin >> bebida; 

   	switch(bebida){ 

        case 1: 

  		calorias=calorias+20; 

	break;  	 

		case 2: 

  		calorias=calorias+70; 

	break; 

		case 3:  

  		calorias=calorias+100; 

	break; 

		case 4:  

  		calorias=calorias+65; 

	break; 

	} 

 	cout <<"A soma das suas calorias é: " << calorias <<endl; 

     
	return 0; 

} 
