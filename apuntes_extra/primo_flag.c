#include <stdio.h>

int main() {
    int num, i;
    // Esta variable se usar como flag (bandera)
    // Si vale 1 (true), es que el número es primo. 
    // Si vale 0 (false), no lo es. 
		int esPrimo = 1;

    // Solicitar el número al usuario
    printf("Ingrese un número entero positivo: ");
    scanf("%i", &num);

    // Los números menores o iguales a 1 no son primos
    if (num <= 1) 
		{
        esPrimo = 0;
    } 
		else 
		{
        // Verificar divisibilidad desde 2 hasta la raíz cuadrada del número
        for (i = 2; i * i <= num; i++) 
				{
            esPrimo = esPrimo * (num % i != 0); // Si encuentra un divisor, esPrimo será 0
        }
    }

    // Mostrar resultado
    if (esPrimo) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d NO es un número primo.\n", num);
    }

    return 0;
}

