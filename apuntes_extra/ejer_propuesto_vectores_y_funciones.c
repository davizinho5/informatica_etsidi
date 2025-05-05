#include <stdio.h>
#include <math.h> // para abs

void multiplos(int lista[], int tam, int numero); 
int mas_lejano(int lista[], int tam, int numero);

// Función principal
int main() 
{
    int mi_vector[5];
    int i, numero;

    printf("Introduce 5 números enteros:\n");
    for (i = 0; i < 5; i++) 
		{
        printf("Elemento %i: ", i + 1);
        scanf("%i", &mi_vector[i]);
    }

    printf("Introduce el número a comparar: ");
    scanf("%i", &numero);

    // Mostrar los múltiplos
    multiplos(mi_vector, 5, numero);

    // Mostrar el número más lejano
    int lejano = mas_lejano(mi_vector, 5, numero);
    printf("El número más alejado de %d es: %d\n", numero, lejano);

    return 0;
}

// Función para mostrar los múltiplos
void multiplos(int lista[], int tam, int numero) 
{
    int i;
    printf("Múltiplos de %d en el vector:\n", numero);
    for (i = 0; i < tam; i++) 
		{
        if (lista[i] % numero == 0) 
				{
            printf("%i ", lista[i]);
        }
    }
    printf("\n");
}

// Función para encontrar el número más alejado
int mas_lejano(int lista[], int tam, int numero) 
{
    int i;
    int max_diferencia = abs(lista[0] - numero);
    int resultado = lista[0];

    for (i = 1; i < tam; i++) 
		{
        int diferencia = abs(lista[i] - numero);
        if (diferencia > max_diferencia) 
				{
            max_diferencia = diferencia;
            resultado = lista[i];
        }
    }

    return resultado;
}
