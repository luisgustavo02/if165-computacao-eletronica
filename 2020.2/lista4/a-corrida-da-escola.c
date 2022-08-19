// https://www.thehuxley.com/problem/207

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS INCLUIDAS

int main() {
  // VARIAVEIS DECLARADAS DA LINHA E COLUNA
  int M, N;
  
  // ENTRADA DAS VARIAVEIS
  scanf(" %d %d", &M, &N);
  
  // DECLARACAO DA MATRIZ E DO VETOR DA SOMA DOS TEMPOS
  int Matriz[M][N];
  int tempos[M];
    
  // DECLARACAO DAS VARIAVEIS DO CICLO
  int i, j;
  for(i=0; i<M; i++){
    for(j=0; j<N; j++){
      // ENTRADA DOS ELEMENTOS DA MATRIZ
      scanf(" %d", &Matriz[i][j]);
    }
  }
  
  // CRIACAO DAS VARIAVEIS DE INDICE E MELHOR TEMPO
  int index = 0, melhor = 100000;
  
  // CICLO PARA FAZER O COMPARATIVO
  for(i=0; i<M; i++){
    // SOMATORIO DOS TEMPOS DE CADA ALUNO
    tempos[i] = 0;
    for(j=0; j<N; j++){
        tempos[i] += Matriz[i][j];
    }
    
    // ATRIBUTO INICIAL
    if(i == 0){
        melhor = tempos[i];
    }
    
    // COMPARATIVO
    if(tempos[i] < melhor){
        melhor = tempos[i];
        index = i;
    }
  }
  
  // IMPRIMIR RESULTADOS
  printf("%d", index+1);
    
	return 0;
}
