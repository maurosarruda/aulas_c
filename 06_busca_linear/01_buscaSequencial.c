#include <stdio.h>
#include <stdbool.h>

//Dado um vetor de 5 posições busque um valor de forma sequencial
//apresente o valor encontrado ou se ele não está no vetor
int main(){
	int tamanhoVetor = 5;
	int vetor[5] = {2, 6, 9, 3, 7};
	int valorProcurado = 8;
	int i = 0;
	bool encontrado = false;

	while(i < tamanhoVetor && !encontrado){
		if(vetor[i] == valorProcurado){
			encontrado = true;
		}else{
			i++;
		}
	}

	if(encontrado){
		printf("Valor %d está na posição %d!\n", vetor[i], i);
	}else{
		printf("Valor %d não encontrado!\n", valorProcurado);
	}

	return 0;
}