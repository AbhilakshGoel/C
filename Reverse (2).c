#include<stdio.h>
rev(int);
int main()
{
    long int n, r;
    printf("Enter a Number: ");
    scanf("%ld", &n);
    r = rev(n);
    printf("The Reverse of %ld is %ld", n, r);
    return 0;
}
rev(int x)
{
    long int r=0, rem;
    while(x!=0)
    {
        rem = x%10;
        r = r*10+rem;
        x = x/10;
    }
    return(r);
}
