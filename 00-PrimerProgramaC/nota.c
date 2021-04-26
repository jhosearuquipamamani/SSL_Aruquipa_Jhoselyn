#include <stdio.h>

int main()
{

   char nota;

   printf("Ingrese la nota: ");
   scanf("%c", &nota);

   switch (nota)
   {
   case 'A':
      printf("Excelente");
      break;

   case 'B':
      printf("Notable");
      break;
   case 'C':
      printf("Aprobado");
      break;
   case 'D':
   case 'F':
      printf("Reprobado");
      break;
   default:
      printf("La nota ingresada no existe.");

      break;
   }

   return 0;
}