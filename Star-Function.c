#include<stdio.h>
void star();
int main()
{
    star();
    printf("NAME\tAGE\n");
    star();
    printf("A\t20\n");
    printf("B\t30\n");
    star();
    return 0;
}
void star()
{
    int i;
    for(i=1; i<=11; i++)
        printf("*");
    printf("\n");
}
