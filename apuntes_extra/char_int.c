#include <stdio.h>

int main() 
{
    char caracter;
    int numero;

    // Leer un carácter y mostrar su valor numérico en ASCII
    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);
    printf("El valor numerico en ASCII de '%c' es: %i\n", caracter, caracter);

    // Leer un número entero y mostrar el carácter correspondiente
    printf("Ingrese un numero entero: ");
    scanf("%i", &numero);
    printf("El caracter correspondiente al número %i es: %c\n", numero, numero);

    return 0;
}

