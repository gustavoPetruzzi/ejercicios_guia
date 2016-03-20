#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    float average;
    float accumulator;
    int i;
    for(i =0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &number);
        accumulator = accumulator + number;
    }
    average = accumulator / i;
    printf("El promedio es: %.2f", average);
    return 0;
}
