#include <stdio.h>
#include <math.h>

// Definición de la estructura complejo
typedef struct 
{
    float real, imaginaria;
} complejo;

// Prototipos de las funciones
void imprimir(complejo c);
float modulo(complejo c);
complejo multiplica(complejo a, complejo b);

int main() 
{
    // Ejemplo de uso de las funciones
    complejo c1 = {3.0, 4.0};
    complejo c2 = {1.0, 2.0};

    printf("Complejo c1: ");
    imprimir(c1);
    printf("Modulo de c1: %.2f\n", modulo(c1));

    printf("Complejo c2: ");
    imprimir(c2);
    printf("Modulo de c2: %.2f\n", modulo(c2));

    complejo resultado = multiplica(c1, c2);
    printf("Multiplicación de c1 y c2: ");
    imprimir(resultado);

    return 0;
}

// Implementación de la función imprimir
void imprimir(complejo c) 
{
    if (c.imaginaria >= 0) 
	{   
	    // La i se escribe simplemente como una letra porque no existe el formato imaginario
        printf("%.2f + %.2f i\n", c.real, c.imaginaria);
    } 
	else 
	{
        printf("%.2f - %.2f i\n", c.real, -c.imaginaria);
    }
}

// Implementación de la función modulo
float modulo(complejo c) 
{
    return sqrt(c.real * c.real + c.imaginaria * c.imaginaria);
}

// Implementación de la función multiplica
complejo multiplica(complejo a, complejo b) 
{
    complejo resultado;
    resultado.real = a.real * b.real - a.imaginaria * b.imaginaria;
    resultado.imaginaria = a.real * b.imaginaria + a.imaginaria * b.real;
    
	return resultado;
}

