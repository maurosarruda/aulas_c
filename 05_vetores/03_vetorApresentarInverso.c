#include <stdio.h>

//Faça um programa que leia e armazene 10 valores e os apresente de forma inversa.
int main(){
	float numeros[10];
	int contador;

	printf("Lendo e armazenando em um vetor:\n");
	for (contador = 0; contador < 10; contador++){
		printf("Digite o %i valor:\n", contador+1);
		scanf("%f", &numeros[contador]);
	}

	printf("Apresentando os valores em ordem inversa:\n");
	for (contador = 9; contador >= 0; contador--){
		printf("numeros[%i] = %.2f\n", contador, numeros[contador]);
	}
	return 0;
}


