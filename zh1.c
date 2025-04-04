#include <stdio.h>
#include "prog1.h"
#include <string.h>

void merge(string s1, string s2)
{
    int len = strlen(s1);
    for (int i = 0, j=0; i < len; i++, j++)
    {
        printf("%c",s1[i]);
        printf("%c",s2[j]);
    }puts("");
    


}
int main(int argc, string argv[])
{
    if (argc==3)
    {
        if (strlen(argv[1]) == strlen(argv[2]))
        {
            merge(argv[1], argv[2]);
        }
        
        
    }
    else
    {
        printf("hiba!\n");
    }

    return 0;
}