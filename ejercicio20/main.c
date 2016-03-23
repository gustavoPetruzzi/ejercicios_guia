#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numberUser;
   int i;
   printf("Ingrese un numero: ");
   scanf("%d", &numberUser);

   for(i = 0; i<numberUser; i++)
   {
       printf("%d\n", i);
   }
   return 0;
}
