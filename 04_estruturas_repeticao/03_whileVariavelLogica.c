#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int contador;

	contador = 1;
    while (contador <= 2)
		++contador;
	
	while (contador <= 5){ 
		printf("%i\n", contador);
		++contador;
	}


	bool parada = true;
	float valor1, valor2;

	while(parada){
		printf("Entre com o primeiro valor:\n");
		scanf("%f", &valor1);
		printf("Entre com o segundo valor (0 para terminar):\n");
		scanf("%f", &valor2);

		if(valor2 == 0){
			parada = false;
			printf("Divisão por 0 não aceita, parando o algoritmo!\n");
		}else{
			printf("A divisão de %.2f por %.2f é: %.2f\n", valor1, valor2, valor1/valor2);
		}
	}



	return 0;
}