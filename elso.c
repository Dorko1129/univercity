#include <stdio.h>

#define SIZE 150

int main()
{
    
    int szam;
    int szamok[SIZE] = {0};
    int szamlalo=0;
    puts("adj meg 0 vegjeleig egesz szamokat az [1. 99] intervallumbol! ");
do
{
    printf("szam: ");
    scanf("%d", &szam);
    if (szam<1 || szam>99)
    {
        printf("ez a szam kivul esik az elfogadhato intervallumbol!");
    }
    else
    {
        
        if (szam!=szamok[szam])
        {
            szamok[szam]=szam;
            szamlalo++;
        }
        
        
    }

} while (szam !=0);

printf("%d db kulombozo szam lett megadva. ", szamlalo);

for (int i = 0; i < SIZE; i++)
{
    if (szamok[i] != 0)
    {
        printf("%d, ", szamok[i]);
    }
    
    
}


    return 0;
}