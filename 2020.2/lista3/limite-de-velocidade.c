// https://www.thehuxley.com/problem/400

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

// CHAMADO DA FUNCAO
float CalculaMulta(int velocidade);

int main() {
    // DECLARACAO DE VARIAVEIS
	int velocidade;
	float valor;
	
    // ENTRADA DE DADOS
	scanf(" %i", &velocidade);
	
	// CHAMADA DA FUNCAO
	valor = CalculaMulta(velocidade);
	
    // IMPRIMIR RESULTADOS
	printf("%.2f", valor);
	
	return 0;
}

// DECLARACAO DE VARIAVEIS
float CalculaMulta(int velocidade){
	float multa;
	
	// CONDICAO DA VELOCIDADE 50 < v <= 55
	if(velocidade>50 && velocidade<=55){
		return 230.00;
	}
	
	// CONDICAO DA VELOCIDADE 55 < v <= 60
	else if(velocidade>55 && velocidade<=60){
		return 340.00;
	}
	
	// CONDICAO DA VELOCIDADE v > 60
	else if(velocidade>60){
		return (velocidade-50) * 19.28);
	}
}
