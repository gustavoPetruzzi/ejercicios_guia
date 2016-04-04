#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    int userNumbers[MAX];
    int userNumbers2[MAX];
    int i;
    int j;
    int aux = 0;
    int pos;



    // array cargo secuencialmente

    for(i = 0; i<MAX; i++)
    {
        printf("Ingrese el numero:");
        scanf("%d", & userNumbers[i]);
    }
    // ordena de menor a mayor
    for(i = 0; i<MAX-1; i++)
    {
        for(j = i + 1; j<MAX; j++)
        {

            if(userNumbers[i]>userNumbers[j])
            {
                aux = userNumbers[i];
                userNumbers[i] = userNumbers[j];
                userNumbers[j] = aux;
            }
        }
    }


    // array cargo aleatoria

    for(i = 0; i< MAX; i++)
    {
        printf("Ingrese una posicion: ");
        scanf("%d", &pos );

        printf("Ingrese el valor: ");
        scanf("%d", &userNumbers2[pos]);
    }

    for(i = 0; i< MAX; i++)
    {
        printf("Indice: %d\nvalor: %d\n", i, userNumbers[i]);
    }


    printf("----Array ordenado de menor a mayor------\n");
    for(i = 0; i<MAX; i++)
    {
        printf("Indice: %d\nvalor: %d\n", i, userNumbers[i]);
    }
    return 0;
}
