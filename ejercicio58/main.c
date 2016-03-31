#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intV[10];
    int i;
    for( i = 0; i< 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", & intV[i]);
    }

    for( i = 0; i < 5 ; i++)
    {
        printf("El numero en el indice %d es %d\n", i, intV[i] );
    }
    return 0;
}
