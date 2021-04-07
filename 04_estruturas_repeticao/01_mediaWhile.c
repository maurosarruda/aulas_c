#include <stdio.h>

//Faça um programa que receba a quantidade de alunos que deseja 
//calcular a media e receba 3 notas de cada aluno e apresente a 
//sua média.
int main(){
    int quantidadeDeAlunos, contador;
    float media;
    float nota1, nota2, nota3;

    //Recebe a quantidade de alunos
    printf("Quantos alunos deseja calcular a média:\n");
    scanf("%i", &quantidadeDeAlunos);

    contador = 1;

    //Repete o calculo da média para todos os alunos
    while(contador <= quantidadeDeAlunos){
        //Obtem as 3 notas do aluno
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

        //Calcula e apresenta a média
        media = (nota1 + nota2 + nota3)/3;
        printf("A média do aluno foi de: %.2f\n", media);
        
        contador++;
    }

    return 0;
}