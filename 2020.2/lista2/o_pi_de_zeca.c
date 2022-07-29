// https://www.thehuxley.com/problem/3335

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//BIBLIOTECAS ADICIONADAS

// EQUACAO 1
double eq1(int x){
	double y;
	int i;		
	
	for(i=0;i<x;i++){
		y += pow(-1.0,i)/((2.0*i)+1.0);
	}
	return y;
}

// EQUACAO 2
double eq2(int x){
	double y;
	int i;
	
	for(i=0;i<x;i++){
		y += 2/((4.0*i + 1.0)*(4.0*i + 3));
	}
	return y;
}

// EQUACAO 3
double eq3(int x){
	double y=3.0;
	int d1=2, d2=3, d3=4, i;
	
	for(i=0;i<x-1;i++){
		y += (4 * pow(-1.0,i))/(d1 * d2 * d3);
		d1 += 2.0;
		d2 += 2.0;
		d3 += 2.0;
	}
	return y;
}

// PRINCIPAL
int main(){
    // DECLARACAO DA VARIAVEL
	int num;
	
    // ENTRADA DA VARIAVEL
	scanf(" %i", &num);
	
    // RESULTADOS
	printf("%.6lf - %.6lf\n", eq1(num)*2.0, (eq1(num)*4.0)/M_PI);
	printf("%.6lf - %.6lf\n", eq2(num)*4.0, (eq2(num)*4.0)/M_PI);
	printf("%.6lf - %.6lf", eq3(num), eq3(num) / M_PI);
	
	return 0;
}
