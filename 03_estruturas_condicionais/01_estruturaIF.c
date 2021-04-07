
#include <stdio.h>

int main(){
    
    int idade;
	printf("Digite uma idade:\n");
	scanf("%i",  &idade);

	if(idade < 18){
		printf("Você tem menos que 18 anos!\n");
	}
	
	if(idade < 18)
		printf("Você é menor de idade!\n");
	else
		printf("Você é maior de idade!\n");

    return 0;
}



