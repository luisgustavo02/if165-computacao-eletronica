// https://www.thehuxley.com/problem/75

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
// BIBLIOTECAS ADICIONADAS

int main(){
    // CRIANDO VARIAVEIS DOS 37 VOOS
    int Voos[37][2];

    // CICLO DE ENTRADA DOS DADOS DOS VOOS
    for(int i=0; i<37; i++){
        scanf(" %d %d", &Voos[i][0], &Voos[i][1]);
    }
    
    // CICLO INFINITO DE PEDIDOS DE VOOS
    while(1){
        // CRIACAO DAS VARIAVEIS DA IDENTIDADE, VOO DESEJADO E VOO DISPONÍVEL
        int identidade, vooDesejado, voosLivre = 0;

        // ENTRADA DA IDENTIDADE E CONDIÇÃO DE PARADA
        scanf(" %i", &identidade);
        if(identidade == 9999){
            break;
        }
        
        // ENTRADA DO VOO DESEJADO
        scanf(" %i", &vooDesejado);

        // CICLO DE CHECAGEM DA DISPONIBILIDADE DOS VOOS
        for(int i=0; i<37; i++){
            // CHECAGEM DO VOO DESEJADO E DISPONIBILIDADE DE VAGA
            if(vooDesejado == Voos[i][0] && Voos[i][1]>0){
                // OCUPAÇÃO DA VAGA
                Voos[i][1]--;
                // IMPRESSÃO DA IDENTIDADE QUE RESERVOU O VOO
                printf("%i\n", identidade);
                // CONDIÇÃO DE VAGA RESERVADA NO VOO
                voosLivre = 1;
                break;
            }
        }
        
        // CONDIÇÃO DE VOO INDISPONÍVEL
        if(voosLivre == 0){
            printf("INDISPONIVEL\n");
        }
    }
    
    return 0;
}
