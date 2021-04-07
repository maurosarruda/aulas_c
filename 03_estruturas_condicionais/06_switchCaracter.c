
#include <stdio.h>

int main (){
    float valor1, valor2;
    char opcao;
    
    printf("Digite a opcao (+, -, *, /):\n");
    scanf("%c", &opcao);
    printf("Digite o primeiro valor:\n");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%f", &valor2);
    
    // Switch com variavel que armazena caracteres
    switch (opcao){
        case '+':	
            printf("%.2f + %.2f = %.2f\n", valor1, valor2, valor1+valor2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", valor1, valor2, valor1-valor2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", valor1, valor2, valor1*valor2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", valor1, valor2, valor1/valor2);
            break;
        default:
            printf("Opção inválida!");
    }
    return 0;
}

