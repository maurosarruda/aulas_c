#include <stdio.h>

int main(){

    int quantidadeDeAlunos, contador;
    float media;
    float nota1, nota2, nota3;

    printf("Quantos alunos deseja calcular a média:\n");
    scanf("%i", &quantidadeDeAlunos);

    contador = 1;

    while(contador <= quantidadeDeAlunos){
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        printf("A média do aluno foi de: %.2f\n", media);
        
        contador++;
    }

    return 0;
}