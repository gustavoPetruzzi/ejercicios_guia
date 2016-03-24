#include <stdio.h>
#include <stdlib.h>
int validaS_N(void);

int main()
{
    int numberUser;
    int continuar;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numberUser);
        printf("Numero: %d\n", numberUser);
        printf("continua S/N?");
        continuar =validaS_N();

    }while(continuar== 1);

    return 0;
}

int validaS_N(void)
{
    char letter;
    scanf(" %c", &letter);
    while(letter != 's' && letter != 'n')
    {
        printf("Ingreso una letra no valida. Reingrese: ");
        scanf(" %c", &letter);

    }
    return(letter =='s');

}
