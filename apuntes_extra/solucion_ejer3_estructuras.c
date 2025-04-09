#include <stdio.h>

typedef struct
{
  int hour, min, sec;
} tiempo;


int main()
{
  tiempo t1 = {3, 45, 15};
  tiempo t2 = {9, 44, 3};
  tiempo dt;
  
  //Restamos segundos, teniendo en cuenta restas negativas
  if (t1.sec > t2.sec)
  {
    t2.min = t2.min - 1;
    t2.sec = t2.sec + 60;
  }

  dt.sec = t2.sec - t1.sec;

  //Idem para minutos
  if (t1.min > t2.min)
  {
    t2.hour = t2.hour - 1;
    t2.min = t2.min + 60;
  }
  dt.min = t2.min - t1.min;

  //Idem para horas, peor ahora t2 puede corresponder al dia siguiente
  if (t1.hour > t2.hour)
  {
    t2.hour += 24;
  }
  dt.hour = t2.hour - t1.hour;
  
  printf("%i:%i:%i", dt.hour, dt.min, dt.sec);
  
  return 0;
}
