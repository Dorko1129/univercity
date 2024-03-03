#include <stdio.h>
int main(){
    int szam=0;
    for (int i = 0; i < 1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            szam += i;
        }
    
    }
    printf("az osszeg: %d\n", szam);



    return 0;
}