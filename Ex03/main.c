#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo que pe�a para o usu�rio informar um n�mero.
O algoritmo dever� informa se o n�mero � par ou �mpar. */

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
