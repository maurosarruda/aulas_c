#include <stdio.h>

int main (){
  int base, altura, area, perimetro;
  printf ("Digite um valor da base:");
  scanf ("%i", &base);
  printf ("Digite um valor da altura:");
  scanf ("%i", &altura);
  area = base * altura;
  perimetro = (2 * base) + (2 * altura);
  printf ("O valor da Area do retangulo e: %i \n", area);
  printf ("O valor do Perimetro do retangulo e: %i ", perimetro);

  return 0;
}





