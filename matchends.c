#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

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