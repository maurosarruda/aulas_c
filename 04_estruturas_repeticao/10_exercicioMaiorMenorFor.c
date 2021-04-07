#include <stdio.h>

// Faça um algoritmo que receba 5 valores e apresente o maior e menor elemento.
int main(){
	int valor, maior, menor;
	// Forma alternativa de iniciar o maior e menor elemento (não recomendada)
	// maior = -99999999;
	// menor = 99999999;

	for(int contador = 1; contador <= 5; contador++){
		printf("Digite um %i valor:\n", contador);
		scanf("%i", &valor);

		// Inicia o menor e maior com o primeiro valor digitado
		if(contador == 1){
			maior = valor;
			menor = valor;
		}else{
			//Atualiza o Maior elemento
			if(valor > maior){
				maior = valor;
			}
			//Atualiza o Menor elemento
			if(valor < menor){
				menor = valor;
			}
		}
	}

	printf("O maior valor digitado foi de: %i\n", maior);
	printf("O menor valor digitado foi de: %i\n", menor);

	return 0;
}