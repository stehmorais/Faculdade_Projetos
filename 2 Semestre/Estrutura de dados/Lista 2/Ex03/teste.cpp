#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

/* 3)	Escreva um programa que calcule a distância entre dois pontos no plano cartesiano. Cada ponto é um par (x,y) de reais (double).
	 Escreva uma estrutura para armazenar cada ponto. O cálculo da distância deverá ser feita em uma função separada que vai receber os dois pontos 
	 (na forma de struct), fazer o cálculo e retornar o resultado para ser exibido na main. 
	DICA: segue o link para saber como é a fórmula da distância de 2 pontos.  */

 struct Ponto{
    double x;
    double y;
 }; 
 
// função para pegar os pontos
void pegaPontos(Ponto par[]) {
    for(int i = 0; i < 2; i++) {
        cout << "digite valores x e y  do ponto " << i + 1 << endl;
        cin >> par[i].x >> par[i].y;
    }
}

double CalcDistancia(Ponto par[]) {
    double distancia = 0;
    for(int i = 0; i < 2; i++) {
        distancia += sqrt(pow(par[i].x, 2) + pow(par[i].y, 2));
    }
    return distancia;
}

void imprimir(double distancia, Ponto par[]) {
    for (int i = 0; i < 2; i++) {
        cout << "Ponto " << i << " = " << par[i].x << ", " << par[i].y <<endl;
    }
    cout << "Distância = " << distancia << endl;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
    Ponto pares[2];
    pegaPontos(pares);
    imprimir(CalcDistancia(pares), pares);
}
