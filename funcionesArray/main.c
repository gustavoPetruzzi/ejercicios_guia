#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 5
int main()
{

    int * userNumbers;
    int i;

    userNumbers = arrayLlena();
    for(i= 0; i< MAX; i++)
    {
        printf("Indice: %d\nValor:%d\n\n", i, *(userNumbers + i));
    }
    return 0;

}



