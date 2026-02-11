#include <stdio.h>
int main()
{
	int num_entero;
	int d, c, u;
	
	printf("Escribe un num entero de 3 cifras: " );
	scanf("%d", &num_entero);
	
	c = num_entero / 100;
	d = (num_entero%100)/10;
	u = num_entero % 10;
	
	printf("centenas: %d\n", c);
	printf("decenas: %d\n", d);
	printf("unidades: %d",  u );
	
	
	return 0;
}
