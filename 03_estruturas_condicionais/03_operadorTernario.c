#include <stdio.h>

int main(){
    
    int idade;
	printf("Digite uma idade:\n");
	scanf("%i",  &idade);

    //Operador Ternário
    idade >= 18 ? printf("Você é adulto!\n"): printf("Você é jovem!\n");

    //Condicional Composta Correspondente
    if(idade >= 18){
        printf("Você é adulto!\n");
    } else {
        printf("Você é jovem!\n");
    }

    return 0;
}



