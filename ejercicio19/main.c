#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberUser;
    int sumNumbers = 0;
    int i;

    printf("Por favor, ingrese un numero: ");
    scanf("%d",& numberUser);

    for(i = 0; i< numberUser ; i++)
    {
        sumNumbers = sumNumbers + i;
    }
    printf("El resultado es: %d", sumNumbers);
    return 0;
}
