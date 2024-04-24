#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>
#include <string.h>

void eltavolit(int n,char tomb[],char c)
{
    for (int i = 0; tomb[i] != '\0'; i++)
    {
        if (tomb[i] == c)
        {
            tomb[i] = tomb[i+1];
            i++;

        }
        
    }

}




int main()
{
    char szo[50];
    int n = 50;
    printf("Kerem a sztringet: ");
    fgets(szo,50,stdin);
    szo[strlen(szo)-1] = '\0';
    
    if (strlen(szo) == 0)
    {
        printf("Hiba! Adjon meg egy sztringet!\n");
        exit(2);
    }
    

    char c;


    while (1)
    {
        printf("Kerem a karaktert, amelyet eltavolitunk (vegjel: 0): ");
        scanf("%c",&c);
        puts("");
        if (c == '0')
        {
            exit(1);
        }
        if (c == '\n')
        {
            printf("Hiba! Adjon meg egy karaktert!\n");
            exit(3);
        }
        
        eltavolit(n,szo,c);
        for (int i = 0; szo[i] != '\0'; i++)
        {
            printf("%c",szo[i]);
        }
        
        
        
    }
    

    return 0;

}