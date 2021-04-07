
#include <stdio.h>

int main(){
    
    int idade;
	printf("Digite uma idade:\n");
	scanf("%i",  &idade);

	//Condicional Aninhada
	if(idade < 18){
		printf("Você é jovem!\n");
	}else{
		if(idade >= 60){
			printf("Você é idoso!\n");
		}else{
			printf("Você é adulto!\n");
		}
	}

	//Condicional Múltipla
	if(idade < 18){
		printf("Você é jovem!\n");
	}else if(idade >= 60){
		printf("Você é idoso!\n");
	}else{
		printf("Você é adulto!\n");
	}

    return 0;
}



