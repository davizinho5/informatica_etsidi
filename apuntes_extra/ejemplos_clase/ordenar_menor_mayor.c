#include <stdio.h>
#define NUM 5
// Ordenar de menor a mayor
int main()
{
	float vector[NUM] = {2.1, 4.9, 0.51, 9.01, 4.3};
	float aux;
	int i, j;
	
	for(j=20; j<24; j++) // Esto se repite 4 veces
	{
		for(i=0; i<NUM-1; i++) // Se recorre el vector complero
		{
			if( vector[i] > vector[i+1])
			{
				aux = vector[i];
				vector[i] = vector[i+1];
				vector[i+1] = aux;
			}
		}
	}
	printf("FINAL : %.2f %.2f %.2f %.2f %.2f\n\n"
		                    , vector[0], vector[1], vector[2]
				     		, vector[3], vector[4]);
	return 0;
}

