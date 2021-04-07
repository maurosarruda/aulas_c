#include <stdio.h>

// Faça um programa que receba a base e a altura de um retangulo e calcule a área e o perimetro.
int main (){
  int base, altura, area, perimetro;

  //Leitura
  printf ("Digite um valor da base:");
  scanf ("%i", &base);
  printf ("Digite um valor da altura:");
  scanf ("%i", &altura);

  //Cálculo
  area = base * altura;
  perimetro = (2 * base) + (2 * altura);

  //Apresentação
  printf ("O valor da Area do retangulo e: %i \n", area);
  printf ("O valor do Perimetro do retangulo e: %i ", perimetro);

  return 0;
}





