#include <stdio.h>
#include <string.h>
#include "prog1.h"

int rfind_char(string s, char c)
{
    int tarolo=-1;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i]==c)
        {
            tarolo=i;
            tarolo+=1;
        }
    }
    return tarolo;
}




int main()
{
printf("%d ",rfind_char("amerika", 'a'));

    return 0;
}