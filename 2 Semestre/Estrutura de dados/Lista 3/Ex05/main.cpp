#include <iostream>
#include <locale>

using namespace std;

/* 5) O que aparecer� quando executarmos o programa abaixo?

// 20, pois o ponteiro tempo esta recebendo o endere�o de count e atribuindo 20 a ele
// depois ele recebe o endere�o de sum e atribui o count a ele que atualmente � 20
// ent�o no final todos ficam 20.

int count = 30, *temp, sum = 2;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
Cout << � count = �count << �*temp = � *temp << �sum = � sum */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout << "Valores:  ";
	cout << "count = " << count << " *temp = " <<  *temp << " sum = " << sum <<endl;
	
	return 0;
}
