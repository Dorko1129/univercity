#include "prog1.h"
#include <stdio.h>
#include <string.h>



int match_ends(int n, string words[])
{
    int szamlalo=0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(words[i])>=2 && words[i][0]==words[i][strlen(words[i]-1)])
            {
                szamlalo+=1;
            }
        
    }
    

return szamlalo;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    printf("az eredmeny: %d\n", match_ends(szavak1_meret, szavak1));


    return 0;
}
