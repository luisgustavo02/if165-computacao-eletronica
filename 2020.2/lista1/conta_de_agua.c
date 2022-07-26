#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

int main() {
	int cons, extra1, extra2, extra3, preco;
	scanf(" %i", &cons);
	
	if (cons<=10){
		//CONSUMO PADRAO
	    printf("7");
	}else if(cons>=11 && cons<=30){
		//CONSUMO BAIXO
		extra1 = cons - 10;
		preco = 7 + (extra1 * 1);
		printf("%i", preco);
		
	}else if(cons>=31 && cons<=100){
		//CONSUMO MEDIO
		extra2 = cons - 30;
		preco = 7 + 20 + (extra2 * 2);
		printf("%i", preco);
		
	}else if(cons>=101){
		//CONSUMO ALTO
		extra3 = cons - 100;
		preco = 7 + 20 + 140 + (extra3 * 5);
		printf("%i", preco);
	}
	
	return 0;
}
