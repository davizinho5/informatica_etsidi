#include <stdio.h>

int main() 
{
    int numero;

    // Pedir al usuario un número
    printf("Ingrese un numero entero: ");
    scanf("%i", &numero);

    // Determinar si es positivo, negativo o cero
    if (numero > 0) 
		{
        printf("El numero es positivo.\n");
    } 
		else if (numero < 0) 
		{
        printf("El numero es negativo.\n");
    } 
		else 
		{
        printf("El numero es cero.\n");
    }

    return 0;
}
