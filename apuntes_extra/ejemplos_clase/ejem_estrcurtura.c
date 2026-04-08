#include <stdio.h>

typedef struct
{
	char nombre[50];
	char apellidos[50];
	int matricula;
	float notas[5];
} ficha;

int main ()
{
	int i;
	// declaracion e inicializacion de una estructura de tipo ficha
	// nombre de la variable: alumno1
	ficha alumno1 = {"David", "Alvarez Sanchez", 1234, {0 , 0, 1,  2.3, 5.6}};
	
	// declaracion de una estructura de tipo ficha
	// nombre de la variable: alumno2
	ficha alumno2;
	
	// se pide al usuario rellenar los datos de la variable alumno2
	printf("Introduce nombre apellidos y num de matricula: \n");
	scanf("%49[^\n]s", alumno2.nombre);
	scanf(" %49[^\n]s", alumno2.apellidos);
	scanf("%d", &alumno2.matricula);
	printf("Introduce 5 notas: \n");
	for(i=0; i<=4; i++)
	{
		scanf("%f", &alumno2.notas[i]);
	}
	
    printf("\n Los datos introducidos son: \n" );
    printf(" Nombre: %s, Apellidos: %s \n Num. Matricula: %d\n", alumno2.nombre, alumno2.apellidos, alumno2.matricula);
    for(i=0; i<=4; i++)
    {
		printf(" Nota %d: %f", i+1, alumno2.notas[i]);
	}
	
	// declaracion de una estructura de tipo ficha
	// nombre de la variable: alumno3
	ficha alumno3;
	
	// copia todos los contenidos de 
	// la variable alumno1 en alumno3
	alumno3 = alumno1;
	
	printf("\n%s", alumno3.nombre);
	
	return 0;
}


