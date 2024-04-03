#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 32

int main()
{
    printf("adjon meg egy eros jelszot! ");
    char jelszo[SIZE];
    fgets(jelszo, SIZE, stdin);
    jelszo[strlen(jelszo)-1]= '\0';
    if (strlen(jelszo)<8)
    {
        puts("hiba! a jelszo tul rovid");
        exit(1);

    }
    
    int nagybetu=0;
    int kisbetu=0;
    int szam=0;

    for (int i = 0; i < jelszo !='\0'; i++)
    {
       if (isupper(jelszo[i]))
       {
        nagybetu++;
       }

       if (islower(jelszo[i]))
       {
        kisbetu++;
       }

       if (isdigit(jelszo[i]))
       {
        szam++;
       }

       if (nagybetu <1 || kisbetu <1 || szam <1)
       {
        puts("nem jelszo eros!");
        exit(2);
       }

       puts("eros jelszo! ");
    }
    

    return 0;
}