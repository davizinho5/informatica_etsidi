#include <stdio.h>
int main()
{
	int num;
	int i=2;
	// Variable para Contar el numero de divisores que encuentro
	int contador = 0;
	int resto;
	printf("Introduce un entero para calcular si es primo: ");
	scanf("%i", &num);
	
	// El objetivo es contar el numero de divisores que encuentro
	// entre el número 2 y el número a valorar si es primo
	// acabo en num-1
	for(i=2; i<num; i++)
	{
		resto = num%i;
		// Si el numero i es divisor de num
		if (resto == 0)
		{
			// Aumentamos el contador de divisores
			contador = contador + 1;
		}		
	}
	// Si he encontrado algún divisor
	if(contador > 0)
	{	
		printf("El numero %i NO ES PRIMO", num);
	}
	else
	{
		printf("El numero %i ES PRIMO", num);
	}

	return 0;
}
	
