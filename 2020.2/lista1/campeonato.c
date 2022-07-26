#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// BIBLIOTECAS ADICIONADAS

int main() {
	// VARIAVEIS CRIADAS
	int cv, ce, cs, fv, fe, fs, cp, fp;
	
	// DADOS ADICIONADOS
	fflush(stdin);
	scanf(" %i %i %i %i %i %i", &cv, &ce, &cs, &fv, &fe, &fs);
	fflush(stdin);
	
	// CALCULOS DOS PONTOS
	cp = cv*3 + ce;
	fp = fv*3 + fe;
	
	// RESULTADOS APRESENTADOS
	if (cp > fp){
		printf("C");
	}else if (cp < fp){
		printf("F");
	}else if (cp == fp){
		if (cs > fs){
			printf("C");
		}else if (cs < fs){
			printf("F");
		}else if (cs == fs){
			printf("=");
		}
	}
	
	return 0;
}
