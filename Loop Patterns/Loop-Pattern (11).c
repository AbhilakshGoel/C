#include<stdio.h>
int main()
{
    int i, j, s, d;
    for(i=0; i<=4; i++)
    {
        for(s=1; s<=4-i; s++)
            printf(" ");
        for(j=i; j>=0; j--)
            printf("%d", j);
        for(d=1; d<=i; d++)
            printf("%d", d);
        printf("\n");
    }
    return 0;
}
