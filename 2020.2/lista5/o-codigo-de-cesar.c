// https://www.thehuxley.com/problem/3629

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
// BIBLIOTECAS ADICIONADAS

int main(){
    // VARIAVEL K DE ACRESCIMO
    int indice;
    
    // FRASE A SER CRIPTOGRAFADA
    char codigo[30];
    
    // ENTRADA DA FRASE
    scanf(" %[^\n]s", codigo);
    
    // ENTRADA DE K
    scanf(" %d", &indice);
    
    // CICLO PERCORRENDO A FRASE
    for(int i=0; codigo[i]!='\0';i++){
        // TRANSFORMANDO A LETRA EM MINUSCULA
        codigo[i] = tolower(codigo[i]);
        
        // ADICIONANDO O INDICE
        codigo[i] += indice;
        
        // IMPRIMINDO A LETRA
        printf("%c", codigo[i]);
    }
    
    return 0;
}
