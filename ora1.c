#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int line_counter(const char* fname)
{
    FILE *fp = fopen(fname, "r");

    if (fp==NULL)
    {
        fprintf(stderr, "hiba! nem lehetett megnyitni a(z) %s fajlt.");
        exit(1);
    }
    int counter=0;
    
    char line[SIZE];

    while(fgets(line,SIZE,fp)!=NULL)
    {
        counter++;
    }
    
    fclose(fp);
}

int main()
{
    char* fname="sorok.txt";
    
    int result= line_counter(fname);
    printf("sorok szama: %d\n", result);



    return 0;
}