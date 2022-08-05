// https://www.thehuxley.com/problem/212

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

int main(){
	// VARIAVEIS DECLARADAS
	float num1, num2, num3, num4, num5, soma = 0, menor = 10.0, maior = 5.0;
	
	// ENTRADA DOS DADOS + COMPARACAO
	
	// NOTA 1
	scanf(" %f", &num1);
	if(num1 > maior){
		maior = num1;
	}
	if(num1 < menor){
		menor = num1;
	}
	
	// NOTA 2
	scanf(" %f", &num2);
	if(num2 > maior){
		maior = num2;
	}
	if(num2 < menor){
		menor = num2;
	}
	
	// NOTA 3
	scanf(" %f", &num3);
	if(num3 > maior){
		maior = num3;
	}
	if(num3 < menor){
		menor = num3;
	}
	
	// NOTA 4
	scanf(" %f", &num4);
	if(num4 > maior){
		maior = num4;
	}
	if(num4 < menor){
		menor = num4;
	}
	
	// NOTA 5
	scanf(" %f", &num5);
	if(num5 > maior){
		maior = num5;
	}
	if(num5 < menor){
		menor = num5;
	}
	
	// RESULTADO
	total = num1 + num2 + num3 + num4 + num5 - menor - maior;
	printf("%.1f", total);
	
	return 0;
}
