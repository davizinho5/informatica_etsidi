#include <stdio.h>
int main ()
{
	float v1, v2;
	char op;
	
	printf("Escriba 2 numeros y la operacion que quiera realizar: \n");
	scanf(" %f %c %f", &v1, &op, &v2);
	
	switch(op)
	{
		case '+':
			printf("Operaci�n suma: %f\n", v1 + v2);
			break;

		case '-':
			printf("Operaci�n resta %f\n", v1 - v2);
			break;
		
		case '*':
			printf("Operaci�n producto %f\n", v1 * v2);
			break;
		
		case '/':
			if(v2 != 0)
			{
				printf("Operaci�n division %f\n", v1 / v2);
				break;
			}
			
		default:
			printf("No se hacer esa operaci�n.\n");
	}
	return 0;
}
