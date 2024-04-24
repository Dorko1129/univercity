#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

void increment_odd_characters(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] %2 != 0)
        {
            str[i] = str[i] +1;
        }
        
    }
    

}

int main()
{
    char szo[50];

    printf("Kerem a sztringet: ");
    fgets(szo,50,stdin);
    szo[strlen(szo)-1] = '\0';

    if (strlen(szo) == 0)
    {
        printf("Hiba! Adjon meg egy sztringet.\n");
        exit(1);
    }
    
 
    increment_odd_characters(szo);


    printf("Eredmeny: ");
    for (int i = 0; szo[i] != '\0'; i++)
    {
        printf("%c",szo[i]);
    }
    puts("");


    return 0;
}