// https://www.thehuxley.com/problem/3334

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

// FUNCAO PARA CHECAR ANO BISSEXTO
int checkBissexto(int ano){
    // CONDICAO ANOS BISSEXTOS
    if(ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0)){
        return 1;   // "TRUE"
    }
    
    // CONDICAO DOS ANOS NAO-BISSEXTOS
    else{
        return 0;   // "FALSE"
    }
}

// FUNCAO PARA CHECAR A QUANTIDADE DE ANOS BISSEXTOS NUM INTERVALO ENTRE [anoA, anoB]
int intervBissexto(int anoA, int anoB){
    // DECLARANDO VARIAVEIS DA QUANTIDADE DE ANOS BISSEXTOS E A VARIAVEL DO CICLO
    int bis = 0, i;
    
    // CICLO ENTRE OS ANOS
    for(i=anoA; i<anoB+1; i++){
        // CHECAGEM DO ANO BISSEXTO
        if(checkBissexto(i)){
            // ACRESCENTA UM ANO BISSEXTO 
            bis++;
        }
    }
    
    // RETORNO DA QUANTIDADE DE ANOS BISSEXTOS OU DIAS A MAIS NOS ANOS
    return bis;
}

// FUNCAO QUE RETORNA A QUANTIDADE DE DIAS NUM ANO
int diasNoAno(int dia, int mes, int ano){
    // QUANTIDADE DE DIAS INICIAL
    int dias = 0;
    
    // QUANTIDADE DE DIAS POR MES
    switch(mes){
        // JANEIRO
        case 1:
            dias = dia;
            break;
        // FEVEREIRO
        case 2:
            dias = dia + 31;
            break;
        // MARÇO
        case 3:
            dias=dia+59;
            break;
        // ABRIL
        case 4:
            dias=dia+90;
            break;
        // MAIO
        case 5:
            dias=dia+120;
            break;
        // JUNHO
        case 6:
            dias=dia+151;
            break;
        // JULHO
        case 7:
            dias=dia+181;
            break;
        // AGOSTO
        case 8:
            dias=dia+212;
            break;
        // SETEMBRO
        case 9:
            dias=dia+243;
            break;
        // OUTUBRO
        case 10:
            dias=dia+273;
            break;
        // NOVEMBRO
        case 11:
            dias=dia+304;
            break;
        // DEZEMBRO (CASO RESTANTE)
        default:
            dias=dia+334;
    }
    
    // PARA CASOS DE ANO BISSEXTO QUE JA TENHAM PASSADO FEVEREIRO
    if(mes > 2 && checkBissexto(ano)){
        dias ++;
    }
    
    // RETORNO DA QUANTIDADE TOTAL DE DIAS NUM ANO
    return dias;
}

// FUNCAO PARA CALCULAR A QUANTIDADE DE DIAS NUM MES
int diasNoMes(int mes, int ano){
    // QUANTIDADE DE DIAS NO MES
    int dias = 0;
    
    // QUANTIDADE DE DIAS NOS MESES QUE POSSUEM 31 DIAS
    if(mes == 1 || mes == 3|| mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        dias = 31;
    }
    
    // QUANTIDADE DE DIAS NOS MESES QUE POSSUEM 30 DIAS
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    }
    
    // QUANTIDADE DE DIAS EM FEVEREIRO
    else{
        if(checkBissexto(ano)){
            dias = 29;
        }else{
            dias = 28;
        }
    }
    
    // RETORNO DA QUANTIDADE DE DIAS NO MES
    return dias;
}

int main(){
    // DECLARACAO DAS VARIAVEIS QUE SERAO INSERIDAS
    int diaA, mesA, anoA, diaB, mesB, anoB;
    
    // ENTRADA DAS VARIAVEIS
    scanf(" %d/%d/%d %d/%d/%d", &diaA, &mesA, &anoA, &diaB, &mesB, &anoB);
    
    // QUANTIDADE DE DIAS A PARTIR DO ANO A
    int qtdDias;
    if(checkBissexto(anoA)){
        qtdDias = 366 - diasNoAno(diaA, mesA, anoA);
    }else{
        qtdDias = 365 - diasNoAno(diaA, mesA, anoA);
    }
    
    // DIAS ENTRE OS ANOS A E B
    int diasEntreAeB = 0;
    
    // CALCULO PARA ANOS IGUAIS
    if(anoA == anoB){
        diasEntreAeB = diasNoAno(diaB, mesB, anoB) - diasNoAno(diaA, mesA, anoA);
    }
    
    // CALCULO PARA UM ANO DE DIFERENCA
    else if(anoA == anoB + 1){
        diasEntreAeB = qtdDias + diasNoAno(diaB, mesB, anoB);
    }
    
    // CALCULO PARA TODOS OS OUTROS ANOS
    else{
        // QUANTIDADE DE DIAS RESTANTES NO ANO A + QUANTIDADE DE DIAS QUE JÁ PASSARAM NO ANO B + QUANTIDADE DE DIAS NO INTERVALO ANO A E ANO B
        // + QUANTIDADE DE DIAS EXTRAS PELOS ANOS BISSEXTOS
        diasEntreAeB = qtdDias + diasNoAno(diaB, mesB, anoB) + (365 * (anoB - (anoA + 1))) + intervBissexto(anoA + 1, anoB - 1);
    }
    
    // CRIACAO DA VARIAVEL DA DATA MEDIA E HORA (VARIAVEL AUXILIAR), QUE SERAO PRINTADOS
    int diaMedio = diaA, mesMedio = mesA, anoMedio = anoA, hora;
    
    // QUANTIDADE DE DIAS ENTRE DIA A E DIA MEDIO
    int diasEntreAeMedio;
    
    // CALCULO DAS HORAS NO "DIA MEDIO"
    if(diasEntreAeB % 2 == 0){
        hora = 0;
        diasEntreAeMedio = diasEntreAeB / 2;
    }else{
        hora = 1;
        diasEntreAeMedio = (diasEntreAeB - 1) / 2;
    }
    
    // CICLO PARA CALCULAR A DATA MEDIA
    for(/*SEM VALOR INICIAL*/; diasEntreAeMedio >= 1; diasEntreAeMedio--){
        // ACRESCENTANDO OS DIAS
        diaMedio++;
        
        // ACRESCENTANDO OS MESES
        if(diaMedio > diasNoMes(mesMedio, anoMedio)){
            diaMedio = 1;
            mesMedio++;
        }
        
        // ACRESCENTANDO OS ANOS
        if(mesMedio > 12){
            mesMedio = 1;
            anoMedio++;
        }
    }
    
    // IMPRIMINDO RESULTADOS NA TELA
    
    // DATA
    printf("%02d/%02d/%d ", diaMedio, mesMedio, anoMedio);
    /*if(diaMedio < 10 && mesMedio < 10){
        printf("0%d/0%d/%d ", diaMedio, mesMedio, anoMedio);
    }else if(diaMedio < 10 && mesMedio >= 10){
        printf("0%d/%d/%d ", diaMedio, mesMedio, anoMedio);
    }else if(mesMedio < 10){
        printf("%d/0%d/%d ", diaMedio, mesMedio, anoMedio);
    }else{
        printf("%d/%d/%d ", diaMedio, mesMedio, anoMedio);
    }*/
    
    // HORA
    if(hora){
        printf("12:00");
    }else{
        printf("00:00");
    }
    
    return 0;
}
