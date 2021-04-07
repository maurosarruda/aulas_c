#include <stdio.h>
#include <stdbool.h>

//Operadores lógicos (&&, || e !)
int main(){
    bool verdade = true;
    bool falso = false;
    
    printf("%i | %i -> E = %i, OU = %i\n", verdade, verdade, verdade && verdade, verdade || verdade);
    printf("%i | %i -> E = %i, OU = %i\n", verdade, falso, verdade && falso, verdade || falso);
    printf("%i | %i -> E = %i, OU = %i\n", falso, verdade, falso && verdade, falso || verdade);
    printf("%i | %i -> E = %i, OU = %i\n", falso, falso, falso && falso, falso || falso);
    printf("%i -> NAO = %i\n", verdade, !verdade);
    printf("%i -> NAO = %i\n", falso, !falso);
    return 0;
}





