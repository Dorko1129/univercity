#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
#define SEED 2021
#define MIN 125
#define MAX 849

int randint(int min, int max);
void feltolt(const int n, int tomb[]);

int randint(int min, int max)
{

    return min+ rand() % (max-min+1);
}

void feltolt(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        tomb[i]=randint(MIN,MAX);
    }
    


}

int main()
{
    int random_numbers[SIZE];
    srand(SEED);

    feltolt(SIZE, random_numbers);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", random_numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += random_numbers[i];

    }
    double avg = (double) sum/SIZE;
    int counter =0;
    for (int i = 0; i < SIZE; i++)
    {
        if (random_numbers[i]>avg)
        {
            counter++;
        }
        
    }
    printf("Avg: %lf\n",avg);
    printf("%d\n", counter);
    

    return 0;
}