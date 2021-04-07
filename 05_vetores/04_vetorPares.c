#include <stdio.h>

//Faça um programa que leia valores do usuário e armazene os numeros
// pares em um vetor de 10 posições. Solicite novos valores para o usuário
// até que o vetor esteja preenchido.
int main(){
	int numerosPares[10], valor, contador = 0;

	do{
		printf("Digite um valor:\n");
		scanf("%i", &valor);
		if((valor % 2) == 0){
			numerosPares[contador] = valor;
			contador++;
		}
	}while(contador < 10);

	printf("Apresentando os valores armazenados:\n");
	for (contador = 0; contador < 10; contador++){
		printf("numerosPares[%i] = %i\n", contador, numerosPares[contador]);
	}

	return 0;
}


