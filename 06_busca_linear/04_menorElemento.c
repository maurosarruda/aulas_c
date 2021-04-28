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

	int menor;
	for(i = 0; i < 5; i++){
		if(i == 0){
			menor = vetor[0];
		}

		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}

	printf("O menor elemento do vetor é: %i\n", menor);

	return 0;
}