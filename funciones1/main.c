#include <stdio.h>
#include <stdlib.h>

float superficieRectangulo(int base, int altura);                  // BASE x ALTURA

int main()
{
    float b;
    float a;
    float resultado;
    do
    {
        printf("Ingrese la base: ");
        scanf("%f",& b);

        printf("Ingrese la altura: ");
        scanf("%f",& a);
        resultado = superficieRectangulo(b, a);
        if (b != 0 && a!= 0)
        {
            printf("La superficie es: %.2f\n", resultado);
        }
    }while(b != 0 && a!= 0);
    printf("Programa finalizado\n");
    return 0;
}

float superficieRectangulo(int base, int altura)
{
    int total;

    total = base * altura;
    return total;
}
