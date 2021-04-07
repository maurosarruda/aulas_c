#include <stdio.h>

//Faça um algoritmo que receba e apresente o registro acadêmico e idade
// de 5 alunos utilizando a estrutura de repetição for
int main(){
    int idade, RA;
    for (int contador = 1; contador <= 5; contador++){
		printf("Entre com o registro acadêmico do aluno:\n");
        scanf("%i", &RA);

        printf("Entre com a idade do aluno:\n");
        scanf("%i", &idade);

        printf("Cadastro de novo aluno:\n");
        printf("RA: %i\n", RA);
        printf("Idade: %i\n", idade);
	}
    return 0;
}