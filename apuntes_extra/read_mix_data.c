#include <stdio.h>

typedef struct
{
	char nombre[30];
	char profesion[30];
    float peso;
    int num[12];
}datos;
    
int main() 
{
	FILE *lectura;
	int i, j;
    datos vector_ejemplo[2];
    lectura = fopen("datos_mixtos.csv", "r");
    
    if(lectura == NULL)
    {
    	printf("Error de lectura");
	}
	else
	{
		for (i = 0; i < 2; i++) 
		{
			// lectura de las 2 primeras cadenas y del número decimal
		    fscanf(lectura, "%[^,],%[^,],%f", vector_ejemplo[i].nombre, vector_ejemplo[i].profesion, &vector_ejemplo[i].peso);
		    printf("%s\n", vector_ejemplo[i].nombre);
		    printf("%s\n", vector_ejemplo[i].profesion);
		    printf("%f\n", vector_ejemplo[i].peso);			    
		    // lectura de 6 numeros enteros
	        for (j = 0; j < 6; j++) 
			{
			   fscanf(lectura, ",%i", &vector_ejemplo[i].num[j]);	
			   printf("%i\n", vector_ejemplo[i].num[j]);
	    	}   	
	        printf("\n");
	    }	
	}
        
    return 0;
}

