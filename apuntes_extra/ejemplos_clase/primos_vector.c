#include <stdio.h>

int main()
{
  int n, k, i;;
  int vector_primos[300];
  // variable que controla si es primo o no
  int cuenta_div = 0;
  // variable para contar cuantos numeros primos
  //   hemos encontrado
  int contar_primos = 0;

  for(n = 2; n <= 300; n++)
  {
    // Suponemos que el numero es primo, lo inicializamos para cada número a comprobar
    cuenta_div = 0;
    for(k = 2; k < n; k++)
    {
      // Si es divisible por algun numero deja de ser primo
      if (n % k == 0)
      {
        cuenta_div++;
      }
    }
    // Si finalmente es primo, se guarda
    if (cuenta_div == 0)
    {
      // se usa la misma variable que contar para
      //   elegir la posicion de guardar
      vector_primos[contar_primos] = n;
      contar_primos++;
    }
  }
  
  // se imprime desde el inicio hasta los numeros 
  //   que se han contado 
  for(i=0; i<contar_primos; i++)
  {
 	printf("%d ", vector_primos[i]);
  }
  return 0;
}								
