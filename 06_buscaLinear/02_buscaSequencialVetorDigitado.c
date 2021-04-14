#include <stdio.h>
#include <stdbool.h>

//Criar um algoritmo que receba do usuario 5 valores de um vetor e o 
// valor buscado, e diga se o valor esta no vetor ou não.
int main(){
	int tamanhoVetor = 5;
	int vetor[tamanhoVetor];
	int valorProcurado;
	int i;

	for(i = 0; i < tamanhoVetor; i++){
		printf("Digite o %i valor:\n", i);
		scanf("%i", &vetor[i]);
	}

	printf("Digite o valor procurado:\n");
	scanf("%i", &valorProcurado);

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

	return 0;
}