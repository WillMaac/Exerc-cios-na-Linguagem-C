#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um algoritmo que pe�a para o usu�rio informe um n�mero.
Caso o n�mero seja maior do que 10, o algoritmo dever� imprimir: "Maior que 10"*/

int main() {
	float numero;
	printf("Digite um n�mero inteiro: \n");
	scanf("%f", &numero);
	if(numero > 10){
		printf("Valor maior que 10. \n");
	}
}
