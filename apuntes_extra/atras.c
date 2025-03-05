#include <stdio.h>
int main()
{
	// Expresión de inicio
	int i = 10;
	// Use un bucle DO WHILE para imprimir una cuenta atras
	// que empiece en 10 y acabe en 1
	while(i>0)
	{
		printf("%i\n", i);
		i--; // Equivalente a: i = i -1;
	}

	return 0;
}
