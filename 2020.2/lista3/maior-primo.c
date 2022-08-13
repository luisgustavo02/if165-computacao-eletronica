// https://www.thehuxley.com/problem/470

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

int main(){
  // VARIAVEL NUM CRIADA
	int num;
	
  // PRIMEIRA ENTRADA
	scanf(" %d", &num);
	
  // VARIAVEIS DO CICLO CRIADAS
	int i, maiorPrimo = 0, aux;
  
  // CICLO WHILE COM CONDIÇÃO DE num != 404
	while(num != 404){
    // DEFININDO VARIAVEL AUXILIAR
		aux = 0;
    
    // CICLO PARA CHECAGEM DE DIVISORES DE num
		for(i=2; i<num; i++){
			if(num % i == 0){
				aux++;
			}
		}
    
    // CONDIÇÃO PARA CASO num SEJA O MAIOR PRIMO
		if(aux == 0 && num > 1 && num > maiorPrimo){
			maiorPrimo = num;
		}
		
    // ENTRADA DE UM NOVO NÚMERO
		scanf(" %d", &num);
	}
	
  // CASO TENHA PRIMOS
	if(maiorPrimo != 0){
		printf("%d", maiorPrimo);
	}
  
  // CASO N
  else{
		printf("SEM PRIMOS");
	}
	
	return 0;
}
