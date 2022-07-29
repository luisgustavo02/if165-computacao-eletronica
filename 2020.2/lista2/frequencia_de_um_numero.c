// https://www.thehuxley.com/problem/2843

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

int main() {
    // VARIAVEIS CRIADAS
	int vez, num, esc, apar;
	
    // PERGUNTAS NA TELA E DADOS SENDO RECEBIDOS
	printf("Digite a quantidade de numeros da sequencia:\n");
	scanf(" %i", &vez);
	printf("Digite o numero procurado:\n");
	scanf(" %i", &num);
	
    // CHECAGEM NA APARICAO DO NUMERO
	apar = 0;
	while(vez!=0){
		scanf(" %i", &esc);
		vez = vez - 1;
		if(esc==num){
			apar = apar + 1;
		}
	}
	
    // IMPRIMIR RESULTADO NA TELA
	printf("O numero %i apareceu na sequencia %i vezes.", num, apar);
	
	return 0;
}
