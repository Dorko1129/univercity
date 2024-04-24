#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>

int main(int argc,string argv[])
{
    if (argc == 1)
    {
        printf("Hiba! Legalabb 1 darab parancssori argumentumot adjon meg.\n");
        exit(1);
    }

    int paros = 0;
    int paratlan = 0;
    for (int i = 0; i < argc -1; i++)
    {
        int szam = atoi(argv[i+1]);
        printf("%d osztoi 1-tol 10-ig: ",szam);
        if (szam  % 2 == 0)
        {
            paros++;
        }
        else
        {
            paratlan++;
        }
        


        for (int i = 1; i <= 10; i++)
        {
            if (szam % i == 0)
            {
                if (i == 1)
                {
                    printf("%d",i);
                }
                else
                {
                    printf(", %d",i);  
                }
                
            }
            
        }
        puts("");
    }
    printf("Paros szamok:    %d darab\n",paros);
    printf("Paratlan szamok: %d darab\n",paratlan);
    


    return 0;
}