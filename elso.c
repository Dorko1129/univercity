#include <stdio.h>

void kiir(int sor, int oszlop, int matrix[sor][oszlop])
{
    for (int i = 0; i < sor; i++)
    {
        for (int j = 0; j < oszlop; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }  
}

void kiir_foatlo(int sor, int oszlop, int matrix[sor][oszlop])
{
    for (int i = 0; i < sor; i++)
    {
        printf("%d ",matrix[i][i]);
    }  
}


int get_elemek_osszege(int sor, int oszlop, int matrix[sor][oszlop])
{
    int sum=0;
    for (int i = 0; i < sor; i++)
    {
        for (int j = 0; j < oszlop; j++)
        {
            sum+=matrix[i][j];
        }
        
    }  
return sum;
}

int main()
{
    int matrix[4][4]={
        {7,6,4,2},
        {6,5,3,2},
        {8,7,6,5},
        {7,6,5,6}
    };
    int sor = 4;
    int oszlop = 4;

    kiir(sor, oszlop, matrix);
    printf("osszeg: %d\n", get_elemek_osszege(sor, oszlop, matrix));
    kiir_foatlo(sor, oszlop, matrix);


    return 0;
}