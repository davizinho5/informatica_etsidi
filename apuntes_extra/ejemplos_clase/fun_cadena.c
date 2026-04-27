#include <stdio.h>

// pasar a mayusculas
// y calcular el numero de letras que cambio
int paso_a_mayusculas(char frase[]);

int main ()
{
	char mi_cadena[] = "cadena de prueba";
	int res;
	
	res = paso_a_mayusculas(mi_cadena);
	
	printf("%s", mi_cadena);
	printf("Numero de letras nodificadas: %d", res)

	return 0;
}

int paso_a_mayusculas(char frase[])
{
	int i;
	i = 0;
	int contador = 0;
		
	while(frase[i] !='\0')
	{
		if(frase[i] >= 'a' && frase[i] <= 'z')
		{
			// 32
			frase[i] = frase[i] - ('a'-'A');
			contador = contador+1;
		}
		i++;
	}
	
	return contador;
}





