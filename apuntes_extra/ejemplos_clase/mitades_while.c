#include <stdio.h>

int main()
{
	int num;
	printf("Introduzca un numero entero: ");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("\nMitades (enteras) sucesivas: \n");
		while( num > 0)
		{
			printf("%d\n", num);
			num = num / 2;
		} 
	}
	
return 0;
}
