// https://www.thehuxley.com/problem/3342

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
//BIBLIOTECAS ADICIONADAS

int main(){
  // DEFININDO O PORTUGUÊS COMO IDIOMA PADRÃO
	setlocale(LC_ALL, "Portuguese");
	
  // CRIAÇÃO DAS VARIÁVEIS INICIAIS
	char Times1[8];
	int Quartas1[2], Quartas2[2], Quartas3[2], Quartas4[2];
	
  // CICLO DA ENTRADA DOS TIMES E DOS SORTEIOS DAS QUARTAS
  int i;
	for(i=0;i<8;i++){
		scanf(" %c", &Times1[i]);
	}
	scanf(" %i %i", &Quartas1[0], &Quartas1[1]);
	scanf(" %i %i", &Quartas2[0], &Quartas2[1]);
	scanf(" %i %i", &Quartas3[0], &Quartas3[1]);
	scanf(" %i %i", &Quartas4[0], &Quartas4[1]);
	
  // CRIAÇÃO DAS VARIÁVEIS DA SEMIFINAL E RESULTADOS DAS QUARTAS
	char Semifinal1[2], Semifinal2[2];
	char ResultadosQuartas[4];

  // CICLO DA ENTRADA DOS RESULTADOS
	for(i=0;i<4;i++){
		scanf(" %c", &ResultadosQuartas[i]);
	}
	
  // CONDIÇÕES DE VITÓRIA DAS QUARTAS
	if(ResultadosQuartas[0] == 'A'){
		Semifinal1[0] = Times1[Quartas1[0]];
	}else{
		Semifinal1[0] = Times1[Quartas1[1]];
	}
  
	if(ResultadosQuartas[1] == 'A'){
		Semifinal1[1] = Times1[Quartas2[0]];
	}else{
		Semifinal1[1] = Times1[Quartas2[1]];
	}
  
	if(ResultadosQuartas[2] == 'A'){
		Semifinal2[0] = Times1[Quartas3[0]];
	}else{
		Semifinal2[0] = Times1[Quartas3[1]];
	}
  
	if(ResultadosQuartas[3] == 'A'){
		Semifinal2[1] = Times1[Quartas4[0]];
	}else{
		Semifinal2[1] = Times1[Quartas4[1]];
	}
	
  // CRIAÇÃO DAS VARIÁVEIS DA FINAL E RESULTADO DAS SEMIS
	char ResultadosSemis[2];
	char Final[2];
	
  // CICLO DOS RESULTADOS DAS SEMIS
	for(i=0;i<2;i++){
		scanf(" %c", &ResultadosSemis[i]);
	}
  
  // CONDIÇÕES DE VITÓRIA DA SEMI
	if(ResultadosSemis[0] == 'X'){
		Final[0] = Semifinal1[0];
	}else{
		Final[0] = Semifinal1[1];
	}
  
	if(ResultadosSemis[1] == 'X'){
		Final[1] = Semifinal2[0];
	}else{
		Final[1] = Semifinal2[1];
	}
	
  // CRIAÇÃO DAS VARIÁVEIS DE CAMPEÃO E RESULTADO DA FINAL
	char Campeao;
	char ResultadoFinal;
	
  // ENTRADA E CONDIÇÃO DO RESULTADO
	scanf(" %c", &ResultadoFinal);
	if(ResultadoFinal == '#'){
		Campeao = Final[0];
	}else{
		Campeao = Final[1];
	}
	
  // RESULTADOS IMPRIMIDOS NA TELA
	printf("Quartas de final 1: %c x %c\n", Times1[Quartas1[0]], Times1[Quartas1[1]]);
	printf("Quartas de final 2: %c x %c\n", Times1[Quartas2[0]], Times1[Quartas2[1]]);
	printf("Quartas de final 3: %c x %c\n", Times1[Quartas3[0]], Times1[Quartas3[1]]);
	printf("Quartas de final 4: %c x %c\n", Times1[Quartas4[0]], Times1[Quartas4[1]]);
	printf("Semifinal 1: %c x %c\n", Semifinal1[0], Semifinal1[1]);
	printf("Semifinal 2: %c x %c\n", Semifinal2[0], Semifinal2[1]);
	printf("Final: %c x %c\n", Final[0], Final[1]);
	printf("O vencedor da competição de futebol de robôs foi %c!", Campeao);
	
	return 0;
}
