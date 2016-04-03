#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int * arrayLlena()
{
    int i;
    static int userNumbers[MAX];
    for(i= 0; i< MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",& userNumbers[i]);
    }
    return userNumbers;
}

