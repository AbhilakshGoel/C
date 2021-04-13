#include<stdio.h>
int main()
{
    int i, j, s, d;
    for(i=65; i<=69; i++)
    {
        for(s=0; s<=69-i; s++)
            printf(" ");
        for(j=65; j<=i; j++)
            printf("%c", j);
        for(d=i-1; d>=65; d--)
            printf("%c", d);
        printf("\n");
    }
    return 0;
}
