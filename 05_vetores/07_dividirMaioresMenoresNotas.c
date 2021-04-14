#include <stdio.h>

//Crie um algoritmo que receba 10 notas em um vetor, em seguida  
// divida o vetor em outros dois vetores, onde o primeiro recebe
// notas maiores ou igual a 6 e o segundo recebe menores que 6.
int main(){
	float notas[10];
	int notasAcima = 0;
	int notasAbaixo = 0;

	for(int cont = 0; cont < 10; cont++){
		printf("Entre com a %i nota:\n", cont+1);
		scanf("%f", &notas[cont]);

		if(notas[cont] >= 6.0){
			notasAcima++;
		}else{
			notasAbaixo++;
		}
	}

	printf("Você digitou %i notas maiores ou iguais a 6!\n", notasAcima);
	printf("Você digitou %i notas abaixo de 6!\n", notasAbaixo);

	float notasMaiores[notasAcima];
	float notasMenores[notasAbaixo];

	notasAcima = 0;
	notasAbaixo = 0;

	for(int cont = 0; cont < 10; cont++){
		if(notas[cont] >= 6.0){
			notasMaiores[notasAcima] = notas[cont];
			notasAcima++;
		}else{
			notasMenores[notasAbaixo] = notas[cont];
			notasAbaixo++;
		}
	}

	printf("Vetor de valores maiores ou iguais a 6:\n");
	for(int cont = 0; cont < notasAcima; cont++){
		printf("%f\n", notasMaiores[cont]);
	}

	printf("Vetor de valores menores que 6:\n");
	for(int cont = 0; cont < notasAbaixo; cont++){
		printf("%f\n", notasMenores[cont]);
	}

	return 0;
}