#include <stdio.h>

int main()
{
    
    int n;
    printf("Kérem adjon meg egy pozitív egész számot: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }




    return 0;
}