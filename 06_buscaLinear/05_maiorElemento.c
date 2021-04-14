#include <stdio.h>
#include <stdbool.h>

//Faça um programa que encronte o menor elemento em um vetor inserido
//pelo usuário.
int main(){
	int i;
	int vetor[5];
	for(i = 0; i < 5; i++){
		printf("Digite o %i valor:\n", i+1);
		scanf("%i", &vetor[i]);
	}

	int maior;
	for(i = 0; i < 5; i++){
		if(i == 0){
			maior = vetor[0];
		}

		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	printf("O maior elemento do vetor é: %i\n", maior);

	return 0;
}