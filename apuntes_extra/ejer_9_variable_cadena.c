#include <stdio.h>

int main() 
{
	  // En esta cadena estará la palabra de partida de cada movimiento
    char palabra[5];
		int i;
		printf("Introduce una palabra de 4 letras: ");
    scanf("%4s", palabra);

		// Esta será la cadena donde se haga el movimiento
    char palabra_movida[5];
    palabra_movida[4] = '\0'; 
    
    int j=0;
    
    // Hay que mover las letras 4 veces
    for(j=0; j<=3; j++)
    {
    	  // Copiamos la última la palabra inicial, en la primera de la palabra destino
		    palabra_movida[0] = palabra[3];  
		    for(i=0; i<=2; i++)
				{
		    	palabra_movida[i+1] = palabra[i]; 
				}
		    printf("%s\n", palabra_movida);
		    
				//COPIAR palabra_movida en palabra para que en el siguiente movimiento
				// todo funcione igual
		    for(i=0; i<=3; i++)
				{
		    	palabra[i] = palabra_movida[i]; 
				}
		}
   
    return 0;
}
