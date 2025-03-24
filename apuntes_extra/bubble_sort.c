#include <stdio.h>

// Bubble sort
int main() 
{
	int mivector[6] = {6, 3, 8, 5, 2, 7};
	
	int i, j;
	int copia_de_numero;
	
	for(i=1; i<6;i++)
	{
		for(j=0; j<5; j++)
		{
			if(mivector[j] > mivector[j+1])
			{
				copia_de_numero = mivector[j];
				mivector[j] = mivector[j+1];
				mivector[j+1] = copia_de_numero;
			}
		}
    // Tras cada pasada, imprimimos el estado del vector
		for(j=0; j<6; j++)
		{
			printf("%i,\t", mivector[j]);
		}
		printf("\n", mivector[j]);	
	}
	
	printf("\n", mivector[j]);
	// Imprimimos el estado final
	for(j=0; j<6; j++)
	{
		printf("%i,\t", mivector[j]);
	}	

  return 0;
}

