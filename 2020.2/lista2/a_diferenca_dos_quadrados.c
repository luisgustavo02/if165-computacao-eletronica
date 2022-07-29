// https://www.thehuxley.com/problem/1006

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

int main() {
    // VARIAVEIS CRIADAS
	int num, n1, n2, pot1, pot2;
	
    // CICLO COM CONDICIONAL
	while(1){
        // INSERIR VARIAVEL E CONDICIONAL
		scanf(" %i", &num);
		if(num==0){
			break;
		}
        
        // CALCULO DOS QUADRADOS
		n1 = num/2;
		n2 = (num/2)+1;
		pot1 = pow(n1,2);
		pot2 = pow(n2,2);
        
        // RESULTADOS
		printf("%i - %i\n", pot2, pot1);
	}
  
	return 0;
}
