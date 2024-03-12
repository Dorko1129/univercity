#include <stdio.h>
int main()
{
int magassag=0;
while (magassag%2==0)
{
    printf("magassag: ");
    scanf("%d", &magassag);
}
int space=(magassag-1)/2;
int hash=1;
for (int i = 1; i <= magassag; i++)
{
    if ((magassag+1)/2>i)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;
        for (int l = 1; l <= hash; l++)
        {
            printf("#");
        }
        hash=hash+2;
        printf("\n");
    }
    else
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        
        for (int a = 1; a <= hash; a++)
        {
            printf("#");
        }
        hash=hash-2;
        printf("\n");
    }

}

    return 0;
}