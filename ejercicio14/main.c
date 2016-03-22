#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
   // int resto;
    int total = 0;
    for(i = 3; i<100;)
    {
        printf("El numero es:%d\n", i);
        total = total + i;
        i = i + 3;
    }
    printf("El total es: %d", total);

    return 0;
}
