#include <stdio.h>
#include <stdbool.h>

//Criar um algoritmo que receba do usuario 5 valores de um vetor e o 
// valor buscado, e diga se o valor esta no vetor ou não.
int main(){

	int tamanhoVetor;
	printf("Digite o tamanho do vetor:\n");
	scanf("%i", &tamanhoVetor);

	int vetor[tamanhoVetor];
	int i;
	for(i = 0; i < tamanhoVetor; i++){
		printf("Digite o %i valor:\n", i+1);
		scanf("%i", &vetor[i]);
	}

	int valorProcurado;
	do{
		printf("Digite o valor procurado:\n");
		scanf("%i", &valorProcurado);

		if(valorProcurado != -1){
			i = 0;
			bool encontrado = false;

			while(i < tamanhoVetor && !encontrado){
				if(vetor[i] == valorProcurado){
					printf("Valor %d está na posição %d!\n", vetor[i], i);
					encontrado = true;
				}else{
					i++;
				}
			}
			if(!encontrado){
				printf("Valor %d não encontrado!\n", valorProcurado);
			}
		}
	}while(valorProcurado != -1);

	return 0;
}