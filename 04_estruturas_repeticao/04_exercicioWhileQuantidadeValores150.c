#include <stdio.h>

int main(){

    float soma, qtdValoresDigitados, media, valor;

	soma = 0;
	qtdValoresDigitados = 0;

	while (soma <= 150){
		printf("Digite um valor:\n");
		scanf("%f", &valor);

		soma = soma + valor;
		qtdValoresDigitados = qtdValoresDigitados + 1;
	}

	printf("A quantidade de valores digitados foi de: %.2f\n", qtdValoresDigitados);
	printf("A soma é: %.2f\n", soma);
	media = soma / qtdValoresDigitados;
	printf("A média é: %.2f\n", media);

    return 0;
}