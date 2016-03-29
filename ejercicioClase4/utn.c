#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getInt(void)
{
    int number;
    printf("Ingrese un numero entero: ");
    scanf("%d",& number);
    return number;
}

float getFloat(void)
{
    float number;
    printf("Ingrese un numero decimal: ");
    scanf("%f", & number);
    return number;
}

char getChar(void)
{
    char character;
    printf("Ingrese una caracter: ");
    fflush(stdin);
    scanf("%c", &character);
    return character;
}

int getRandomNumber(int desde, int hasta)
{
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % hasta + desde;
    return randomNumber;

}
