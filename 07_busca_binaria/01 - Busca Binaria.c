#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 5 posicoes e busque um elemento com a busca binaria
int main(){
	
	int direita, esquerda, meio, tamanho = 5;
	bool encontrado = false;

	int vetor[] = {3, 5, 9, 11, 15};

	int valorProcurado = 3;
	
	esquerda = 0;
	direita = tamanho - 1;

	while(esquerda <= direita && !encontrado){
		meio = (direita + esquerda) / 2;
		if (vetor[meio] == valorProcurado){
			encontrado = true; 
		} else if (valorProcurado < vetor[meio]){
			direita = meio - 1;
		} else {
			esquerda = meio + 1;
		}
	}
	
	if(encontrado){
		printf ("Valor %d encontrado na posicao %d\n", vetor[meio], meio);
	} else {
		printf ("Valor %d nao encontrado\n", valorProcurado);
	}

	return 0;
}