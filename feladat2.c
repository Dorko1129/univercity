#include <stdio.h>
#include <stdlib.h>

#define SIZE 500

void feltolt(const int n, int tomb[])
{
    int felso = 999;
    int also = 100;

    for (int i = 0; i < n; i++)
    {
        int veletlen = rand();
        int intervallum = felso - also + 1;

        veletlen = veletlen % intervallum;
        veletlen = also + veletlen;
        tomb[i] = veletlen;
    }
    


}



int main()
{
    srand(2024);
    int tomb[SIZE];
    int n = SIZE;


    feltolt(n,tomb);
   
   int min = tomb[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
        
    }
    printf("A tomb legkisebb eleme:  %d\n",min);
    

    int max = tomb[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
        
    }
    printf("A tomb legnagyobb eleme: %d\n",max);

}