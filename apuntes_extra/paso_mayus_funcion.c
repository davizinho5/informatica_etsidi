#include <stdio.h>

// Escribir la función que pasa a mayusculas
// una cadena
int paso_a_mayuscula(char frase[]);

int main()
{
	char cadena[] = "Hola Mundo!";
	
	int resultado = paso_a_mayuscula(cadena);
	
	printf("%s\n", cadena);
	printf("Num caracteres modificados: %i", resultado);
	
	return 0;
}

int paso_a_mayuscula(char frase[])
{
	// Recorrer la cadena hasta el final '\0'
		//Si es minuscula
			// Pasar a mayuscula			
	//FOR o WHILE
	int i;
	int contador = 0;
	for(i=0; frase[i] != '\0'; i++)
	{
		if( (frase[i] >= 'a') && (frase[i] <= 'z'))
		{
			frase[i] = frase[i] + ('A'-'a');
			contador = contador + 1;
		}
	}
	return contador;
}

