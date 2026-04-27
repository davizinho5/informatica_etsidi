#include <stdio.h>

typedef struct
{
 float notas[5]; //{5.0,6.0,7.0,8.0,9.0}
 int num_mat[5]; //{1,2,3,4,5}
} alumnos;

typedef struct
{
 float notas;
 int num_mat;
}UN_ALUMNO;

// calcular la media de las notas
float calc_media(alumnos variable);

// calcular la media y devolverla
// imprimir el numero de mat. de la mejor nota
float c_media(UN_ALUMNO otra_variable[], int tam);



int main ()
{
	alumnos mis_alumnos = {{5.0,6.0,7.0,8.0,9.0}, {1,2,3,4,5}};
	
	//rellenar el vector estudiantes pidiendo datos al usuario
	UN_ALUMNO estudiantes[5];
	
	float result;
	result = c_media(estudiantes, 5);
	
	printf("Media: %f", refult);
	return 0;
}

float calc_media(alumnos variable)
{
	int i;
	float suma = 0;
	for(i=0; i<5; i++)
	{
		suma = suma + variable.notas[i];
	}
	return suma/5;
}





