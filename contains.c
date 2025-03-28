#include <stdio.h>
#include "prog1.h"

int contains_char(string s, char c) 
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    string str = "Hello, world!";
    char ch = 'w';

    if (contains_char(str, ch)) 
    {
        printf("megtalálhato.\n", ch);
    } 
    else 
    {
        printf("nem talalhato\n", ch);
    }

    return 0;
}