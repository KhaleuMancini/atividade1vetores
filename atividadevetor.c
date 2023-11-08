#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float valor[10];
	int i;
	for(i = 0 ; i <= 9 ; i++){
		printf("\nEscreva o numero da casa %d: ", i+1);
		scanf("%f", &valor[i]);
	}
	for(i=0 ; i <=9 ; i++){
		valor[i] = valor[i]*2;
		printf("\nO dobro do valor da posicao %d e %.2f", i+1,valor[i]);
	}
}
