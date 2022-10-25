// https://www.thehuxley.com/problem/3633

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<locale.h>
// BIBLIOTECAS ADICIONADAS

// FUNCAO PARA DEIXAR A STRING EM MAIUSCULAS
void Maiusc(char jogada[]){
    for (int i=0; i<strlen(jogada); i++){
        jogada[i] = toupper(jogada[i]);
    }
}

int main(){
    // MUDANDO O IDIOMA PARA PORTUGUES
    setlocale(LC_ALL, "Portuguese");
    
    // DECLARACAO E ENTRADA DA QUANTIDADE DE JOGADAS
    int Tamanho;
    scanf(" %i", &Tamanho);
    Tamanho *= 2;
    
    // DECLARACAO E ENTRADA DAS JOGADAS DE CADA UM
    char Sequencia[Tamanho][8];
    for(int i=0; i<Tamanho; i++){
        scanf(" %s", Sequencia[i]);
    }

    // CHAMADA DA FUNCAO MAIUSCULA
    for(int i=0; i<Tamanho; i++){
        Maiusc(Sequencia[i]);
    }
    
    // DECLARACAO DA VARIAVEL QUE INDICA O RESULTADO
    int Resul = 0;

    // CICLO DE CADA RODADA
    for(int i=0; i<(Tamanho/2); i++){
        // KYARA JOGA PAPEL
        if(strcmp(Sequencia[i * 2], "PAPEL") == 0){
            
            // VINICIUS JOGA TESOURA
            if(strcmp(Sequencia[(i * 2) + 1], "TESOURA") == 0){
                // VINICIUS GANHA
                Resul++;
            }
            
            // VINICIUS JOGA PEDRA
            else if(strcmp(Sequencia[(i * 2) + 1], "PEDRA") == 0){
                // KYARA GANHA
                Resul--;
            }
            
            // EM CASO DE EMPATE, A VARIAVEL NAO MUDA
        }
        
        // KYARA JOGA TESOURA
        else if(strcmp(Sequencia[i * 2], "TESOURA") == 0){
            
            // VINICIUS JOGA PAPEL
            if(strcmp(Sequencia[(i * 2) + 1], "PAPEL") == 0){
                // KYARA GANHA
                Resul--;
            }
            
            // VINICIUS JOGA PEDRA
            else if(strcmp(Sequencia[(i * 2) + 1], "PEDRA") == 0){
                // VINICIUS GANHA
                Resul++;
            }
        }
        
        // KYARA JOGA PEDRA
        else if(strcmp(Sequencia[i * 2], "PEDRA") == 0){
            
            // VINICIUS JOGA PAPEL
            if(strcmp(Sequencia[(i * 2) + 1], "PAPEL") == 0){
                // VINICIUS GANHA
                Resul++;
            }
            
            // VINICIUS JOGA TESOURA
            else if(strcmp(Sequencia[(i * 2) + 1], "TESOURA") == 0){
                // KYARA GANHA
                Resul--;
            }
        }
    }

    // CONDICAO PARA VINICIUS GANHAR
    if(Resul>0){
        printf("KYARA VAI LAVAR A LOUÇA!");
    }
    
    // CONDICAO PARA KYARA GANHAR
    else if(Resul<0){
        printf("VINICIUS VAI LAVAR A LOUÇA!");
    }
    
    // CONDICAO DE EMPATE
    else{
        printf("OS DOIS VÃO LAVAR A LOUÇA JUNTOS!");
    }
    
    return 0;
}
