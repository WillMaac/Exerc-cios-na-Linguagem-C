#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um algoritmo que peça para o usuário informe um número.
Caso o número seja maior do que 10, o algoritmo deverá imprimir: "Maior que 10"*/

int main() {
	float numero;
	printf("Digite um número inteiro: \n");
	scanf("%f", &numero);
	if(numero > 10){
		printf("Valor maior que 10. \n");
	}
}
