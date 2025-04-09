#include <stdio.h>

typedef struct
{
  int hour, min, sec;
} tiempo;

int main()
{
  tiempo mistiempos[2];
  tiempo dt;
  
  mistiempos[0].hour = 1;
  mistiempos[0].min = 2;
  mistiempos[0].sec = 3;
  printf("Introduce un valor para las horas: ")
  scanf("%i", &mistiempos[1].hour)
  printf("\nIntroduce un valor para los min: ")
  scanf("%i", &mistiempos[1].min)
  printf("\nIntroduce un valor para los seg: ")
  scanf("%i", &mistiempos[1].sec)

  // resolver el ejercicio 3 con un vector de estructuras

  return 0;
}
