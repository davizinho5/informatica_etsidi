#include <stdio.h>

typedef struct {
  char texto[101];
  int numV, numC, numO;
  float media;
} analisis_texto;

int main() 
{
  analisis_texto mi_texto;
  mi_texto.numC = 0;
  mi_texto.numV = 0;
  mi_texto.numO=0
  int num_caracteres=0;
  int i = 0;
  
  // recojo la cadena del teclado
  gets(mi_texto.texto);
  
  // recorro la cadena hasta el final
  while(mi_texto.texto[i] != '\0')
  {
    // contrar vocales, consonantes y otros
    // Si no son espacios: 
        // - acumular valor ASCII
        // - contar caracteres
    
    i++;
  }
  // Calcular e imprimir media

  return 0;
}
