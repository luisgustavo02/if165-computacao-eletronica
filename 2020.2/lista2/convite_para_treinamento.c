#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

int main() {
    // CRIACAO DAS VARIAVEIS
	int i, pontmin, alunos, p1, p2, ptot;
	
    // DADOS INSERIDOS
	scanf(" %i %i", &i, &pontmin);
	alunos = 0;
	
    // CICLO DA QUANTIDADE DOS COMPETIDORES
	while(i!=0){
        // ENTRADA DAS PONTUACOES
		scanf(" %i %i", &p1, &p2);
		ptot = p1 + p2;
        
        // CONDICIONAL PARA ALUNO SER CONVIDADO
		if(p1!=0 && p2!=0 && ptot >= pontmin){
			alunos++;
		}
        
		i--;
	}
	printf("%i", alunos);
	
	return 0;
}
