# include <stdio.h>

int main ()
{
	int num, resto;
	
	printf("Escribe un número entero\n");
	scanf("%d", &num);
	
	// Para comprobar si es par, el resto será 0
	resto = num % 2;
	
	if (num != 0) 
	{
		if ((num > 0) && (resto % 2 == 0))
		{
			printf("El numero %d es par y positivo.\n", num);
		}
		else if ((num < 0) && (resto % 2 == 0))
		{
			printf("El numero %d es par y negativo.\n", num);
		}
    	else if ((num > 0) && (resto % 2 != 0))
		{
			printf("El numero %d es impar y positivo.\n", num);
		}
		else if ((num < 0) && (resto % 2 != 0))
		{
			printf("El numero %d es impar y negativo.\n", num);
		}
	}
	else{
		printf("Ha escrito el numero cero y no le puedo contestar.\n");
	}
	
	return 0;
}
	

