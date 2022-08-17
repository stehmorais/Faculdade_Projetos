#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int a;
	float maior=0, menor=0;
    float Notas[10];

    cout << "digite 10 notas\n" <<endl;

    for (a=0;a<=10;a++){
    	cout << "nota " << a << ": " <<endl;
    	cin >> Notas[a];
      
    if(a==0){
		maior=Notas[a];
		menor=Notas[a];
	}
    if(Notas[a]>maior){
		maior=Notas[a];
    }else{
       if(Notas[a]<menor){
    		menor=Notas[a];
        }
      }
    }
    cout << "\no maior valor é: "<< maior <<endl;
    cout << "\ne o menor valor é: " << menor <<endl;
    return 0;
}
