#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um programa que peça para o usuário informar valores inteiros.
O programa deverá realizar a soma total dos valores informados,
o algoritimo deverá ser interrompido quando a soma dos valores informados pelo usuário for maior do que 100 */

int main() {
	int valor, soma = 0;
	while(soma<=100){
		printf("Digite um valor: \n");
		scanf("%d", &valor);
		soma = soma + valor;
	}
}
