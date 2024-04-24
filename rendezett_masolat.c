#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void tomb_kir(int tomb[],int meret)
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d ",tomb[i]);
    }
    
}

void swap(int* a, int * b)
{
    int tmp= *a;
    *a=*b;
    *b=tmp;
}


int* sorted(int tomb[], int meret)
{
    int* masolat=(int*)malloc(sizeof(int) * meret);

    for (int i = 0; i < meret; i++)
    {
        masolat[i]=tomb[i];
    }
    
    for (int i = 0; i < meret-1; i++)
    {
        for (int j = i+1; j < meret; j++)
        {
            if (masolat[i]<masolat[j])
            {
                swap(&masolat[i], &masolat[j]);
            }
        }
        
    }
    

    return masolat;
}

int main()
{
    int szamok[]= {1,2,3,4,5};
    
    int *rendezett=sorted(szamok,SIZE);
    
    tomb_kir(szamok, SIZE);
    puts(" ");
    free(rendezett);



    return 0;
}