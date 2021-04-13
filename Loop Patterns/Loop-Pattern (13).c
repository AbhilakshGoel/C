#include<stdio.h>
int main()
{
    int i, j, s, d;
    for(i=1; i<=5; i++)
    {
        for(s=0; s<5-i; s++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%d", j);
        for(d=i-1; d>=1; d--)
            printf("%d", d);
        printf("\n");
    }
    return 0;
}
