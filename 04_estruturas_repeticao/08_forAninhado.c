#include <stdio.h>

int main(){
	int contadorExterno, contadorInterno, resultado;
	for (contadorExterno = 1; contadorExterno <= 10; contadorExterno++){
		for (contadorInterno = 1; contadorInterno <= 10; contadorInterno++){
			resultado = contadorExterno * contadorInterno;
			printf("%i * %i = %i\n", contadorExterno, contadorInterno, resultado);
		}
		printf("\n");
	}

	return 0;
}