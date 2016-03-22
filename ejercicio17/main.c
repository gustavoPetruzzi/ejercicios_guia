#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumberUser;
    printf("Ingrese un numero: ");
    scanf("%d", &NumberUser);
    if(NumberUser > 0)
    {
        printf("El numero es positivo.\n");

    }
    else
    {
        printf("El numero es negativo");
    }
    return 0;
}
