#include <stdio.h>

//Crie um algoritmo que receba 10 notas em um vetor, em seguida percorra 
// o vetor e verifique quantas notas são maiores ou igual a 6 e 
// quantas são menores do que 6.
int main(){
	float notas[10];

	for(int cont = 0; cont < 10; cont++){
		printf("Entre com a %i nota:\n", cont+1);
		scanf("%f", &notas[cont]);
	}

	int notasAcima = 0;
	int notasAbaixo = 0;
	for(int cont = 0; cont < 10; cont++){
		if(notas[cont] >= 6.0){
			notasAcima++;
		}else{
			notasAbaixo++;
		}
	}

	printf("Você digitou %i notas maiores ou iguais a 6!\n", notasAcima);
	printf("Você digitou %i notas abaixo de 6!\n", notasAbaixo);

	return 0;
}