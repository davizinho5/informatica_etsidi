#include <stdio.h>

// Use un bucle FOR para calcular la suma de 
// los 9 primeros números naturales

int main() 
{
    int suma = 0;
    int i;
    
    for (i = 1; i <= 9; i++) 
    {
        suma = suma + i;
    }

    printf("La suma de los 9 primeros números naturales es: %d\n", suma);
    
    return 0;
}



