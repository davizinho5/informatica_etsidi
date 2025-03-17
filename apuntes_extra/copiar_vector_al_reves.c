#include <stdio.h>

int main()
{
	int v1[5]={0};
	int v2[5];
	int contador = 0;
	
	do
	{
		printf("Introduce un numero entero positivo: ");
		scanf("%i", &v1[contador]);
		if(v1[contador] > 0)
		{
			contador = contador +1;
		}	
		printf("Vector: %i %i %i %i %i\n", v1[0], v1[1], v1[2], v1[3], v1[4]);
	}while(contador < 5);
	
	int j;
	for(j=0; j<5; j++)
	{
		v2[j] = v1[4-j];
	}
	
	printf("\nVector 1: %i %i %i %i %i\n", v1[0], v1[1], v1[2], v1[3], v1[4]);
	printf("Vector 2: %i %i %i %i %i\n", v2[0], v2[1], v2[2], v2[3], v2[4]);
	return 0;
}
