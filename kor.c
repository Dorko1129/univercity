#include <stdio.h>
#include <math.h>
int terulet(int a)
{
    return a*a*M_PI;

}

int kerulet(int a)
{
    return 2*a*M_PI;

}


int main()
{
    int r;
    printf("adja meg a kor sugarat: ");
    scanf("%d", &r);
    printf("A kor területe: %d cm^2\n",terulet(r));

    printf("A kor kerülete: %d cm\n",kerulet(r));
    return 0;
}