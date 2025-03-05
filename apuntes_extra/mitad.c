#include <stdio.h>

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
