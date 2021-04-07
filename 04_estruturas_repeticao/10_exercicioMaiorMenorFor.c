#include <stdio.h>

int main(){
    
	int valor, maior, menor;
	// maior = -99999999;
	// menor = 99999999;

	//ler 50 valores
	for(int contador = 1; contador <= 5; contador++){
		printf("Digite um %i valor:\n", contador);
		scanf("%i", &valor);

		if(contador == 1){
			maior = valor;
			menor = valor;
		}else{
			//encontrar o maior
			if(valor > maior){
				maior = valor;
			}
			//encontrar o menor
			if(valor < menor){
				menor = valor;
			}
		}
	}

	//mostrar o maior e menor
	printf("O maior valor digitado foi de: %i\n", maior);
	printf("O menor valor digitado foi de: %i\n", menor);

	return 0;
}