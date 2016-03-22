#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberUser;
    printf("Por favor ingrese un numero:");
    scanf("%d",&numberUser);
    if(numberUser> 0)
    {
        printf("El numero es positivo");
    }
    else
    {
        printf("El numero es negativo");
    }
    return 0;
}
