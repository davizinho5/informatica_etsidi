#include <stdio.h>

typedef struct
{
  float notas[5];    
  int num_mat[5];    
}VARIOS_alumnos;

typedef struct
{
  float nota;
  int num_mat;
}UN_ALUMNO;

// Uso esta estructura para devolver 2 datos en una funcion
typedef struct
{
  float media;
  int num_mat_mejor;
}resultado_media_y_numMat;

// Prototipos funciones
// calcula la media de las notas de un vector
float media_1(float notas[], int tam);

// calcula la media de las notas de una estructura de tipo VARIOS_alumnos
float media_2(VARIOS_alumnos alumnos);

// calcula la media de las notas de un vector de la estructura de tipo UN_ALUMNO
float media_3(UN_ALUMNO alumnos[], int tam);

// calcula la media y el numero de matricula de la mejor nota
// y devuelve los 2 datos juntos
resultado_media_y_numMat media_y_mejor(UN_ALUMNO alumnos[], int tam);
// FIN  Prototipos funciones

int main ()
{
	float result;
	resultado_media_y_numMat doble_resultado;
	
	// Declaro una variable de este tipo de estructura
	VARIOS_alumnos mis_alumnos = {{8.0,6.0,9.0,8.0,5.0}, {1,2,3,4,5}};
	
	// Declaro un vector de este tipo de estructura
	UN_ALUMNO mis_estudiantes[5] = {{8.0, 1},{6.0,2},{9.0,3},{8.0,4},{5.0,5}};
	
	result = media_1(mis_alumnos.notas, 5);
	printf("Media 1: %f\n", result);

    result = media_2(mis_alumnos);
	printf("Media 2: %f\n", result);
	
	result = media_3(mis_estudiantes, 5);
	printf("Media 3: %f\n", result);
	
	doble_resultado = media_y_mejor(mis_estudiantes, 5);
	printf("Media 4: %f\n", doble_resultado.media);
	printf("Mejor 4: %d\n", doble_resultado.num_mat_mejor);
	
	return 0;
}


// calcula la media de las notas de un vector
float media_1(float notas[], int tam)
{
	int i;
	float suma = 0;
	
	for(i=0; i<tam; i++)
	{
		suma = suma + notas[i];
	}	
	return suma/5;
}

// calcula la media de las notas de una estructura de tipo VARIOS_alumnos
float media_2(VARIOS_alumnos alumnos)
{
	int i;
	float suma = 0;
	
	for(i=0; i<5; i++)
	{
		suma = suma + alumnos.notas[i];
	}
	return suma/5;
}

// calcula la media de las notas de un vector de la estructura de tipo UN_ALUMNO
float media_3(UN_ALUMNO alumnos[], int tam)
{
	int i;
	float suma = 0;
	
	for(i=0; i<tam; i++)
	{
		suma = suma + alumnos[i].nota;
	}
	return suma/5;
}

// calcula la media y el numero de matricula de la mejor nota
// y devuelve los 2 datos juntos
resultado_media_y_numMat media_y_mejor(UN_ALUMNO estudiantes[], int tam)
{
	int i;
	float suma = 0;
	float nota_max = estudiantes[0].nota;
	int i_max = 0;
	resultado_media_y_numMat resultado_dos_datos;
	
	for(i=1; i<tam; i++)
	{
		if(estudiantes[i].nota > nota_max) 
		{
			nota_max = estudiantes[i].nota; 
			i_max = i;
		}
	}
	
	printf("Num Mat %d \n", estudiantes[i_max].num_mat);
	
	for(i=0; i<tam; i++)
	{
		suma = suma + estudiantes[i].nota;
	}
	resultado_dos_datos.media = suma/5;
	resultado_dos_datos.num_mat_mejor = estudiantes[i_max].num_mat;
		
	return resultado_dos_datos;
}




