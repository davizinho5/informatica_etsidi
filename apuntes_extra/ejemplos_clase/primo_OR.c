#include <stdio.h>
int main()
{
	int num;
	// Empiezo comparando con el 2
	int i=2;
	int resto;
	printf("Introduce un entero para calcular si es primo: ");
	scanf("%i", &num);
	
	// Recorrer los numeros entre 1 y num y terminar cuando
	// Llego al final OR encuentro un divisor
	resto = num % i;
	while( (i<num) || (resto != 0))
	{		
	  i++;
	  resto = num % i;
	}
	// Si, al salir del bucle,
	// el iterador ha llegado al valor del número
	if(i==num)
	{	
		printf("El numero %i ES PRIMO", num);
	}
	else
	{
		printf("El numero %i NO ES PRIMO", num);
	}
	
	return 0;
}
