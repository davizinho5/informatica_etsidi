#include <stdio.h>

// Determinar si un número entero introducido por el ususario es positivo, negativo, o cero. 
// Se debe hacer uso de la estructura if-else if
int main() 
{
    int numero;

    // Pedir al usuario un número
    printf("Ingrese un numero entero: ");
    scanf("%i", &numero);

    // Determinar si es positivo
    if (numero > 0) 
    {
        printf("El numero es positivo.\n");
    } 
    // Si no, determinar si es negativo
    else if (numero < 0) 
    {
        printf("El numero es negativo.\n");
    } 
    // Si no, solo queda la opción de que valga cero
    else 
    {
        printf("El numero es cero.\n");
    }

    return 0;
}
