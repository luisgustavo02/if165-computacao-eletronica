// https://www.thehuxley.com/problem/217

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
// BIBLIOTECAS ADICIONADAS

int main(){
    
    // VARIAVEIS CRIADAS
    int t, Consecutivos = 1, Maior = 0;
  
    // ENTRADA DA QUANTIDADE DE NUMEROS A SEREM INSERIDOS
    scanf(" %i", &t);
  
    // VETOR QUE OS NUMEROS SERAO ADICIONADOS
    int i, Sequencia[t];

    // CICLO DA ENTRADA DO VETOR
    for(i=0; i<t; i++){
        scanf(" %i", &Sequencia[i]);
    }

    // CICLO PARA CONTAR A QUANTIDADE DE CONSECUTIVOS
    for(i=0; i<t-1; i++){
        // CONDICAO PARA CADA OS NUMEROS SEJAM IGUAIS
        if(Sequencia[i] == Sequencia[i+1]){
            Consecutivos++;
            // CASO A QUANTIDADE DE CONSECUTIVOS SEJA MAIOR QUE A MAIOR QUANTIDADE DE CONSECUTIVOS ANTERIOR,
            // A TROCA DE VALORES EH REALIZADA
            if(Maior < Consecutivos){
                Maior = Consecutivos;
            }
        }
        
        // CASO A SEQUENCIA CONSECUTIVA SEJA QUEBRADA
        else{
            Consecutivos = 1;
        }
    }
    
    // IMPRIMIR A RESPOSTA
    printf("%i", Maior);

    return 0;
}
