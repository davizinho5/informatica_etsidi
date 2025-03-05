#include <stdio.h>

// Realiza un programa que pida un número al usuario, 
// e imprima en la pantalla ese número y sus mitades sucesivas 
// hasta que el valor sea menor que 1.
int main()
{
  float num;

  printf("Escribe un numero real.");
  scanf("%f", &num);
  
  while (num >= 1)
  {
    printf("%f\n", num);
    num = num / 2;
  }

  return 0;
}
