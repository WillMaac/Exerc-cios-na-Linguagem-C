#include <stdio.h>
#include <stdlib.h>

/* Construa um algoritmo que receba, como entrada, a m�dia final de um aluno:
-Imprima "Aprovado" caso a nota seja maior ou igual a 7.;
-"Prova substitutiva" se a m�dia for maior ou igual a 4, porem menor que 7;
-Imprima "Reprovado caso a m�dia seja menor que 4." */
int main() {
	float nota;
	printf("Digite sua nota \n");
	scanf("%f", &nota);
	if(nota >= 7){
		printf("Aprovado! \n");
		
	}else{ 
	if(nota >= 4)
		printf("Fazer prova substitutiva. \n");
	else
		printf("Reprovado");
	}
	}
