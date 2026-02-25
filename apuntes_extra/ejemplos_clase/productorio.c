#include <stdio.h>

int main()
{
  float resultado = 1;
  int n;

  for (n = 3; n <= 6; ++n)
  {
    resultado = resultado * (2.0*(float)n/3.0);
  }
  
  printf("%f", resultado);

  return 0;
}
