// https://www.thehuxley.com/problem/2176

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS
// 1 galao = 3.8L

int main() {
	// VARIAVEIS CRIADAS
	float gal_eua, lit_bra, cot_dol, lit_dol, lit_eua;
	
	// DADOS INSERIDOS
	scanf(" %f %f %f", &gal_eua, &lit_bra, &cot_dol);
	
	// GALAO PARA LITROS
	litdol = galeua/3.8;
	
	// DOLAR PARA REAIS
	liteua = litdol*cotdol;
	
	// RESULTADOS DAS CONDICIONAIS
	printf("Gasolina EUA: R$ %.2f\n", liteua);
	printf("Gasolina Brasil: R$ %.2f\n", litbra);
	if(litbra>liteua){
		printf("Mais barata nos EUA");
	}else if(litbra<liteua){
		printf("Mais barata no Brasil");
	}else{
		printf("Igual");
	}
	
	return 0;
}
