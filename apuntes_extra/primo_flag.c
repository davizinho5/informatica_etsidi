#include <stdio.h>

int main() 
{
    int num, i;
    // Esta variable se usar como flag (bandera)
    // Mientras vale 1 (true), es que el número es primo. 
    // Si vale 0 (false), no lo es. 
    int esPrimo = 1;

    // Solicitar el número al usuario
    printf("Ingrese un numero entero positivo: ");
    scanf("%i", &num);

    // Verificar divisibilidad desde 2 hasta la raíz cuadrada del número
    for (i = 2; i < num; i++) 
    {
        if(num % i == 0)
        {    
            // Si encuentra un divisor, esPrimo pasa a valer 0 
			// Y ya queda marcado que el n�mero NO es primo          
            esPrimo = esPrimo * 0;     
        }
    }
    // Mostrar resultado
    if (esPrimo == 1) 
    {
        printf("%i es un numero primo.\n", num);
    } 
    else 
    {
        printf("%i NO es un numero primo.\n", num);
    }

    return 0;
}

