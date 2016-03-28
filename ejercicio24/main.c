#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    char seguir = 's';
    int flagMaxMin = 1;
    float max;
    float min;

    do
    {
        printf("Ingrese un peso: ");
        scanf("%f", & weight);
        if(flagMaxMin == 1)
        {
            max = weight;
            min = weight;
            flagMaxMin = 0;
        }

        if(weight>max)
        {
            max = weight;
        }
        if(weight<min)
        {
            min = weight;
        }
        printf("Desea seguir?");
        scanf(" %c", &seguir);
    }while(seguir=='s');
    printf("El peso maximo es: %.2f\n", max);
    printf("El peso minimo es: %.2f\n", min);
    return 0;


}
