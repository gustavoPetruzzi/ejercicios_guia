#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char letter;
    int i;
    int aCounter=0,eCounter= 0,iCounter= 0,oCounter= 0,uCounter= 0; // Contadores de letras
    for(i= 0; i<20; i++)
    {
        printf("\nIngrese una letra\n");
        letter = getche();
        switch(letter)
        {
        case 'a':
            aCounter++;
            break;
        case 'e':
            eCounter++;
            break;
        case 'i':
            iCounter++;
            break;
        case 'o':
            oCounter++;
            break;
        case 'u':
            uCounter++;
            break;
        }
    }
    printf("\nSe ingresaron %d letras a\n", aCounter);
    printf("Se ingresaron %d letras e\n", eCounter);
    printf("Se ingresaron %d letras i\n", iCounter);
    printf("Se ingresaron %d letras o\n", oCounter);
    printf("Se ingresaron %d letras u\n", uCounter);
    return 0;
}
