#include <stdio.h>
int main()
{
   int num;
   // Escriba un programa que pida al usuario números.
   // Cada vez que lea un número, muéstrelo en pantalla.
   do
   {
      printf("Introduzca un numero (cero para salir): \n");
      scanf("%i", &num);
      printf("Ha introducido el %i \n\n", num);
   }while(num != 0);
   
   // Pare cuando el usuario escriba un cero.
   // Use un bucle DO WHILE.
   
   return 0;
}
