
#include <stdio.h>

int main(){
    int valor, valor2, valor3;
    
    valor = 10;
    valor2 = valor++;
    
    valor = 10;
    valor3 = ++valor;
    
    printf("Valor2 = %i\n", valor2);
    printf("Valor3 = %i\n", valor3);
    
    return 0;
}





