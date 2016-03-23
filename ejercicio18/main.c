#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberUser;
    int i;
    int sumPositive= 0;
    int productNegative= 0; // ver si se puede poner de una mejor manera
    for(i = 0; i< 10; i++)
    {
        do
        {
            printf("Por favor, ingrese un numero: ");
            scanf("%d",& numberUser);
        }while(numberUser==0);


        if(numberUser > 0)
        {
            sumPositive = sumPositive + numberUser;
        }
        else
        {
            if(productNegative == 0)
            {
                productNegative = 1;
            }
            productNegative = productNegative * numberUser;
        }

        //printf("El numero es %d; contador: %d", numberUser, i+1);
    }
    printf("El resultado de la suma es: %d\n", sumPositive);
    printf("El resultado de la multiplicacion es: %d\n", productNegative);


    return 0;
}
