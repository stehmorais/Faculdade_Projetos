#include <iostream>
#include <locale>
 
using namespace std;
 
int main( ) {
setlocale(LC_ALL, "Portuguese");

int idade,gotas;
float peso;
 
cout << "Informe a sua idade \n";
cin >> idade;
 
cout << "Informe o seu peso \n";
cin >> peso;
 
if (idade>=12) {
if (peso>=60.0){
gotas= 1000/25;
cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;	
    }else{
     	gotas= 875/25;
cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;	
    	}
}

if (idade <12){
    if (peso >=5 and peso <=9){
        gotas= 125/25;
        cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;
    }
    if (peso >=9.1 and peso <=16){
        gotas=250/25;
        cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;
    }
     if (peso >=16.1 and peso <=24){
        gotas=375/25;
        cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;
    }
      if (peso >=24.1 and peso <=30){
        gotas=500/25;
        cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;
    }
      if (peso >30){
        gotas=750/25;
        cout<<"Você deve tomar: "<< gotas <<"gotas"<<endl;
    }
}

return 0;
}

