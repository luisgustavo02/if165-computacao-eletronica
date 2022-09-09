// https://www.thehuxley.com/problem/3344

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS INCLUIDAS

int main(){
    // ENTRADA DO TAMANHO DO VETOR
    int p;
    scanf(" %i", &p);

    // VETORES INTEIROS CRIADOS
    int Sequencia1[p], Sequencia2[p];

    // ENTRADA DOS ELEMENTOS DO VETOR 1
    for (int i=0; i<p; i++){
        scanf(" %i", &Sequencia1[i]);
        Sequencia2[i] = Sequencia1[i];
    }
    
    // ORDENACAO DO VETOR 1 NO VETOR 2
    for (int i=0; i<p; i++){
        for (int j=i + 1; j<p; j++){
            if (Sequencia1[i] > Sequencia1[j]){
                int Extra = Sequencia1[i];
                Sequencia1[i] = Sequencia1[j];
                Sequencia1[j] = Extra;
            }
        }
    }
    
    // CALCULO DA QUANTIDADE DE ELEMENTOS IGUAIS ENTRE VETOR 1 E VETOR 2
    int t = 0;
    for (int i=0; i<p; i++){
        if (Sequencia1[i] == Sequencia2[i]){
            t++;
        }
    }
    
    // IMPRIMIR A QUANTIDADE DE ELEMENTOS IGUAIS
    printf("%i\n", t);

    // IMPRIMIR OS ELEMENTOS IGUAIS
    for (int i=0; i<p; i++){
        if (Sequencia1[i] == Sequencia2[i]){
            printf("%i %i\n", Sequencia1[i], i+1);
        }
    }
    
    return 0;
}
