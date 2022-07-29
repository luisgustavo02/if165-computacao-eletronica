// https://www.thehuxley.com/problem/3335

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

// FUNCAO PARA IDENTIFICAR PRIMO
int Primo(int num){
    int i = 2;
    while(i<num){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

// DESCOBRIR O PRÓXIMO PRIMO
int proxPrimo(int primo){
    while(1){
        primo++;
        if(Primo(primo)){
            return primo;
        }
    }
}

// DESCOBRIR O PRIMO ANTERIOR
int antPrimo(int primo){
    while(1){
        primo--;
        if(Primo(primo)){
            return primo;
        }
    }
}

// FUNCAO PRIMO DO ZECA
int primoZeca(int primo){
    return (antPrimo(primo) + proxPrimo(primo)) / 2;
}

int main(){
    // DECLARACAO DE VARIAVEIS
    int a, b, i, qtd = 0;
    
    // ENTRADA DOS DADOS
    scanf(" %d %d", &a, &b);
    
    // CHECAGEM DOS PRIMOS DO ZECA
    for(i=a; i<=b; i++){
        if(Primo(i)){
            if(primoZeca(i) == i){
                qtd++;
            }
        }
    }
    
    // IMPRIMIR RESULTADOS
    printf("%d", qtd);
    
    return 0;
}
