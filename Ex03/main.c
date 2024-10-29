#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo que peça para o usuário informar um número.
O algoritmo deverá informa se o número é par ou ímpar. */

int main() {
	int num, resto;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	resto = num % 2;
	if(resto == 0){
		printf("Par!");
	} else{
		printf("Impar");
	}
}
