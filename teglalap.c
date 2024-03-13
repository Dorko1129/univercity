#include <stdio.h>

int terulet(int a, int b)
{
    return a*b;

}

int kerulet(int a, int b)
{
    return 2*(a+b);

}


int main()
{
    int a;
    int b;
    printf("adja meg a teglalap a oldalat: ");
    scanf("%d", &a);
    printf("adja meg a teglalap b oldalat: ");
    scanf("%d", &b);
    printf("A téglalap területe: %d cm^2\n",terulet(a,b));

    printf("A téglalap kerülete: %d cm\n",kerulet(a,b));
    return 0;
}