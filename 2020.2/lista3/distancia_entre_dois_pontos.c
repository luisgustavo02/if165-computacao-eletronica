// https://www.thehuxley.com/problem/3161

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

int main(){
  // DECLARACAO DE VARIAVEIS
	int xa, ya, xb, yb;
	int deltax, deltay, distancia;
	
	//DADOS INSERIDOS
	scanf(" %i %i %i %i", &xa, &ya, &xb, &yb);
  
  // 	CALCULO DA DISTANCIA
	deltax = (xa - xb);
	deltay = (ya - yb);
	distancia = sqrt(pow(deltax, 2) + pow(deltay, 2));
	
	// IMPRIMIR RESULTADOS
	printf("%i", distancia);
	
	return 0;
}
