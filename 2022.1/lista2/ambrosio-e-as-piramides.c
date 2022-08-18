// https://www.thehuxley.com/problem/2210

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

int main(){
  // VARIAVEL DA ALTURA DA PIRAMIDE
	int h;
	
  // ENTRADA DA VARIAVEL
	scanf(" %d", &h);
	
  // VARIAVEIS CRIADAS PARA FAZER O CICLO
  int i, j;
	for(i=0; i<h; i++){
    
    // PRIMEIRO CICLO PARA OS PONTOS DO LADO ESQUERDO
		for(j=0; j<h-i-1; j++){
			printf(".");
		}
    
    // PIRAMIDE
		for(j=0; j<i*2+1; j++){
      // "PONTAS" DA PIRAMIDE OU ASTERISCO
			if(j==0 || j==i*2){
				printf("*");
			}
      
      // DENTRO DA PIRAMIDE OU HIFENS
      else{
				printf("-");
			}
		}
    
    // SEGUNDO CICLO PARA FAZER OS PONTOS DO LADO DIREITO
		for(j=0; j<h-i-1; j++){
			printf(".");
		}
    
    // QUEBRA DE LINHA
		printf("\n");
	}
	
	return 0;
}
