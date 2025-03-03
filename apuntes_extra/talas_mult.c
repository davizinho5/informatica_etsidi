#include <stdio.h>

int main() 
{
	int i,j;
	// Bucle externo: Tablas del 1 al 9
    for (i = 1; i <= 9; i++) 
	{ 
        printf("Tabla del %i:\n", i);
        // Bucle interno: Multiplicación del 1 al 10
        for (j = 1; j <= 10; j++) 
		{ 
            printf("%i x %i = %i\n", i, j, i * j);
        }
        // Salto de línea entre tablas
        printf("\n");
    }

    return 0;
}

