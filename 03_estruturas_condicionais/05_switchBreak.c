
#include <stdio.h>

int main (){
    int valor = 0, opcao;
    printf("Digite a opcao:\n");
    scanf ("%d", &opcao);

    //Switch com utilização do break
    switch (opcao){
        case 1:	/*Nada*/
        case 2:
            valor = 10;
            break;
        case 3:
            valor++;
        case 4:
            valor++;
        default:
            valor--;
    }
  
    printf("Valor = %i", valor);
    return 0;
}



