#include <stdio.h>

// Convertir de ºC Farenheit
int main() 
{	
    float gradosC, faren;
    
	printf("Introduzca una temperatura en grados C: \n");
	scanf("%f", &gradosC);
	
	faren = (9.0/5.0) *gradosC + 32;
	
	printf("%.2f grados C son %.2f Farenheit.", gradosC, faren);
			
	return 0;
}
