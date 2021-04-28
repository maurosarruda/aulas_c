#include <stdio.h>
#include <stdbool.h>

int main(){
	int vetIdades[10];
	float vetMedias[10];

	//1)Receber vetores
	//1.1)Receber idades - OK
	for(int i = 0; i < 10; i++){
		printf("Digite um idade:\n");
		scanf("%i", &vetIdades[i]);
	}	

	//1.2)Receber Medias - OK
	for(int i = 0; i < 10; i++){
		printf("Digite a media do aluno:\n");
		scanf("%f", &vetMedias[i]);
	}

	//2)Percorrer vetor de idade procurando 18 anos
	for(int i = 0; i < 10; i++){
		if(vetIdades[i] == 18){
			//3)Mostrar na posicao correspondente a media do aluno de 18 anos
			printf("A media do aluno %i que possui 18 anos é: %f\n", i, vetMedias[i]);
		}
	}

	return 0;
}