#include <stdio.h>

int main() 
{
    char letra1, letra2;

    // Solicitar dos letras minúsculas al usuario
    printf("Ingrese dos letras minusculas: ");
    // Ponemos un espacio delante para evitar leer la pulsación de ENTER
    scanf("%c %c", &letra1, &letra2);

    // Convertir a mayúsculas usando la diferencia en la tabla ASCII
    char mayus1 = letra1 - ('a' - 'A');
    char mayus2 = letra2 - ('a' - 'A');

    // Mostrar el resultado
    printf("Las letras en mayusculas son: %c %c\n", mayus1, mayus2);

    return 0;
}
