#include <iostream>
#include <locale>
 
using namespace std;
 
int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int n1=0, n2=1, term, n;
    
    
    cout<<"Insira quantos termos deseja exibir: \n";
    cin>>term;
    cout<<n1<<" - "<<n2<<" - ";
    for (int i=0; i<=term;i++) {
       cout<< (n1+n2) <<" - ";
       n=n1;
       n1=n2;
       n2=n2+n;
    }
return 0;
}


