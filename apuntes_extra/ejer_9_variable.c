#include <stdio.h>

#define TAM 5

int main() 
{
    char palabra[TAM], temp;
    int i, ciclos = 1;

    printf("Introduzca una palabra: ");
    scanf("%4s", palabra);
  
    do 
    {
        // Mover la última letra al inicio
        // Primero se hace una copia de la última letra para no perderla
        temp = palabra[TAM - 2];
        // Se mueven el resto de letras una posición
        for (i = TAM - 2; i > 0; i--) 
        {
            palabra[i] = palabra[i - 1];
        }
        // Y se copia la letra guardada al principio en su posición
        palabra[0] = temp;

        // Incrementar el contador de ciclos
        ciclos++;
        printf("Ciclo %i: %s\n", ciclos, palabra);

    // Continuar hasta que la palabra modificada sea igual a la original
    } while (ciclos < TAM);

    printf("La palabra '%s' fue recompuesta después de %i ciclos.\n", palabra, ciclos);

    return 0;
}
