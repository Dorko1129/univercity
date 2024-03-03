#include <stdio.h>

int main()
{
int szam;
int k=0;
int a=0;
printf("0 = vege  ");
do
{
    printf("adjon meg egy szamot: ");
    scanf("%d", &szam);
    printf("bekert szam: %d\n",szam);
    
    if (szam>0)
    {
        k+=1;
    }
    else if (szam<0)
    {
        a+=1;
    }
    
} while (szam!=0);

    printf("pozitiv szamok darabja: %d\n", k);
    printf("negativ szamok darabja: %d\n", a);


    return 0;
}