#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um programa que pe�a para o usu�rio informar valores inteiros.
O programa dever� realizar a soma total dos valores informados,
o algoritimo dever� ser interrompido quando a soma dos valores informados pelo usu�rio for maior do que 100 */

int main() {
	int valor, soma = 0;
	while(soma<=100){
		printf("Digite um valor: \n");
		scanf("%d", &valor);
		soma = soma + valor;
	}
}
