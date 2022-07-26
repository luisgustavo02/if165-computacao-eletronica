#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

int main(){
	// VARIAVEIS DECLARADAS
	float num, soma=0, menor=10.0, maior=5.0, total;
	int i;
	
	// CICLO DAS 5 NOTAS
	for(i=0;i<5;i++){
		scanf(" %f", &num);
		
		// CASO SEJA MAIOR OU MENOR
		if(num>maior){
			maior = num;
		}if(num<menor){
			menor = num;
		}
		
		soma = soma + num;
	}
	
	// RESULTADO
	total = soma - menor - maior;
	printf("%.1f", total);
	
	return 0;
}
