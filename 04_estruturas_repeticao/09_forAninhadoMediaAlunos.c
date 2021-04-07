#include <stdio.h>

//Faça um algoritmo que calcule a media de 5 alunos com 3 notas e apresente
// a média da turma. Utilize o for aninhado e acumuladores.
int main(){
	int contadorNotas, contadorAlunos;
	float mediaAluno, mediaTurma, nota;
	mediaTurma = 0;

	for (contadorAlunos = 1; contadorAlunos <= 5; contadorAlunos++){
		mediaAluno = 0;
		for (contadorNotas = 1; contadorNotas <= 3; contadorNotas++){
			printf("Entre com a %d nota do %d aluno:\n", contadorNotas, contadorAlunos);
			scanf("%f", &nota);
			mediaAluno = mediaAluno + nota/3;
		}
		printf("A média do aluno foi de: %.2f\n", mediaAluno);
		mediaTurma = mediaTurma + mediaAluno/5;
	}
	printf("A média da Turma foi de: %.2f\n", mediaTurma);
	return 0;
}


