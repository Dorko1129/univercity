#include <stdio.h>

int main()

{
    int n1;
    int n2;
    printf("irja be az elso szamot: ");
    scanf("%d", &n1);
    printf("irja be az masoidk szamot: ");
    scanf("%d", &n2);
    if (n1>n2)
    {
        printf("%d>%d\n", n1,n2);
    }
    else if (n1<n2)
    {
        printf("%d<%d\n", n1,n2);
    }
    else if (n1==n2)
    {
         printf("%d=%d\n", n1,n2);
    }
    
    
    return 0;
}