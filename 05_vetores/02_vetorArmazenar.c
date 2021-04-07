#include <stdio.h>

//Faça um programa que leia 10 valores e os armazene em um vetor.
int main(){

	float numeros[10];
	int contador;

	printf("Lendo e armazenando em um vetor:\n");
	for (contador = 0; contador < 10; contador++){
		printf("Digite o %i valor:\n", contador+1);
		scanf("%f", &numeros[contador]);
	}

	printf("Apresentando os valores armazenados:\n");
	for (contador = 0; contador < 10; contador++){
		printf("numeros[%i] = %.2f\n", contador, numeros[contador]);
	}

	return 0;
}


