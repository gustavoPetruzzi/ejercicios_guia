#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int randomNumber;
    int userNumber;
    int flagJugar = 1;
    randomNumber = getRandomNumber(1,100);


    while(flagJugar == 1)
    {
        userNumber = getInt();
        if(userNumber < 0)
        {
            flagJugar = 0;
        }

        else if(userNumber > randomNumber)
        {
            printf("Te pasaste campeon!\nProba con un numero mas chico");
        }
        else if(userNumber < randomNumber)
        {
            printf("Te falta maestro\nProba con un numero mayor\n");
        }
        else
        {
            printf("Felicidades capo!");
            break;
        }

    }

    system("pause");

    return 0;
}
