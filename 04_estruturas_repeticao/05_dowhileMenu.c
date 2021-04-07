#include <stdio.h>

int main(){
	float valor1, valor2;
    int opcao;

	do{
        printf("Escolha: Somar (1), Subtrair (2), Sair(0)\n");
		scanf("%i", &opcao);

		if(opcao == 1 || opcao == 2){
            printf("Entre com o primeiro valor:\n");
            scanf("%f", &valor1);
            printf("Entre com o segundo valor:\n");
            scanf("%f", &valor2);
            if(opcao == 1){
                printf("A Soma é: %f\n", valor1+valor2);
            } else if(opcao == 2){
                printf("A Subtração é: %f\n", valor1-valor2);
            } 
        }else if (opcao == 0){
            printf("Finalizando a aplicação..\n");
		}else{ 
			printf("Opção invalida!\n");
		}
	}while(opcao != 0);
	return 0;
}