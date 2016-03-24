#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberUser;
    int i;
    int rest;
    int counterNumber3 = 0;

    printf("Ingrese un numero");
    scanf("%d", &numberUser);

    for(i = 1; i<= numberUser; i++)
    {
        rest = i % 3;
        if(rest == 0)
        {
            counterNumber3++;
        }


    }
    printf("La cantidad de multiplos del numero 3 son: %d", counterNumber3);
    return 0;
}
