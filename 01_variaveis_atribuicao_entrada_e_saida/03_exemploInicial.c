#include <stdio.h>

int main(){
    // Comentário
	int idade, idadeMae;                // Definição
	idade = 23;                         // Atribuição
	int idadePai = 52;                  // Definição e inicialização
    printf("Digite a idade da mae:\n"); // Impressão na tela
    scanf("%i", &idadeMae);             // Leitura de dados do teclado
    printf("Idade = %i, Idade do Pai = %i, Idade da Mae = %i.", idade, idadePai, idadeMae); // Impressão com valores de variáveis

    return 0;
}


