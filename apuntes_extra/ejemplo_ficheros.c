#include <stdio.h>
int main() 
{
	FILE *pescritura, *plectura;
	int vals[6] = {1, 2, 3, 4, 5, 6};
	
	// Abrimos fichero para escritura
	pescritura = fopen("datos.txt", "w");
	if (pescritura == NULL) // Si devuelve NULL, mostrar mensaje de error y terminar
	{
		printf("Error al abrir el fichero de escritura.\n");
		return -1;
	}
	else // Si ha funcionado, comienza escritura
	{
		// Escribirmos los datos en el fichero y 
		// nos delvuelve en numero de caracteres escritos	
		int num = fprintf(pescritura, "%i, %i, %i\n", vals[0], vals[1], vals[2]);
		printf("Se han escrito %i caracteres en el fichero\n", num);
		
		// Escribimos una segunda fila 
		fprintf(pescritura, "%i, %i, %i\n", vals[3], vals[4], vals[5]);
		fclose(pescritura); // Cerramos fichero
		
		// Ahora, abrimos el mismo fichero, pero para lectura
		// Usaremos estas variable para guardar los 3 datos de cada fila
		int num1, num2, num3;
		plectura = fopen("datos.txt", "r");
		if (plectura == NULL) // Si devuelve NULL, mostrar mensaje de error y terminar
		{
			printf("Error al abrir el fichero de lectura.\n");
			return -1;
		}
		else // Si ha funcionado, comienza lectura
		{
			// Leemos fila por fila hasta el final
			while (fscanf(plectura, "%i, %i, %i", &num1, &num2, &num3) != EOF)
			{
				printf("Se ha leido: %i, %i, %i\n", num1, num2, num3);
			}
		}
	}	
	return 0;
}
