#include <stdio.h>

// Declaración de la función
float faren2cel(float tF);
float cel2faren(float tC);

int main()
{
 	// Uso
 	float result_F;
 	result_F = cel2faren(0);
 	printf("Farenheit: %.2f\n", result_F);

  float result_C;
  result_C = faren2cel(32);
 	printf("Grados Celsius: %.2f\n", result_C);
	
	return 0; 	
}

// Definición de la función
float faren2cel(float tF)
{
	float result;
	result = (tF-32)*(5.0/9);
	return result;
}

float cel2faren(float tC)
{
	float result;
	result = (9.0/5)*tC+32;
	
	return result;
}

