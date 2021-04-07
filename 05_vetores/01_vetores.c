#include <stdio.h>

int main(){
	// Criação de Vetores
	int vetorInt[5];
	float vetorFloat[10];
	char vetorChar[3];

	//Criação e Inicialização
	int vetorInt2[5] = {1, 5, 7, 8};
	float vetorFloat2[10] = {31.9, 3.7, 7.0};
	char vetorChar2[3] = {'a', 'b', 'c'};

	//Impressão de Vetores
	printf("%i\n", vetorInt2[0]);
	printf("%f\n", vetorFloat2[1]);
	printf("%c\n", vetorChar2[1]);


	float medias[5] = {6, 4, 9, 8.9};
	printf("Mostrar Valores do Vetor \n\n");
	printf("medias[0] = %.2f\n", medias[0]);
	printf("medias[1] = %.2f\n", medias[1]);
	printf("medias[2] = %.2f\n", medias[2]);
	printf("medias[3] = %.2f\n", medias[3]);



	float medias2[5] = {6, 4, 9, 8.9};
	int contador;
	printf("Mostrar Valores do Vetor com Laço de Repetição \n\n");
	for (contador = 0; contador < 5; contador++){
		printf("medias2[%i] = %.2f\n", contador, medias2[contador]);
	}

	return 0;
}


