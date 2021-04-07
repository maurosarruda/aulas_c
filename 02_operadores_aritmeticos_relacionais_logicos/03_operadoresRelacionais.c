
#include <stdio.h>

int main(){
    int valor1, valor2;
    
    printf("Entre com o primeiro valor:\n");
    scanf("%i", &valor1);
    printf("Entre com o segundo valor:\n");
    scanf("%i", &valor2);
    
    printf("%i == %i, é %i\n", valor1, valor2, valor1 == valor2);
    printf("%i != %i, é %i\n", valor1, valor2, valor1 != valor2);
    printf("%i > %i, é %i\n", valor1, valor2, valor1 > valor2);
    printf("%i < %i, é %i\n", valor1, valor2, valor1 < valor2);
    
    return 0;
}





