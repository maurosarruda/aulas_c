#include <stdio.h>

int main() {
    int qtdAlunos, contadorAlunos, contadorNotas;
    float nota, media;

    printf("Entre com a quantidade de alunos que deseja obter a média:\n");
    scanf("%i", &qtdAlunos);

	contadorAlunos = 1;
	while (contadorAlunos <= qtdAlunos){ 
		media = 0;
        contadorNotas = 1;
        while (contadorNotas <= 3){
            printf("Entre com a %i nota do %i aluno:\n", contadorNotas, contadorAlunos);
            scanf("%f", &nota);
            media = media + (nota/3);
            contadorNotas++;
        }
        printf("A média do aluno %i foi de %.2f!\n", contadorAlunos, media);
		++contadorAlunos;
	}

	return 0;
}