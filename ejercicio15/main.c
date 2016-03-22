#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int resto;
    for(i = 1; i <100;)
    {
        resto = i % 6;
        if(resto == 0 || i == 0 || i == 1)
        {
            printf("El numero %d es multiplo de 6\n", i);
        }
        i++;
    }
    return 0;
}
