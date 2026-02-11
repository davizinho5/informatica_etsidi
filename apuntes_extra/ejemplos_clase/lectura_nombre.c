#include <stdio.h>
int main()
{
	//declara una variable de tipo CHAR con el identificador letra
	char letra1, letra2, letra3;
	printf("Escribe un nombre de 3 letras en minusculas: ");
	scanf("%c", &letra1);
	scanf(" %c", &letra2);
	scanf(" %c", &letra3);
	
	printf("Nombre en minusculas: %c%c%c \n", letra1, letra2,  letra3 );
	printf("Nombre en mayusculas: %c%c%c \n", letra1-32, letra2-32, letra3-32 );
	
	return 0;
}
