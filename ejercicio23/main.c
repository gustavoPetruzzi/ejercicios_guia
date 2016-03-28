#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max;
    float number;
    int i;
    int flagFirstNumber = 1;
    for(i = 0; i<3; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f",&number );
        if(flagFirstNumber == 1)
        {
            max = number;
            flagFirstNumber = 0;
        }
        if(number> max)
        {
            max = number;
        }
    }
    printf("El numero mayor es %.2f", max);
    return 0;

}
