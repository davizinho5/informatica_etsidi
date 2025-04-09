#include <stdio.h>
typedef struct
{
    char nombre[50];
    char apellidos[50];
    int matricula;
    float notas[2];
} ficha;

int main ()
{
    ficha alumno1 = {"David", "Alvarez Sanchez", 1234};
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Apellidos: %s\n", alumno1.apellidos);
    printf("Num_matricula: %i\n", alumno1.matricula);
    alumno1.notas[0] = 8.5;
    alumno1.notas[1] = 6.7;

    ficha alumno2;
    alumno2 = alumno1;
  
    printf("Nombre: %s\n", alumno2.nombre);
    printf("Apellidos: %s\n", alumno2.apellidos);
    printf("Num_matricula: %i\n", alumno2.matricula);
    
    printf("Introduces las notas para el alumno2\n");
    printf("Nota1: ");
    scanf("%f", &alumno2.notas[0]);
    printf("\nNota2: ");
    scanf("%f", &alumno2.notas[1]);
    
    printf("\n\n Notas del alumno 2: %f, %f", alumno2.notas[0], alumno2.notas[1]);
    
    printf("\n\n Notas del alumno 1: %f, %f", alumno1.notas[0], alumno1.notas[1]);

    return 0;
}
