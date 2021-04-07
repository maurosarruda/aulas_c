#include <stdio.h>

int main(){
    int num;
	printf("Insira um numero de 1 a 3:\n");
	scanf("%i",  &num);

	//Estrutura Condicional Switch
	switch (num){
		case 1:
			printf("Primeiro\n");
			break;
		case 2:
			printf("Segundo\n");
			break;
		case 3:
			printf("Terceiro\n");
			break;
		default:
			printf("Opção invalida\n");
			break;
	}
    return 0;
}



