#include <stdio.h>

//Calcule a media de 5 alunos que possuem 3 notas cada. Para isso utilize
// um laço de repetição for aninhado.
int main(){
	float nota, mediaAluno;
	
	for(int quantidadeAlunos = 1; quantidadeAlunos <= 5; quantidadeAlunos++){
		printf("Aluno %i\n", quantidadeAlunos);
		mediaAluno = 0;
		for(int contador = 1; contador <= 3; contador++){
			printf("Digite a Nota %i:\n", contador);
			scanf("%f", &nota);
			mediaAluno = mediaAluno + nota/3;
		}
		printf("A media do aluno foi de: %f\n", mediaAluno);
	}
	return 0;
}