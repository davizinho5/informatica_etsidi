#include <stdio.h>

typedef struct
{
  float nota;
  int num_mat;
}UN_ALUMNO;

// ordena el vector segun el valor de orden
// Si orden == 1, de mayor a menor nota
// Si orden == 0, de menor a mayor nota
void ordenar(UN_ALUMNO alumnos[], int tam, int orden);

int main ()
{
	// Declaro un vector de este tipo de estructura
	UN_ALUMNO mis_estudiantes[5] = {{8.0, 1},{6.0,2},{9.0,3},{8.0,4},{5.0,5}};
	
	// llamda a ordenar
	/// ......
	
	printf("Alumnos ordenados de mayor a menor\n");
	for(i=0; i<tam; i++)
	{
		printf("Num mat: %d, nota: %.1f\n", mis_estudiantes[i].num_mat, mis_estudiantes[i].nota);
	}
	
	// llamda a ordenar
	/// ......
	printf("\nAlumnos ordenados de menor a mayor\n");
	for(i=0; i<tam; i++)
	{
		printf("Num mat: %d, nota: %.1f\n", mis_estudiantes[i].num_mat, mis_estudiantes[i].nota);
	}		
		
	return 0;
}

// Programar la función ordenar


