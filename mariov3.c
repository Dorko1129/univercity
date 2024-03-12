#include <stdio.h>
int main()
{
    int magassag;
    printf("adja meg a magassagot: ");
    scanf("%d", &magassag);

    
    for (int i = 1; i <= magassag; i++)
    {
        for (int j = magassag-1; j >= i; --j)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k)
        {
            printf("#");
        }
        
        
        printf("  ");
        
        for (int a = 1; a <= i; a++)
        {
            printf("#");
        }
        
        
        
        printf("\n");
    }
    

    return 0;
}