#include <stdio.h>
#include <string.h>
#include "prog1.h"

int rfind_char(string s, char c)
{
    int tarolo=0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i]==c)
        {
            
            tarolo+=1;
        }
    }
    return tarolo;
}




int main()
{
printf("%d ",rfind_char("amerika", 'm'));

    return 0;
}