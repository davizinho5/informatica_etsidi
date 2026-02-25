#include <stdio.h>

int main() 
{
	int num;
	
	do
	{
		printf("Introduce un num entero: ");
		scanf("%d", &num);
	} 
	while( num != 0);
	
	return 0;
}
