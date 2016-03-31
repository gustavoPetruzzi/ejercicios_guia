#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intV[10];
    int i;
    int flagPrimero = 1;
    int maxVNumber;
    for( i = 0; i< 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", & intV[i]);
         if(flagPrimero ==1)
        {
            maxVNumber = intV[i];
            flagPrimero = 0;
        }

        if( intV[i] > maxVNumber )
        {
            maxVNumber = intV[i];
        }
    }

    for( i = 0; i < 5 ; i++)
    {
        printf("El numero en el indice %d es %d\n", i, intV[i] );
    }
    printf("El numero mayor es %d", maxVNumber);
    return 0;
}
