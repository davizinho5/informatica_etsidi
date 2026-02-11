#include <stdio.h>

int main() {
    int num1, num2, edad, num;

    // Ejercicio 1: Determinar si ambos números son positivos
    printf("Ejercicio 1: Introduzca dos números enteros: ");
    scanf("%i", &num1);
    scanf("%i", &num2);
    if (num1 > 0 && num2 > 0) 
	{
        printf("Ambos números son positivos.\n");
    } else 
	{
        printf("Al menos uno de los números no es positivo.\n");
    }

    // Ejercicio 2: Determinar si una persona es adolescente
    printf("\nEjercicio 2: Introduzca la edad de la persona: ");
    scanf("%i", &edad);
    if ( (edad >= 13) && (edad <= 19) )  
	{
        printf("La persona es un adolescente.\n");
    } else 
	{
        printf("La persona no es un adolescente.\n");
    }

    // Ejercicio 3: Verificar si un número es divisible por 3 o por 5
    printf("\nEjercicio 3: Introduzca un número entero: ");
    scanf("%i", &num);
    if ( (num % 3 == 0) || (num % 5 == 0) ) 
	{
        printf("El número es divisible por 3 o por 5.\n");
    } else 
	{
        printf("El número no es divisible por 3 ni por 5.\n");
    }

    // Ejercicio 4: Validar si un número está en el rango 1-100 o si es 0
    printf("\nEjercicio 4: Introduzca un número entero: ");
    scanf("%i", &num);
    if ( (num >= 1 && num <= 100) || (num == 0) ) 
	{
        printf("El número está en el rango de 1 a 100 o es 0.\n");
    } else 
	{
        printf("El número no está en el rango de 1 a 100 y no es 0.\n");
    }

    // Ejercicio 5: Verificar si un número es par y mayor que 10
    printf("\nEjercicio 5: Introduzca un número entero: ");
    scanf("%i", &num);
    if ( (num % 2 == 0) && (num > 10) ) 
	{
        printf("El número es par y mayor que 10.\n");
    } else 
	{
        printf("El número no cumple ambas condiciones.\n");
    }

    // Ejercicio 6: Verificar si un número NO es positivo
    printf("Introduzca un número entero: ");
    scanf("%d", &num);
    if (!(num > 0)) 
	{
        printf("El número NO es positivo.\n");
    } else 
	{
        printf("El número es positivo.\n");
    }

    // Ejercicio 7: Verificar si un número está entre 1 y 10
    printf("Introduzca un número entre 1 y 10: ");
    scanf("%i", &num);
    if (!(num >= 1 && num <= 10)) 
	{
        printf("Número fuera de rango.\n");
    } else 
	{
        printf("Número válido.\n");
    }

    return 0;
}

