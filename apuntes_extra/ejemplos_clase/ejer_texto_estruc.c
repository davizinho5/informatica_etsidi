#include <stdio.h>

# Resuelto solo para letras minúsculas
typedef struct
{
  char texto[101];
  int num_vocal;
  int num_cons;
  int num_carac_esp;
  float media;  
}datos_texto;

int main(void)
{ 
	datos_texto mi_variable;
	
	mi_variable.num_carac_esp = 0;
	mi_variable.num_cons = 0;
	mi_variable.num_vocal = 0;
	
	printf("Introduce un texto de hasta 100 caracteres: ");
	scanf("%100[^\n]s", mi_variable.texto);

   // recorrer la cadena 
   	// contar vocales, consonantes, carac. esp. 
   	// y sumar para la media
   int i;
   
   int num_caract = 0;
   float suma = 0;
   //for(i=0; mi_variable.texto[i] != '\0' ; i++)
   
   // vamos a resolverlo solo para minusculas
   i = 0;
   while( mi_variable.texto[i] != '\0' ) {
   		
   		// detectar vocales
   		if (mi_variable.texto[i] == 'a' || 
		    mi_variable.texto[i] == 'e' || 
			mi_variable.texto[i] == 'i' ||
			mi_variable.texto[i] == 'o' ||
			mi_variable.texto[i] == 'u')
		{
			mi_variable.num_vocal++;
		}
		else {
			// detectar consonantes
			if(mi_variable.texto[i] >= 'a' &&
			   mi_variable.texto[i] <= 'z')
			{
			   mi_variable.num_cons++;
			}	
			else{
				mi_variable.num_carac_esp++;
			}
		}

		// sumar valor de los caracteres siempre que no sea espacio
		if(mi_variable.texto[i] != ' '){
			suma = suma + mi_variable.texto[i];
			num_caract = num_caract + 1;
		}
		
   		i++;
   }
   
   mi_variable.media = suma / num_caract;
   
   printf("Num vocales: %d\n", mi_variable.num_vocal);
   printf("Num cons: %d\n", mi_variable.num_cons);
   printf("Num otros: %d\n", mi_variable.num_carac_esp);
   printf("Media: %f", mi_variable.media);

  return 0;
}







