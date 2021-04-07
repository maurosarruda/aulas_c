#include <stdio.h>

//Faça um programa que leia o raio do circulo e calcule o perimetro, area e diametro.
int main(){
    const float pi = 3.1415;
    float raio, perimetro, area, diametro;
    
    printf("Entre com o Raio do circulo:\n");
    scanf("%f", &raio);
    
    perimetro = 2 * pi * raio;
    area = pi * raio * raio;
    diametro = 2 * raio;
    
    printf("O perimetro do circulo: %.2f\n", perimetro);
    printf("O area do circulo: %.2f\n", area);
    printf("O diametro do circulo: %.2f\n", diametro);
    
    return 0;
}





