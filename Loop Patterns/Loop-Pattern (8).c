#include<stdio.h>
int main()
{
    int i, k;
    for(i=1; i<=5; i++)
    {
        for(k=1;k<=5-i;k++)
            printf(" ");
        if(i!=1)
            printf("*");
        for(k=1; k<=i*2; k++)
        {
            if(k==1)
                continue;
            printf(" ");
        }
        printf("*\n");
    }
    for(i=4; i>=1; i--)
    {
        for(k=1;k<=5-i;k++)
            printf(" ");
        if(i!=1)
            printf("*");
        for(k=1;k<=i*2-1;k++)
        {
            printf(" ");
            if(k==1)
                continue;
        }
        printf("*\n");
    }
    return 0;
}
