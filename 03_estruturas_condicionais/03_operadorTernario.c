
#include <stdio.h>

int main(){
    
    int idade;
	printf("Digite uma idade:\n");
	scanf("%i",  &idade);

    idade >= 18 ? printf("Você é adulto!\n"): printf("Você é jovem!\n");

    return 0;
}



