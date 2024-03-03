#include <stdio.h>

int main()
{
int szam;
int k=0;
do
{
    printf("adjon meg egy szamot: ");
    scanf("%d", &szam);
    printf("bekert szam: %d\n",szam);
    
    k+=szam;
} while (szam>0);
if (k>0)
{
    printf("az osszeg: %d\n", k);
}




    return 0;
}