#include <stdio.h>
// Busca e imprime el valor y el índice del número más alto
int main()
{
    float numeros[5] = {2.1, 4.9, 0.51, 9.01, 4.3};
    int i;
    float maximo;

    // Inicializar el máximo con el primer elemento del vector
    maximo = numeros[0];

    // Recorrer el vector para encontrar el máximo
    for (i = 1; i < 5; i++) 
	{
		// Si encontramos nuevo máximo
        if (numeros[i] > maximo) 
		{
			// Actualizamos el valor
            maximo = numeros[i];
        }
    }
    printf("El maximo es: %f", maximo);
    
 	return 0;
}
