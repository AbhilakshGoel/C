#include<stdio.h>
int main()
{
    long int f=1, n;
    printf("Enter a Number whose Factorial you want: ");
    scanf("%ld", &n);
    do
    {
        f = f*n;
        n--;
    }while(n>=1);
    printf("%ld", f);
    return 0;
}
