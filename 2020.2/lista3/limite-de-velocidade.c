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
	
	valor = CalculaMulta(velocidade);
	
    // IMPRIMIR RESULTADOS
	printf("%.2f", valor);
	
	return 0;
}

// DECLARACAO DE VARIAVEIS
float CalculaMulta(int velocidade){
	float multa;
	
	if(velocidade>50 && velocidade<=55){
		return 230.00;
	}else if(velocidade>55 && velocidade<=60){
		return 340.00;
	}else if(velocidade>60){
		multa = ((velocidade-50) * 19.28);
		return multa;
	}
}
