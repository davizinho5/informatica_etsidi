#include <stdio.h>

int main() 
{
    int num1, num2, resultado;
    char operacion;

    // Pedir al usuario los números y la operación
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    // Espacio antes de %c para ignorar espacios en blanco o pulsación de ENTER
    printf("Ingrese la operacion (+, -, *, /): ");
    scanf(" %c", &operacion);  

    // Evaluar la operación con switch
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %i\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %i\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %i\n", resultado);
            break;
        case '/':
            if (num2 != 0) 
						{
                printf("Resultado: %.2f\n", num1 / (float)num2);
            } else 
						{
                printf("Error: No se puede dividir entre cero.\n");
            }
            break;
        default:
            printf("Operación no válida.\n");
    }

    return 0;
}

