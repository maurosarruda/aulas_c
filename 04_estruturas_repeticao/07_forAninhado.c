#include <stdio.h>

//Faça um algoritmo que a tabuada de 1 a 10 com um for aninhado.
int main(){
	int contadorExterno, contadorInterno, resultado;
	
	//Laço externo
	for (contadorExterno = 1; contadorExterno <= 10; contadorExterno++){
		
		//Laço interno
		for (contadorInterno = 1; contadorInterno <= 10; contadorInterno++){
			resultado = contadorExterno * contadorInterno;
			printf("%i * %i = %i\n", contadorExterno, contadorInterno, resultado);
		}
		printf("\n");
	}

	return 0;
}