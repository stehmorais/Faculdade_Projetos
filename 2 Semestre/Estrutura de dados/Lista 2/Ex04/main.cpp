#include <iostream>
#include <locale>

using namespace std;

/* 4) Considerando a estrutura do exercício anterior, escreva uma função que receba seis pontos, preenchidos
pelo usuário. Os três primeiros pontos formam um triângulo e os outros três formam outro triângulo.
Comparando os dois triângulos, classifique se são isósceles, equiláteros e escalenos.
*/

// escaleno = quando todos os lados são diferentes (os 3 pontos sao diferentes um o doutro)
// isósceles = quando dois lados sao iguais e um é diferente ( 2 pontos iguais e 1 ponto diferente)
// equilátero = quando todos os pontos são iguais ( 3 pontos iguais um ao outro)


struct Triangulo{
	int a;
	int b;
	int c;
};
	
void pegaPontos(){
	struct Triangulo pontos[2];
	
	cout << "Informe os numeros do primeiro triangulo" <<endl;
	cin >> pontos[0].a >> pontos[0].b >> pontos[0].c;
	cout << pontos[0].a << pontos[0].b << pontos[0].c <<endl;
	
	cout << "Informe os numeros do segundo triangulo" <<endl;
	cin >> pontos[1].a >> pontos[1].b >> pontos[1].c;
	cout << pontos[1].a << pontos[1].b << pontos[1].c <<endl;
	
	for (int i=0; i<2; i++){
		if(pontos[i].a != pontos[i].b && pontos[i].b != pontos[i].c && pontos[i].c != pontos[i].a){
			cout << "O triangulo " << i+1 << " é escaleno";
		}else if (pontos[i].a == pontos[i].b && pontos[i].a != pontos[i].c || pontos[i].c == pontos[i].a && pontos[i].c != pontos[i].b){
			cout << "O triangulo " << i+1 << " é isósceles";
		}else if(pontos[i].a == pontos[i].b && pontos[i].b == pontos[i].c) {
			cout << "O triangulo " << i+1 << "é equilátero";	
		}
	} 

}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	pegaPontos();	
	return 0;
}
