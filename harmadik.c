#include <stdio.h>

#define SIZE 250

int main()
{
    char szam[SIZE];
    puts("adj meg egy BAZINAGY szamot!: ");
    fgets(szam, SIZE, stdin);
    szam[strlen(szam) -1] = '\0';

    int osszeg = 0;
    for (int i =0; szam[i] != '\0'; ++i)
    {
        osszeg += szam[i]- '0';
    }
    printf("szamjegyek osszege %d\n", osszeg);

    return 0;
}