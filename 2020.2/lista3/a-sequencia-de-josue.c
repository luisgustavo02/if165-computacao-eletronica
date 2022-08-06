#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<locale.h>
//BIBLIOTECAS ADICIONADAS

int checkSeq(char x, char y){
	if(x == y-1){
		return 1;
	}else{
		return 0;
	}
}

int checkBis(char x, char y){
	if(x == y-2){
		return 1;
	}else{
		return 0;
	}
}

int checkTris(char x, char y){
	if(x == y-3){
		return 1;
	}else{
		return 0;
	}
}

int checkVog(int x){
	if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	// IDIOMA PORTUGUES SELCIONADO
	setlocale(LC_ALL, "Portuguese");

	// VARIAVEIS CRIADAS
  char c1, c2, c3;
	
	// CARACTERES INSERIDOS
	scanf(" %c %c %c", &c1, &c2, &c3);
	
	// CONDICAO ETIQUETAS ERRADAS
	if((islower(c1) || isdigit(c1)) || (islower(c2) || isdigit(c2)) || (islower(c3) || isdigit(c3))){
		printf("Etiquetas erradas!");
	}else{
		
		// CONDICAO SEQUENCIAS
		if(checkSeq(c1, c2) && checkSeq(c2, c3)){
		
			// CONDICAO SEQUENCIA QUASE PERFEITA
			if(checkVog(c1) || checkVog(c2) || checkVog(c3)){
				printf("Sequência quase perfeita.");
			}
			
			// CONDICAO SEQUENCIA PERFEITA
			else{
				printf("Sequência perfeita.");
			}
		}
		
		// CONDICAO BISSEQUENCIA
		else if(checkBis(c1, c2) && checkBis(c2, c3)){
			
			// CONDICAO BISSEQUENCIA QUASE PERFEITA
			if(checkVog(c1) || checkVog(c2) || checkVog(c3)){
				printf("Bissequência quase perfeita.");
			}
			
			// CONDICAO BISSEQUENCIA PERFEITA
			else{
				printf("Bissequência perfeita.");
			}
		}
		
		// CONDICAO TRISSEQUENCIA
		else if(checkTris(c1, c2) && checkTris(c2, c3)){
			
			// CONDICAO TRISSEQUENCIA QUASE PERFEITA
			if(checkVog(c1) || checkVog(c2) || checkVog(c3)){
				printf("Trissequência quase perfeita.");
			}
			
			// CONDICAO TRISSEQUENCIA PERFEITA
			else{
				printf("Trissequência perfeita.");
			}
		}
		
		// CONDICAO SO UMAS LETRAS AI
		else{
			printf("Só umas letras ai...");
		}
	
	return 0;
}
