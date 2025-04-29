#include <stdio.h>

float exponencial(float x, int n);
float potencia(float x, int n);
int factorial(int n);

int main()
{
	float x = 0;
	int n = 2;
	// Si se quiere pedir los valores de x y n al usuario, hacerlo aquí
	
	float resultado = exponencial(x, n);
	
	printf("La aproximaxión de e^(-%i) es: %f", x, resultado);

  return 0;
}

float exponencial(float x, int n)
{
	int i;
	float resultado_exponencial;
	float operacion = 0;
	
	for(i=1; i<= n; i++)
	{
		operacion = operacion + potencia(x, i) / factorial(i);
		//operacion = operacion + resultado_potencia / resultado_factorial;
	}
	resultado_exponencial = 1+operacion; 	
	
	return resultado_exponencial;
}

float potencia(float x, int n)
{
	float resultado_potencia = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		resultado_potencia = resultado_potencia * (-x);
	}
	return resultado_potencia;
}

int factorial(int n)
{
	int i;
	int resultado_factorial = 1;
	for(i=1; i<=n; i++)
	{
		resultado_factorial = resultado_factorial * i;
	}
	return resultado_factorial;
}

