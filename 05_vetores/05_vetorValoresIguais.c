#include <stdio.h>

int main(){

	float A[5], B[5];
	int contador;

	printf("Lendo e armazenando o vetor A:\n");
	for (contador = 0; contador < 5; contador++){
		printf("Digite o %i valor do valor A:\n", contador+1);
		scanf("%f", &A[contador]);
	}

	printf("Lendo e armazenando o vetor B:\n");
	for (contador = 0; contador < 5; contador++){
		printf("Digite o %i valor do valor B:\n", contador+1);
		scanf("%f", &B[contador]);
	}

	printf("Apresentando os valores iguais nos vetores A e B:\n");
	for (contador = 0; contador < 5; contador++){
		if(A[contador] == B[contador]){
			printf("Posição %i, Valor %.2f\n", contador, A[contador]);
		}
	}

	return 0;
}


