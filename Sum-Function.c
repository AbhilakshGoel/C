#include<stdio.h>
calsum(int, int, int);
int main()
{
    int a, b, c, d;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    d = calsum(a, b, c);
    printf("The Sum is %d", d);
    return 0;
}
calsum(int x, int y, int z)
{
    int s;
    s = x+y+z;
    return(s);
}

