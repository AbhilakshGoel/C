#include<stdio.h>
fact(int);
int main()
{
    long int n, d;
    printf("Enter a Number whose Factorial you want: ");
    scanf("%ld", &n);
    d = fact(n);
    printf("The Factorial is %ld", d);
    return 0;
}
fact(int x)
{
    long int f=1;
    while(x>=1)
    {
        f = f*x;
        x--;
    }
    return(f);
}
