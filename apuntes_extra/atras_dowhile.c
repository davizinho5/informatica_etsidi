#include <stdio.h>
int main()
{
	// Expresión de inicio
	int i = 10;
	// Use un bucle DO WHILE para imprimir una cuenta atras
	// que empiece en 10 y acabe en 1
  do
  {
 		printf("%i\n", i); 	
 		i = i - 1; // Equivalente a: i--;
	}while(i>0);
	
	return 0;
}
