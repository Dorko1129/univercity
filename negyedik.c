#include <stdio.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    argc--;
    printf("parancssori argumentumok szama: %d\n", argc);
    printf("futtatott fajl neve: %d\n ", argv[0]);

    puts("a felhasznalo altal adott argumentumok: ");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    

    return 0;
}